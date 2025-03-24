#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; ++i)
            if (i != n - i && i * (i + 1) == n) {
                cout << "The number " << i << " and its complement are: ";
                for (int j = 0; j < i; ++j)
                    cout << " " << i - j;
                cout << " and " << n - i + j << "." << endl;
            }
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
