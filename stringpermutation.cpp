#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool issame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]) return false;
    }
    return true;
}
bool permutation(string s1, string s2){
    int ofreq[26]={0};
    for(int i=0;i<s1.length();i++){
        ofreq[s1[i]-'a']++;
    }
    int wsize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windex=0,idx=i;
        int wfreq[26]={0};
        while(windex<wsize && idx<s2.length()){
            wfreq[s2[idx]-'a']++;
            windex++;
            idx++;
        }
        if(issame(ofreq,wfreq)) return true;
    }
    return false;
}
int main(){
    string s1="ab";
    string s2="eidbaooo";
    cout << permutation(s1,s2);
    return 0;
}