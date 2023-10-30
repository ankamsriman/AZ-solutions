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
#define pb(x) push_back(x)
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll,ll>


using state =pair<int,int>;
const ll mod = 1e9 + 7;
const ll N = 100000;

vector<ll>v;
ll n,m;
vector<ll>g(vector<ll>a)
{
    ll n=a.size();
    vector<ll>z;
    for(ll mask=0;mask<(1<<n);mask++)
    {
        ll s=0;
        fi(i,0,n)
        {
            if(mask&(1<<i))
            {
                s=(s+a[i])%m;
            }
        }
        z.push_back(s);
    }
    return z;
}



void solve()
{
    // ll n,t;
    cin>>n>>m;
    vt(a,n);
    scarr(a);
    vector<ll>x,y;
    fi(i,0,n)
    {
        if(i%2)x.push_back(a[i]);
        else y.push_back(a[i]);
    }
    x=g(x);
    y=g(y);
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ll ans=0;
    fi(i,0,x.size())
    {
        auto it=lower_bound(y.begin(),y.end(),m-x[i]);
        if(it!=y.begin())
        {
            it--;
            ans=max(ans,*it+x[i]);
        }
    }
    pr(ans);


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

// Time-Limit: 2 sec Score: 1.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You are given an array a consisting of n integers, and additionally an integer m. You have to choose some sequence of indices b1, b2, ..., bk (1 ≤ b1 < b2 < ... < bk ≤ n) in such a way that the value of (a[b1] + a[b2] + ... + a[bk]) mod m is maximized. The chosen sequence can be empty.

// Print the maximum possible value of (a[b1] + a[b2] + ... + a[bk]) mod m.


// Input Format

// The first line contains two integers n and m (1 ≤ n ≤ 35, 1 ≤ m ≤ 109).
// The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 109).


// Output Format

// Print the maximum possible value of (a[b1] + a[b2] + ... + a[bk]) mod m.


// Sample Input 1

// 4 4
// 5 2 4 1

// Sample Output 1

// 3

// Note

// You can choose a sequence b = {1, 2}, so the sum (5 + 2) is equal to 7 (and that's 3 after taking it modulo 4).
