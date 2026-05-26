#include <iostream>
using namespace std;

int missingnumber(int arr[], int n){
    int x=arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] != x + i){
            return arr[i] - 1;
        }
    }
    return -1; // Return -1 if no missing number is found
}

int main(){
    int arr[] = {6,7,8,9,10,11,13,14,15,16,17,18,19,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number is: " << missingnumber(arr, n) << endl;
    return 0;
}