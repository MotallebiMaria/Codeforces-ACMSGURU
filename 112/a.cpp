#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e4 + 10;
int a, b, x[MAXN], y[MAXN], ans[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    int c = 0;
    x[0] = y[0] = 1;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < MAXN; j++) {
            x[j] = x[j] * a + c;
            c = x[j] / 10;
            x[j] %= 10;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < MAXN; j++) {
            y[j] = y[j] * b + c;
            c = y[j] / 10;
            y[j] %= 10;
        }
    }
    int g;
    for (int i = 0; i < MAXN; i++) {
        if (x[i] > y[i]) g = a;
        else if (x[i] != y[i]) g = b;
    }
    c = 0;
    if (g == a) {
        for (int i = 0; i < MAXN; i++) {
            if (x[i] >= y[i] + c) {
                ans[i] = x[i] - y[i] - c;
                c = 0;
            }
            else {
                ans[i] = x[i] + 10 - y[i] - c;
                c = 1;
            }
        }
 
    }
    else if (g == b) {
        for (int i = 0; i < MAXN; i++) {
            if (y[i] >= x[i] + c) {
                ans[i] = y[i] - x[i] - c;
                c = 0;
            }
            else {
                ans[i] = y[i] + 10 - x[i] - c;
                c = 1;
            }
        }
    }
    int ind = 0;
    for (int i = MAXN - 1; i >= 0; i--) {
        if (ans[i]) {
            ind = i;
            break;
        }
    }
    if (g == b && a != b)
        cout << "-";
    for (int i = ind; i >= 0; i--)
        cout << ans[i];
    cout << '\n';
    return 0;
}