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
    vector<ll>a(n+2);
    fi(i,1,n+1)
    {
        cin>>a[i];
    }
    a[0]=2e9;
    a[n+1]=2e9;
    vector<pair<ll,ll>>v;
    fi(i,1,n+1)
    {
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    vector<ll>rat(n+2);
    ll ans=0;
    for(auto x:v)
    {
        ll def=1;
        ll id=x.second;
        if(rat[id-1]<x.first)
        {
            def=max(def,rat[id-1]+1);
        }
        if(rat[id+1]<x.first)
        {
            def=max(def,rat[id+1]+1);
        }
        rat[id]=def;
        ans+=def;
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
// Description

// There are N problems in a contest and the ith problem has a rating Ri. They are posted in an order top to bottom as given in input.

// Each problem requires at least 1 minute to solve. You also know that if a problem P has a higher rating than a problem just above or just below it, then P must take strictly more time to solve than that problem. 

// Find the minimum possible time required to solve all the problems.

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains N.

// Second line contains N integers, Ri for i from 1 to N.

 


// Output Format

// For each test case output one integer: The minimum possible time in which all problems could be solved.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 1 ≤ Ri ≤ 109


// Sample Input 1

// 1

// 3

// 2 1 3


// Sample Output 1

// 5


// Note

// Time for Problem 1 : 2 minutes

// Time for Problem 2 : 1 minutes

// Time for Problem 3 : 2 minutes

// This satisfies the restriction and yields minimum time which is 2+1+2=5
