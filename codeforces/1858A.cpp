#include <iostream>
using namespace std;

void solve(){
    int a, b, c;
    cin >>a >>b >>c;
    if (a + (c % 2) > b) {
        cout << "First" << endl; // Anna wins
    } else {
        cout << "Second" << endl; // Katie wins
    }
}

int main() {
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}