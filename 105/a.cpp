#include <bits/stdc++.h>
using namespace std;
 
int n, ans;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    ans = n / 3 * 2;
    if (n % 3 == 2) ans++;
    cout << ans << endl;
    return 0;
}