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




ll n,k;
vector<ll>a,b;

bool check(long double mid)
{
    //sig a[i]-x*b[i]>=0
    long double s=0;
    priority_queue<long double,vector<long double>,greater<long double>>pq;
    fi(i,0,n)
    {
        pq.push(a[i]-mid*b[i]);
        if(pq.size()>k)pq.pop();
    }
    while(!pq.empty())
    {
        s+=pq.top();
        pq.pop();
    }
    return s>=0;
}

void solve()
{
    cin>>n>>k;
    a.resize(n);
    b.resize(n);
    scarr(a);
    scarr(b);
    long double lo=0,hi=1e9,ans;
    // fi(i,0,n) hi+=a[i];

    while(abs(lo-hi)>1e-9)
    {
        long double mid=(lo+hi)/2;
        if(check(mid))
        {
            lo=mid;
            ans=mid;
        }
        else
        {
            hi=mid;
        }
    }
    // pr(ans);
    cout<<fixed<<setprecision(6)<<ans;
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

// Given two arrays A and B of size N and an integer K. You have to select K indexes i1,i2,i3....iK such that 

// (A[i1]+A[i2]+A[i3]+……+A[iK]) / (B[i1]+B[i2]+B[i3]+……+B[iK]) is maximum.


// Input Format

// The first line contains T, the number of test cases (1<=T<=10000).

// The first line contains an integer N, K where 1<=N<=10^4, 1<=K<=N.

// Next line contains N space-separated integers (1<=Ai<=1e4).

// Next line contains N space-separated integers (1<=Bi<=1e4).

// Sum of N across all test cases<=10^5.


// Output Format

// For each test case print the maximum possible value of (A[i1]+A[i2]+A[i3]+……+A[iK]) / (B[i1]+B[i2]+B[i3]+……+B[iK]). You have to print the result round off to 6 decimal places.


// Sample Input 1

// 3
// 3 2
// 10 9 7
// 3 5 4
// 8 3
// 4 4 2 1 5 3 2 5
// 2 2 2 5 3 5 2 3
// 1 1
// 1 
// 1

// Sample Output 1

// 2.428571
// 1.857143
// 1.000000

// Note

// 1st test case:
// Select index → [1,3], result = 17/7.
