#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n value:";
    cin >> n;

    // this is for numerical flyods triangle pattern
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // this is for alphabetical floyds triangle pattern
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}