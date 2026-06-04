#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// direct approach
// bool ispalindrome(string str){
//     string str1=str;
//     reverse(str.begin(),str.end());
//     if(str==str1) return true;
//     else return false;

// }
bool isalphanum(char ch){
    if((tolower(ch)>='a' && tolower(ch)<='z') ||  (ch>='0' && ch<='9')) return true;
    else return false;
}
bool ispalindrome(string str){
    int start=0,end=str.length()-1;
    while(start<end){
        if(!isalphanum(str[start])){
            start++;
            continue;
        }
        if(!isalphanum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[start])!=tolower(str[end])) return false;
        start++;
        end--;
    }
    return true;
}
int main(){
    string str = "Ac3?e3c&a";
    cout << ispalindrome(str);
    return 0;
}