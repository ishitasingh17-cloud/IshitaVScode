#include <iostream>
using namespace std;

int main() {
    long long n; 
    if (!(cin >> n)) return 0;

    long long cnt;
    if (n % 2 == 0) {
        cnt = n / 2;
    } else {
        cnt = -(n + 1) / 2;
    }

    cout << cnt << endl;
    return 0;
}