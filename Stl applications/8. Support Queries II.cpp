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


struct topk
{
    multiset<ll>ms1,ms2;
    ll s,k;
    topk(ll K)
    {
        s=0;
        k=K;
    }
    void add(ll x)
    {
        ms1.insert(x);
        s+=x;
        if(ms1.size()>k)
        {
            auto z=ms1.begin();
            ms2.insert(*z);
            s-=*z;
            ms1.erase(z);

        }
    }
    void remove(ll x)
    {
        if(ms1.find(x)!=ms1.end())
        {
            auto z=ms1.find(x);
            s-=*z;
            ms1.erase(ms1.find(x));

            if(!ms2.empty())
            {
                z=ms2.end();
                z--;
                s+=*z;
                ms1.insert(*z);
                ms2.erase(z);
                    
            }
            
        }
        else if(ms2.find(x)!=ms2.end())
        {
            ms2.erase(ms2.find(x));
        }
    }
    void sum()
    {
        cout<<s;
        nl;
    }

};

void solve()
{
    ll q,k;
    cin>>q>>k;
    topk ab(k);
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
            char c;
            cin>>c;
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

// Initially, the structure is empty. You have given an integer K. 

// The structure is arranged in the order from greater elements to smaller elements. So when we say top K elements, we mean the top K largest elements.

// 1 x: Add x in structure.

// 2 x: Remove x from the structure if present in the structure. If x doesn't present in the structure, do nothing. If there are multiple occurrences of x, delete only one occurrence of x.

// 3 ?: Print the sum of the top K elements. If the structure contains less than K elements, then print the sum of all elements present in the structure. If the structure is empty, then print 0.


// Input Format

// The first line of input contains Q and K - the number of queries.
// Next, Q lines contain queries of the format specified in the statement. 


// Output Format

// For queries of type 3, print the answer in a new line.


// Constraints

// 1 ≤ Q, K ≤ 105
// 0 ≤ x ≤ 109


// Sample Input 1

// 17 3
// 1 5
// 1 2
// 1 3
// 1 6
// 3 ?
// 2 3
// 3 ?
// 2 2
// 3 ?
// 2 2
// 3 ?
// 2 5
// 3 ?
// 2 5
// 3 ?
// 2 6
// 3 ?

// Sample Output 1

// 14
// 13
// 11
// 11
// 6
// 6
// 0
