#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = 10, d = 0;
    if (n == m) {
        cout << "0" << endl;
        return 0;
    }
    int w = 2;
    while (true) {
        if (w == 0) m += 7;
        if (w == 1) m += 7;
        d++;
        m--;
        if (m == n) {
            cout << d << endl;
            break;
        }
        w = (w + 1) % 7;
    }
    return 0;
}
