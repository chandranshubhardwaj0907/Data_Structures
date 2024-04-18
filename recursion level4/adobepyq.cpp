#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int> &arr , int target){
    if(target ==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    int n = arr.size();
    for(int i=0;i<n;i++){
       int ans = solve(arr,target - arr[i]);
       if(ans!=INT_MAX){
        mini = min(mini,ans+1);
       }
    }
    return mini;
}
int main(){
    int target = 3;
    vector<int> arr{1,2}
    int ans = solve(arr,target);
    cout<<"answer is"<<ans<<endl;
    return 0;
}