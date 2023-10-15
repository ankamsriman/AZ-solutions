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
    vt(a,n);
    scarr(a);

    ll lo=0,hi=n-1,ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(a[0]<=a[mid])
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
            ans=mid;
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

// Given a rotated sorted array. Find the index of the minimum element in the array.

// All the elements are distinct.

 


// Input Format

// The first line contains T, the number of test cases (1<=T<=10000).

// The first line contains an integer N where 1<=N<=10^5.

// The second line contains N space-separated integers A1,A2....AN where -1e9<=Ai<=1e9.

// Sum of N over all test cases ≤10^6.


// Output Format

// For each test case print the index of the minimum element in the array.

// 0-indexed.


// Sample Input 1

// 5
// 5
// 3 4 5 1 2
// 5
// 4 5 1 2 3
// 5
// 5 1 2 3 4
// 5
// 1 2 3 4 5
// 5
// 2 3 4 5 1

// Sample Output 1

// 3
// 2
// 1
// 0
// 4
