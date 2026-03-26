#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x=0;
    string op;
    for(int i = 0; i < n; i++){
        cin >> op;
        if(op == "++X" || op == "X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
    return 0;
}


// InputCopy
// 1
// ++X
// OutputCopy
// 1
// InputCopy
// 2
// X++
// --X
// OutputCopy
// 0