#include<iostream>
using namespace std;
int main(){
    char op;
    cout << "Enter operator:";
    cin >> op;
    if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'){
        int a,b;
        cout << "Enter two numbers:";
        cin >> a;
        cin >> b;
        switch(op){
            case '+' :
                cout << a+b;
                break;
            case '-' :
                cout << a-b;
                break;
            case '*' :
                cout << a*b;
                break;
            case '/' :
                cout << a/b;
                break;
            case '%' :
                cout << a%b;
                break;
        }
    }
    return 0;
}