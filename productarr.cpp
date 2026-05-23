#include<iostream>
#include<vector>
using namespace std;

// brute fore approach
// vector<int> product( int arr[],int sz){
//     vector<int>ans(sz,1);
//     for(int i=0;i<sz;i++){
//         int product=1;
//         for(int j=0;j<sz;j++){
//             if(i!=j) product=product*arr[j];
//         }
//         ans[i]=product;
//     }
//     return ans;
// }

vector<int> product( int arr[],int n){
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix=suffix*arr[i+1];
        ans[i]=ans[i]*suffix;
    }
    return ans;

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int sz=5;
    vector<int> ans = product(arr,sz);
    for(int val:ans){
        cout << val << " ";
    }
    return 0;
}