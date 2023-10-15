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



void solve()
{
    ll n,m,q;
    cin>>n>>m>>q;
    vt(a,n);
    fi(i,0,n)cin>>a[i];

    vt(p,n);
    fi(i,0,n)p[i]=0;
    fi(i,0,m)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        p[x]+=1;
        if(y+1<n)p[y+1]-=1;
    }
    fi(i,1,n)
    {
        p[i]+=p[i-1];
    }
    vector<pair<ll,ll>>v;

    fi(i,0,n)
    {
        v.push_back({a[i],p[i]});
    }
    sort(v.begin(),v.end());
    vector<ll>pp;
    // pp.push_back(0);
    fi(i,0,n)
    {
        pp.push_back(v[i].second);
    }
    fi(i,1,n)
    {
        pp[i]+=pp[i-1];
    }
    while(q--)
    {
        ll x;
        cin>>x;
        auto z=lower_bound(pp.begin(),pp.end(),x)-pp.begin();
        // cout<<z;
        if(z<v.size())cout<<v[z].f<<" ";
        else cout<<"-1 ";

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

// You have been given an array A of N integers and M ranges. ith range is defined by the two integers li and ri, li≤ri.

// Initially, array S is empty. For range i, add elements A[li],A[li+1]…..A[ri] in the array S. After adding all the elements in each of the range, sort the elements of S in ascending order.

// You need to answer Q queries. Each query consists of a number K > 0. You have to find the Kth smallest element in S, i.e., the element at Kth position in sorted S.

// It may be possible that the same element presents multiple times in S.


// Input Format

// The first line of the input contains a single integer T - the number of test cases(1 ≤ T ≤ 10). Then T test cases follow.

// The first line of each test case contains three integers N, M, and Q, (1 ≤ N, M, Q ≤ 10^5).

// The second line contains N space-separated integers A1, A2,….,AN, the elements of the array A, (1≤Ai≤10^9).

// Next M lines contain two space-separated integers li and ri - ith range, (1 ≤ li ≤ ri ≤ N).

// The last line of a test case contains Q space-separated integers K1, K2,….,KQ, where Ki denotes the ith query. (1 ≤ Ki ≤1 0^18).


// Output Format

// For each test case, print Q space-separated integers, where ith number denotes the answer of ith query. If the Kth value doesn't exist for a particular query, print -1.


// Sample Input 1

// 2
// 3 3 4
// 1 3 2
// 1 3
// 2 3
// 1 1
// 1 2 5 8
// 4 2 3
// 1 5 4 3
// 1 4
// 1 3
// 1 5 7

// Sample Output 1

// 1 1 3 -1
// 1 4 5

// Note

// Test Case 1: Initially array S is empty.

// Add the 1st range -> S = {1,3,2}.

// Add the 2nd range -> S = {1,3,2,3,2}

// Add the 3rd range -> S = {1,3,2,3,2,1}

// After sorting the array, S = {1,1,2,2,3,3}

// For K = 8, the 8th element doesn't exist in the atta S. So the answer of the 4th query is -1.

// Test Case 2: Initially array S is empty.

// Add the 1st range -> S = {1,5,4,3}.

// Add the 2nd range -> S = {1,5,4,3,1,5,4}.

// After sorting the array, S = {1,1,3,4,4,5,5}.
