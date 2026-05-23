#include<iostream>
using namespace std;

// btute force approach
// int maxwater(int arr[],int size){
//     int maxwater = 0;
//     for(int i=0;i<size;i++){ // i is for left boundary
//         for( int j=i+1;j<size;j++){ // j is for right bondary
//             int width = j-i;
//             int height = min(arr[i],arr[j]);
//             int area = width*height;
//             maxwater=max(maxwater,area);
//         }
//     }
//     return maxwater;
// }

int maxwater(int arr[],int size){
    int maxwater = 0;
    int left=0,right=size-1;
    while(left<right){
        int width = right-left;
        int height = min(arr[right],arr[left]);
        int area = width*height;
        maxwater=max(maxwater,area);
        if(arr[left]<arr[right]) left++;
        else right--;
    }
    return maxwater;
}
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int size=9;
    cout << "Maximum water = " << maxwater(arr,size);
    return 0;
}