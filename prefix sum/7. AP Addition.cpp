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


ll power(ll a,ll b)
{
    a%=mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return ans;
}

ll inv_mod(ll n)
{
    ll ans=power(n,mod-2);
    return ans;
}

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n+2),p(n+2);
    

    while(q--)
    {
        ll b,d,l,r;
        cin>>b>>d>>l>>r;
        a[l]+=b-l*d%mod;
        a[r+1]-=b-l*d%mod;
        p[l]+=d;
        p[r+1]-=d;
    }
    fi(i,1,n+1)
    {
        a[i]+=a[i-1];
        p[i]+=p[i-1];
    }
    fi(i,1,n+1)
    {
        p[i]=p[i]*i%mod;
        a[i]+=p[i];
    }
    fi(i,1,n+1) cout<<((a[i]%mod)+mod)%mod<<" ";
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
    // kpp();
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

// Given an array of N integers and Q queries. Initially, all the elements of the array have value 0.

// In each query 4 integers A, D, L, R is given, which means perform AP addition

// Arr[L]+=A

// Arr[L+1]+=A+D

// Arr[L+2]+=A+2D

// Arr[L+3]+=A+3D

// .

// .

// .

// .

// Arr[R]+=A+(R-L)*D.

// After performing all the operations. Print the final array % 10^9+7.


// Input Format

// The first line contains two space-separated integers N, Q where 1<=N<=10^6, 1<=Q<=10^6.

// Next Q lines contain four space-separated integers A, D, L, R where 0<=A,D<=10^4, 1<=L<=R<=N.


// Output Format

// Print the N space-separated integer representing the final array %10^9+7.


// Sample Input 1

// 5 5
// 1 3 1 5
// 2 4 2 2
// 5 6 3 5
// 6 9 5 5
// 1 4 2 4

// Sample Output 1

// 1 7 17 30 36 
