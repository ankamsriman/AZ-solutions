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



void solve()
{
    ll n;
    cin>>n;
    vt(a,n);
    scarr(a);
    vt(l,n);
    vt(r,n);
    vt(ans,n);
    stack<ll>s;
    fi(i,0,n)
    {
        while(!s.empty()&&a[s.top()]>=a[i])
        {
            s.pop();
        }
        if(s.empty())l[i]=-1;
        else l[i]=s.top();
        s.push(i);
    }
    while(!s.empty())s.pop();
    fd(i,n-1,0)
    {
        while(!s.empty()&&a[s.top()]>=a[i])
        {
            s.pop();
        }
        if(s.empty())r[i]=n;
        else r[i]=s.top();
        s.push(i);
    }
    fi(i,0,n)
    {
        ll x=r[i]-l[i]-2;
        ans[x]=max(ans[x],a[i]);
    }
    fd(i,n-2,0)
    {
        ans[i]=max(ans[i],ans[i+1]);
    }
    prr(ans);
    nl;
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

// There are N soldiers standing in a row, numbered 1 through N. The height of i-th soldier is Hi. For each non-empty contiguous segment of the line, strength is defined as the minimum height of the soldier in that segment.
// You have to tell the maximum strength for each x size group, for all groups of size x between 1 to N.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains one integer N - the length of the array. 
// The second line of each test case contains N space-separated integers - H1, H2, ... HN, heights of soldiers.


// Output Format

// For each test case, print N integers in one line. For each x from 1 to N, print the maximum strength among all groups of size x.


// Constraints

// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ Hi ≤ 109
// Sum of N over all test cases doesn't exceed 5 x 105


// Sample Input 1

// 3

// 3

// 1 5 3

// 4

// 8 6 1 1

// 7

// 1 2 3 4 6 3 2


// Sample Output 1

// 5 3 1 

// 8 6 1 1 

// 6 4 3 3 2 2 1


// Note

// In the first test case of the example, for x=1, possible answers are 1, 5 and 3 (maximum of them is 5).
// For x=2, possible answers are 1 and 3 (maximum of them is 3)
// For x=3, the only possible answer is 1.

// In the second test case of the example, for x=1, possible answers are 1, 6 and 8 (maximum of them is 8).
// For x=2, possible answers are 1 and 6 (maximum of them is 6)
// For x=3 and x=4, the only possible answer is 1.
