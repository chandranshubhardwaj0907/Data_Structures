//climbing stairs using recursion
#include<iostream>
using namespace std;

int climbstairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return climbstairs(n-1) + climbstairs(n-2);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int ans = climbstairs(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ans;
    return 0;
}
// 0647 is 423 in compiler 

#include<iostream>
using namespace std;


int main() {
    int n = 0647;
   
    cout<<n;
    return 0;
}
// printing of array using recursion
#include<iostream>
using namespace std;
void printarray(int arr[],int n ,int i){
    if(i>=n){
        return;
    }
    cout<<arr[i] <<" ";
    printarray(arr,n,i+1);
}
int main(){
    int i =0;
    int arr[] ={10,30,40,50,60};
    int n = 5;
    printarray(arr,n,i);
    return 0;

}
// maximum element in an array using recursion
#include<iostream>
using namespace std;

void findmax(int arr[], int n, int i, int& maxi) {
    if (i >= n) {
        return;
    }
    if (arr[i] > maxi) {
        maxi = arr[i];
    }
    findmax(arr, n, i + 1, maxi);
}

int main() {
    int i = 0;
    int arr[] = {10, 30, 40, 50, 60};
    int maxi = arr[0];
    int n = 5;
    findmax(arr, n, i, maxi);
    cout << "Maximum element: " << maxi << endl;
    return 0;
}
// minimum element in an array using recursion
#include<iostream>
using namespace std;

void findmin(int arr[], int n, int i, int& mini) {
    if (i >= n) {
        return;
    }
    if (arr[i] < mini) {
        mini= arr[i];
    }
    findmin(arr, n, i + 1,mini);
}

int main() {
    int i = 0;
    int arr[] = {10, 30, 40, 50, 60};
    int mini= arr[0];
    int n = 5;
    findmin(arr, n, i, mini);
    cout << "Minimum element: " << mini << endl;
    return 0;
}
// find character in a string
#include<iostream>
using namespace std;

bool checkKey(string str, int i, int n, char key) {
    if (i >= n) {
        return false; 
    }
    if (str[i] == key) {
        return true;
    }
    return checkKey(str, i + 1, n, key); 
}

int main() {
    string str = "Chandranshu";
    int n = str.length();
    char key = 'r';
    bool ans = checkKey(str, 0, n, key); 
    if (ans) {
        cout << "Key found in the string." << endl;
    } else {
        cout << "Key not found in the string." << endl;
    }
    return 0;
}
// is power of 2
#include<iostream>
using namespace std;
int ispowerof2(int n){
    if(n<1){
        return false;
    }
    else if(n==1){
        return true;
    }
    if(n%2==1){
        return false;
    }
    return ispowerof2(n/2);
}
// printing number using recursion

#include<iostream>
using namespace std;

int printNumber(int n) {
    if (n == 0) {
        return 0;
    }
    int digit = n % 10;
    cout << digit<<" ";
    return printNumber(n / 10);
}

int main() {
    int n = 2456444;
    cout << n << endl;
    int ans = printNumber(n);
    cout  << ans << endl;
}
// print odd number only 
#include<iostream>
using namespace std;

int printNumber(int n) {
    if (n == 0) {
        return 0;
    }
    int digit = n % 10;
    
    if(digit%2!=0){
       cout << digit<<" "; 
    }
    return printNumber(n / 10);
}

int main() {
    int n = 2357;
    int ans = printNumber(n);
    cout  << ans << endl;
}
