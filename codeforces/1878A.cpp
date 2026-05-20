#include <iostream>
using namespace std;

bool solve(){
    int n,k;
    cin >> n >> k;
    int *arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool found=false;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            found=true;
            break;
        }
    }
    delete[] arr;
    return found;
}

int main(){  
    int t;
    cin >> t;
    while(t--){
        bool res=solve();
        if(res==true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
    
}