#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cout << "n:";
    cin >> n;
    for(int i=0; i<n; i++){

        cin >> s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        int ans=a+b;
        cout << ans <<endl;
    }
    return 0;
}