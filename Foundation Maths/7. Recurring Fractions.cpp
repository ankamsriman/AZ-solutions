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
ll k;
ll n,m;

ll a[100001];


void solve()
{

    //star;
    ll a,b;
    cin>>a>>b;
    ll p=1;
    if(a*b<0)
    {
        p=0;
    }
    a=abs(a);
    b=abs(b);
    string ans="";
    if(p==0)ans+="-";
    ans+=to_string(a/b);
    a%=b;
    if(a==0)
    {
        cout<<ans;
        nl;
        return;
    }
    
    map<ll,ll>mp;
    ll pos=-1;
    ans+=".";
    while(1)
    {
        if(a==0) break;
        if(mp.count(a))
        {
            pos=mp[a];
            break;
        }
        mp[a]=(ll)ans.length();
        ll x=a*10;
        ll int_part=x/b;
        ans+=to_string(int_part);
        a=x%b;

    }
    if(pos!=-1)
    {
        cout<<ans.substr(0,pos)<<"("<<ans.substr(pos,(ll)ans.length()-pos)<<")";
    }
    else cout<<ans;
    

    
    nl;

    
}
//cout<<fixed<<setprecision(7);

string s;
int main()
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
// Description

// Given two integers representing the numerator and denominator of a fraction, print the fraction in string format.
// If the fractional part is repeating, enclose the repeating part in parentheses.
// If multiple answers are possible, print the one which has the smallest length.


// Input Format

// The first line contains T (1 ≤ T ≤ 100000), the number of test cases.
// Each of the next T lines contains two space-separated integers representing numerator and denominator respectively (0 ≤ |numerator| ≤ 100 and 1 ≤ |denominator| ≤ 100).
// It is guaranteed that the denominator is always a non-zero integer.


// Output Format

// For each test case, print the fraction in string format.


// Sample Input 1

// 4

// 1 2

// 2 1

// 2 3

// -3 7


// Sample Output 1

// 0.5

// 2

// 0.(6)

// -0.(428571)


// Note

// Explanation 1:
// 1 / 2 = 0.5

// Explanation 2:
// 2 / 1 = 2

// Explanation 3:
// 2 / 3 = 0.(6). Note that 0.(66) is also the correct representation in decimal format, but it has a greater length than 0.(6).
