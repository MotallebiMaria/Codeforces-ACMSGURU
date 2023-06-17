#include <bits/stdc++.h>
using namespace std;
 
string a, b;
int bull, cow;
bool mark[10];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    for (int i = 0; i < 4; i++) {
        if (a[i] == b[i])
            bull++;
        mark[a[i] - '0'] = true;
    }
    for (int i = 0; i < 4; i++) {
        if (mark[b[i] - '0'] && a[i] != b[i])
            cow++;
    }
    cout << bull << " " << cow << '\n';
    return 0;
}