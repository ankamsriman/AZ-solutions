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

    ll b=0;
    multiset<ll>ms;
    fi(i,0,n)
    {
        while(!ms.empty()&&(*ms.begin()<=b))
        {
            ms.erase(ms.begin());
        }
        if(a[i]>=(b+1)&&ms.size()>=b)
        {
            b++;
        }
        ms.insert(a[i]);
        cout<<b<<" ";
    }
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

// Alice read N books. The i-th book has Ai pages. After every book Alice reads, you have to tell the largest integer B such that Alice has read B books that have at least B pages.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains one integer N - the length of the array. 
// The second line of each test case contains N space-separated integers.


// Output Format

// For each test case, print N integers, A1, A2, ... AN, where Ai is the largest integer B such that Alice has read B books that have at least B pages after reading the i-th book.


// Constraints

// 1≤ T ≤ 100
// 1≤ N ≤ 105
// 1≤ Ai ≤ 105


// Sample Input 1

// 4

// 4

// 2 1 4 4

// 2

// 5 1

// 5

// 1 3 2 3 5

// 4

// 3 3 3 3


// Sample Output 1

// 1 1 2 2

// 1 1

// 1 1 2 2 3

// 1 2 3 3


// Note

// In the first test case of the example, Alice reads N=4 books.
// After reading the 1st book, she has read 1 book with at least 1 page i.e. book with page 2.
// After reading the 2nd book, the answer remains the same as she has read 1 book with at least 1 page.
// After reading the 3rd book, she has read 2 books with at least 2 pages i.e. book with pages 2 and 4.
// After reading the 4th book, the answer remains the same as she has read 2 books with at least 2 pages.

// In the third test case of the example, Alice reads N=5 books.
// After reading the 1st book, she has read 1 book with at least 1 page i.e. book with page 1.
// After reading the 2nd book, the answer remains the same as she has read 1 book with at least 1 page.
// After reading the 3rd book, she has read 2 books with at least 2 pages i.e. book with pages 2 and 3.
// After reading the 4th book, the answer remains the same as she has read 2 books with at least 2 pages.
// After reading the 3rd book, she has read 3 books with at least 3 pages i.e. book with pages 3,3 and 5.
