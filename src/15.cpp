#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string name = "John";
    int age = 25;
    vector<int> scores = {10, 20, 30};
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    for (auto score : scores) {
        cout << "My score is " << score << endl;
    }
    return 0;
}
