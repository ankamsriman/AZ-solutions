//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i,a,b) for(long long int i = a; i<b; i++)
#define fd(i,a,b) for(long long int i = a; i>=b; i--)
#define scarr(a) for(long long int i=0;i<a.size();i++) cin>>a[i]
#define parr(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define ll  long long int
#define ull unsigned long long int
//transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout<<"\n"
#define pr(x) cout<<x<<"\n"
#define prvt(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define star cout<<"*"
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define pr(x) cout<<x<<"\n"
#define f first
#define s second

// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree <int, null_type, less<int>, rb_tree_tag,
// tree_order_statistics_node_update> ordered_set;


//ll mod = 1000000007;
ll is_prime[1000100];
ll sp[1000100]; 


// ll q = 0;
ll fac[100000+2];

const ll mod =  1e9 + 7;
const ll N =  1000100;

ll fx=30;
vector<ll>j,k,l,p;
ll a,b,c,f=0;
map<ll,ll>mp;



void solve()
{
    //star;
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    fi(i,0,n)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    ll last=INT_MIN,ans=0;
    fi(i,0,n)
    {
        ll l=v[i].second;
        ll r=v[i].first;
        if(l>last)
        {
            ans++;
            last=r;
        }
    }
    cout<<ans;
    nl;
}
string s;
signed main()
{
    //py;
    //fun 

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //pow2();

    IOS;
    //cout<<"*";
    ll t=1;
    cin >> t; 
    //getline(cin,s);

    while (t--)
    {

        //q++;

        solve();
    }
    return 0 ;
}

// Destroying intervals

// Time-Limit: 1 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// There are n intervals. The ith interval covers range [li,ri]  including points l and r.

// You can destroy intervals by choosing some points. Suppose a point x is chosen, then any interval that covers x will be destroyed.

// Find the minimum number of points to be selected to destroy all intervals.

 

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n, the number of intervals.

// Each of n next lines contain two integers , li and ri .

 


// Output Format

// For each testcase print a single integer, minimum points required.


// Constraints

// T ≤ 20
// 0 ≤ n ≤ 105
// 0 ≤ li ≤ ri ≤ 109


// Sample Input 1

// 1
// 3
// 1 4
// 2 6
// 7 10

// Sample Output 1

// 2

// Note

// You can choose point 3 which destroys interval 1 & 2, and point 7 to destroy interval 3.


