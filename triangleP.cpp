#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n value:";
    cin >> n;

    // this is for printing the star triangle pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // this is for printing the number triangle pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // this is for printing the character triangle pattern
    // char ch ='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // this is for printing the number triangle pattern with increasing numbers
    // for(int i=0;i<n;i++){
    //     int num=1;
    //     for(int j=0;j<i+1;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

        // this is for printing the triangle pattern with decreasing numbers
        for(int i=0;i<n;i++){
            for(int j=i+1;j>0;j--){
                cout << j << " ";
            }
            cout << endl;
        }
        return 0;
}