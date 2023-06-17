#include <bits/stdc++.h>
using namespace std;
 
int a1[3], a2[3], a3[3], a4[3];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for (int i = 0; i < 3; i++)
        cin >> a1[i];
    for (int i = 0; i < 3; i++)
        cin >> a2[i];
    for (int i = 0; i < 3; i++)
        cin >> a3[i];
    sort(a1, a1 + 3);
    sort(a2, a2 + 3);
    sort(a3, a3 + 3);
    a4[0] = a1[1], a4[1] = a2[1], a4[2] = a3[1];
    sort(a4, a4 + 3);
    cout << a4[1] << '\n';
    return 0;
}