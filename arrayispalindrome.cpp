#include <iostream>
using namespace std;

int main() {
    int arr[5];

    
    cout << "Enter 5 integers separated by spaces: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    
    bool isPalindrome = true;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[4 - i]) {
            isPalindrome = false;
            break;
        }
    }

    
    if (isPalindrome) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }

    return 0;
}

