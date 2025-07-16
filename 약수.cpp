#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    /* 정답이지만 간결하지 않은 풀이 */

    // int A[52];    

    // int n; cin >> n;
    // if (n == 1){
    //     int x; cin >> x;
    //     cout << x * x;
    //     return 0;
    // }

    // for (int i = 0; i < n; i++){
    //     cin >> A[i];
    // }

    // sort(A, A+n);
    // cout << A[0] * A[n-1]; // 결국 최대 & 최솟값의 곱을 구하는 거였음.

    /* 본질: min & max 찾기 */
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());

    cout << mn * mx;

    return 0;
}