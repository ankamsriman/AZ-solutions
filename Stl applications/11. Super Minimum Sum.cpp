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

const ll mod =  1e9 + 7;
ll k;


void solve()
{

    //star;
    ll n;
    cin>>n;
    vector<ll>a(n+2),left(n+2),right(n+2);
    a[0]=INT_MIN;
    //cout<<a[0];
    a[n+1]=a[0];
    fi(i,1,n+1)
    {
        cin>>a[i];
        
    }
    stack<ll>s;
    s.push(0);
    fi(i,1,n+1)
    {
        while(!s.empty()&&a[s.top()]>=a[i])
        {
            s.pop();
        }
        left[i]=s.top();
        s.push(i);
    }
    stack<ll>t;
    t.push(n+1);
    fd(i,n,1)
    {
        while(!t.empty()&&a[t.top()]>=a[i])
        {
            t.pop();
        }
        right[i]=t.top();
        t.push(i);
    }
    ll ans=0;

    fi(i,1,n+1)
    {
        ans+=(i-left[i])*(right[i]-i)*a[i];
    }
    cout<<ans;
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

// You have given an array A of size N. A1, A2, ..., AN are the elements of the array. All elements in the array A are distinct.
// Find the sum of the minimum of all subarrays possible of array A.

// A subarray of an -element array is an array composed from a contiguous block of the original array's elements


// Input Format

// The first line contains T, the number of test cases.
// The first line of each test case contains N, the number of integers in an array A.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.


// Output Format

// For each test case, print a single number representing the sum of the minimum of all subarrays of A.


// Constraints

// 1 ≤ T ≤ 100000
// 1 ≤ N ≤ 100000
// 1 ≤ Ai ≤ 106
// Sum of N over all test cases ≤ 5 * 105.
// It is guaranteed that all elements in an array A are distinct.


// Sample Input 1

// 5
// 3
// 1 2 3
// 2
// 1 5
// 4
// 2 3 4 10
// 8
// 1000000 1000001 1000002 1000003 1000004 1000005 1000006 1000007
// 3
// 3 1 2

// Sample Output 1

// 10
// 7
// 35
// 36000084
// 9

// Note

// Explanation 1:
// Min{1} + Min{1, 2} + Min{1, 2, 3} + Min{2} + Min{2, 3} + Min{3} = 1 + 1 + 1 + 2 + 2 + 3 = 10

// Explanation 2:
// Min{1} + Min{1, 5} + Min{5} = 1 + 1 + 5 = 7
