#include<iostream>
using namespace std;
void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
    int current = arr[i];
    int previous = i-1;
    while(previous>=0 && arr[previous]>current){
            arr[previous+1]=arr[previous];
            previous--;
    }
    arr[previous+1]=current;  
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
    insertionsort(arr,size);
    printarray(arr,size);
    return 0;
}