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
    deque<ll>dq;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="insertback")
        {
            ll x;
            cin>>x;
            dq.push_back(x);
        }
        else if(s=="insertfront")
        {
            ll x;
            cin>>x;
            dq.push_front(x);
        }
        else if(s=="erasefront")
        {
            if(!dq.empty()) dq.pop_front();
        }
        else if(s=="eraseback")
        {
            if(!dq.empty()) dq.pop_back();
        }
        else if(s=="printback")
        {
            if(!dq.empty()) cout<<dq.back();
            else cout<<"0";
            nl;
        }
        else if(s=="printfront")
        {
            if(!dq.empty()) cout<<dq.front();
            else cout<<"0";
            nl;
        }
        else if(s=="print")
        {
            ll x;
            cin>>x;
            if((ll)dq.size()>=x+1)
            {
                cout<<dq[x];
            }
            else cout<<"0";
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

// You are given Q queries and have to perform the following operations:

// insertback x - add element x at the end of deque
// eraseback - delete end element of the queue, if queue is not empty
// insertfront x - add element x at the front of deque
// erasefront - delete front element of the queue, if queue is not empty
// printfront - print element at front of the queue, if queue is not empty, otherwise print 0
// printback - print element at back of the queue , if queue is not empty, otherwise print 0
// print x - print the x-th character of the vector, if it exists, otherwise print 0. (0-indexing)

// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one integer Q - the number of queries.

// Each of the next Q ines contains queries.


// Output Format

// For each test case, print the required queries.


// Constraints

// 1≤ T ≤ 105

// 1≤ Q ≤ 105

// 1≤ X ≤ 106

// It is guaranteed that the sum of Q over all test cases does not exceed 105


// Sample Input 1

// 1
// 8
// insertback 3
// insertback 5
// insertfront 2
// printback
// print 1
// eraseback
// insertfront 1
// printfront

// Sample Output 1

// 5
// 3
// 1

// Note

// Deque becomes [3]
// Deque becomes [3, 5]
// Deque becomes [2, 3, 5]
// Last element of deque is 5
// Element at index 1 is 3
// Deque becomes [2, 3]
// Deque becomes [1, 2, 3]
// First element of deque is 1
