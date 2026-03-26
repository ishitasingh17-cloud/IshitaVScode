#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int max_pos = max({a, b, c});
    int min_pos = min({a, b, c});
    
    cout << max_pos - min_pos << endl;
    
    return 0;
}