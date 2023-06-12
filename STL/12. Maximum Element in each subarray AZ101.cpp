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
    ll n,k;
    cin>>n>>k;
    deque<ll>dq;
    vector<ll>a(n);
    scarr(a);
    fi(i,0,k)
    {
        if(dq.empty())
        {
            dq.push_back(a[i]);
        }
        else
        {
            while(!dq.empty()&&dq.back()<a[i])
            {
                dq.pop_back();
            }
            dq.push_back(a[i]);
        }
    }
    vector<ll>ans;
    ans.push_back(dq.front());
    
    fi(i,k,n)
    {
        if(a[i-k]==dq.front())dq.pop_front();
        
        while(!dq.empty()&&dq.back()<a[i])
        {
            dq.pop_back();
        }
        dq.push_back(a[i]);
        ans.push_back(dq.front());

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
