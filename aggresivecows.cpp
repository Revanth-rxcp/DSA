#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
bool isvaild(vector<int> &arr,int size,int c,int mid){
    int cows=1,lastpos=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]-lastpos>=mid){
            cows++;
            lastpos=arr[i];
        }
        if(cows==c) return true;
    }
    return false;
}
int largestmindis(vector<int>arr,int size,int c){
    int start=1;
    // int large=INT_MIN,small=INT_MAX;
    // for(int i=0;i<size;i++){
    //     large=max(large,arr[i]);
    //     small=min(small,arr[i]);
    // }
    sort(arr.begin(),arr.end());
    int end=arr[size-1]-arr[0],ans=-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(isvaild(arr,size,c,mid)){ // right
            ans=mid;
            start=mid+1;
        } else { // left
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={10, 1, 2, 7, 5};
    int size=5;
    int c=3;
    cout << largestmindis(arr,size,c);
    return 0;

}