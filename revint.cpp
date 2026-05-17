#include<iostream>
using namespace std;
int rev(int n){
    int ans=0;
    while(n>0){
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;

}
int main(){
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << "Reverse num = " << rev(n);
    return 0;
}