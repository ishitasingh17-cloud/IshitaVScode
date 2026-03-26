#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cin >> n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
        }else{}
    }

    if(count==n){
        cout <<"EASY";
    }else{
        cout <<"HARD";
    }
    return 0;
}