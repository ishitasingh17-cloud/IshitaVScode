#include <iostream>
#include <vector>
using namespace std;

void round(){
    int n;
    int power=1;
    cin >>n;
    vector<int> val;
    int count=0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > 0) {
        val.push_back(digit * power);
        }
        n /= 10;
        power *= 10;
    }
    
    cout << val.size() << endl;
    for (int i = 0; i < val.size(); i++) {
        cout << val[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        round();
    }
    return 0;
}