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
ll n,k;
bool check(ll mid)
{
    ll c=1,x=0;
    fi(i,0,n)
    {
        if(x+a[i]<=mid)
        {
            x+=a[i];
        }
        else
        {
            x=a[i];
            c++;
        }
    }
    return c<=k;
}

void solve()
{
    cin>>n>>k;
    a.resize(n);
    scarr(a);
    
    // prr(a);

    ll lo=0,hi=0,ans;
    fi(i,0,n)
    {
        lo=max(lo,a[i]);
        hi+=a[i];
    }
    ans=hi;
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

// We have to paint n boards of length {A1, A2…An}. There are k painters available and each takes 1 unit time to paint 1 unit of the board. The problem is to find the minimum time to get
// this job done under the constraints that any painter will only paint continuous sections of boards.

// Note:

// 2 painters cannot share a board to paint. A board cannot be painted partially by one painter, and partially by another.
// A painter will only paint contiguous boards. If a painter paints board 1 and 3 but not 2 is invalid.

// Input Format

// The first line contains a single integer T (1 ≤ T ≤ 100000) - the number of test cases.

// The first line of each test case contains 2 space-separated integers N, K (1 ≤ N ≤ 100000, 1 ≤ K ≤ 100000) - the number of boards and the number of painters.

// The second line of each test case contains N space-separated integers (0 ≤ xi ≤ 10^9) - the length of the boards.

// Sum of N across all test cases ≤ 10^6.


// Output Format

// For each test case print the minimum time required to complete the painting in a new line.


// Sample Output 1

// 5
// 5 2
// 1 2 3 4 5
// 5 3
// 2 5 7 2 5
// 5 1
// 1 2 3 4 5
// 5 5
// 1 2 3 4 5
// 5 4
// 1 7 2 3 5

// Sample Input 2

// 9
// 7
// 15
// 5
// 7
