#include<iostream>
using namespace std;
void reversearr(int arr[],int size){
    int st=0;
    int end=size-1;
    while(st<end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end]=temp;
        st++;
        end--;
    }

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
    cout << "Reverse array: ";
    reversearr(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i]  << " ";
    }
    return 0;
}