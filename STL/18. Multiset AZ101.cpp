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
    ll q;
    cin>>q;
    multiset<ll>ms;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            ll x;
            cin>>x;
            ms.insert(x);
        }
        else if(s=="erase")
        {
            ll x;
            cin>>x;
            if(ms.find(x)!=ms.end())ms.erase(ms.find(x));
        }
        else if(s=="eraseall")
        {
            ll x;
            cin>>x;
            ms.erase(x);
        }
        else if(s=="find")
        {
            ll x;
            cin>>x;
            if(ms.find(x)!=ms.end())cy;
            else cn;
        }
        else if(s=="count")
        {
            ll x;
            cin>>x;
            cout<<ms.count(x);
            nl;
        }
        else if(s=="print")
        {
            if(!ms.empty())
            {
                prr(ms);
                nl;
            }
        }
        else
        {
            ms.clear();
        }
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
