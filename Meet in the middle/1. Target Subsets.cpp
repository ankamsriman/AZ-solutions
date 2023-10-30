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



void solve(){
    int n,target;
    cin >> n >>target;
    vector<int>arr[2];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr[i&1].push_back(x);
    }

    int n1=arr[0].size();
    int n2=arr[1].size();
    vector<int>m1,m2;
    for(int mask=0;mask<(1<<n1);mask++){
        int ans=0;
        for(int i=0;i<n1;i++){
            if (mask&(1<<i)){
                ans+=arr[0][i];
            }
        }

        m1.push_back(ans);
    }

    for(int mask=0;mask<(1<<n2);mask++){
        int ans=0;
        for(int i=0;i<n2;i++){
            if (mask&(1<<i)){
                ans+=arr[1][i];
            }
        }

        m2.push_back(ans);
    }

    sort(m1.begin(),m1.end());
    sort(m2.begin(),m2.end());

    ll ans=0;

    if (n1<n2){
        for(int i=0;i<m1.size();i++){
            int k=target-m1[i];
            int x=(upper_bound(m2.begin(),m2.end(),k)-m2.begin());
            ans+=x;
        }
    }
    else{
        for(int i=0;i<m2.size();i++){
            int k=target-m2[i];
            int x=(upper_bound(m1.begin(),m1.end(),k)-m1.begin());
            ans+=x;
        }

    }

    cout << ans << endl;


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

// Time-Limit: 3 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You have given an array of length N, and a number X. Find the number of subsets with the sum of elements less than equal to X.

// Note:

// The sum of elements in an empty subset is 0.
// The set may contain duplicates elements.

// Input Format

// The first line of input contains T - the number of test cases.
// The first line of each test case contains two space-separated numbers N and X.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.  


// Output Format

// Print the number of subsets with a sum less than equal to X in a new line for each test case.


// Constraints

// 1 ≤ T ≤ 5
// 1 ≤ N ≤ 35
// 0 ≤ Ai ≤ 104
// 0 ≤ X ≤ 106


// Sample Input 1

// 2
// 2 1
// 1 2
// 3 8
// 2 2 6

// Sample Output 1

// 2
// 7

// Note

// Explanation 1:
// The subsets are {}, {1}, {2}, {1, 2}. The number of subsets with sum ≤ 1 is 2.

// Explanation 2:
// The subsets are {}, {2}, {2}, {6}, {2, 2}, {2, 6}, {2, 6}, {2, 2, 6} The number of subsets with sum ≤ 8 is 7.
