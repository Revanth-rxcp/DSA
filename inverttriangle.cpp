#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n value:";
    cin >> n;

    // this number version
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout << " ";
    //     }
    //     for(int k=0;k<n-i;k++){
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // this character version
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<n-i;k++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
    return 0;
}