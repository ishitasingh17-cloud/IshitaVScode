#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total_cubes_used = 0;
    int current_level_cubes = 0;
    int height = 0;

    // Loop through each level starting from 1
    for (int i = 1; ; i++) {
        current_level_cubes += i; // Cubes needed for the i-th level
        total_cubes_used += current_level_cubes; // Total cubes used up to level i

        if (total_cubes_used <= n) {
            height = i; // We successfully built this level
        } else {
            break; // Not enough cubes, stop building
        }
    }
    cout << height <<endl;
    return 0;
}