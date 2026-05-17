#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter n value:";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2!=0)
        sum += i;
    }
    // int i=1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    cout << "sum = " << sum;
    return 0;
}