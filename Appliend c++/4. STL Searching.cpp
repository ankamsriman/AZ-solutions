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

void solve()

{

    //star;
    ll n,q;
    cin>>n>>q;
    ll a[n];

    fi(i,0,n) cin>>a[i];
    sort(a,a+n);
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll z,f=0;
        if(x==1)
        {
            auto w=lower_bound(a,a+n,y);
            z=*(w);
            if(w==(a+n)) f=1;

        }
        else if(x==2)
        {
            auto w=upper_bound(a,a+n,y);
            z=*(w);
            if(w==(a+n)) f=1;
        }
        else if(x==3)
        {
            auto w=upper_bound(a,a+n,y);
            z=(w-a);

        }
        else if(x==4)
        {
            auto w=lower_bound(a,a+n,y);
            z=(w-a);

        }
        if(!f)
        {
            cout<<z<<" ";
        }
        else
        {
            cout<<"-1 ";
        }
        
    }
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

// You are given an array A of size N. You have to answer the following queries

// 1 x - Find the smallest Element ≥ x 
// 2 x - Find the smallest Element > x 
// 3 x - Find the number of elements ≤ x
// 4 x - Find the number of elements < x
// If the answer does not exist print -1.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains two space-separated integers N Q - the size of the given array and the number of queries

// The second line of each test case contains N space-separated integers.

// Each of the next Q lines contains the queries in the form of t x.


// Output Format

// For each test case, print the answer of the required queries.


// Constraints

// 1≤ T ≤ 105

// 1≤ N, Q ≤ 105

// 1≤ Ai ≤ 106

// 1≤ t ≤ 4

// 1≤ x ≤ 106

// It is guaranteed that the sum of Q over all test cases does not exceed 105.


// Sample Input 1

// 2
// 5 4
// 1 2 2 3 4
// 1 2
// 2 2
// 3 4
// 3 2
// 3 2
// 5 5 5
// 3 5
// 4 5

// Sample Output 1

// 2 3 5 3 
// 3 0 

// Sample Input 2

// 1
// 5 4
// 1 2 3 4 5
// 1 5
// 1 6
// 3 2
// 3 0

// Sample Output 2

// 5 -1 2 0

// Note

// For the first test case, 

// The smallest element ≥ 2 is 2
// The smallest element > 2 is 3
// The number of elements ≤ 4 is 5 (1, 2, 2, 3, 4)
// The number of elements ≤ 2 is 3 (1, 2, 2)
