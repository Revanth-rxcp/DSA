#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int majority(vector<int>arr,int n){
//     sort(arr.begin(),arr.end());
//     int fre=1;
//     int ans=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             fre++;
//         } else {
//             fre=1;
//             ans=arr[i];
//         }
//         if(fre>(n/2)){
//             return ans;
//         }

//     }
// }

// moore's voting algorithm
int majority(vector<int>arr,int n){
    int fre=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(fre==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            fre++;
        } else {
            fre--;
        }
    }
    int count=0;
    for(int val:arr){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2) return ans;
    else return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size(),ans;

    // brute force approach
    // for(int val:arr){
    //     int fre=0;
    //     for(int ele:arr){
    //         if(val==ele){
    //             fre++;
    //         }
    //     }
    //     if(fre>(n/2)){
    //         ans=val;
    //     }
    // }
    // cout << "Majority element = " << ans;
    cout << "Majority element = " << majority(arr,n);
    return 0;
}