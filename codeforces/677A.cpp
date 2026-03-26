#include <iostream>
using namespace std;

int main(){
    int n,h;
    int count=0;
    int temp=0;
    cin >> n >> h;
    int *a= new int[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]>h){
            count+=2;
        }else{
            temp++;
        }
    }

    int sum=count+temp;
    cout << sum;

    return 0;
}