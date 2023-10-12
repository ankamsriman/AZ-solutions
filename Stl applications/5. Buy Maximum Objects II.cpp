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
    ll n,q;
    cin>>n>>q;
    vt(a,n);
    scarr(a);
    sort(a.begin(), a.end());
    fi(i,1,n)
    {
        a[i]+=a[i-1];
    }
    while(q--)
    {
        ll m;
        cin>>m;
        auto x=upper_bound(a.begin(),a.end(),m);
        cout<<x-a.begin();
        nl;
    }
    



}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t = 1;
    // cin >> t;
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
// You have been asked Q queries. In each query, you have been given total money M, and find the maximum number of objects that you can buy.


// Input Format

// The first line of each test case contains N, the number of objects, and Q, total queries.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.
// Next, Q lines contain a number M, the total money.


// Output Format

// For each query, print a single number in a new line representing the maximum objects that you can buy.


// Constraints

// 1 ≤ N, Q ≤ 105
// 1 ≤ Ai ≤ 108
// 1 ≤ M ≤ 108


// Sample Input 1

// 5 4
// 1 4 2 9 6
// 1
// 5
// 10
// 25

// Sample Output 1

// 1
// 2
// 3
// 5

// Note

// M = 1, buy Object with price 1.
// M = 5, buy Objects with prices 1, 4.
// M = 10, buy Objects with prices 1, 2, 4.
// M = 25, buy Objects with prices 1, 2, 4, 9, 6.
