#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int n= s.size();
    vector<char> r;
    for(int i=n; i>=0; i--){
        r.push_back(s[i]);
    }
    cout << '[';
    for(int j=0; j<r.size(); j++){
        cout << '"' << r[j] << '"' << ',';
    }
    cout << ']';
}

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    return 0;
}