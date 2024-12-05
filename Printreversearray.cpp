#include <iostream>
using namespace std;

int main() {
    int arr[7];

    
    cout << "Enter 7 integers:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < 7 / 2; i++) {
        swap(arr[i], arr[6 - i]);
    }

    
    cout << "Reversed array:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

