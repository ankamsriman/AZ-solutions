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
    ll n,k;
    cin>>n>>k;
    map<ll,ll>mp;
    fi(i,0,n)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    multiset<pair<ll,ll>>ms;
    for(auto x:mp)
    {
        ms.insert({x.s,x.f});
    }
    fi(i,0,k)
    {
        auto x=ms.end();
        x--;
        auto y=*x;
        if(y.f>1)
        {
            ms.erase(x);
            y.f=y.f-1;
            ms.insert(y);
        }
    }
    ll ans=n*(n-1)/2;
    for(auto x:ms)
    {
        ll y=(x.f)*(x.f-1)/2;
        ans-=y;
    }
    pr(ans);

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

// Diversify the Array

// Time-Limit: 2 sec Score: 100/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You have given an array A. The diversity of the array A is defined as the number of pairs i, j, i < j such that Ai ≠ Aj.
// You want to maximize the diversity of the array. For that, you are allowed to make at most K operations on it, in any of which, you can select a particular element and change its value to any integer in the range 1 to 109, both inclusive.
// Find out the maximum diversity of the array that you can obtain.


// Input Format

// The first line will contain T, number of test cases. Then the test cases follow.
// The first line of each test case contains two integers N, K. where N denotes the length of array A.
// The next line of each test case contains N space-separated integers, the i-th of which denotes Ai.


// Output Format

// For each test case, output in a single line, the answer corresponding to the test case, which should be an integer denoting the maximum possible diversity.


// Constraints

// 1 ≤ T ≤ 20
// 0 ≤ K ≤ 109
// 2 ≤ N ≤ 105
// 1 ≤ Ai ≤ 109


// Sample Input 1

// 3
// 3 10
// 1 2 3
// 4 2
// 1 1 2 2
// 6 2
// 2 3 3 2 4 4


// Sample Output 1

// 3
// 6
// 14


// Note

// Explanation 1:
// Every element in the array is different. The diversity is 6, which is the maximum possible.

// Explanation 2:
// Change the array to A = [1, 3, 2, 5]. Here we only need to change elements at 2nd and 4th positions. Now all elements are different.
// The maximum diversity is 6.

// Explanation 3:
// Change the array to A = [5, 6, 2, 3, 4, 4]. Here we change the elements at positions 1 and 2. The maximum diversity is 14.
