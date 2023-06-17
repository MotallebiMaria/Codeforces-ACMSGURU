#include <bits/stdc++.h>
using namespace std;
 
int p, m, c, k, r, v;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> p >> m >> c >> k >> r >> v;
    p /= k, m /= r, c /= v;
    cout << min(p, min(m, c)) << endl;
    return 0;
}