//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a) for (long long int i = 0; i < a.size(); i++) cin >> a[i]
#define parr(a)  for (long long int i = 0; i < a.size(); i++) cout << a[i] << " "
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
    set<ll>st;
    while(q--)
    {
        
        string s;
        cin>>s;
        if(s=="add")
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        else if(s=="erase")
        {
            ll x;
            cin>>x;
            if(st.find(x)!=st.end()) st.erase(st.find(x));
        }
        else if(s=="find")
        {
            ll x;
            cin>>x;
            if(st.find(x)!=st.end()) cy;
            else cn;
            
        }
        else if(s=="print")
        {
            for(auto x:st)
            {
                cout<<x<<" ";
            }
            nl;

        }
        else if(s=="empty")
        {
            st.clear();
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
