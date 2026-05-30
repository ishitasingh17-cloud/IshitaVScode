#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int count1=0;
    int sum=0;
    int *arr= new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] == 1) 
            count1++;
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    if (sum % 2 == 0 && !(sum % 4 != 0 && count1 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    delete[] arr;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}