#include <bits/stdc++.h>
using namespace std;

int board[15][15];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int i = 1; i < 15; i++){
        board[0][i] = i;
    }

    for (int i = 1; i < 15; i++){
        for (int j = 1; j < 15; j++){
            int sum = 0;
            for (int k = 1; k <= j; k++){
                sum += board[i - 1][k];
            }
            board[i][j] = sum;
        }
    }

    int t; cin >> t;
    while (t--){
        int k, n; cin >> k >> n;
        cout << board[k][n] << '\n';
    }

    return 0;
}