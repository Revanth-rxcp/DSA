#include<iostream>
using namespace std;
void nextper(int arr[],int size){
    // to find pivot element
    int pivot=-1;
    for(int i=size-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        int i=0,j=size-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return;
    }
    // right most el greater than pivot
    for(int i=size-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    // reversing last part of array
    int i=pivot+1,j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,3,5,4};
    int size=5;
    nextper(arr,size);
    printarray(arr,size);
    return 0;
}