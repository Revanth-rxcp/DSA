#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        bool isswap=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap) return;
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={3,4,2,5,1};
    int size=5;
    bubblesort(arr,size);
    printarray(arr,size);
    return 0;
}