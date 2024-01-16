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


int n,m,k;
int grid[201][201];
ll dp[201][201][410];
int dx[]={1,0},dy[]={0,1};

bool check(int x,int y)
{
    if(x>=n||y>=m||x<0||y<0)
    {
        return 0;
    }
    return 1;
}
ll rec(int l1,int l2,int k)
{
    if(l1==n-1&&l2==m-1)
    {
        return 1;
    }
    if(dp[l1][l2][k]!=-1)
    {
        return dp[l1][l2][k];
    }
    ll ans=0;
    fi(i,0,2)
    {
        if(check(l1+dx[i],l2+dy[i]))
        {
            if(grid[l1+dx[i]][l2+dy[i]]==0)
            {
                ans=(ans+rec(l1+dx[i],l2+dy[i],k))%mod;
            }
            else if(grid[l1+dx[i]][l2+dy[i]]==1&&k-1>=0)
            {
                ans=(ans+rec(l1+dx[i],l2+dy[i],k-1))%mod;
            }
        }
    }
    

    return dp[l1][l2][k]=ans%mod;
}
void solve()
{
    cin>>n>>m>>k;
    fi(i,0,n)
    {
        fi(j,0,m)
        {
            cin>>grid[i][j];
        }
    }
    fi(i,0,n)
    {
        fi(j,0,m)
        {
            fi(q,0,k+1)
            {
                dp[i][j][q]=-1;
            }
            
        }
    }

    if(grid[0][0]==1) k--;
    cout<<rec(0,0,k);
    nl;
    // fi(i,0,2)
    // {
    //     cout<<dx[i]<<dy[i];
    //     nl;
    // }
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
    cin >> t; 
    //getline(cin,s);

    memset(dp,-1,sizeof(dp));
    while (t--)
    {
        // q++;

        solve();
    }
    return 0 ;
}

// Number of Paths in Grid - 2

// Time-Limit: 4 sec Score: 0.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// Given a grid of size n*m, you need to find the total number of different paths from (1, 1) to (n, m). You are allowed to move from (x, y) to (x+1, y) and (x, y) to (x, y+1). The grid may have some blocked cells, represented by 1, and it is not allowed to move to a blocked cell. An empty cell is represented by 0. You are also given an integer k and you can convert at most k blocked cells into unblocked cells.


// Input Format

// The first line of the input contains one integer t - the number of test cases. Then t test cases follow.

// The first line of each test case contains three space-separated integers n, m, k - the size of the grid and the number of cells you can convert.

// Each of the following n lines contains m space-separated integers, aij - the number at that cell.


// Output Format

// For each test case, print the number of paths modulo 10^9 + 7.


// Constraints

// 1 ≤ t ≤ 105

// 1 ≤ n, m ≤ 200

// 0 ≤ k ≤ 400

// 0 ≤ aij ≤ 1

// It is guaranteed that the sum of nmk over all test cases does not exceed 108.


// Sample Input 1

// 3
// 3 3 2
// 0 1 1
// 1 1 0
// 1 0 0
// 3 3 1
// 0 1 1
// 1 1 0
// 1 0 0
// 2 3 0
// 1 0 0
// 0 1 0

// Sample Output 1

// 6
// 0
// 0

// Note

// For the first test case, any path from (1,1) to (n,m) has 2 blocked cells, which can be unblocked.

// For the third test case, no cells can be unblocked and the first cell is blocked, so there are no paths from (1,1) to (n,m).
