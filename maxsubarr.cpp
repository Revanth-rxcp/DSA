#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>vec = {4,2,6,7,9};
    int size=vec.size();
    int maxsum=INT_MIN;
    int currsum=0;

    // brute force approach
    // for(int st=0;st<size;st++){
    //     int currsum=0;
    //     for(int end=st;end<size;end++){
    //         currsum+=vec[end];
    //         maxsum=max(currsum,maxsum);
    //     }
    // }
    // cout << maxsum;
    // kadanes algorithm
    for(int i=0;i<size;i++){
        currsum+=vec[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout << maxsum << endl;
    return 0;
}