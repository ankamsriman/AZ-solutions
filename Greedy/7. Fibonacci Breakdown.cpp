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
    ll k;
    cin>>k;
    ll fb[51];
    fb[0]=0;
    fb[1]=1;

    fi(i,2,51) fb[i]=fb[i-1]+fb[i-2];
    ll id=50,ans=0;
    while(k!=0&&id!=0)
    {
        if(fb[id]<=k)
        {
            k-=fb[id];
            ans++;
        }
        id--;
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
// Fibonacci Breakdown

// Time-Limit: 1 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// Given a number k, find the minimum number of fibonacci numbers

// whose sum is equal to k. You can use any of the fibonacci numbers  

// any number of times.

// Fibonacci Numbers:

// F(1) = 1

// F(2) = 1

// F(n) = F(n-1) + F(n-2) : for n>=3

 


// Input Format

// First line of input contains T, number of test cases.

// The only line of each test case contains an integer k.

 


// Output Format

// For each test case output one integer: The minimum number of fibonacci numbers needed.


// Constraints

// T ≤ 100

// 1 ≤ k ≤ 109

 


// Sample Input 1

// 1

// 7


// Sample Output 1

// 2


// Note

// 7 can be formed using 2 + 5, where 2, 5 are fibonacci numbers.
