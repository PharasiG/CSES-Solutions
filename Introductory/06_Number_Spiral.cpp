#include <bits/stdc++.h>
using namespace std;

void fun(long long& x, long long& y, long long& ans, bool baari) {
    ans = (x - 1) * (x - 1);
    if (baari) ans += y;
    else ans += (x * 2 - y);
}

int main()
{
    long long t;
    cin >> t;

    while (t--) {
        long long x, y, ans;
        cin >> x >> y;

        if (x > y) {
            fun(x, y, ans, (x % 2 != 0));
        } else {
            fun(y, x, ans, (y % 2 == 0));
        }

        cout << ans << endl;
    } 

    return 0;
}
