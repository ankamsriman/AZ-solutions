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
    vt(prefix,n);vt(sufix,n);
    prefix[0]=a[0];sufix[n-1]=a[n-1];
    fi(i,1,n)
    {
        prefix[i]=max(prefix[i-1],a[i]);
    }
    fd(i,n-2,0)
    {
        sufix[i]=max(sufix[i+1],a[i]);
    }
    ll ans=0;
    fi(i,0,n)
    {
        ans+=min(prefix[i],sufix[i])-a[i];
    }
    pr(ans);
    // prr(a);
    // nl;

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

// You are given an array A, where each ith index represents an elevation on that index. The width of each bar is 1. You have to compute how much water it is able to trap after raining.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains one integer N - the length of the array. 
// The second line of each test case contains N space-separated integers, where Ai denotes the height of the ith bar.


// Output Format

// For each test case, you have to print how much water it is able to trap after raining.


// Constraints

// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 0 ≤ Ai ≤ 105


// Sample Input 1

// 3
// 3
// 3 0 2
// 5
// 2 0 0 4 3
// 5
// 1 2 3 1 5

// Sample Output 1

// 2
// 4
// 2

// Note

// For the first test case:


// For the second test case:


// For the third test case:

