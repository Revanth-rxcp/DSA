#include<iostream>
using namespace std;
int unival(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
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
    cout << "Unique elements is : " << unival(arr,n);;
    return 0;
}