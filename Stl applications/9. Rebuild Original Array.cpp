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
    ll n;
    cin>>n;
    ll nn=(1LL<<n);
    multiset<ll>ms;
    fi(i,0,nn)
    {
        ll x;
        cin>>x;
        ms.insert(x);
    }
    ms.erase(0);
    vector<ll>b,ans;;
    b.push_back(0);
    while(!ms.empty())
    {
        ll x=*ms.begin();
        // cout<<x;

        ans.push_back(x);
        vector<ll>c;
        fi(i,0,b.size())
        {
            c.push_back(x+b[i]);
        }
        fi(i,0,c.size())
        {
            b.push_back(c[i]);
            ms.erase(ms.find(c[i]));
        }
    }
    fi(i,0,ans.size())
    {
        cout<<ans[i]<<" ";
    }
    nl;

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
