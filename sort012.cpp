#include<iostream>
using namespace std;
void sorting(int arr[],int size){

    // O(n) with single pass dutch national flag algo
    int mid=0,low=0,high=size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } else if(arr[mid]==1){
            mid++;
        } else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    // o(n) with 2 passes
    // int zero=0,one=0,two=0,count=0;
    // for(int i=0;i<size;i++){
    //     if(arr[i]==0) zero++;
    //     else if(arr[i]==1) one++;
    //     else two++;
    // }
    // int index=0;
    // for(int i=0;i<zero;i++){
    //     arr[index]=0;
    //     index++;
    // }
    // for(int i=0;i<one;i++){
    //     arr[index]=1;
    //     index++;
    // }
    // for(int i=0;i<two;i++){
    //     arr[index]=2;
    //     index++;
    // }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int size=10;
    sorting(arr,size);
    printarray(arr,size);
    return 0;
}