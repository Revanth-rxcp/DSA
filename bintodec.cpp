#include<iostream>
using namespace std;
int bintodec(int n){
    int ans=0,rem,pow=1;
    while(n>0){
        rem=n%10;
        n=n/10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << "decimal = " << bintodec(n);
    return 0;
}