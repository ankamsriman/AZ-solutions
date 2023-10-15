
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
    pr(ans%2);
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

// You all know the Bubble Sort! The classical sorting algorithm.

// In this problem, you have to find the parity of the number of swaps that will perform in the standard bubble sort algorithm on the given input array.

// For more details about Bubble Sort refer this: https://en.wikipedia.org/wiki/Bubble_sort


// Input Format

// The first line of input contains one integer T (1 ≤ T ≤ 105) — the number of test cases. Then T test cases follow.
// The first line of each test case contains N (2 ≤ N ≤ 105), the number of elements in an array A.
// The second line contains N space-separated integers A1, A2, ..., AN, (0 ≤ Ai ≤ 109).
// It is guaranteed that the sum of N does not exceed 5 x 105.


// Output Format

// For each test case, print the answer on a new line denoting the parity of number swaps in the Bubble Sort.


// Sample Input 1

// 3

// 4

// 8 4 2 1

// 3

// 2 1 3

// 6

// 1 2 3 4 5 5

// Enter your code below 
// Enter your code below 
// Sample Output 1

// 0

// 1

// 0


// Note

// Explanation 1:

// First Iteration	4 2 1 8	3 swaps
// Second Iteration	 2 1 4 8 	2 swaps
// Third Iteration 	1 2 4 8 	1 swap
// Total Swaps: 6, so the parity is 0.

 

// Explanation 2:

// First Iteration	1 2 3	1 swap
// Total Swaps: 1, so the parity is 1.

 

// Explanation 3:

// The given array is already sorted, so 0 swaps and hence, 0 parity.
