#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 

    int numbers[SIZE];

    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    cout << "Unique numbers in the array are:" << endl;

    
    for (int i = 0; i < SIZE; ++i) {
        bool isUnique = true;
        
    
        for (int j = 0; j < SIZE; ++j) {
            if (i != j && numbers[i] == numbers[j]) {
                isUnique = false; 
                break;
            }
        }

        
        if (isUnique) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

