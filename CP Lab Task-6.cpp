#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++) 
    {
        int a, b, c, d;
        string A, B, C, D;

        cin >> a >> b >> c >> d;
        cin >> A >> B >> C >> D;

       
        int x = stoi(A, nullptr, 2);
        int y = stoi(B, nullptr, 2);
        int z = stoi(C, nullptr, 2);
        int w = stoi(D, nullptr, 2);

        cout << "Case " << tc << ": ";
        if(a == x && b == y && c == z && d == w) 
            cout << "Yes\n";
        else 
            cout << "No\n";
    }

    return 0;
}
