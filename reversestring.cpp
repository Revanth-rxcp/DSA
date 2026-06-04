#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// this is for character array
// void reversearray(char str[],int size){
//     int start=0,end=size-1;
//     while(start<=end){
//         swap(str[start],str[end]);
//         start++;
//         end--;
//     }
// }
// void printarray(char str[],int size){
//     for(int i=0;i<size;i++){
//         cout << str[i] << " ";
//     }
// }
int main(){
    // char str[]="revanth";
    // reversearray(str,7);
    // printarray(str,7);
    // cout << sizeof(str); // 8 because of null character

    // this is for string
    string str1="Revanth";
    reverse(str1.begin(),str1.end());
    cout << str1 << endl;
    return 0;
    
}
