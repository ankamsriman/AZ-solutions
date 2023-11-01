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
    vector<ll>a(n);
    scarr(a);
    ll sum=0,mx=0;
    fi(i,0,n)
    {
        sum+=a[i];
        mx=max(mx,a[i]);
    }
    if(mx>=sum-mx)
    {
        cout<<mx-(sum-mx);
    }
    else
    {
        if((mx&1)!=((sum-mx)&1))
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    
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
// Selling cookies

// Time-Limit: 1 sec Score: 100/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// A shop makes n types of cookies. Number of cookies of type i is Ci

// The shop only sells cookies as a pair. Moreover the two cookies in a pair must be of different types.

// Your job is to sell as many pairs as possible and find the minimum number of cookies that remain at the end.

 

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n.

// The next line contains n integers, Ci for i from 1 to n.

 


// Output Format

// For each test case output one integer: Remaining cookies.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 1 ≤ Ci ≤ 109


// Sample Input 1

// 1
// 3
// 2 1 3

// Sample Output 1

// 0

// Sample Input 2

// 1
// 3
// 3 4 5

// Sample Output 2

// 0

// Note

// Explanation 1:
// We can make the following 3 pairs of cookie types : (1,3), (1,3), (2,3) resulting in 0 remaining cookies.

// Explanation 2:
// Let types of cookies be 1, 2, 3 with count 3, 4, 5 respectively. Pairs: (1, 3), (1, 2), (1, 3), (2, 3), (2, 3), (2, 3).
// 0 cookies left behind.
