/*
# Maraton Oct 26 2019
### Author:
        LeoRiether
*/

#include <bits/stdc++.h>
using namespace std;

#define fo1(i, n) for (int i = 0; i < n; i++)
#define rep(i, l, r) for (int i = l; i < r; i++)
#define repb(i, r, l) for (int i = r; i > l; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
using ll = long long; using vi = vector<int>; using ii = pair<int,int>;
const int oo = 0x3f3f3f3f; const ll OO = ll(oo)*oo; const int N = 200005;
#ifndef DEBUG
#define endl '\n'
#define debugf(...)
#define debug(...)
#else
#define debugf(...) printf(__VA_ARGS__)
#define debug(...) __VA_ARGS__
#endif

int dp[N];
int P[N];
int r[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    fo1(i, n) {
        cin >> r[i+1];
    }

    rep(i, 1, n+1) {
        P[i] = i;
        dp[i] = oo;
        fo1(j, 202) {
            if (i - j < 0) break;
            if (i - r[i] - (i-j + r[i-j]) > 1) continue;

            // we can take i having the last taken be i-j
            if (dp[i-j] + 1 < dp[i]) {
                dp[i] = dp[i-j] + 1;
                P[i] = i-j;
            }
        }
    }

    int best = n;
    rep(i, 1, n+1) {
        if (r[i] + i >= n && dp[i] < dp[best]) {
            best = i;
        }
    }

    stack<int> ans;
    cout << dp[best] << endl;
    while (best) {
        ans.emplace(best);
        best = P[best];
    }

    while (!ans.empty()) {
        cout << ans.top() << ' ';
        ans.pop();
    }
    cout << endl;

    return 0;
}
