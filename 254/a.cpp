#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
using namespace std;
 
#define int long long
 
const int MAXN = 2e6 + 10;
int n, q, nxt[MAXN], pre[MAXN];
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> q;
    pre[1] = n, nxt[1] = 2, pre[n] = n - 1, nxt[n] = 1;
    for (int i = 2; i < n; i++) {
        pre[i] = i - 1, nxt[i] = i + 1;
    }
    int num = 1;
    while (pre[num] != num) {
        // cout << num << endl;
        if (num % 2)
            for (int i = 1; i < q; i++) num = nxt[num];
        else
            for (int i = 1; i < q; i++) num = pre[num];
        nxt[pre[num]] = nxt[num], pre[nxt[num]] = pre[num];
        num = nxt[num];
    }
    cout << num << endl;
    return 0;
}