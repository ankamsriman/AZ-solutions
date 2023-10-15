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
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>>a(n+2,vector<ll>(m+2,0));
    while(q--)
    {
        ll x1,y1,x2,y2,k;
        cin>>x1>>y1>>x2>>y2>>k;
        a[x1][y1]+=k;
        a[x2+1][y1]-=k;
        a[x1][y2+1]-=k;
        a[x2+1][y2+1]+=k;
    }
    ll mx=-1e18,cnt=0;
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            mx=max(mx,a[i][j]);
        }
    }
    fi(i,1,n+1)
    {
        fi(j,1,m+1)
        {
            if(mx==a[i][j])cnt++;
        }
    }

    cout<<mx<<" "<<cnt;
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

// Given a 2d-array of dimension N*M and Q queries. In each query five integers x1, y1, x2, y2, C is given, you have to increase the value of each cell in the submatrix with (x1,y1) be the leftmost corner and (x2,y2) be the rightmost corner by C. Initially the value of all the cell of the 2d-array is 0.

// After all the query is performed, print the maximum value present in the 2d-array and the number of the cell with the maximum value.


// Input Format

// The first line contains three space-separated integers N, M, Q where 1<=N, M<=10^3, 1<=Q<=10^6.

// The next Q lines contains five space separated integers x1, y1, x2, y2, C where 1<=x1<=x2<=N, 1<=y1<=y2<=M, -10^9<=C<=10^9.


// Output Format

// After all the query is performed, print 2 space-separated integers representing the maximum value present in the 2d-array and the number of the cell with the maximum value.


// Sample Input 1

// 5 5 5
// 1 1 2 2 -8
// 1 2 3 4 9
// 2 3 3 3 -2
// 4 4 4 4 -4
// 2 3 2 4 0

// Sample Output 1

// 9 5
