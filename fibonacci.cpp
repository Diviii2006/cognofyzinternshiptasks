#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}

