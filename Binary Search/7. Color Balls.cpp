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
ll fac[200000+2];

const ll mod =  1e9 + 7;
const ll N =  1000100;

vector<ll>a;
map<ll,ll>mp;
ll n,k;
bool check(ll mid)
{
    ll use=0;
    for(auto x:mp)
    {
        use+=min(mid,x.second);
    }
    return mid*k<=use;
}
void solve()
{

    //star;
    cin>>n>>k;
    a.resize(n);
    fi(i,0,n) cin>>a[i];

    fi(i,0,n)
    {
        mp[a[i]]++;
    }

    ll lo=0,hi=n/k,ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check(mid))
        {
            lo=mid+1;
            ans=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans;
    nl;
    mp.clear();
    
}
//cout<<fixed<<setprecision(7);

string s;
signed main()
{
    //py;
    //fun 

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //facc();

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
// Color Balls

// Time-Limit: 2 sec Score: 100/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You are given N balls and an integer K. The color of each ball is given in an array A. A basket is filled if it contains at least K balls of different colors. Find the maximum number of filled baskets you can get if you optimally put the balls in the baskets.


// Input Format

// The first line contains T, the number of test cases (1<=T<=100000).

// The first line contains three space-separated integers N, K where 1<=N<=10^5, 1<=K<=N.

// Next line contains N space-separated integers (0<=Ai<=1e9).

// Sum of N across all test cases <=10^6.


// Output Format

// For each test case output the maximum number of filled baskets in a new line. 


// Sample Input 1

// 3
// 5 5
// 1 2 3 4 5
// 5 2
// 1 2 3 4 5
// 6 3
// 1 2 2 1 3 3

// Sample Output 1

// 1
// 2
// 2

// Note

// 1st test case:
// 1st basket -> {1,2,3,4,5}

// 2nd test case:
// 1st basket -> {1,2,3}
// 2nd basket -> {4,5}

// 3rd test case:
// 1st basket -> {1,2,3}
// 2nd basket -> {1,2,3} 
