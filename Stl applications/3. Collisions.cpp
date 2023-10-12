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
    ll n,m;
    cin>>n>>m;
    vt(xi,n);
    vt(ui,n);
    vt(yi,n);
    vt(vi,n);
    multiset<ll>ms1,ms2;
    fi(i,0,n)
    {
        // cin>>xi[i]>>ui[i];
        ll x,y;
        cin>>x>>y;
        ms1.insert(x*y);
    }
    fi(i,0,m)
    {
        // cin>>xi[i]>>ui[i];
        ll x,y;
        cin>>x>>y;
        ms2.insert(x*y);
    }
    ll ans=0;
    for(auto x:ms1)
    {
        if(ms2.find(x)!=ms2.end())
        {
            ms2.erase(ms2.find(x));
            ans++;
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

// There are N balls on the X-axis and M balls on the Y-axis. At the time, t=0, each ball on X-axis is thrown parallel to the Y-axis in the positive Y direction. Similarly, each ball on Y-axis is thrown parallel to the X-axis in the positive X direction. At any time, if two balls collide, they disappear. A collision can only happen between the ball thrown from X-axis and the ball thrown from Y-axis. No two balls from X-axis or Y-axis can collide. A ball can take part in at max one collision. You have to find the total number of collisions. 


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains two space-separated integers N and M - the number of balls on the X-axis and Y-axis respectively.
// For each test case, N lines follow. The i-th of the line contains two space-separated integers Xi and Ui, the position and speed of the i-th ball respectively.
// For each test case, M lines follow. The i-th of the line contains two space-separated integers Yi and Vi, the position and speed of the i-th ball respectively.


// Output Format

// For each test case, print the number of collisions on a separate line.


// Constraints

// 1≤ T ≤ 100
// 1≤ N, M ≤ 105
// 1≤ Xi, Ui, Yi, Vi ≤ 109


// Sample Input 1

// 3
// 1 1 
// 1 3 
// 3 1 
// 2 1 
// 1 4 
// 1 3 
// 4 1 
// 2 3 
// 1 2 
// 2 3 
// 1 6 
// 2 1 
// 6 1

// Sample Output 1

// 1
// 1
// 2

// Note

// In the first test case of the example, at t=1 the balls collide. The number of collisions is 1.

// In the second test case of the example, at t=1, the first ball on X-axis and the first ball on Y-axis collide and disappear. The number of collisions is 1.

// In the third test case of the example, at t=⅓, the second ball on X-axis and the first ball on Y-axis collide and disappear. At t=1, the first ball on X-axis and the second ball on Y-axis collide and disappear. The number of collisions is 2.
