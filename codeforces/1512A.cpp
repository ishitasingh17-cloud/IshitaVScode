#include <iostream>
using namespace std;

void game(){
    int n;
    cin >>n;
    int *arr= new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    if (arr[0] != arr[1] && arr[0] != arr[2]) {
        cout << 1 << endl;
    } else {
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[0]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    delete[] arr;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        game();
    }
    return 0;
}