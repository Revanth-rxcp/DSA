#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int small = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    cout <<"Smallest = " << small;
    return 0;
}