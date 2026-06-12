#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        // The first number in every row is always 1
       int current = 1; 
        
        for (int j = 0; j <= i; j++) {
            cout << current << " ";
            
            // Calculate the next value using the current one
            // current = current * (i - j) / (j + 1)
            current = current * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}