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
    ll n,k;
    cin>>n>>k;
    vt(a,n);
    scarr(a);
    multiset<ll>ms;
    fi(i,0,k)
    {
        ms.insert(a[i]);
    }
    fi(i,k-1,n)
    {
        auto x=ms.end();
        x--;
        cout<<*x<<" ";
        ms.erase(ms.find(a[i-(k-1)]));
        ms.insert(a[i+1]);
    }
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

// You have given an array A of size N and a positive integer K (≤ N). A1, A2, ..., AN are the elements of the array.
// Let Bi = max (Ai, Ai+1, ..., Ai+K-1), for 1 ≤ i ≤ N - K + 1. 
// Find Bi values for all is such that 1 ≤ i ≤ N - K + 1.


// Input Format

// The first line contains T, the number of test cases. 
// The first line of each test case contains N, the number of integers in an array A and K.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.


// Output Format

// For each test case, print array B as B1 B2 ... BN-K+1 in a new line.


// Constraints

// 1 ≤ T ≤ 100000
// 1 ≤ K ≤ N ≤ 100000
// -109 ≤ Ai ≤ 109
// Sum of N over all test cases ≤ 5 * 105.


// Sample Input 1

// 4

// 9 3

// 1 2 3 1 4 5 2 3 6

// 5 5

// 1 -4 3 -3 -9

// 4 1

// -3 1 -8 3

// 5 2

// -1 -1 -1 -1 -1


// Sample Output 1

// 3 3 4 5 5 5 6

// 3

// -3 1 -8 3

// -1 -1 -1 -1


// Note

// Explanation 1:
// B1 = max(1, 2, 3) = 3
// B2 = max(2, 3, 1) = 3
// B3 = max(3, 1, 4) = 4
// B4 = max(1, 4, 5) = 5
// B5 = max(4, 5, 2) = 5
// B6 = max(5, 2, 3) = 5
// B7 = max(2, 3, 6) = 6

// Explanation 2:
// B1 = max(1, -4, 3, -3, -9) = 3
