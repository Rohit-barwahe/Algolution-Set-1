#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 
    int numbers[SIZE];

    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    int duplicateCount = 0; 
    bool counted[SIZE] = {false}; 

    
    for (int i = 0; i < SIZE; ++i) {
        if (counted[i]) {
            continue; 
        }

        int currentCount = 1; 

        
        for (int j = i + 1; j < SIZE; ++j) {
            if (numbers[i] == numbers[j]) {
                currentCount++; 
                counted[j] = true; 
            }
        }

        
        if (currentCount > 1) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate numbers: " << duplicateCount << endl;

    return 0;
}

