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

ll cal(char c1,char op,char c2)
{
    ll x1=c1-'0';
    ll x2=c2-'0';
    if(op=='&') return x1&x2;
    else if(op=='^') return x1^x2;
    return x1|x2;

}

ll fun(string &s,ll val)
{
    stack<char>st;
    ll n=s.length();
    fi(i,0,n)
    {
        if(s[i]==')')
        {
            char c1=st.top();
            st.pop();
            char op=st.top();
            st.pop();
            char c2=st.top();
            st.pop();
            st.pop();
            st.push(cal(c1,op,c2));
        }
        else
        {
            if(s[i]=='x')
            {
                st.push(val+'0');
            }
            else if(s[i]=='X')
            {
                st.push(1-val+'0');
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    return (st.top()-'0');
}

void solve()
{
    string s;
    cin>>s;
    ll x1=fun(s,0);
    ll x2=fun(s,1);
    cout<<(x1!=x2);
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
