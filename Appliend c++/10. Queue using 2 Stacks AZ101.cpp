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
    ll q;
    cin>>q;
    stack<ll>a,b;
    while(q--)
    {
        string s;
        cin>>s;
        ll f;
        if(s=="push")
        {
            ll x;
            cin>>x;
            if(a.empty()) f=x;
            a.push(x);
        }
        else if(s=="pop")
        {
            if(b.empty())
            {
                while(!a.empty())
                {
                    b.push(a.top());
                    a.pop();
                }   
            }
            
            if(!b.empty())
            {
                cout<<b.top();
                nl;
                b.pop();
            }
            
            
        }
        else if(s=="front")
        {
            if(b.empty()) cout<<f;
            else cout<<b.top();
            nl;
        }
    }

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

// Implement a queue using 2 stacks. You will be given the following type of Q queries:

// push x - add x to the queue
// pop - pop the front element of the queue, you also have to print the element you have popped.
// front - find the element at the front of the queue

// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer Q - the number of queries

// Each of the next Q lines contain the queries.


// Output Format

// For each test case, print the required queries.


// Constraints

// 1≤ T ≤ 106

// 1≤ Q ≤ 106

// 1≤ X ≤ 106

// It is guaranteed that the sum of Q over all test cases does not exceed 106.


// Sample Input 1

// 1
// 7
// push 3
// push 5
// pop
// front
// push 7
// pop
// pop

// Sample Output 1

// 3
// 5
// 5
// 7

// Note

// Queue becomes: [3]
// Queue becomes: [3, 5]
// Queue becomes [5] and element at front was 3
// Queue becomes [5]  and element at front is 5
// Queue becomes [5, 7]
// Queue becomes [7] and element at front was 5
// Queue becomes empty and element at front was 7
