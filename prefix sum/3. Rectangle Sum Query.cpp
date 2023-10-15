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
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>>a(n+2,vector<ll>(m+2,0));
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            cin>>a[i][j];
        }
    }
    
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            a[i][j]+=((a[i-1][j]+a[i][j-1])%mod-a[i-1][j-1])%mod;
            a[i][j]%=mod;
        }
    }
    while(q--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans=((a[x2][y2]-a[x2][y1-1])%mod-a[x1-1][y2])%mod+a[x1-1][y1-1];
        ans=((ans%mod)+mod)%mod;
        pr(ans);
        
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
// }
// Description

// Given a 2d-array of dimension N*M and Q queries. In each query four integers x1, y1, x2, y2 is given, you have to find the sum of submatrix with (x1,y1) be the leftmost corner and (x2,y2) be the rightmost corner %10^9+7.


// Input Format

// The first line contains three space-separated integers N, M, Q where 1<=N, M<=10^3, 1<=Q<=10^6.

// Next N lines contains M space-separated integers (-1e9<=Aij<=1e9).

// Next Q lines contains four space separated integers x1, y1, x2, y2 where 1<=x1<=x2<=N, 1<=y1<=y2<=M.


// Output Format

// For each query print, the sum of submatrix with (x1,y1) be the leftmost corner and (x2,y2) be the rightmost corner in a new line %10^9+7.


// Sample Input 1

// 5 5 5
// -1 2 3 -4 2
// 0 0 0 0 4
// 1 2 4 3 5
// -1 -5 -2 3 4
// 0 -3 -5 3 -6
// 1 1 2 2
// 1 2 3 4
// 2 3 3 3
// 4 4 4 4
// 2 3 2 4

// Sample Output 1

// 1
// 10
// 4
// 3
// 0
