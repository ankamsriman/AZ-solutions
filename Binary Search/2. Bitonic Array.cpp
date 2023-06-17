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

vector<ll>a;
bool check1(ll x)
{
    return a[x]<a[x+1];
}
ll k;
bool check2(ll x)
{
    return a[x]<k;
}

void solve()
{

    //star;
    ll n,q;
    cin>>n>>q;
    a.resize(n);
    fi(i,0,n)
    {
        cin>>a[i];
    }
    ll lo=0,hi=n-1,id=n-1;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check1(mid))
        {
            lo=mid+1;
        }
        else
        {
            id=mid;
            hi=mid-1;
        }
    }
    while(q--)
    {
        cin>>k;
        ll lo=0,hi=id,ans=-1;
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            if(a[mid]==k)
            {
                cout<<mid+1<<" ";
                break;
            }
            else if(check2(mid))
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        lo=id+1,hi=n-1,ans=-1;
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            if(a[mid]==k)
            {
                cout<<mid+1<<" ";
                break;
            }
            else if(check2(mid))
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        
        nl;

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
    // kpp();
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
