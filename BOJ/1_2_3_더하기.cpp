#include <bits/stdc++.h>
using namespace std;

int dp[12];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for (int i = 4; i <= n; i++){
            int sum = 0;
            for (int j = 1; j <= 3; j++){
                sum += dp[i - j];
            }
            dp[i] = sum;
        }
        cout << dp[n] << '\n';
        fill(dp, dp + 12, 0);
    }

    return 0;
}

/* 
[개선된 코드] 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    dp[1] = 1; dp[2] = 2; dp[3] = 4; // 미리 dp 테이블을 만들어 놓으면 매번 dp 테이블을 만들지 않아도 됨.
    for (int i = 4; i < 11; i++){
        for (int j = 1; j <= 3; j++){
            dp[i] += dp[i - j];
        }
    }

    while (t--){ // d[n]을 찍는 방식으로 구현.
        int n; cin >> n;      
        cout << dp[n] << '\n';
    }

    return 0;
}
*/