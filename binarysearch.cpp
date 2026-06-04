#include<iostream>
using namespace std;

// normal loop approach
// int binarysearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         int mid=(start+end)/2; // this will give overflow condition so we use alternative formula mid=start+(end-start)/2
//         if(target<arr[mid]){
//             end=mid-1;  // 1st half
//         }
//         else if(target>arr[mid]){
//             start=mid+1;  // 2nd half
//         }
//         else return mid ;
//     }
//     return -1;
// }

// using recurrsion approach
int binarysearch(int arr[],int start,int end,int target){
    while(start<=end){
        int mid=start+((end-start)/2);
        if(target<arr[mid]) return binarysearch(arr,start,mid-1,target);
        else if(target>arr[mid]) return binarysearch(arr,mid+1,end,target);
        else return mid;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int target=2;
    int start=0;
    int end=size-1;
    cout << binarysearch(arr,start,end,target);
    return 0;
}