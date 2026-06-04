#include <iostream>
using namespace std;

// brute force approach
// int single(int arr[], int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) return arr[i] ;
//     }
//     return -1;
// }

int single(int arr[], int size){
    int start=0,end=size-1;
    while(start<=end){
        int mid=start+((end-start)/2);
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]) end=mid-1;
            else if(arr[mid]==arr[mid+1]) start=mid+1;
        } else {
            if(arr[mid]==arr[mid-1]) start=mid+1;
            else if(arr[mid]==arr[mid+1]) end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,3,7,7,10,11,11};
    int size=7;
    cout << single(arr,size) << endl;
    return 0;
}