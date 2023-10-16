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


vector<ll>a;
ll n,k;
bool check(ll mid)
{
    ll c=1,x=a[0];
    fi(i,1,n)
    {
        if(mid<=a[i]-x)
        {
            x=a[i];
            c++;
        }
    }
    return c>=k;
}

void solve()
{
    cin>>n>>k;
    a.resize(n);
    scarr(a);
    sort(a.begin(),a.end());
    // prr(a);
    ll lo=1,hi=a[n-1]-a[0],ans=1;

    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check(mid))
        {
            lo =mid+1;
            ans=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans;
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
    // kpp();
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
// ClassRoom

// Time-Limit: 4 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Description

// Vivek has built a new classroom with N seats. The seats are located along a straight line at positions x1,x2…..xN.
// Vivek has to assign seats to K students such that a seat can be assigned to at most 1 student and the minimum distance between any two students is as large as possible. Find the largest minimum distance possible.


// Input Format

// The first line contains a single integer T (1 ≤ T ≤ 100000) - the number of test cases.

// The first line of each test case contains 2 space-separated integers N, K (2 ≤ N ≤ 100000, 2 ≤ K ≤ N) - the number of seats and the number of students.

// The second line of each test case contains N space-separated integers (0 ≤ xi ≤ 10^9) - the position of the seats. All the given positions are distinct.

// Sum of N across all test cases ≤ 10^6.


// Output Format

// For each test case print the largest minimum distance possible in a new line.


// Sample Input 1

// 14
// 13 3
// 6048 2794 6123 1643 6907 6993 2382 6961 1094 488 7424 6469 6009 
// 10 6
// 469 706 278 545 711 386 298 242 385 316 
// 18 17
// 1042 271 839 45 1253 1060 428 676 418 1298 1230 668 665 158 916 659 458 202
// 11 10
// 16073873 456996657 980038523 123316193 427829862 54109396 319462445 181390046 543060523 490620628 938036110
// 6 2
// 274592090 858952753 241301573 721888021 806214246 383142174
// 12 5
// 5940 28062 23820 1965 3005 18306 23749 18322 17322 15504 14570 4481
// 17 13
// 1905 1798 5250 986 1239 3311 3519 5262 2444 151 5580 5008 1914 2366 5285 1528 331 
// 4 3
// 792050646 886157889 58701906 576742651
// 9 6
// 3584 5153 5516 6249 2453 3992 6179 1646 4810
// 7 6
// 149042184 953621985 987837168 343845676 726735692 6723177 435784762 
// 4 3
// 149479138 621021707 506424026 519149062 
// 2 2
// 1557 4228 
// 5 2
// 4150 9442 5146 9633 3537
// 6 4
// 160913372 862781533 10044128 722271773 201193061 944524755 

// Sample Output 1

// 2306
// 70
// 8
// 38035523
// 617651180
// 3975
// 116
// 309415238
// 706
// 91939086
// 114597681
// 2671
// 6096
// 191148933
