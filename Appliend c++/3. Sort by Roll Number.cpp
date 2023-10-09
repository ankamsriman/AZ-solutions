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
bool comp(pair<string,ll> a,pair<string,ll> b)
{
    return a.second<b.second;
}
void solve()

{

    //star;
    ll n;
    cin>>n;
    vector<pair<string,ll>>vt;

    fi(i,0,n)
    {
        string x;
        ll y;
        cin>>x>>y;
        vt.push_back({x,y});
    }
    sort(vt.begin(),vt.end(),comp);
    fi(i,0,vt.size())
    {
        cout<<vt[i].first<<" "<<vt[i].second;
        nl;
    }
 
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

// You are given a list of N students with their names and roll number. Sort the list according to their roll numbers.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer N - the length of the array. 

// The second line of each test case contains a string S and an integer R - the name and roll number.


// Output Format

// For each test case, print the sorted list according to their roll numbers.


// Constraints

// 1≤ T ≤ 105

// 1≤ N ≤ 105

// 1≤ |S| ≤ 100

// 1 ≤ R ≤ 105

// It is guaranteed that the sum of N over all test cases does not exceed 105.


// Sample Input 1

// 2
// 5
// amelia 21
// sophia 12
// emma 11
// ava 8
// isabel 1
// 3
// alice 34
// bob 20
// hannah 5

// Sample Output 1

// isabel 1
// ava 8
// emma 11
// sophia 12
// amelia 21
// hannah 5
// bob 20
// alice 34
