#include<iostream>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n){
    int idx=m+n-1,i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[idx]=arr1[i];
            i--;
            idx--;
        } else {
            arr1[idx]=arr2[j];
            j--;
            idx--;
        }
    }
        while(j>=0){
            arr1[idx]=arr2[j];
            j--;
            idx--;
        }
}
void printarray(int arr1[],int size){
    for(int i=0;i<size;i++){
        cout << arr1[i] << " ";
    }
}
int main(){
    int arr1[]={1,2,3,0,0,0};
    int arr2[]{2,5,6};
    int m=3,n=3;
    int size=6;
    merge(arr1,m,arr2,n);
    printarray(arr1,size);
    return 0;

}