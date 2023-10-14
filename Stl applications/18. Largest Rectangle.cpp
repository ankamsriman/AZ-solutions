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



void solve()
{
    ll n;
    cin>>n;
    vt(a,n);
    scarr(a);
    vt(l,n);
    vt(r,n);
    // vt(ans,n);
    stack<ll>s;
    fi(i,0,n)
    {
        while(!s.empty()&&a[s.top()]>=a[i])
        {
            s.pop();
        }
        if(s.empty())l[i]=-1;
        else l[i]=s.top();
        s.push(i);
    }
    while(!s.empty())s.pop();
    fd(i,n-1,0)
    {
        while(!s.empty()&&a[s.top()]>=a[i])
        {
            s.pop();
        }
        if(s.empty())r[i]=n;
        else r[i]=s.top();
        s.push(i);
    }
    ll ans=-1e18;
    // prr(l);
    // nl;
    fi(i,0,n)
    {
        ll x=r[i]-l[i]-1;
        ans=max(ans,a[i]*(x));
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

// You have to find the largest rectangular area possible in a given histogram where the largest rectangle can be made of contiguous bars. Assume that all bars have the same width and the width is 1 unit.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains one integer N - the length of the array. 
// The second line of each test case contains N space-separated integers, where Hi denotes the height of the ith bar.


// Output Format

// For each test case, print the largest area of the rectangle in the histogram.


// Constraints

// 1≤ T ≤ 100
// 1≤ N ≤ 105
// 1≤ Hi ≤ 105


// Sample Input 1

// 3
// 3
// 2 1 2
// 4
// 1 2 3 4
// 4
// 5 4 1 2

// Sample Output 1

// 3
// 6
// 8

// Note

// For the first test case, take all the histograms to get area as 3*1 = 3


// For the second test case, take the last two histograms to get area as 2*3 = 6


// For the third test case, take the first two histograms to get area as 2*4 = 8

