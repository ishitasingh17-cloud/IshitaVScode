#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    int serejaScore = 0;
    int dimaScore = 0;
    
    // Sereja starts first (turn 0, 2, 4...)
    bool serejaTurn = true;

    while (left <= right) {
        if (cards[left] >= cards[right]) {
            if (serejaTurn) serejaScore += cards[left];
            else dimaScore += cards[left];
            left++;
        } else {
            if (serejaTurn) serejaScore += cards[right];
            else dimaScore += cards[right];
            right--;
        }
        // Switch turns
        serejaTurn = !serejaTurn;
    }

    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}