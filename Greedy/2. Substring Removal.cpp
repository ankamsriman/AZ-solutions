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
#define pr(x) cout<<x<<"\n"

// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// typedef tree <int, null_type, less<int>, rb_tree_tag,
// tree_order_statistics_node_update> ordered_set;


//ll mod = 1000000007;
ll is_prime[1000100];
ll sp[1000100]; 


// ll q = 0;
ll fac[100000+2];

const ll mod =  1e9 + 7;
const ll N =  1000100;

ll fx=30;
vector<ll>j,k,l,p;
ll a,b,c,f=0;
map<ll,ll>mp;



void solve()
{
    //star;

    string s,d;
    ll x,y;
    cin>>s>>x>>y;
    ll f=0,ans=0;
    if(x>y)f=1;
    stack<char>st;
    if(f)
    {
        fi(i,0,s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
                d.push_back(s[i]);
            }
            else
            {
                if(st.top()=='a'&&s[i]=='b')
                {
                    st.pop();
                    ans+=x;
                    //cout<<x<<" ";
                    d.pop_back();
                }
                else
                {
                    st.push(s[i]);
                    d.push_back(s[i]);
                }
            }
        }
        s=d;

        while(!st.empty()) st.pop();
        fi(i,0,s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='b'&&s[i]=='a')
                {
                    st.pop();
                    ans+=y;
                    //cout<<y<<" ";
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }  
    }
    else
    {
        fi(i,0,s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
                d.push_back(s[i]);
            }
            else
            {
                if(st.top()=='b'&&s[i]=='a')
                {
                    st.pop();
                    ans+=y;
                    //cout<<y<<" ";
                    d.pop_back();
                }
                else
                {
                    st.push(s[i]);
                    d.push_back(s[i]);
                }
            }
        } 
        while(!st.empty()) st.pop();
        s=d;
        fi(i,0,s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='a'&&s[i]=='b')
                {
                    st.pop();
                    ans+=x;
                    //cout<<x<<" ";
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        
    }
    cout<<ans;
    nl;



}
string s;
signed main()
{
    //py;
    //fun 

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //pow2();

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

// You are given a string s and two integers x and y. You can perform two types of operations any number of times.

// Remove substring "ab" and gain x points.

// For example, when removing "ab" from "cabxbae" it becomes "cxbae".

// Remove substring "ba" and gain y points.

// For example, when removing "ba" from "cabxbae" it becomes "cabxe".

// Return the maximum points you can gain after applying the above operations on s.


// Input Format

// The first line contains an integer T (number of test cases), 1 ≤ T ≤ 10^5.

// The next T lines contain a string S and 2 space-separated integers S, X, Y where 1 ≤ X,Y ≤ 10^9, 1 ≤ |S| ≤ 10^6.

// Sum of |S| across all test cases ≤ 10^7.


// Output Format

// For each test case print the maximum point possible in a new line.


// Constraints

// 1 ≤ T ≤ 10^5
// 1 ≤ X,Y ≤ 10^9
// 1 ≤ |S| ≤ 10^5.
// Sum of |S| across all test cases ≤ 10^6.

// Sample Input 1

// 4
// abdsbab 23 50
// babababa 45 32
// ujaabba 4 5
// cxbaeab 17 9

// Sample Output 1

// 73
// 167
// 9
// 26

// Sample Input 2

// 20
// ab 7 4
// aaba 10 8
// baba 6 4
// ba 4 8
// baabbbb 5 6
// aaabab 1 7
// babaaba 8 10
// b 1 8
// abbaaa 2 7
// b 5 6
// aa 7 4
// bbbaa 8 4
// bbbba 7 6
// babba 8 7
// bababbab 3 1
// baa 6 9
// babbba 3 6
// aa 9 2
// baababaaba 10 8
// bbbbbbaab 3 6

// Sample Output 2

// 7
// 10
// 10
// 8
// 11
// 8
// 30
// 0
// 14
// 0
// 0
// 8
// 6
// 15
// 9
// 9
// 12
// 0
// 38
// 12

// Note

// For the first sample input:

// TEST CASE 1: 

// S = abdsbab x=23  y=50

// Remove “ba”  Points = 50 S =  “abdsb”.
// Remove “ab”  Points = 50+23 = 73 S =  “dsb”.
// Nothing else to remove ,  so total points is 73.


 

// TEST CASE 2: 

// S = babababa x=45  y=32

// Remove “ab”  Points = 45 S =  “bababa”.
// Remove “ab”  Points = 45+45 = 90 S =  “baba”
//       3.   Remove “ab”  Points = 90+45 = 135 S =  “ba”

//       4.   Remove “ba”  Points = 135+32 = 167 S = “ ”


 

// Nothing else to remove ,  so total points is 167.


 

// TEST CASE 3. 

// S = ujaabba x=4  y=5

// Remove “ba”  Points = 5 S =  “ujaab”.
// Remove “ab”  Points = 5+4 = 9 S =  “uja”
      

// Nothing else to remove ,  so total points is 9.





 

// TEST CASE 4. 

// S = cxbaeab x=17  y=9

// Remove “ab”  Points = 17 S =  “cxbae”.
// Remove “ba”  Points = 17+9 = 26 S =  “cxe”
// Nothing else to remove ,  so total points is 26
