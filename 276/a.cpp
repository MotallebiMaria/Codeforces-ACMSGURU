#include <bits/stdc++.h>
using namespace std;
 
int s, p, ans;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> s >> p;
    if (p > s) {
        ans++;
        p = (p - s) / 60;
        if (p >= 5) ans++;
        if (p >= 15) ans++;
        if (p >= 30) ans++;
    }
    cout << ans << endl;
    return 0;
}