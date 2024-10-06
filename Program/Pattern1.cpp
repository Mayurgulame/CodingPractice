#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int k = 1; k <= n - i; k++) {
            cout<<" ";
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout << endl; // Move to the next line after each row
    }
}
