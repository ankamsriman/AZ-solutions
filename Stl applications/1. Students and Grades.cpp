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

void solve()
{

    //star;
    ll n,m;
    cin>>n>>m;

    ll x;
    map<ll,ll>mp;
    fi(i,0,n)
    {
        cin>>x;
        mp[x]++;
    }
    fi(i,0,m)
    {
        cin>>x;
        if(mp[x]>0)
        {
            cout<<"YES";
        }
        else cout<<"NO";
        nl;
        mp[x]++;
    }



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

// There are N students in section A. The i-th student got Ai marks. The class teacher of section B was absent so sections A and B were merged. 
// The students of section B did not want to humiliate themselves, so they decided to sit with students having the same marks as them.
 // You are given the marks of students of section B in order of their entry in the class. 
// You have to tell whether the i-th student of section B can sit with a student with the same marks as him. 
// If there is at least 1 person in the room with the same marks, print ‘YES’ else print ‘NO’. (without the quotes)

// See Sample Test Cases.


// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains two space-separated integers N and M - the number of students in sections A and B respectively.
// The second line of each test case contains N space-separated integers A1, A2, …, AN - the grades of students of section A.
// The third line of each test case contains M space-separated integers B1, B2, …, BM - the grades of students of section B.


// Output Format

// For each test case, print M strings on a new line. Print ‘YES’ if there is at least 1 person in the room with the same IQ. Otherwise, print ‘NO’. (without the quotes)


// Constraints

// 1≤ T ≤ 10
// 1≤ N, M ≤ 105
// 1≤ Ai , Bi ≤ 1012


// Sample Input 1

// 2

// 3 5

// 2 5 4

// 7 4 1 4 5

// 4 4

// 1 1 8 2

// 8 3 3 5


// Sample Output 1

// NO

// YES

// NO

// YES

// YES

// YES

// NO

// YES

// NO


// Note

// In the first test case of the example, when the first student enters, there is no student with 7 marks.
// When the second student enters, there is 1 student with 4 marks.
// When the third student enters, there is no student with 1 mark.
// When the fourth student enters, there are 2 students with 4 marks.
// When the fifth student enters, there is 1 student with 5 marks.
