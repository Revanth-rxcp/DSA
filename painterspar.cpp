#include<iostream>
#include<climits>
using namespace std;
bool isvaild(int arr[],int size,int mid,int m){
    int painters=1,length=0;
    for(int i=0;i<size;i++){
        if(length+arr[i]<=mid){
            length=length+arr[i];
        } else {
            painters++;
            length=arr[i];
        }
    }
    if(painters<=m) return true;
    else return false;
}
int painters(int arr[],int size,int m){
    int start=INT_MIN,end=0,ans=-1;
    for(int i=0;i<size;i++){
        end=end+arr[i];
        start=max(start,arr[i]);
    }
    while(start<=end){
        int mid=start+((end-start)/2);
        if(isvaild(arr,size,mid,m)){  // left part
            ans=mid;
            end=mid-1;
        } else { // right part
            start=mid+1;

        }
    }
    return ans;
}
int main(){
    int arr[]={40,30,10,20};
    int size=4;
    int m=2;
    cout << painters(arr,size,m);
    return 0;
}