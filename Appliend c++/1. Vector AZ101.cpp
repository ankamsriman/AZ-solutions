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
    ll q;
    cin>>q;
    vector<ll>v;

    while(q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            ll x;
            cin>>x;
            v.push_back(x);

        }
        else if(s=="print")
        {
            ll x;
            cin>>x;
            if(x<v.size() &&x>=0)
            cout<<v[x];
            else cout<<"0";
            nl;
        }
        else if(s=="remove")
        {
            v.pop_back();
        }
        else if(s=="clear")
        {
            v.clear();
        }
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

// You are given Q queries and have to perform the following operations:

// add x - add element x at the end of vector
// remove - delete last element of the vector, if vector is not empty
// print x - print the x-th character of the vector, if it exists, otherwise print 0. (0-indexing)
// clear - empty the vector

// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer Q - the number of queries.

// Each of the next Q ines contains queries.


// Output Format

// For each test case, print the required queries.


// Constraints

// 1≤ T ≤ 106

// 1≤ Q ≤ 106

// 1≤ X ≤ 106

// It is guaranteed that the sum of Q over all test cases does not exceed 106.
// Sample Input 1

// 1
// 9
// add 3
// add 4
// print 1
// remove
// add 7
// add 2
// print 0
// clear
// print 0

// Sample Output 1

// 4
// 3
// 0

