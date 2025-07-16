#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int ans = n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int tmp;
            if (i * 3 + j * 5 == n) tmp = i + j;
            if (tmp < ans) ans = tmp;
        }
    } // <- 너무 생각 없는 방법. DP로 풀어봐야..

    if (ans == n) cout << -1;
    else cout << ans;

    return 0;
}