#include <iostream>
using namespace std;

void missingnumbers(int arr[], int n) {
    int diff = arr[0];

    for (int i = 0; i < n; i++) {
        while (arr[i] - i > diff) {
            cout << i + diff << " ";
            diff++;
        }
    }
}

int main() {
    int arr[] = {6,7,8,9,11,12,15,16,17,18,19,20};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing numbers are: ";

    cout<<endl;

    missingnumbers(arr, n);

    return 0;
}