#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;

    int sum = 0;
    for (int i = 1; i <= 1000; i++){
        if (sum >= 1000) break;
        arr[sum] = i;
        sum += i;
    }

    int ans = ceil(n/6);

    return 0;
}