#include<iostream>
using namespace std;
double pow(double x,int n){
    int binform = n;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans=1;
    while(binform>0){
        if(binform%2==1){
            ans=ans*x;
        }
        binform=binform/2;
        x=x*x;
    }
    return ans;
}
int main(){
    int x,n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    cout << x << " power " << n << " = " << pow(x,n);
    return 0;
}