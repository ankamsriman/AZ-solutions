// Enter your code below 
// Enter your code below 
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
#define pb(x) push_back(x)
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll,ll>


using state =pair<int,int>;
const ll mod = 1e9 + 7;
const ll N = 100000;



void solve()
{
    ll n,m,q;
    cin>>n>>m>>q;
    // vt(a,n+2,m+2);
    vector<vector<ll>>a(n+1,vector<ll>(m+1,0));
    fi(i,0,n)
    {
        fi(j,0,m)
        {
            cin>>a[i+1][j+1];
        }
    }
    vector<vector<ll>>rect(n+1,vector<ll>(m+1,0)),tri(n+1,vector<ll>(m+1,0));
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            rect[i][j]=(a[i][j]+rect[i][j-1]+rect[i-1][j]-rect[i-1][j-1])%mod;
            tri[i][j]=(tri[i-1][j-1]+rect[i][j]-rect[i][j-1])%mod;
        }
    }
    while(q--)
    {
        ll x,y,l;
        cin>>x>>y>>l;
        ll i=max(x-l,0LL),j=max(y-l,0LL);
        ll ans=tri[x][y]-tri[i][j]-(rect[i][y]-rect[i][j]);
        ans=(ans%mod)+mod;
        ans%=mod;
        cout<<ans;
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

// Given a 2d-array of dimension N*M and Q queries. In each query three integers x1, y1, L are given, you have to find the sum of the triangle ( check the image ) %10^9+7.

// Assume that the value of cell outside the grid has value 0.



// Input Format

// The first line contains three space-separated integers N, M, Q where 1<=N, M<=10^3, 1<=Q<=10^6.

// Next N lines contains M space-separated integers (-1e9<=Aij<=1e9).

// Next Q lines contains three space separated integers x1, y1, L where 1<=x1<=N, 1<=y1<=M, 1<=L<=1000.


// Output Format

// For each query print the sum of the triangle.


// Sample Input 1

// 5 5 5
// -1 2 3 -4 2
// 0 0 0 0 4
// 1 2 4 3 5
// -1 -5 -2 3 4
// 0 -3 -5 3 -6
// 1 1 2
// 1 2 3
// 2 3 3
// 4 4 4
// 2 3 2

// Sample Output 1

// 1000000006
// 2
// 5
// 10
// 5
