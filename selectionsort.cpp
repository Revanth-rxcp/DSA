#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallestidx]) smallestidx=j;
        }
        swap(arr[i],arr[smallestidx]);
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
    selectionsort(arr,size);
    printarray(arr,size);
    return 0;

}