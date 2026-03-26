#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s,t,r;
    cin >> s;
    cin >> t;
    r=t;
    reverse(r.begin(),r.end());
    if(s == r){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}