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
    stack<ll>st;
    string s;
    cin>>s;
    fi(i,0,s.length())
    {
        if(!st.empty())
        {
            if(st.top()=='('&&s[i]==')') st.pop();
            else st.push(s[i]);
        }
        else
        {
            st.push(s[i]);
        }
    }
    cout<<st.size();
    nl;


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

// You are given a string S. Find the minimum number of parentheses you should add to make the parentheses valid.

// A parentheses is valid if:

// It is an empty string
// It can be written as AB where A and B are valid parentheses
// It can be written as (A) where is a valid parentheses

// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

// The first line of each test case contains one string S.


// Output Format

// For each test case, print the minimum number of parentheses you should add to make the parentheses valid.


// Constraints

// 1 ≤ T ≤ 2 x 105
// 1 ≤ |S| ≤ 105
// It is guaranteed that the sum of |S| over all test cases does not exceed 106. 


// Sample Input 1

// 3
// (())))
// ()()(()
// ))((

// Sample Output 1

// 2
// 1
// 4

// Note

// For the first test case, we need to add 2 opening brackets: (((())))

// For the second test case, we need to add 1 closing bracket: ()()(())

// For the third test case, we need two add 2 opening and 2 closing brackets: (())(())
