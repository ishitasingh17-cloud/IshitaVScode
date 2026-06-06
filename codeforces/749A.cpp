#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // The maximum number of primes we can get is always n / 2
    int count = n / 2;
    cout << count << endl;

    // If n is even, print '2' count times
    if (n % 2 == 0) {
        for (int i = 0; i < count; i++) {
            cout << 2 << (i == count - 1 ? "" : " ");
        }
    } 
    // If n is odd, print '2' (count - 1) times, and finish with a '3'
    else {
        for (int i = 0; i < count - 1; i++) {
            cout << 2 << " ";
        }
        cout << 3;
    }
    
    cout << endl;
    return 0;
}