#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==0||n==1){
//     return 1;
//     }    
//     return n*factorial(n-1); 
// }
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout << "Enter n value:";
    cin >> n;
    cout << "Enter r value:";
    cin >> r;
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout << "nCr is:" << ncr;
    return 0;
}