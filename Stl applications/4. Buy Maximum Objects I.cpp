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

void solve()
{
    ll n,m;
    cin>>n>>m;
    vt(a,n);
    scarr(a);
    sort(a.begin(), a.end());
    ll ans=0,c=0;
    fi(i,0,n)
    {
        if(c+a[i]<=m)
        {
            ans++;
            c+=a[i];
        }
    }
    pr(ans);



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
}
// Description

// There are N objects, and each object has some price. The price of ith object is Ai.
// You have total money M, and you want to buy as many objects as possible.
// Find the maximum objects that you can buy?


// Input Format

// The first line contains T, the number of test cases.
// The first line of each test case contains N, the number of objects, and M, the money you have.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.


// Output Format

// For each test case, print a single number representing the maximum objects that you can buy.


// Constraints

// 1 ≤ T ≤ 105
// 1 ≤ N ≤ 105
// 1 ≤ Ai ≤ 108
// 1 ≤ M ≤ 108
// Sum of N over all test cases ≤ 5 * 105.


// Sample Input 1

// 3

// 5 5

// 1 3 2 4 5

// 5 10

// 1 3 2 4 5

// 5 20

// 1 3 2 4 5


// Sample Output 1

// 2

// 4

// 5


// Note

// Explanation 1:
// Buy Objects with prices 1, 2.

// Explanation 2:
// Buy Objects with prices 1, 2, 3, 4.

// Explanation 3:
// Buy all objects.
