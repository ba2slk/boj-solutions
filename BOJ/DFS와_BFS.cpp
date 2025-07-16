#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> s;
queue<pair<int, int>> q;

int adjacencyList[1002][1002];
int vis[1002][1002];
int n, m, v; 

void dfs(int x, int y){
    while(m > 0 && vis[x][y] > 0){
        
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> v;
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adjacencyList[a][b]++;
        adjacencyList[b][a]++;
        vis[a][b]++;
        vis[b][a]++;
    }



    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (adjacencyList[i][j]) cout << adjacencyList[i][j] << ' ';
            else cout << "0 ";
        }
        cout << '\n';
    }


    return 0;
}