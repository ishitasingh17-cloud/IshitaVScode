#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt=0;
    
    if(a==b || a==c ||  a==d){
        cnt++;
    }
    if(b==c || b==d){
        cnt++;
    }
    if(c==d){
        cnt++;
    }
    
    cout << cnt;
    return 0;
}