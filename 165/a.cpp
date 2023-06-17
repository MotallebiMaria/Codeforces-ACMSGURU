#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 6e3 + 10;
int n;
pair <double, int> p[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(p, p + n + 1);
    for (int i = 1; i <= n; i++) {
        if (abs((p[i].first + p[n - i + 1].first) - 4) > 0.1) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    for (int i = 1; i <= n / 2; i++)
        cout << p[i].second << " " << p[n - i + 1].second << " ";
    if (n % 2)
        cout << p[n / 2 + 1].second;
    cout << '\n';
    return 0;
}