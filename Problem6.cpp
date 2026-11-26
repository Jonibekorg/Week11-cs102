#include <iostream>
using namespace std;

const int N = 1000;
int arr[N];

void duplicateZeros(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = n - 2; j >= i + 1; j--) {
                arr[j + 1] = arr[j];
            }
            if (i + 1 < n) {
                arr[i + 1] = 0;
            }
            i++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    duplicateZeros(arr, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

void duplicateZeros(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = n - 2; j >= i + 1; j--) {
                arr[j + 1] = arr[j];
            }
            if (i + 1 < n) {
                arr[i + 1] = 0;
            }
            i++;
        }
    }
}