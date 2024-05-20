#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<int> arr(n);
    i = n;
    arr[n/2] = i--;
    arr[n/2 - 2] = i--;
    arr[n/2 + 1] = i--;
    arr[n/2 - 1] = i--;

    for (int j = n/2 + 2; j < n; j++) {
        arr[j] = i;
        i -= 2;
    }

    for (int j = n/2 - 3, i = n - 5; j >= 0; j--) {
        arr[j] = i;
        i -= 2;
    }

    for (auto x: arr)
        cout << x << ' ';
    cout << endl;
    
    return 0;
}