#include<iostream>
using namespace std;
int linearsearch(int arr[],int size, int target){
    for(int i=0;i<size;i++){
            if(arr[i]==target){
                cout <<"Element is found at index ";
                return i;
            }
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    cout <<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout <<"Enter searched element: ";
    cin >> target;
    cout << linearsearch(arr,n,target);
    return 0;
}