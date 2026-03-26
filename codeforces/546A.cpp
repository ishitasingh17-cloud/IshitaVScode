#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    int cnt,brw=0;
    int brw;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        cnt=cnt+i*k;
    }

    if(cnt>n){
        brw=cnt-n;
    }else{
        brw=0;
    }
    cout << brw;
    return 0;
}