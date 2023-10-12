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
    multiset<ll>ms;
    vector<ll>ans,b;
    // cout<<(1<<n);
    // nl;
    fi(i,0,1<<n)
    {
        ll x;
        cin>>x;
        ms.insert(x);
    }
    ms.erase(ms.begin());
    ans.push_back(*ms.begin());
    b.push_back(*ms.begin());
    ms.erase(ms.begin());
    fi(j,1,n)
    {
        ll y=b.size();
        fi(i,0,y)
        {
            ms.erase(ms.find(*ms.begin()+b[i]));
            b.push_back(*ms.begin()+b[i]);
        }
        ans.push_back(*ms.begin());
        b.push_back(*ms.begin());
        ms.erase(ms.begin());
    }
    fi(i,0,ans.size())
    {
        cout<<ans[i]<<" ";
    }
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

// Your class teacher wrote N integers on the board. One of your classmates was being mischievous, he replaced the N integers with all possible subset sums of the array when the teacher was not in the class. 
// Suppose that the integers on the board were [2,1] then the subsets will be: {}, {2}, {1}, {2,1} and the subset sums will be: {0,2,1,3}. 
// Your task is to rebuild the original array given by your teacher.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains one integer N - the number of elements in the initial array.
// The second line of each test case contains 2N space-separated integers, the new values on the board.


// Output Format

// For each test case, print N space-separated integers in non-decreasing order.
// It is guaranteed that a solution always exists.


// Constraints

// 1 ≤ T ≤ 50
// 1 ≤ N ≤ 15
// 0 ≤ Ai ≤ 1015


// Sample Input 1

// 3
// 2
// 0 1 2 3
// 3
// 0 1 3 4 5 6 8 9
// 3
// 0 1 1 1 2 2 2 3

// Sample Output 1

// 1 2 
// 1 3 5 
// 1 1 1

// Note

// In the first test case of the example, the original array is [1,2] which has the following subset - {}, {1}, {2}, {1,2}. Their respective sums are 0,1,2,3.

// In the third test case of the example, the original array is [1,1,1] which has the following subset - {}, {1}, {1}, {1}, {1,1}, {1,1}, {1,1}, {1,1,1}. Their respective sums are 0,1,1,1,2,2,2,3.
