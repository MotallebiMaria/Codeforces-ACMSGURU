#include <bits/stdc++.h>
using namespace std;
 
int n;
vector <pair <int, int>> v;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    cout << n << " " << (n - 1) / 2 * 3 + (n - 1) % 2 << '\n';
    if (n <= 2) {
        if (n == 2)
            cout << "1 2\n";
        return 0;
    }
    for (int i = 2; i < n; i += 2) {
        cout << "1 " << i << '\n';
        cout << "1 " << i + 1 << '\n';
        cout << i << " " << i + 1 << '\n';
    }
    if ((n - 1) % 2)
        cout << "1 " << n << '\n';
    return 0;
}