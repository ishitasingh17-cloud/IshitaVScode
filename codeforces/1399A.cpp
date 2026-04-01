#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int *a= new int[n];
    
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a + n);

    bool possible = true;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > 1) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete[] a;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}