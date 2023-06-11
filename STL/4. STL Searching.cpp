//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a)                                 \
    for (long long int i = 0; i < a.size(); i++) \
    cin >> a[i]
#define parr(a)                                  \
    for (long long int i = 0; i < a.size(); i++) \
    cout << a[i] << " "
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
    vector<ll>a(n);
    scarr(a);
    sort(a.begin(),a.end());
    while(q--)
    {
        ll z,x;
        cin>>z>>x;
        if(z==1)
        {
            auto w=lower_bound(a.begin(),a.end(),x);
            if(w!=a.end())cout<<(*w)<<" ";
            else cout<<"-1 ";
        }
        else if(z==2)
        {
            auto w=upper_bound(a.begin(),a.end(),x);
            if(w!=a.end())cout<<(*w)<<" ";
            else cout<<"-1 ";

        }
        else if(z==3)
        {
            auto w=upper_bound(a.begin(),a.end(),x)-a.begin();
            cout<<w<<" ";
 
        }
        else
        {
            auto w=lower_bound(a.begin(),a.end(),x)-a.begin();
            cout<<w<<" ";
        }
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
