#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2) << (-40 - 32) * 5 / 9.0 << endl;
    cout << fixed << setprecision(2) << (0 - 32) * 5 / 9.0 << endl;
    cout << fixed << setprecision(2) << (98.6 - 32) * 5 / 9.0 << endl;
    return 0;
}
