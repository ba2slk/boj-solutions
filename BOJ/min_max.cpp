#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;


int main(){
    vector<int> v = {5, 3, 1, 6, 9, 8, 2, 7, 10, 4};
    set<int> s = {5, 3, 1, 6, 9, 8, 2, 7, 10, 4};
    int A[10] = {5, 3, 1, 6, 9, 8, 2, 7, 10, 4};
    // map<string, int> mp;

    /* 반복문 */
    int mx = -1;
    int mn = INT_MAX;
    // 1) vector
    for (int i : v){
        if (i > mx) mx = i;
        if (i < mn) mn = i;
    }
    cout << "Vector\n";
    cout << "MAX: " << mx << " " << "MIN: " << mn;
    cout << "\n";

    // 2) set
    mx = INT_MIN;
    mn = INT_MAX;
    for (auto it = s.begin(); it != s.end(); it++){
        int i = *it;
        if (i > mx) mx = i;
        if (i < mn) mn = i;
    }
    cout << "Set\n";
    cout << "MAX: " << mx << " " << "MIN: " << mn;
    cout << "\n";

    /* <algorithm> 활용 - 전체에서 최소 구하기 */
    // 1) vector
    mx = *max_element(v.begin(), v.end());
    mn = *min_element(v.begin(), v.end());
    cout << "Vector\n";
    cout << "MAX: " << mx << " " <<  "MIN: " << mn;
    cout << "\n";

    // 2) set
    mx = *(s.rbegin());
    mn = *(s.begin());
    cout << "SET\n";
    cout << "MAX: " << mx << " " << "MIN: " << mn;
    cout << "\n";

    /* <algorithm> 활용 - 특정 값보다 크거나 작은 값 구하기 */
    mn = min(1, 10);
    mx = max(1, 10);
    cout << "min() & max()\n";
    cout << "MAX: " << mx << " " << "MIN: " << mn;
    cout << "\n";

    
    return 0;
}