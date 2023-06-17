#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 7e4 + 10;
int n;
long long a[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    a[0] = 1;
    for (int i = 1; i <= n; i++)
        a[i] = a[i - 1] + i;
    cout << a[n] << '\n';
    return 0;
}