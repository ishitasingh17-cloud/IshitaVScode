#include <iostream>
using namespace std;

int main(){
    int n;
    int cnt=0;
    int temp=0;
    string s;
    cin >> n;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A'){
            cnt++;
        }else if(s[i] == 'D'){
            temp++;
        }else{
            break;
        }
    }

    if(cnt>temp){
        cout << "Anton";
    }else if(temp>cnt){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    return 0;
}