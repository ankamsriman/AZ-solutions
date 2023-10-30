//ANKAM SRIMAN
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i, a, b) for (long long int i = a; i < b; i++)
#define fd(i, a, b) for (long long int i = a; i >= b; i--)
#define vl(a, n) vector<ll> a(n)
#define scarr(a) for (long long int i = 0; i < a.size(); i++) cin >> a[i]
#define parr(a)  for (long long int i = 0; i < a.size(); i++) cout << a[i] << " "
#define prr(a)  for (auto x:a) cout << x << " "
#define vt(a,n) vector<long long int>a(n)
#define ll long long
#define ull unsigned long long int
#define pb(x) push_back(x)
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll,ll>


using state =pair<int,int>;
const ll mod = 1e9 + 7;
const ll N = 100000;
set<string>f;
void g(ll l, string s)
{
    if(l==2)
    {
        f.insert(s);
        return;
    }
    fi(i,0,s.size())
    {
        fi(j,i,s.size())
        {
            string d=s;
            reverse(d.begin()+i,d.begin()+j+1);
            g(l+1,d);
        }
    }
}

void solve()
{
    ll n;
    string s,t;
    cin>>s>>t;
    n=s.size();

    g(0,s);
    set<string>s1,s2;
    s1=f;
    f.clear();
    g(0,t);
    s2=f;
    f.clear();
    int ans=0;
    for(auto it:s1){
        if(s2.find(it)!=s2.end()){
            ans=1;
            break;
        }
    }
    if(ans)cy;
    else cn;

}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;
    ll t = 1;
    cin >> t;
    // string x;
    // getline(cin,x);
    while (t--)
    {
        // q++;

        solve();
    }
    return 0;
}

// Time-Limit: 5 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// We are given two equal-length strings S and T. Figure out if we can get string T starting from string S and applying 4 substring reversal operations.


// Input Format

// The first line contains an integer TC (number of test cases),

// The next line contains a string S. 

// The next line contains a string T. 


// Output Format

// For each test case print “YES” if it is possible to form a square fence, else print “NO” without double quotes in a new line.


// Constraints

// 1 ≤ TC ≤ 10^2
// 1 ≤ |S| ≤ 40
// |T|=|S|

// Sample Input 1

// 2
// abacde
// beacda
// abcdef
// abdefc

// Sample Output 1

// YES
// YES

// Note

// TEST CASE 1:

// S = prqs

// T = psrq

// 4 transitions are : 

// prqs → pqrs
// pqrs → srqp
// srqp → srpq
// srpq → psrq
 

// TEST CASE 2:

// S = abdec

// T = bdaec

// 4 transitions are : 

// abdec → abced
// abced → aecbd
// aecbd → bcead
// bcead → bdaec
