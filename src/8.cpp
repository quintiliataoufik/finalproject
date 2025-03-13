#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> names;
    names.push_back("John");
    names.push_back("Jane");
    names.push_back("Bob");
    names.push_back("Alice");

    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}
