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

vector<ll>fac(100010*2);
void fact()
{
    fac[1]=1;
    fi(i,2,100010*2)
    {
        fac[i]=fac[i-1]*i%mod;
    }

}


ll fast(ll a,ll b)
{
    a=a%mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b/=2;
    }
    return ans;
}

ll inv_mod(ll n)
{
    return fast(n,mod-2);
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=(fac[n+m]*inv_mod(fac[n])%mod)*inv_mod(fac[m])%mod;
    cout<<ans;
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
    fact();
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}
// Description

// You have given a grid of N x M. You are initially at position A(0, 0) and you want to reach B(N, M). From the given cell (i, j), we are allowed to move to cells (i + 1, j) and (i, j + 1) only.
// Find the number of different ways to reach B from A?
 



// Input Format

// The first line contains T (1 ≤ T ≤ 100000), the number of test cases.
// Each of the next T lines contains two positive integers N, M (1 ≤ N, M ≤ 105).


// Output Format

// For each test case, print the number of ways to reach B from A. Since answer can be large, print it with modulo 1000000007.


// Sample Input 1

// 2

// 2 1

// 3 2


// Sample Output 1

// 3

// 10
