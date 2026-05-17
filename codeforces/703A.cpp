#include <iostream>
using namespace std;

int solve(){
    int m,c;
    cin >>m >>c;
    if(m>c)
        return 1;
    else if(m<c)
        return 2;
    else
        return 0;
}

int main() {
    int t;
    cin>>t;
    int cntM=0;
    int cntC=0;
    while(t--){
        int result=solve();
        if(result==1)
            cntM++;
        else if(result==2)
            cntC++;
    }
    
    if(cntM>cntC)
        cout << "Mishka" <<endl;
    else if(cntM<cntC)
        cout << "Chris" <<endl;
    else
        cout << "Friendship is magic!^^" <<endl;
    return 0;
}