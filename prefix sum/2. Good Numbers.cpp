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
    ll n,k,q;
    cin>>n>>k>>q;
    vt(a,1e6+2);
    fi(i,1,n+1)
    {
        ll l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    fi(i,1,a.size())
    {
        a[i]+=a[i-1];
    }
    fi(i,1,a.size())
    {
        if(a[i]>=k)a[i]=1;
        else a[i]=0;
    }
    fi(i,1,a.size())
    {
        a[i]+=a[i-1];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1];
        nl;
    }
    


}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t = 1;
    // cin >> t;
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

// There are N students and ith student likes all numbers in the range [li ,ri ], both inclusive. A number is good if it is liked by at least K students.

// You are even Q queries. Each query consists of two numbers L, R. You have to find how many numbers in the range [L,R] is good.


// Input Format

// The first line of input contains three integers, N, K (1 ≤ K ≤ N ≤ 1000000), and Q (1 ≤ Q ≤ 1000000).

// The next N lines contain two integers li and ri (1 ≤ li ≤ ri≤ 1000000), describing that the i-th student likes all the numbers [li,ri].

// The next Q lines contain L and R, (1 ≤ L ≤ R ≤ 1000000).


// Output Format

// For each query print how many numbers in the range [L,R] is good in a new line.


// Sample Input 1

// 10 3 10
// 1 5
// 2 7
// 3 9
// 1 5
// 3 8
// 4 10
// 7 10
// 8 8
// 5 5
// 6 7
// 1 5
// 3 8
// 4 9
// 3 10
// 2 6
// 3 9
// 7 7
// 5 5
// 8 8
// 3 7

// Sample Output 1

// 4
// 6
// 6
// 7
// 5
// 7
// 1
// 1
// 1
// 5
