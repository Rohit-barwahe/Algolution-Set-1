#include <iostream>
using namespace std;

#define MAX 1000 

int main() {
    
    int arr[] = {4, 2, 2, 8, 3, 3, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int frequency[MAX] = {0};

    
    int maxValue = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    
    cout << "Number Frequency" << endl;
    for (int i = 0; i <= maxValue; ++i) {
        if (frequency[i] > 0) {
    cout << i << "        " << frequency[i] << endl;
        }
    }

    return 0;
}
