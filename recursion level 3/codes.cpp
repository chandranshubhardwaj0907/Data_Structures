// check whether array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool checksorted(vector<int> &arr,int n ,int i){
   if(i == n-1) {
    return true;
  }
    cout<<arr[i] <<" ";
    if(arr[i+1]<arr[i]){
       return false;
    }
   int ans = checksorted(arr,n,i+1);
   return ans;
}
int main(){
    vector<int>v{1,4,3,2,7,5};
    int n=v.size();
    int i=0;
    bool ans = checksorted(v,n,i);
  if(ans) {
    cout << "Array is sorted" << endl;
  }
  else {
    cout << "Array is not sorted" << endl;
  }

  return 0;
}
// binary search using recursion
#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int& s, int& e, int& key) {
  //base case

  if(s > e) 
    return -1;
  
  int mid = (s+e)/2;
  if(arr[mid] == key)
    return mid;

  if(arr[mid] < key) {
    s = mid+1;
    int ans =  binarySearch(arr,s,e, key );
    return ans;
  }
  else {  
    e= mid-1;
    int ans =  binarySearch(arr,s,e, key);
    return ans;
  }

}

int main() {
  vector<int> v{10,20,40,60,70,90,99};
  int target = 99;

  int n = v.size();
  int s = 0;
  int e = n-1;
  int ans = binarySearch(v, s, e, target );

  cout << "Answer is: " << ans << endl;

  return 0;
}
// print subsequence of a string
#include<iostream>
using namespace std;
void printsequence(string str,string output,int i){
   if(i>=str.length()){
cout<<output<<endl;
return;
   }
//    excluding
printsequence(str,output,i+1);
// including
output.push_back(str[i]);
printsequence(str,output,i+1);
}
int main(){
     string str = "abc";
    string output="";
    int i =0;
     printsequence(str,output,i);

    return 0;
}