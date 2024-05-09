#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, maxi = 0, sum = 0;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        //input
        cin >> arr[i];
        //updating the maximum element till now
        if (arr[i] > maxi) 
            maxi = arr[i];
        //how much to add to make current element equal to maximum till now
        //in case it was already greater than it would have replaced "maxi"
        //thus leading to maxi - arr[i] = 0
        sum += maxi - arr[i];
    }

    cout << sum;
    
    return 0;
}