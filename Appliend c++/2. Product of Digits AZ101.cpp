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
#define star cout<<"*\n"


//string s;
//ll a[1000009];


//vector<ll>a,b;
//ll n, k;

//ll mod = 1000000007;
ll is_prime[1000100];
ll sp[1000100]; 
ll N = 1000100;

ll q = 0;

const ll mod = 1e9 + 7;
string s;
void solve()
{

    //star;
    ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n) cin>>a[i];
    ll pd=1;
    fi(i,0,n)
    {
        pd=(pd*a[i])%mod;
    }
    cout<<pd;
    nl;
}
//cout<<fixed<<setprecision(7);
int main()
{
    //py;
    //fun 

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //fac();

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

// You are given the digits of a positive number N. Find the product of its digits. Since the product can be large, print it modulo 109 + 7. It is guaranteed that the number begins with a non-zero digit.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer N - the number of digits in the number. 

// The second line of each test case contains N space-separated integers - the digits of the number.


// Output Format

// For each test case, print the product of digits of the number modulo 109 + 7.


// Constraints

// 1≤ T ≤ 106

// 1≤ N ≤ 106

// 0≤ D ≤ 9

// It is guaranteed that the sum of N over all test cases does not exceed 106.


// Sample Input 1

// 3
// 5
// 1 5 2 3 4
// 4
// 9 0 5 3
// 3
// 2 2 2

// Sample Output 1

// 120
// 0
// 8

// Note

// For the first test case, 1*5*2*3*4 = 120

// For the second test case, 9*0*5*3 = 0

// For the third test case, 222 = 8
