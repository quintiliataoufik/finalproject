#include <iostream>
using namespace std;

int main() {
  int x = 0;
  cout << "Enter a number: ";
  cin >> x;
  if (x % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
  return 0;
}
