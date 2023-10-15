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


ll power(ll a,ll b)
{
    a%=mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return ans;
}

ll inv_mod(ll n)
{
    ll ans=power(n,mod-2);
    return ans;
}

void solve()
{
    ll n,q,k;
    cin>>n>>q>>k;
    vector<ll>a(n+1),p(n+1);
    fi(i,1,n+1) 
    {
        cin>>a[i];
        p[i]=a[i]*(power(k,i))%mod;
    }

    fi(i,1,n+1)
    {
        p[i]=(p[i]+p[i-1])%mod;
    }

    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=(p[r]-p[l-1])%mod*inv_mod(power(k,l))%mod;
        ans=(((ans%mod)+mod)%mod);
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
    // kpp();
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

// Given an array of N integers, Q queries, and an integer K. In each query two integers L, R is given, you have to find (A[L] + A[L+1] * K + A[L+2] * K^2 + …. A[R] * K^(R-L))% 10^9+7.


// Input Format

// The first line contains three space-separated integers N, Q, K where 1<=N<=10^6, 1<=Q<=10^6, 1<=K<=10^9.

// Next line contains N space-separated integers (-1e9<=Ai<=1e9).

// Next Q lines contain two space-separated integers L, R where 1<=L<=R<=N.


// Output Format

// For each query print the value of (A[L] + A[L+1] * K + A[L+2] * K^2 + …. A[R] * K^(R-L))% 10^9+7 in a new line.


// Sample Input 1

// 10 10 234565
// 12 -23 -123 2345 2345 44 345 -93945 -5353 1
// 1 5
// 1 8
// 1 10
// 2 2
// 6 6
// 4 8
// 2 9
// 4 10
// 3 6
// 5 9

// Sample Output 1

// 644011223
// 645979052
// 534876628
// 999999984
// 44
// 725883751
// 503173837
// 859246404
// 845338365
// 605774687
