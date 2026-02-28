#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    // Just in case there are multiple testcases
    while (cin >> a >> b) {
        cout << a + b << "\n";
    }
    return 0;
}
