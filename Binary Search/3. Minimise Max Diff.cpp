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
    fi(i,1,a.size())
    {
        ll d=a[i]-a[i-1];
        c+=(d+mid-1)/mid-1;
        // cout<<mid;
        // nl;
    }
    return c<=k;
}

void solve()
{
    ll n;
    cin>>n>>k;
    a.resize(n);
    scarr(a);
    // prr(a);
    ll lo=1,hi=1e9,ans=hi;

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

// You are given N distinct points on the number line in a sorted array A. You can place at most K more points on the Line (Integer coordinates only). You have to make the maximum separation between any two consecutive points in the final configuration as minimum as possible. Output this minimal value.  

// Note - You can place the points anywhere you like, but you cannot place more than one point at the same position on the line. 


// Input Format

// The first line contains an integer T, the number of test cases (1<=T<=10000).

// The first line of each test case contains two space-separated integers N, K, 2<=N<=10^5, 0<=K<=10^9.

// Next line contains N space-separated distinct integers (0<=Ai<=1e9).

// Sum of N across all test cases <= 10^6.


// Output Format

// For each test case output the minimum maximum separation between any two consecutive points possible in a new line.


// Sample Input 1

// 5
// 5 5
// 1 2 3 4 5
// 5 0
// 2 5 7 8 10
// 3 2
// 100 200 230
// 6 5
// 1 3 5 7 9 11
// 6 4
// 1 4 8 13 19 26

// Sample Output 1

// 1
// 3
// 34
// 1
// 4
 


// Note

// For the first test case - do not place any additional points or place points at 6,7.

// For the third test case - place the points at 133, 166. So final configuration = [100, 133, 166, 200, 230] and maximum difference between two consecutive numbers = 34.

// For fourth test case - place the points at 2, 4, 6, 8, 10. So final configuration = [1,2,3,4,5,6,7,8,9,10,11] and maximum difference between two consecutive numbers = 1.
