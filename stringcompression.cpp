#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int compression(char arr[],int size){
    int idx=0;
    for(int i=0;i<size;i++){
        char ch=arr[i];
        int count=0;
        while(i<size && arr[i]==ch){
            count++;
            i++;
        }
        if(count==1) arr[idx++] = ch;
        else {
            arr[idx++] = ch;
            string dig=to_string(count);
            for(char d:dig){
                arr[idx++] = d;
            }
        }
        i--;
    }
    return idx;
}
int main(){
    char ch[6] = {'a','a','a','b','b','c'};
    int size=6;
    cout << compression(ch,size);
    return 0;
}