// //ANKAM SRIMAN
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// #define fi(i, a, b) for (long long int i = a; i < b; i++)
// #define fd(i, a, b) for (long long int i = a; i >= b; i--)
// #define vl(a, n) vector<ll> a(n)
// #define scarr(a) for (long long int i = 0; i < a.size(); i++) cin >> a[i]
// #define parr(a)  for (long long int i = 0; i < a.size(); i++) cout << a[i] << " "
// #define prr(a)  for (auto x:a) cout << x << " "
// #define vt(a,n) vector<long long int>a(n)
// #define ll long long
// #define ull unsigned long long int
// #define pb(x) push_back(x)
// // transform(s.begin(), s.end(), s.begin(), ::tolower);

// #define spa " "
// #define nl cout << "\n"
// #define pr(x) cout << x << "\n"
// #define star cout << "*"
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define f first
// #define s second
// #define ii pair<ll,ll>


// using state =pair<int,int>;
// const ll mod = 1e9 + 7;
// const ll N = 100000;



// void solve()
// {
//     ll n,k;
//     cin>>n>>k;
//     vt(a,n);
//     scarr(a);
//     ll ans=0;
//     fd(i,31,0)
//     {
//         vector<ll>b;
//         for(auto x:a)
//         {
//             if(x&(1LL<<i))
//             {
//                 b.push_back(x);
//             }
//         }
//         if(b.size()>=k)
//         {
//             ans+=(1LL<<i);
//             a=b;
//         }
//     }
//     pr(ans);

// }


// signed main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     IOS;
//     ll t = 1;
//     cin >> t;
//     // string x;
//     // getline(cin,x);
//     while (t--)
//     {
//         // q++;

//         solve();
//     }
//     return 0;
// }

Description

Given an array A of N positive integers, find the maximum of bitwise ANDs of all subsequences of A with length equal to X.


Input Format

The first line of the input contains a single integer T denoting the number of test cases, (1<=T<=100).

The first line of each test case contains two space-separated integer N, X, (2<=N<=100000), (1<=X<=N).

The second line contains N space-separated integers A1,A2,…,AN, (1<=Ai<=10^9).

 

Sum of N over all test cases does not exceed 10^6.


Output Format

For each test case print the maximum of bitwise ANDs of all subsequences of A with length equal to X.


Sample Input 1

6
5 2
1 2 3 4 5
5 3
2 4 4 2 4
3 2
1 2 3
4 3
1 2 2 4
10 3
989098 987656790 989098765 234543 3456543 234567543 1234567 5678 56789 8909876
10 2
123 1234543 2345 6776 8787 8765467 234567 98765444 1234 4561

Sample Output 1

4
4
2
0
147862020
8454144

Note

1st test case - all subsequence of length X and AND value:
(1,2) - 0
(1,3) - 1
(1,4) - 0
(1,5) - 1
(2,3) - 2
(2,4) - 0
(2,5) - 0
(3,4) - 0
(3,5) - 1
(4,5) - 4
Maximum AND value of all subsequences with length X = 4
