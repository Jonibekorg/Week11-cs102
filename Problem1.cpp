#include <iostream>
using namespace std;

const int N = 1000;
int a[N];

void sortArray(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int lowerBound(const int a[], int n, int x) {
    int low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int countValue(int a[], int n, int x) {
    sortArray(a, n);
    int first = lowerBound(a, n, x);
    int afterLast = lowerBound(a, n, x + 1);
    return afterLast - first;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;

    cout << countValue(a, n, x) << '\n';
    return 0;
}

