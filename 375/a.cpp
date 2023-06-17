#include <bits/stdc++.h>
using namespace std;
 
long long n;
vector <long long> v;
 
void solve(int x) {
    if (x == 1) return;
    int a, b;
    a = x - 1, b = x + 1;
    if (a / 2 % 2) {
        cerr << a / 2 << '\n';
        v.push_back(2);
        solve(a / 2);
    }
    else {
        cerr << b / 2 << '\n';
        v.push_back(1);
        solve(b / 2);
    }
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    if (n % 2) {
        solve(n);
        cout << v.size() << '\n';
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i] << " ";
        cout << '\n';
    }
    else
        cout << "No solution\n";
    return 0;
}