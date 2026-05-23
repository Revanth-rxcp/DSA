#include<iostream>
using namespace std;
// void changex(int* ptr){ // pass by reference using pointers
//     *ptr=100;
// }

// void changex(int &b){ // pass by reference using references (alias)
//     b=100; // b is the another name for a
// }
int main(){
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    cout << &(arr[0]) << endl;








    // int a=10;
    // int*ptr=&a;
    // cout << a << endl; 
    // changex(a);
    // cout << a << endl;
    // cout << (&a) << endl;
    // cout << ptr << endl;
    // cout << ptr2 << endl;
    // cout << (&ptr) << endl;
    // cout << a << endl;
    // cout << *(&a) << endl;
    // cout << ptr << endl;
    // cout << *(&ptr) << endl;
    return 0;

}