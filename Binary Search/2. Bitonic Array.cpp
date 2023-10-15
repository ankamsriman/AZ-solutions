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

vector<ll>a;
bool check1(ll x)
{
    return a[x]<a[x+1];
}
ll k;
bool check2(ll x)
{
    return a[x]<k;
}

void solve()
{

    //star;
    ll n,q;
    cin>>n>>q;
    a.resize(n);
    fi(i,0,n)
    {
        cin>>a[i];
    }
    ll lo=0,hi=n-1,id=n-1;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check1(mid))
        {
            lo=mid+1;
        }
        else
        {
            id=mid;
            hi=mid-1;
        }
    }
    while(q--)
    {
        cin>>k;
        ll lo=0,hi=id,ans=-1;
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            if(a[mid]==k)
            {
                cout<<mid+1<<" ";
                break;
            }
            else if(check2(mid))
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        lo=id+1,hi=n-1,ans=-1;
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            if(a[mid]==k)
            {
                cout<<mid+1<<" ";
                break;
            }
            else if(check2(mid))
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        
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
    // kpp();
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

// Given a bitonic array A consisting of N integers and an integer Q. In each query, you will be given an integer K, find the positions of K in A. Integer K exists in A.

// Bitonic array - A bitonic sequence is a sequence with A[1]<A[2]<A[3]....A[k]>A[k+1]>A[k+2]....>A[N] for some 1<=K≤N. 


// Input Format

// The first line contains T, the number of test cases (1<=T<=10000).

// The first line contains two space separated-integer N, Q where 1<=N<=10^5, 1<=Q<=10^6.

// The second line contains N space-separated integers A1,A2....AN where -1e9<=Ai<=1e9.

// Next Q lines contains an integer K, -1e9<=K<=1e9.

// Sum of N, Q across all test case ≤10^6


// Output Format

// For each test case print the positions of K in A in sorted order in a new line.

// Positions are 1-indexed.


// Sample Input 1

// 1
// 6 4
// 1 2 5 3 2 1
// 1
// 2
// 5
// 3

// Sample Output 1

// 1 6
// 2 5
// 3
// 4
