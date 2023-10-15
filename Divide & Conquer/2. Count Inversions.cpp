// Enter your code below 
// Enter your code below 
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

ll ans;
void msort(ll a[],ll l,ll r)
{
    if(l>=r) return;
    ll mid=(l+r)/2;
    msort(a,l,mid);
    msort(a,mid+1,r);

    ll i=0,j=0,k=l;
    vector<ll>x,y;
    fi(i,l,mid+1)x.push_back(a[i]);
    fi(i,mid+1,r+1)y.push_back(a[i]);
    while(i<x.size()&&j<y.size())
    {
        if(x[i]<=y[j])
        {
            a[k++]=x[i++];
        }
        else
        {
            ans+=((x.size())-i);
            a[k++]=y[j++];
        }
    }
    while(i<x.size())
    {
        a[k++]=x[i++];
    }
    while(j<y.size())
    {
        a[k++]=y[j++];
    }

}

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ans=0;
    fi(i,0,n)cin>>a[i];
    msort(a,0,n-1);
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

// You have given an array A of N elements. An Inversion Count of the array is defined as the number of pairs (i, j) such that Ai > Aj and i < j.
// Find the Inversion Count in A.


// Input Format

// The first line of input contains one integer T (1 ≤ T ≤ 105) — the number of test cases. Then T test cases follow.
// The first line of each test case contains N (2 ≤ N ≤ 105), the number of elements in an array A.
// The second line contains N space-separated integers A1, A2, …, AN, (0 ≤ Ai ≤ 109)
// It is guaranteed that the sum of N over all test cases does not exceed 5 x 105.


// Output Format

// For each test case, print the answer on a new line denoting the Inversion Count.


// Sample Input 1

// 3

// 4

// 8 4 2 1

// 3

// 3 1 2

// 6

// 1 2 3 4 5 5


// Sample Output 1

// 6

// 2

// 0


// Note

// Explanation 1:
// Inversion Pairs are (8, 4), (8, 2), (8, 1), (4, 2), (4, 1), (2, 1).

// Explanation 2:
// Inversion Pairs are (3, 1), (3, 2).

// Explanation 3:
// There are no Inversion Pairs. And hence, 0 Inversion Count.
