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

bool comp(pair<ll,ll>&x,pair<ll,ll>&y)
{
    return x.f+x.s>y.f+y.s;
}

void solve()
{
    ll n;
    cin>>n;
    vt(a,n);
    vt(b,n);
    scarr(a);
    scarr(b);
    vector<pair<ll,ll>>v;
    fi(i,0,n)
    {
        v.push_back(make_pair(a[i],b[i]));
    }

    sort(v.begin(),v.end(),comp);
    ll x=0,y=0;
    fi(i,0,n)
    {
        if(i%2==0)
        {
            x+=v[i].f;
        }
        else
        {
            y+=v[i].s;
        }
    }
    if(x>y)
    {
        cout<<"Alice";
    }
    else if(x<y)
    {
        cout<<"Bob";
    }
    else
    {
        cout<<"Tie";
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
