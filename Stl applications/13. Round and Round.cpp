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
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll, ll>

const ll mod = 1e9 + 7;
const ll N = 100000;


void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0;
    fi(i,0,s.length())
    {
        if(s[i]=='L')x++;
        else if(s[i]=='R')x--;
    }
    if(x!=0)cy;
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

// Description

// Bob is standing in a park at (0,0) facing north. He is given a series of instructions to move around the park. The instructions can be:

// ‘W’: go straight 1 unit
// ‘L’: turn 90 degrees left
// ‘R’: turn 90 degrees right
// Bob has to perform the given instructions forever. If he is going in a circle forever, print ‘YES’. Otherwise, print ‘NO’ (without the quotes).


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains N - the length of the input string of instructions.
// The second line of each test case contains one string S - the series of instructions to move around the park.


// Output Format

// For each test case, print ‘YES’ if Bob is going in a circle forever. Otherwise, print ‘NO’. (without the quotes)


// Constraints

// 1≤ T ≤ 100
// 1≤ |S| ≤ 105 where |S| denotes the length of the given series of instructions.


// Sample Input 1

// 3

// 3

// WWW

// 2

// LW

// 4

// WLLW


// Sample Output 1

// NO

// YES

// YES


// Note

// In the first sample test case, Bob moves north indefinitely.

// In the second sample test case, Bob moves as follows: (0,0) => (-1,0) => (-1,-1) => (0,-1) => (0,0). So, Bob goes in a circle forever


// In the third sample test case, Bob moves from (0,0) to (0,1) turns 180 degress and returns to (0,0). So, Bob goes in a circle forever
