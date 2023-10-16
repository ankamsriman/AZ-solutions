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
ll s;
bool check(ll mid)
{
    ll sd=0;
    ll d=mid;

    while(d)
    {
        sd+=d%10;
        d/=10;
    }
    return mid-sd>=s;
}

void solve()
{
    ll n;
    cin>>n>>s;
    ll lo=1,hi=n,ans=-1;

    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check(mid))
        {
            hi=mid-1;
            ans=mid;
        }
        else
        {
            lo =mid+1;   
        }
    }
    if(ans==-1)ans=0;
    else ans=n-ans+1;
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

// Description

// You are given two integers N and S. Find the number of positive integers X less than equal to N, such that the difference between X and the sum of its digits (in decimal representation) is not less than S.


// Input Format

// The first line of input contains one integer T (1 ≤ T ≤ 104) — the number of test cases. Then T test cases follow.

// The first line of each test case contains two space-separated integer N, S where 1<=N<=10^18, 0<=S<=10^18.


// Output Format

// For each test case print the number of positive integers X in a new line.


// Sample Input 1

// 10
// 5 4
// 100 5
// 20 3
// 40 19
// 32 15
// 69 12
// 1000000000000000 0
// 1000000000000000000 10000000
// 9999999999999 9999999999882
// 13465751690089037 981448507916936

// Sample Output 1

// 0
// 91
// 11
// 11
// 13
// 50
// 1000000000000000
// 999999999989999991
// 10
// 12484303182172038
