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
ll k;
ll n,m;

ll a[100001];

ll mod_sub(ll x)
{
    return ((x%mod)+mod)%mod;
}
ll power(ll a,ll b)
{
    a%=mod;
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b/=2;
    }
    return ans;
}
void solve()
{

    //star;
    ll n,z,k;
    cin>>n>>z>>k;
    vector<ll>p(n+2),pk(n+2);
    pk[0]=1;
    fi(i,1,n+2)
    {
        pk[i]=(pk[i-1]*k)%mod;
        // cout<<p[i];
    }
    while(z--)
    {
        ll a,l,r;
        cin>>a>>l>>r;
        p[l]=mod_sub(p[l]+a*power(pk[l],mod-2)%mod);
        p[r+1]=mod_sub(p[r+1]-a*power(pk[l],mod-2)%mod);

    }
    fi(i,1,n+1)
    {
        p[i]=(p[i-1]+p[i])%mod;
    }
    fi(i,1,n+1)
    {
        p[i]=(p[i]*pk[i])%mod;
        cout<<p[i]<<" ";
    }
    

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
    //cin >> t; 
    //getline(cin,s);
    while (t--)
    {

        //q++;

        solve();
    }
    return 0 ;
}
// Description

// Given an array of N integers and Q queries and an integer K. Initially, all the elements of the array have value 0.

// In each query 3 integers A, L, R is given, which means perform GP addition

// Arr[L]+=A

// Arr[L+1]+=AK

// Arr[L+2]+=AKK

// Arr[L+3]+=AKKK

// .

// .

// .

// .

// Arr[R]+=A*(K^(R-L))

 

// After performing all the operations. Print the final array % 10^9+7.


// Input Format

// The first line contains three space-separated integers N, Q, K where 1<=N<=10^6, 1<=Q<=10^6, 1<=K<=10^9.

// Next Q lines contain three space-separated integers A, L, R where 0<=A<=10^4, 1<=L<=R<=N.


// Output Format

// Print the N space-separated integer representing the final array %10^9+7.


// Sample Input 1

// 5 5 2
// 3 1 5
// 4 2 2
// 6 3 5
// 9 5 5
// 4 2 4

// Sample Output 1

// 3 14 26 52 81 
