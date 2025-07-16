#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    int odd = 0, even = 0;
    while (k != 0) {
        if ((k % 10) % 2 == 0) even++;
        else odd++;
        k /= 10;
    }

    int ans = -1;
    if (odd > even) ans = 1;
    else if (odd < even) ans = 0;
    
    cout << ans;

    return 0;
}