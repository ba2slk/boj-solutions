#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
vector<ll> factors[10];

int main() {
    ll number, temp;
    while (true) {
        cin >> number;
        if (number == 0) break;
        temp = number;

        int index = 0;
        while (number > 1) {
            int i;
            ll product = 1;
            for (i = 0; i < 10 && product <= number; i++)
                product *= primes[i];
            product /= primes[--i];
            ll quotient = number / product;
            number %= product;
            factors[index].push_back(quotient);
            for (int j = 0; j < i; j++)
                factors[index].push_back(primes[j]);
            index++;
        }
        if (number == 1)
            factors[index++].push_back(number);
        cout << temp << " = ";
        for (int i = index - 1; i >= 0; i--) {
            for (int j = 0; j < factors[i].size(); j++) {
                cout << factors[i][j];
                if (j != factors[i].size() - 1)
                    cout << "*";
            }
            if (i != 0)
                cout << " + ";
        }
        cout << "\n";
        for (int i = 0; i < 10; i++)
            factors[i].clear();
    }
    return 0;
}
