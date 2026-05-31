#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << n-1 << endl;  // The number of valid pairs (a, b) such that a + b = n is always n - 1
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}