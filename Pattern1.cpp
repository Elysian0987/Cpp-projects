#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) { // Print leading spaces
            cout << " ";
        }
        for (int j = 0; j <= i; j++) { // Print hash characters
            cout << "#";
        }
        cout << endl;  // Move to the next line after printing each row
    }
    
    return 0;
}
