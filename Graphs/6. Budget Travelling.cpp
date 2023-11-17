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

ll n,m;
vector<state>g[100010];
ll p[100010],vis[100010][101];
ll dist[100010][101];
void dij(ll st,ll en,ll c)
{

    fi(i,0,n+1)
    {
        fi(j,0,c+1)dist[i][j]=1e9;
    }
    priority_queue<pair<int,state>>pq;
    pq.push({0,{st,0}});
    dist[st][0]=0;
    while(!pq.empty())
    {
        auto cur=pq.top();
        ll d=-cur.f,nd=cur.s.f,fuel=cur.s.s;
        pq.pop();
        if(vis[nd][fuel]) continue;
        vis[nd][fuel]=1;
        if(fuel+1<=c&&(dist[nd][fuel+1]>d+p[nd]))
        {
            dist[nd][fuel+1]=d+p[nd];
            pq.push({-dist[nd][fuel+1],{nd,fuel+1}});
        }
        for(auto x:g[nd])
        {
            if(fuel>=x.s&&dist[x.f][fuel-x.s]>d)
            {
                dist[x.f][fuel-x.s]=d;
                pq.push({-dist[x.f][fuel-x.s],{x.f,fuel-x.s}});
            }
        }
    }
    ll mn=1e18;
    fi(i,0,c+1)
    {
        mn=min(mn,dist[en][i]);
    }
    cout<<mn;
    nl;
}

void solve()
{
    cin>>n>>m;
    memset(dist,1e9,sizeof(dist));
    fi(i,0,m)
    {
        ll u,v,w;cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    fi(i,0,n)
    {
        cin>>p[i+1];
    }
    ll a,b,c;
    cin>>a>>b>>c;
    dij(a,b,c);

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
Time-Limit: 2 sec Score: 100.00/100
Difficulty : 
 Memory: 256 MB Accepted Submissions: 100
Relevant For:
Description

You want to visit the country of wonderland. There are N cities in the country. Not all cities are connected by roads. You know which cities are connected. 

You landed in city A, and you want to visit city B. You already booked your car, but it doesn’t have any petrol. The capacity of the tank of the car is C. You know the Per Liter cost of petrol in each city, and you also have the map of the country, i.e., you know the length of road between two cities. To travel one unit of distance, you need one liter of petrol.

Find the minimum cost to travel from city A to city B.


Input Format

The first line of input contains N - the number of cities in the country of wonderland.
The second line contains M - the number of roads in the country.
Next M lines contain three integers u, v, d - there is a road between city u and v of length d.
The next lines contain N space-separated integers P[1], P[2], …., P[N] - P[i] is the per liter cost of petrol in the city i.
The last line of input contains A, B, and C - the starting city, the destination city, and the capacity of the tank of car you booked.
It’s guaranteed that it’s always possible to reach city B from A.


Output Format

Print the minimum cost to reach city B on a new line.


Constraints

1 ≤ N ≤ 10000
1 ≤ M ≤ 100000
1 ≤ C ≤ 100
1 ≤ u, v ≤ N
1 ≤ d ≤ C
1 ≤ A, B ≤ N
1 ≤ P[i] ≤ 100
 


Sample Input 1

5
5
1 2 1
2 3 1
3 4 1
4 5 1
1 4 6
1 10 10 10 1
1 5 8

Sample Output 1

4

Sample Input 2

6
6
1 2 1
2 3 1
3 4 1
4 5 1
1 6 1
6 5 5
10 10 10 10 1 1
1 5 8

Sample Output 2

15

Note

Explanation 1:

Fill petrol of 4 liters in city 1, and travel via path 1 → 2 → 3 → 4 → 5.

Explanation 2:

Fill 1 liter of petrol in city 1 of cost 10, travel to city 6. Fill 5 liters of petrol at city 6 of cost 5 x 1 = 5. Travel to city 5. Total cost = 10 + 5 = 15. The path took 1 → 6 → 5.
