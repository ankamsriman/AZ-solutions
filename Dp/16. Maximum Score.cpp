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


int n,m,k;
int grid[103][103];
ll dp[103][103][13];
int dx[]={-1,-1},dy[]={-1,1};

vector<ll>z;
bool check(int x,int y)
{
    if(x>=n||y>=m||x<0||y<0)
    {
        return 0;
    }
    return 1;
}
ll rec(int l1,int l2,int s)
{
    
    if(l1==0)
    {
        if((s+grid[l1][l2])%k==0)
        {
            return grid[l1][l2];
        }
        return -1e18;
    }
    if(dp[l1][l2][s]!=-1)
    {
        return dp[l1][l2][s];
    }
    ll ans=-1e18;

    if(check(l1-1,l2-1))
    {
        ans=max(ans,grid[l1][l2]+rec(l1-1,l2-1,(s+grid[l1][l2])%k));
    }
    if(check(l1-1,l2+1))
    {
        ans=max(ans,grid[l1][l2]+rec(l1-1,l2+1,(s+grid[l1][l2])%k));
    }
    
    return dp[l1][l2][s]=ans;
}
void solve()
{
    cin>>n>>m>>k;
    fi(i,0,n)
    {
        string s;
        cin>>s;
        fi(j,0,m)
        {
            grid[i][j]=s[j]-'0';
        }
    }
    // k=100;
    fi(i,0,n+1)
    {
        fi(j,0,m+1)
        {
            fi(q,0,k+1)
            {
                dp[i][j][q]=-1;
            }
            
        }
    }
    ll ans=-1e18;
    fi(i,0,m)
    {
        ans=max(ans,rec(n-1,i,0));
    }
    if(ans<=-1e15) ans=-1;
    pr(ans);
    
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

// Maximum Score

// Time-Limit: 2 sec Score: 0.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You are standing on the lowest row of a chessboard and can only move, upwards and leftwards or upwards and rightwards. There is a predefined score on each cell of the chessboard. You can start from any cell in the lowest row and you have to reach the uppermost row such that your score is the maximum possible and it is divisible by K. You have to find the maximal score you can achieve.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains three space-separated integers N, M, and K - the length of the array.

// Each of the next N lines contains M digits from 0-9 indicating the score at that cell.


// Output Format

// For each test case, if it is possible, you have to find the maximal score you can achieve. If it is impossible print -1.


// Constraints

// 1≤ T ≤ 100

// 1 ≤ N, M ≤ 100

// 1≤ K ≤ 11

 


// Sample Input 1

// 3
// 4 3 11
// 194
// 707
// 733
// 633
// 2 4 2
// 3916
// 9593
// 2 2 4
// 15
// 52

// Sample Output 1

// 22
// 18
// -1

// Note

// For the first test case, we start from A[4][3] and get the score as 3+3+7+9 = 22 which is divisible by 11.

// For the second test case, we start from A[2][1] and get the score as 9+9 = 18, which is divisible by 2. You can also start from A[2][3] to get the same result.

// For the third test case, there is no way to reach the top row with the score as a multiple of k.
