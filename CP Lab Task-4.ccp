#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int g = __gcd(A, B);
    long long l = (1LL * A * B) / g;

    cout << "GCD = " << g << endl;
    cout << "LCM = " << l << endl;

    return 0;
}
