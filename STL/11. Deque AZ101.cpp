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
    deque<ll>dq;
    while(q--)
    {
        
        string s;
        cin>>s;
        if(s=="insertback")
        {
            ll x;
            cin>>x;
            dq.push_back(x);
        }
        else if(s=="insertfront")
        {
            ll x;
            cin>>x;
            dq.push_front(x);
        }
        else if(s=="printfront")
        {
            if(!dq.empty())
            {
                cout<<dq.front();
                nl;    
            }
            
        }
        else if(s=="printback")
        {
            if(!dq.empty())
            {
                cout<<dq.back();
                nl;    
            }
        }
        else if(s=="erasefront")
        {
            if(!dq.empty())dq.pop_front();
        }
        else if(s=="eraseback")
        {
            if(!dq.empty())dq.pop_back();
        }
        else if(s=="print")
        {
            ll x;
            cin>>x;
            if((ll)dq.size()>=x+1)
            {
                cout<<dq[x];
                nl;
            }
            else cout<<"0\n";

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
