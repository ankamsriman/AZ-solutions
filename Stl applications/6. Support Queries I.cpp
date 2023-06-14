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


struct abc
{
    multiset<ll>ms;
    ll s;
    
    abc()
    {
        s=0;
    }
    void add(ll x)
    {
        ms.insert(x);
        s+=x;
    }
    void remove(ll x)
    {
        if(ms.count(x))ms.erase(ms.find(x));
        s-=x;
    }
    ll max()
    {
        if(!ms.empty())
        {
            auto x=ms.end();
            x--;
            return *x;    
        }
        else
        {
            return -1;
        }
        
    }
    ll min()
    {
        if(!ms.empty())
        {
            auto x=ms.begin();
            return *x;    
        }
        else
        {
            return -1;
        }
    }
    ll sum()
    {
        return s;
    }

};

void solve()
{
    ll q;
    cin>>q;
    abc ab;
    while(q--)
    {
        ll z;
        cin>>z;
        if(z==1)
        {
            ll x;
            cin>>x;
            ab.add(x);
        }
        else if(z==2)
        {
            ll x;
            cin>>x;
            ab.remove(x);
        }
        else if(z==3)
        {
            char x;
            cin>>x;
            cout<<ab.min();
            nl;

        }
        else if(z==4)
        {
            char x;
            cin>>x;
            cout<<ab.max();
            nl;
        }
        else
        {
            char x;
            cin>>x;
            cout<<ab.sum();
            nl;
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
