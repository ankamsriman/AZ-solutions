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
    sort(a.begin(),a.end());
    ll ans=0;
    map<ll,ll>mp;
    fi(i,0,n)
    {
        ll nor=1,inv=1;
        for(ll j=2;j*j<=a[i];j++)
        {
            ll c=0;
            while(a[i]%j==0)
            {
                c++;
                a[i]/=j;
            }
            c%=3;
            fi(k,0,c)nor*=j;
            if(c)fi(k,0,3-c)inv*=j;

        }
        if(a[i]>1)
        {
            nor*=a[i];
            inv*=a[i]*a[i];
        }
        ans+=mp[inv];
        mp[nor]++;
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

// You have given n positive integers A1, A2, …, An. Your task is to find the number of pairs (i, j) such that Ai * Aj is a cube number.


// Input Format

// The first line of input contains n - the size of the array.
// The second line of input contains n space-separated integers A1, A2, …, An.


// Output Format

// Print the answer on a new line.


// Constraints

// 1 ≤ n ≤ 105
// 1 ≤ Ai ≤ 106


// Sample Input 1

// 5
// 1 2 4 8 27

// Sample Output 1

// 4

// Note

// The pairs are (1, 8), (2, 4), (1, 27), (8, 27).
