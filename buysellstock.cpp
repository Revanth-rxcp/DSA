#include<iostream>
using namespace std;
int maxprofit(int arr[], int size){
    int maxprofit=0;
    int bestbuy = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>bestbuy){
            maxprofit=max(maxprofit,arr[i]-bestbuy);
        }
        bestbuy=min(bestbuy,arr[i]);
    }
    return maxprofit;
}
int main(){
    int arr[]={7,1,5,3,9,4};
    int size=6;
    cout << "Maximum profit = " << maxprofit(arr,size);
    return 0;
}