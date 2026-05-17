#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter number:";
    cin >> num;
    bool isPrime = true;
    if(num==1){
        cout << num << " is neither prime nor composite";
        return 0;
    } else if(num<1){
        isPrime = false;
    } else {
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout << num << " is prime";
    } else {
        cout << num << " is not prime";
    }
    return 0;
}