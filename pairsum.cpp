#include<iostream>
#include<vector>
using namespace std;

// brute force approach
// vector <int> pairsum(vector<int>arr,int size,int targetsum){
//     vector <int> ans;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==targetsum){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }

vector <int> pairsum(vector<int>arr,int size,int targetsum){
    vector <int> ans;
    int st=0,end=size-1,pairsum;
    while(st<end){
        pairsum=arr[st]+arr[end];
        if(pairsum<targetsum){
            st++;
        } else if(pairsum>targetsum){
            end--;
        } else{
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }

}
int main(){
    vector<int>arr={2,4,5,7,8};
    int size=5,targetsum=12;
    vector<int>ans = pairsum(arr,size,targetsum);
    cout<< ans[0] << "," << ans[1];
    return 0;
}