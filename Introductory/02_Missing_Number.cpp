#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    double sum = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    long ans = ((n / 2) * (n + 1)) - sum;
    cout << ans;

    return 0;
}