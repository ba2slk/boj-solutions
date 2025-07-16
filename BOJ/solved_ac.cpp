#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int myRound(double num){
    return floor(num + 0.5);
}

int main(){
    int n; cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);        
    }

    sort(v.begin(), v.end());

    double score = 0;
    double cut = myRound(n * 0.15);
    int count = n - 2 * cut;
    for (int i = 0; i < count; i++){
        score += v[i + cut];
    }
    score = myRound(score / count);
    cout << score;
    return 0;
}