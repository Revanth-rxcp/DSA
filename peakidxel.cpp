#include<iostream>
using namespace std;

// brute force approach
// int peakidx(int arr[],int size){
//     for(int i=1;i<size-1;i++){
//         if(arr[i-1]<arr[i] && arr[i]>arr[i+1]) return i;
//     }
//     return -1;
// }

int peakidx(int arr[],int size){
    int start=1,end=size-2;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={0,3,8,9,10,5,2};
    int size=7;
    cout << peakidx(arr,size) << endl;
    return 0;
}