#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e4 + 10;
int n, ans[N], x[N], cnt;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                num = max(num, x[j]);
        }
        ans[i] = num + 1;
        x[i] = ans[i];
        cnt = max(cnt, ans[i]);
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}