#include<iostream>
using namespace std;

// using recurrsion approach
// int searchinRSA(int arr[],int start,int end,int target){
//     while(start<=end){
//         int mid=start+((end-start)/2);
//         if(arr[mid]==target) return mid;
//         if(arr[start]<=arr[mid]){ // left part is sorted can apply bs
//                 if(arr[start]<=target && target<=arr[mid]) return searchinRSA(arr,start,mid-1,target);
//                 else return searchinRSA(arr,mid+1,end,target);
//         } 
//         else { // right part is sorted can apply bs
//                 if(arr[mid]<=target && target<=arr[end]) return searchinRSA(arr,mid+1,end,target);
//                 else return searchinRSA(arr,start,mid-1,target);
//         }
//     }
//     return -1;
// }

int searchinRSA(int arr[],int target,int size){
    int start=0,end=size-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid]==target) return mid;
        if(arr[start]<=arr[mid]){ // left part is sorted can apply bs
                if(arr[start]<=target && target<=arr[mid]) end=mid-1;
                else start=mid+1;
        } 
        else { // right part is sorted can apply bs
                if(arr[mid]<=target && target<=arr[end]) start=mid+1;
                else end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size=7;
    int target=0;
    cout << searchinRSA(arr,target,size) << endl;
    return 0;
}