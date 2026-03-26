#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int c=0;
    int *arr= new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            c++;
        }
    }
    
    cout << c;
    return 0;
}