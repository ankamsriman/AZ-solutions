//Ankam Sriman
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define fi(i,a,b) for(long long int i = a; i<b; i++)
#define fd(i,a,b) for(long long int i = a; i>=b; i--)
#define scarr(a) for(long long int i=0;i<a.size();i++) cin>>a[i]
#define parr(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define ll  long long int
#define ull unsigned long long int


#define spa " "
#define nl cout<<"\n"
#define pr(x) cout<<x<<"\n"
#define prvt(a) for(long long int i=0;i<a.size();i++) cout<<a[i]<<" "
#define star cout<<"*\n"


//string s;
//ll a[1000009];


//vector<ll>a,b;
//ll n, k;

ll mod = 1000000007;
ll is_prime[1000100];
ll sp[1000100];
ll N = 1000100;



void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n), b(n);
    fi(i, 0, n)
    {

        cin >> a[i] >> b[i];

    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll med = n / 2;
    ll ans = 0;

    fi(i, 0, n)
    {
        ans += abs(a[med] - a[i]);
        ans += abs(b[med] - b[i]);
    }
    cout << ans;
    nl;




}


int main()
{
    //py;
    //fun();



#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //fac();


    IOS;
    ll t; cin >> t; while (t--)
    {
        solve();
    }
    return 0 ;
}

// Time-Limit: 1 sec Score: 100/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// There are two arrays of size n, A [a1, a2 … an] and B [b1, b2 … bn]. You can permute the elements in both the arrays any way you want.

// Your goal is to minimize the sum of the absolute differences between corresponding elements of the arrays i.e. sum of |ai-bi| for i from 1 to n.

// Find this minimum sum.


// Input Format

// First line of input contains T, number of test cases.

// First line of each test case contains n, size of the arrays.

// Second line contains n integers a1, a2 … an .

// Third line contians n integers b1, b2 … bn .

 

 


// Output Format

// For each test case print a single integer in a new line: Minimum sum of the absolute differences between corresponding elements of the arrays.


// Constraints

// T ≤ 10

// 1 ≤ n ≤ 105

// 0 ≤ |ai|,|bi| ≤ 106


// Sample Input 1

// 1

// 3

// 1 2 1

// 2 1 1


// Sample Output 1

// 0


// Note

// Arrange elements in B as [1, 2, 1].

// Sum = |1-1| + |2-2| + |1-1| = 0
