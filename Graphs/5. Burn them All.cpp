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


using state =pair<ll,ll>;
const ll mod = 1e9 + 7;
const ll N = 100000;


void solve()
{
    int n,m;cin >> n>>m;

    vector<pair<int, ll>> g[n + 1];
    vector<pair<pair<int, int>, ll>> edges;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll d;
        cin >> u >> v >> d;
        g[u].push_back({v, d});
        g[v].push_back({u, d});
        edges.push_back({{u, v}, d});
    }

    int st;cin >> st;
    ll dist[n + 1],vis[n+1];

    for (int i = 1; i <= n; i++) dist[i] = 1e18,vis[i]=0;

    priority_queue<pair<ll, int>> pq;
    pq.push({0,st});
    dist[st]=0;
    while(!pq.empty())
    {
        auto it=pq.top();
        pq.pop();
        ll d=-it.f;int u=it.s;
        if(vis[u])continue;
        vis[u]=1;
        for(auto it:g[u])
        {
            ll w=it.s;int v=it.f;
            if(dist[v]>w+d)
            {
                dist[v]=w+d;
                pq.push({-dist[v],v});
            }
        }
    }
    ll ans = -1e18;

    for (auto it : edges)
    {
        int u = it.f.f,v = it.f.s;
        ll d = it.s;

        ll z=(dist[u]+dist[v]+d)*5;
        ans=max(ans,z);
    }


    cout << ans<< "\n";

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
/*
Burn them All

Time-Limit: 2 sec Score: 100.00/100
Difficulty : 
 Memory: 256 MB Accepted Submissions: 100
Relevant For:
Description

You have given an undirected graph of N vertices and M edges. Edge weight d on edge between nodes u and v represents that u and v are connected by a thread of length d units. 
You set node A on to the fire. It takes to fire 1 unit of time to travel 1 unit of distance via threads.
Let T be the minimum time in which all the threads will be burned out. 

Your task is to find 10T. We can prove that 10T will always be an integer number.

See the sample test cases for more explanation.


Input Format

The first line of input contains N - the number of nodes in the graph.
The second line contains M - the number of edges in the graph.
Next M lines contain three integers u, v, d - there is a thread between node u and v of length d.
The last line of input contains A - the node on which we set fire.

It’s guaranteed that graph is connected.


Output Format

Print the value of 10T.


Constraints

1 ≤ N ≤ 2 x 105
1 ≤ M ≤ 2 x 105
1 ≤ u, v ≤ N
1 ≤ d ≤ 109


Sample Input 1

2
1
1 2 2
1

Sample Output 1

20

Sample Input 2

3
3
1 2 2
2 3 2
1 3 6
1

Sample Output 2

50

Sample Input 3

3
3
1 2 2
1 3 2
2 3 1
1

Sample Output 3

25

Note

Explanation 1:

At t = 0, node 1 is at fire.
At t = 1, thread 1-2 is half burned.
At t = 2, thread 1-2 is fully burned.
So T = 2. And 10T = 20.

Explanation 2:

At t = 0, node 1 is at fire.
At t = 2, thread 1-2 is fully burned, and thread 1-3 is 1/3rd burned.
At t = 4, threads 1-2 and 2-3 are fully burned, and 4 units of thread 1-3 are burned. For the remaining 2 units of thread 1-3, fire is approaching from both ends.
At t = 5, all threads are fully burned.
So T = 5. And 10T = 50.

Explanation 3:

At t = 0, node 1 is starting to burn.
At t = 2, threads 1-2 and 1-3 are fully burned. Now for thread 2-3, fire is approaching from both ends at equal speed.
At t = 2.5, thread 2-3 is fully burned.
So T = 2.5. And 10T = 25.
*/
