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
ll k;
bool check(ll mid)
{
    ll c=0;
    fi(i,0,mid)
    {
        if(a[i]==0)c++;
    }
    if(c<=k) return true;
    fi(i,mid,a.size())
    {
        if(a[i]==0)c++;
        if(a[i-mid]==0)c--;
        if(c<=k) return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin>>n>>k;
    a.resize(n);
    scarr(a);
    // prr(a);
    ll lo=0,hi=n,ans=n;

    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check(mid))
        {
            lo =mid+1;
            ans=mid;
        }
        else
        {
            hi=mid-1;
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

// Given a binary array of length N. The score of an array is the length of the longest continuous subsegment consisting of only one.

// Find the maximum score possible if you can change at most K elements of the array.


// Input Format

// The first line contains an integer T, the number of test cases.
// The first line of each test case contains two space-separated integer N, K where 
// The next line contains N space-separated integers which are either 0 or 1.


// Output Format

// For each test case print the maximum score possible if you can change at most K elements of the array in a new line.


// Constraints

// 1 ≤ T ≤ 104
// 1 ≤ N ≤ 105
// 0 ≤ K ≤ N
// Sum of N across all test cases ≤ 106.


// Sample Input 1

// 5
// 10 2
// 1 0 1 1 0 1 1 0 0 1
// 10 1
// 1 1 0 1 0 0 0 1 0 0
// 10 3
// 1 0 0 1 1 0 1 1 0 1
// 10 3
// 1 1 1 0 0 0 1 1 1 1
// 10 3
// 1 1 0 0 1 1 0 0 1 1

// Sample Output 1

// 7
// 4
// 8
// 10
// 7
 
