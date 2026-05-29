// 1283a
#include <iostream>
using namespace std;

void solve(){
    int h,m;
    cin >>h >>m;
    int nowTime=h*60+m;
    int nyTime=24*60;
    cout << nyTime-nowTime <<endl;
}

int main() {
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}