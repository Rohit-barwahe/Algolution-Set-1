#include <iostream>
using namespace std;

int main() {
   
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int mergedArray[10]; 

    int i = 0, j = 0, k = 0;

    
    while (i < 5 && j < 5) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    
    while (i < 5) {
        mergedArray[k++] = arr1[i++];
    }

    
    while (j < 5) {
        mergedArray[k++] = arr2[j++];
    }

    
    cout << "Merged array: ";
    for (int m = 0; m < k; m++) {
        cout << mergedArray[m] << " ";
    }
    cout << endl;

    return 0;
}

