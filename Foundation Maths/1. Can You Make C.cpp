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

bool comp(pair<ll,ll>&x,pair<ll,ll>&y)
{
    return x.f+x.s>y.f+y.s;
}

void solve()
{
    ll A, B, C;
    cin >> A >> B >> C;
    ll G = __gcd(A, B);
    if(C % G == 0) cout << "Yes\n";
    else cout << "No\n";

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

// Let us see the following equation,

// Ax + By = C

// Given three positive integers A, B and C.

// You have to determine whether there exists at least one solution for some integers value of x and y where x, y may be negative or non-negative integers.


// Input Format

// The first line contains T (1 ≤ T ≤ 100000), the number of test cases.
// Each of the next T lines contains three positive integers A, B, C (1 ≤ A, B, C ≤ 109).


// Output Format

// Print "Yes" (without quotes) if at least one solution exits, otherwise print "No" (without quotes).


// Sample Input 1

// 2

// 6 9 33

// 2 8 1


// Sample Output 1

// Yes

// No


// Note

// Explanation 1:
// For x = 1, y = 3, 6 * 1 + 9 * 3 = 33. The equation is satisfied for (1, 3).

// Explanation 2:
// No solution exists in this case. Observe that A and B are even numbers. So Ax + By is always even number, irrespective of the value of x and y.
// But C is an odd number. So no solution exists in this case.
