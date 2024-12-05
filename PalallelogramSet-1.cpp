#include <iostream>
using namespace std;

int main() {
    const int rows = 5;    
    const int cols = 5;    

    
    for (int i = 0; i < row; ++i) {
        
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        
        for (int j = 0; j < cols; ++j) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}

