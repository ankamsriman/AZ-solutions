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



void solve()
{
    ll n;
    cin>>n;
    ll ans=n;
    for(ll i=2;i*i<=n;i++)
    {
        ll f=0;
        while(n%i==0)
        {
            n/=i;
            f=1;
        }
        if(f)
        {
            f=0;
            ans/=i;
            ans*=(i-1);
        }
    }
    if(n!=1)
    {
        ans/=n;
        ans*=(n-1);
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

// Description

// For given integer n, count the totatives of n, that is, the positive integers less than or equal to n that are relatively prime to n.


// Input Format

// The only line of input contains an integer n.


// Output Format

// Print the answer on a new line.


// Constraints

// 1 ≤ n ≤ 1012


// Sample Input 1

// 6

// Sample Output 1

// 2

// Sample Input 2

// 1000000

// Sample Output 2

// 400000
