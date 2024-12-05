#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 
    int numbers[SIZE];
    int searchNum;
    int index = -1; 
    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    cout << "Enter the number to search for: ";
    cin >> searchNum;

    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] == searchNum) {
            index = i; 
            break; 
        }
    }

    if (index != -1) {
        cout << "The number " << searchNum << " is found at index: " << index << endl;
    } else {
        cout << "The number " << searchNum << " is not found in the array." << endl;
    }

    return 0;
}

