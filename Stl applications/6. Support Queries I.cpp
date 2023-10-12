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


struct abc
{
    multiset<ll>ms;
    ll s;
    
    abc()
    {
        s=0;
    }
    void add(ll x)
    {
        ms.insert(x);
        s+=x;
    }
    void remove(ll x)
    {
        if(ms.count(x))
        {
            ms.erase(ms.find(x));
            s-=x;
        }
        
    }
    void max()
    {
        if(!ms.empty())
        {
            auto x=ms.end();
            x--;
            cout<<*x;    
        }
        else
        {
            cout<<-1;
        }
        nl;
        
    }
    void min()
    {
        if(!ms.empty())
        {
            auto x=ms.begin();
            cout<<*x;    
        }
        else
        {
            cout<<-1;
        }
        nl;
    }
    void sum()
    {
        cout<<s;
        nl;
    }

};

void solve()
{
    ll q;
    cin>>q;
    abc ab;
    while(q--)
    {
        ll z;
        cin>>z;
        if(z==1)
        {
            ll x;
            cin>>x;
            ab.add(x);
        }
        else if(z==2)
        {
            ll x;
            cin>>x;
            ab.remove(x);
        }
        else if(z==3)
        {
            char x;
            cin>>x;
            ab.min();

        }
        else if(z==4)
        {
            char x;
            cin>>x;
            ab.max();
        }
        else
        {
            char x;
            cin>>x;
            ab.sum();
        }
        

    }
    

}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    ll t = 1;
    // cin >> t;
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

// Design a Data Structure which can support the following queries:

// 1 x: Add x in structure
// 2 x: Remove x from the structure if present in the structure. If x doesn't present in the structure, do nothing. If there are multiple occurrences of x, delete only one occurrence of x.
// 3 ?: Print the minimum number present in the structure. If the structure is empty, print -1.
// 4 ?: Print the maximum number present in the structure. If the structure is empty, print -1.
// 5 ?: Print the sum of all numbers present in the structure. If the structure is empty, print 0.

// Initially, the structure is empty.


// Input Format

// The first line of input contains Q - the number of queries.
// Next, Q lines contain queries of the format specified in the statement.


// Output Format

// For queries of type 3, 4 and 5, print the answer in a new line.


// Constraints

// 1 ≤ Q ≤ 105
// 0 ≤ x ≤ 109


// Sample Input 1

// 18

// 1 5

// 1 4

// 1 4

// 3 ?

// 4 ?

// 5 ?

// 2 4

// 3 ?

// 4 ?

// 5 ?

// 2 4

// 3 ?

// 4 ?

// 5 ?

// 2 5

// 3 ?

// 4 ?

// 5 ?


// Sample Output 1

// 4

// 5



// 13

// 4

// 5

// 9

// 5

// 5

// 5

// -1

// -1

// 0
