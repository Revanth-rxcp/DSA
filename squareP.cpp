#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n value:";
    cin >> n;

    // this is for number pattern
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // this is for star pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // this is for alphabet pattern
    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for(int j=0;j<n;j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    
    // this is for consecutive number pattern
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << num <<  " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // cout << num;

    // this is for consecutive alphabet pattern
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ch <<  " ";
            ch++;
        }
        cout << endl;
    }
        cout << ch;
    return 0;
}