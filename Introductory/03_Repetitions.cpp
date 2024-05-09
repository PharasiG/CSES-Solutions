#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; 
    cin >> s; 

    char last = '\0';
    int count = 1, maxi = 0;

    for (auto x : s) {
        if (last == x) count++; 
        else {
            if (count > maxi) 
                maxi = count;
            count = 1;
        }
        last = x;
    }
    /*the ternary condition had to be added because of cases like "AACCC"
    max count is at right end and the for loop will terminate before C's count 
    can replace maxi*/
    cout << (count > maxi ? count : maxi);

    return 0;
}