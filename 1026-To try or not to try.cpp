#include <iostream>
using namespace std;

void MofizAdder(unsigned int a, unsigned int b) {

    cout << (a ^ b) << endl;
}

int main() {
    unsigned int a, b;

    while (cin >> a >> b) {
        MofizAdder(a, b);
    }
    return 0;
}
