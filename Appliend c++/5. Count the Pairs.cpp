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
    ll n,x;
    cin>>n>>x;
    ll a[n];

    fi(i,0,n) cin>>a[i];
    sort(a,a+n);

    ll ans=0;

    fi(i,0,n)
    {
        ans+=(upper_bound(a,a+n,x-a[i])-a);
    }
    fi(i,0,n)
    {
        if(2*a[i]<=x) ans--;
    }
    cout<<ans;
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

// You are given an array A of size N. You need to find the number of pairs (i, j) , i != j, such that A[i]+A[j] ≤ X.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains two space-separated integers N  X.

// The second line of each test case contains N space-separated integers.


// Output Format

// For each test case, print the number of pairs (i, j) , i != j, such that A[i]+A[j] ≤ X.


// Constraints

// 1≤ T ≤ 105

// 1≤ N ≤ 105

// 1≤ Ai ≤ 106

// 1≤ X ≤ 106

// It is guaranteed that the sum of N over all test cases does not exceed 105.


// Sample Input 1

// 2

// 5 4

// 1 2 2 3 4

// 3 10

// 5 5 5


// Sample Output 1

// 8

// 6


// Note

// For the first test case, the following pairs have sum ≤ 4: (1,2), (1,2), (1,3), (2,1), (2,2), (2,1), (2,2), (3,1)

// For the second test case, the following pairs have sum ≤ 10: (5,5), (5,5), (5,5), (5,5), (5,5), (5,5)
