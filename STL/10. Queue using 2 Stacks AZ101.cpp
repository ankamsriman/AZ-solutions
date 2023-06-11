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
    ll q;
    cin>>q;
    stack<ll>s1,s2;
    while(q--)
    {
        string z;
        cin>>z;
        if(z=="push")
        {
            ll x;
            cin>>x;

            if(!s1.empty())s1.push(x);
            else
            {
                while(!s2.empty())
                {
                    ll w=s2.top();
                    s2.pop();
                    s1.push(w);
                }
                s1.push(x);
            }
        }
        else if(z=="pop")
        {
            if(!s2.empty())
            {
                ll w=s2.top();
                s2.pop();
                cout<<w;
                nl;
            }
            else
            {
                 while(!s1.empty())
                {
                    ll w=s1.top();
                    s1.pop();
                    s2.push(w);
                }

                if(!s2.empty())
                {
                    ll w=s2.top();
                    s2.pop();
                    cout<<w;
                    nl;
                }
            }

        }
        else
        {
            if(!s2.empty())
            {
                cout<<s2.top();
                nl;
            }
            else
            {
                 while(!s1.empty())
                {
                    ll x=s1.top();
                    s1.pop();
                    s2.push(x);
                }
                if(!s2.empty())
                {
                    cout<<s2.top();
                    nl;
                }
            }
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
