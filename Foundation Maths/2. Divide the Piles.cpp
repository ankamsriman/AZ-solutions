//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a) for (long long int i = 0; i < a.size(); i++) cin >> a[i]
#define parr(a)  for (long long int i = 0; i < a.size(); i++) cout << a[i] << " "
#define prr(a)  for (auto x:a) cout << x << " "
#define vt(a,n) vector<long long int>a(n)
#define ll long long
#define ull unsigned long long int
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll, ll>

const ll mod = 1e9 + 7;
const ll N = 100000;

bool comp(pair<ll,ll>&x,pair<ll,ll>&y)
{
    return x.f+x.s>y.f+y.s;
}

void solve()
{
    int n; cin >> n;
        int g = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            g = __gcd(g, x);
        }
        if(g > 1) cout << "Yes\n";
        else cout << "No\n";

}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t = 1;
    cin >> t;
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
// }
// Description

// There are N piles of stones in front of you. ith pile contains Ai number of stones.
// You want to find whether it is possible to split each pile into 1 or more piles of X (≥ 2) stones such that each splitted-pile has exactly X stones.
// Note that X should be the same for each pile.


// Input Format

// The first line contains T (1 ≤ T ≤ 100000), the number of test cases. The description of each test case is as follows:
// The first line contains N, the number of piles (1 ≤ N ≤ 100000).
// The second line contains N space-separated positive integers A1, A2, ..., AN (2 ≤ Ai ≤ 109).
// It is guaranteed that sum of N over all test cases doesn't exceed 106.


// Output Format

// For each test case, print "Yes" (without quotes) if it is possible to split. Otherwise, print "No" (without quotes).


// Sample Input 1

// 2

// 5

// 2 2 6 8 12

// 4

// 2 6 3 8


// Sample Output 1

// Yes

// No


// Note

// Explanation 1:
// For X = 2, you can divide each pile into smaller piles of size 2.

// Explanation 2:
// It is not possible to divide piles into smaller piles with size ≥ 2.
