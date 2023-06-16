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
}
