#include <iostream>

using namespace std;

#define int long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define mod 1000000007
#define ps(x, y) fixed << setprecision(y) << x

void solve();

void cp()
{
    /*********** Fast I/O ***********/
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#endif
    /*********** Fast I/O ***********/
    int t = 1;
    cin >> t; // Comment this line if there are no test cases.
    while (t--)
    {
        solve();
    }
}

int32_t main()
{
    cp();
    return 0;
}

void solve()
{
    // Solve here
    int A = 0, B = 0, P = 0, Q = 0;
    cin >> A >> B >> P >> Q;
    if ((P % A == 0 && Q % B == 0) && abs(((Q - B) / B) - ((P - A) / A)) <= 1)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}