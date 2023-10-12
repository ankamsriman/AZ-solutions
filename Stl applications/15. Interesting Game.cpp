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
// transform(s.begin(), s.end(), s.begin(), ::tolower);

#define spa " "
#define nl cout << "\n"
#define pr(x) cout << x << "\n"
#define star cout << "*"
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define f first
#define s second
#define ii pair<ll, ll>

const ll mod = 1e9 + 7;
const ll N = 100000;

bool comp(pair<ll,ll>&x,pair<ll,ll>&y)
{
    return x.f+x.s>y.f+y.s;
}

void solve()
{
    ll n;
    cin>>n;
    vt(a,n);
    vt(b,n);
    scarr(a);
    scarr(b);
    vector<pair<ll,ll>>v;
    fi(i,0,n)
    {
        v.push_back(make_pair(a[i],b[i]));
    }

    sort(v.begin(),v.end(),comp);
    ll x=0,y=0;
    fi(i,0,n)
    {
        if(i%2==0)
        {
            x+=v[i].f;
        }
        else
        {
            y+=v[i].s;
        }
    }
    if(x>y)
    {
        cout<<"Alice";
    }
    else if(x<y)
    {
        cout<<"Bob";
    }
    else
    {
        cout<<"Tie";
    }
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

// Description

// Alice and Bob are playing a new game, which is very interesting and fun. The game is as follows:

// The game starts with two n-sized integer arrays, A and B, and is played by two players, P1 and P2.
// The players move in alternating turns, with P1 always moving first. During each move, the current player must choose an integer, i, such that 0 ≤ i ≤ n - 1. If the current player is P1, then  P1 receives Ai points; if the current player is P2, then P2 receives Bi points.
// Each value of i can be chosen only once. That is, if a value of i is already chosen by some player, none of the players can re-use it. So, the game always ends after n moves.
// The player with the maximum number of points wins.
// The arrays A and B are accessible to both the players P1 and P2. So the players make an optimal move at every turn.
// Given the values of n, A, and B, can you determine the outcome of the game? P1 is Alice and P2 is Bob.
// Print ‘Alice’ if Alice will win, 'Bob' if Bob will win, or 'Tie' if they will tie. Assume both players always move optimally.


// Input Format

// The first line of input contains one integer T (1 ≤ T ≤ 10) — the number of test cases. Then T test cases follow.
// The first line of each test case contains N (2 ≤ N ≤ 1000), the number of elements in arrays A and B.
// The second line contains N space-separated integers A1, A2, ..., AN - the elements of array A.
// The third line contains N space-separated integers B1, B2, ..., BN - the elements of array B.


// Output Format

// For each test case, print one of the following predicted outcomes of the game on a new line:

// Print 'Alice' if Alice will win.
// Print 'Bob' if Bob will win.
// Print 'Tie' if the two players will tie.

// Constraints

// 1 ≤ T ≤ 10
// 2 ≤ N ≤ 1000
// 1 ≤ Ai, Bi ≤ 105


// Sample Input 1

// 3

// 3

// 1 3 4

// 5 3 1

// 2

// 1 1

// 1 1

// 2

// 2 2

// 3 3


// Sample Output 1

// Alice

// Tie

// Bob


// Note

// Explanation 1:
// The players make the following 3 moves:

// Alice chooses i = 2 and receives 4 coins.
// Bob chooses i = 0 and receives 5 coins. Notice that Bob won't choose i = 1, because this would cause Alice to win.
// Alice chooses i = 1 (the only remaining move) and receives 3 coins.
// The total score of Alice is 7, while the total score of Bob is 5. Hence, Alice wins.

// Explanation 2:
// Both players will only make 1 move and all possible point values are 1, the players will end the game with equal scores.

// Explanation 3:
// Both players will only make 1 move and all the possible point values for Bob are greater than all the possible point values for Alice, Bob will win the game.
