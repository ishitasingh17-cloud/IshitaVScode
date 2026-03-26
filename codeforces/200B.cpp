#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double pureJuice=0;
    int *p = new int[n];

    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    for(int i=0; i<n; i++){
        pureJuice+=p[i]/100.0;
    }
    
    double ans=(pureJuice/n)*100;
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
    
    delete[] p;
}