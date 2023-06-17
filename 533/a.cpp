#include <bits/stdc++.h>
using namespace std;
 
int n;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    int x, y;
    x = n / 14, y = n % 14;
    if (y < 2 || y > 12 || n < 21)
        cout << -1 << '\n';
    else if (x == 1 && n != 21)
        cout << -1 << '\n';
    else
        cout << x << '\n';
    return 0;
}