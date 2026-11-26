#include <iostream>
using namespace std;

const int N = 1000;
int gain[N];

int largestAltitude(const int gain[], int n) {
    int altitude = 0;
    int best = 0;
    for (int i = 0; i < n; i++) {
        altitude += gain[i];
        if (altitude > best) {
            best = altitude;
        }
    }
    return best;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }
    cout << largestAltitude(gain, n) << endl;
    return 0;
}
