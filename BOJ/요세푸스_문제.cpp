#include <iostream>
#include <queue>
using namespace std;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     int n, k;
//     cin >> n >> k;

//     queue<int> Q;
//     for (int i = 1; i <= n; i++){
//         Q.push(i);
//     }

//     int cnt = 1;
//     cout << '<';
//     while(true) {
//         if (!Q.empty()){
//             n = Q.front();
//             Q.pop();
//             if (cnt == k){
//                 cout << n;
//                 if (!Q.empty()){
//                     cout << ", ";
//                 }
//                 cnt = 1;
//             }
            
//             else {
//                 Q.push(n);
//                 cnt++;
//             }
//         }
//         else break; 
//     }
//     cout << '>';

//     return 0;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    queue<int> Q;
    for (int i = 1; i <= n; i++){
        Q.push(i);
    }
    cout << '<';
    while (Q.size() > 1){
        for (int i = 0; i < k-1; i++){
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front();
    cout << '>';
}