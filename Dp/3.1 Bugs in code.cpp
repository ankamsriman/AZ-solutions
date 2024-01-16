// Enter your code below 
// Enter your code below 
//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i,a,b) for(long long  i = a; i<b; i++)
#define fd(i,a,b) for(long long  i = a; i>=b; i--)
#define scarr(a) for(long long  i=0;i<a.size();i++) cin>>a[i]
#define parr(a) for(long long  i=0;i<a.size();i++) cout<<a[i]<<" "
#define ll long long
#define ull unsigned long long int
//transform(s.begin(), s.end(), s.begin(), ::tolower);
// #define int long long int
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
#define ii pair<ll,ll>
// using state 



// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree <int, null_type, less<int>, rb_tree_tag,
// tree_order_statistics_node_update> ordered_set;


ll mod = 1000000007;
// ll is_prime[1000100];
// ll sp[1000100]; 
// const ll mod =  1e9 + 7;
// const ll N =  1000100;
// store 2d to 2d arr

ll dp[505][505][505];
ll n,m,b;
vector<ll>a;

ll rec(ll l1,ll l2,ll b)
{
    if(l2>m||b<0) return 0;
    if(l1==n)
    {
        if(l2==m) return 1;
        else return 0;
    }
    if(dp[l1][l2][b]!=-1)return dp[l1][l2][b];
    ll ans=rec(l1,l2+1,b-a[l1])+rec(l1+1,l2,b);
    return dp[l1][l2][b]=ans%mod;
}
void solve()
{
    cin>>n>>m>>b;
    a.resize(n);
    scarr(a);
    memset(dp,-1,sizeof(dp));
    pr(rec(0,0,b));
}
    
    
//string s;

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
    // cin >> t; 
    //getline(cin,s);

    memset(dp,-1,sizeof(dp));
    while (t--)
    {
        // q++;

        solve();
    }
    return 0 ;
}

// Bugs in code

// Time-Limit: 2 sec Score: 0.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// There are N people working on a project, where they have to write exactly M lines of code. The i-th person makes Ai bugs in every line of code that he writes. The first person writes X1 lines of code, the second person writes X2 lines of code, and so on, such that X1 + X2 + ….+ Xn = M. You have to find the number of distinct plans (X1, X2,….Xn, where Xi≥0 and sum of Xi = M) which have at most B bugs. Since the answer might be large, print it modulo 109+7.


// Input Format

// The first line contains four space-separated integers N, M, B.

// The second line contains N space-separated integers.


// Output Format

// Print the number of distinct plans which have exactly B bugs. Since the answer might be large, print it modulo 109+7.


// Constraints

// 1≤ N, M ≤ 500

// 0≤ B ≤ 500

// 0≤ Ai ≤ 500


// Sample Input 1

// 2 3 3
// 1 2

// Sample Output 1

// 1

// Sample Input 2

// 2 3 4
// 1 2

// Sample Output 2

// 2

// Sample Input 3

// 2 2 4
// 1 2

// Sample Output 3

// 3

// Note

// For the first test case, there is only one case i.e. when the first programmer writes the whole code because then all 3 lines of code will have 3 bugs.

// For the second test case, there can be two plans: first programmer writes 2 lines and second programmer writes 1 lines(Number of bugs would be 4), and first programmer writes 3 lines and second programmer does not write any line of code(Number of bugs would be 3 ≤ 4).

// For the third test case, there can be three plans: first programmer writes 2 lines and second programmer writes 0 lines(Number of bugs would be 3 ≤ 4), and first programmer writes 1 line and second programmer writes 1 line(Number of bugs would be 3 ≤ 4) and first programmer writes 0 lines and second programmer writes 2 lines(Number of bugs would be 4 ≤ 4)
