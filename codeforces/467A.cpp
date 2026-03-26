#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt=0;
    cin >>n;
    int *p= new int[n];
    int *q= new int[n];
    
    for(int i=0; i<n; i++){
        cin>> p[i] >>q[i];
    }
    
    for(int i=0; i<n; i++){
        if(q[i]-p[i]>=2){
            cnt++;
        }
    }
    
    cout << cnt;
    delete[] p;
    delete[] q;
    return 0;
}