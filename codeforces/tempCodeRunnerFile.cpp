#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.length();
    for(int i=0; i<n; i++){
        if(s[2*i+1]>s[2*i+3]){
            int temp=s[2*i+3];
            s[2*i+3]=s[2*i+1];
            s[2*i+1]=temp;
        }
    }
    return 0;
}