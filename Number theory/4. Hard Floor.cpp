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

ll power(ll a,ll b)
{
    a%=mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
        }
        b/=2;
        a=(a*a)%mod;
    }
    return ans;
}

void solve()
{

    //star;
    ll n,m;
    cin>>n>>m;
    
    ll ans=0;


    for(ll i=1,r;i<=n;i=r+1)
    {
        //cout<<"*";
        r=(n)/(n/i);
        ll l=i;
        ll val=(n/i)%mod;
        if(val<0)val+=mod;
        ans=(ans+power(val,m)*((r-l+1)%mod)%mod)%mod;

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

    //facc();

    IOS;
    //cout<<"*";
    ll t=1;
    //cin >> t; 
    //getline(cin,s);
    while (t--)
    {

        //q++;

        solve();
    }
    return 0 ;
}

// Hard Floor

// Time-Limit: 3 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// Your task is to find the answer to the following sum.



// Input Format

// The only line of input contains two space-separated integers n and m.


// Output Format

// Print the answer on a new line.


// Constraints

// 1 ≤ n ≤ 1012
// 1 ≤ m ≤ 109


// Sample Input 1

// 4 2

// Sample Output 1

// 22

// Sample Input 2

// 100000000000 100000000

// Sample Output 2

// 728180943
