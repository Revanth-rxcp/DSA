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
    int large = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    cout <<"Largest = " << large;
    return 0;
}