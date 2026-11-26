#include <iostream>
#include <cstring>
using namespace std;

const int N = 1000;
char a[N];

void reverseString(char a[], int n);

int main() {
    cin >> a;
    int n = static_cast<int>(strlen(a));
    reverseString(a, n);
    cout << a << endl;
    return 0;
}

void reverseString(char a[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}
