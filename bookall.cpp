#include<iostream>
using namespace std;
bool isvaild(int arr[],int size,int maxallpages,int m){
    int student=1,pages=0;
    for(int i=0;i<size;i++){
        if(arr[i]>maxallpages) return false;
        if(arr[i]+pages<=maxallpages){
            pages=pages+arr[i];
        } else {
            student++;
            pages=arr[i];
        }
    }
    if(student<=m) return true;
    else return false;

}
int bookall(int arr[],int size,int m){
    if(m>size) return -1;
    int start=0,end=0,ans=-1;
    for(int i=0;i<size;i++){
        end=end+arr[i];
    }
    while(start<=end){
        int mid=start+((end-start)/2);
        if(isvaild(arr,size,mid,m)){ // left part
            ans=mid;
            end=mid-1;
        } else { // right part
            start=mid+1;
        }
    }
    return ans;

}
int main(){
    int arr[]={2,1,3,4};
    int size=4;
    int m=2;
    cout << bookall(arr,size,m);
}