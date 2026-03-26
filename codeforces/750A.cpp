#include <iostream>
using namespace std;

int main(){
    int n,k;
    int cnt=0;
    cin >> n >> k;
    int t=240-k;
    for(int i=1; i<=n; i++){
        if(5*i<=t){
            cnt++;
            t-=5*i;
        }
    }
    cout << cnt;
    return 0;
}