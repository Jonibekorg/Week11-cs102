#include <iostream>
using namespace std;

const int N = 1000;
int nums[N];
int result[N];

void shuffle(const int nums[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[n + i];
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    shuffle(nums, n, result);

    for (int i = 0; i < 2 * n; i++) {
        if (i > 0) cout << ' ';
        cout << result[i];
    }
    cout <<endl;
    return 0;
}
