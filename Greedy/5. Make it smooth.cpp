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
    ll op=0,sum=0;
    fi(i,0,n-1)
    {
        if(a[i]>a[i+1])
        {
            op+=a[i]-a[i+1];
        }
    }
    cout<<op;
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
// Make it smooth

// Time-Limit: 1 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// You are given an array A of size N. In one operation you can select any non-decreasing subarray and increment all the elements in the subarray by one. Your goal is to make the whole array non-decreasing in minimum operations.

 


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n.

// Next line contains n integers of array A.

 


// Output Format

// For each test case print a single integer in a new line: Minimum number of operations.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 0 ≤ Ai ≤ 109


// Sample Input 1

// 2

// 4

// 5 3 2 5

// 3

// 1 1 1


// Sample Output 1

// 3

// 0
