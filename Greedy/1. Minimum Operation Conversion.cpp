#include<bits/stdc++.h>
using namespace std;
# define lli long long int

void solve(){
	lli x,y;
	lli ans=0;
	cin >> x >>y;
	while(y>x){
		if(y%2){
			y++;
			ans++;
		}
		y/=2;
		ans++;
	}

	ans+=(x-y);
	cout << ans <<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
		solve();
	}

}
// Time-Limit: 5 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// You are given a number X, you can perform two operations:

// Double: Multiply the number on the display by 2, or;
// Decrement: Subtract 1 from the number on the display.
// Return the minimum number of operations needed to convert number X to Y.


// Input Format

// The first line contains an integer T (number of test cases), 1 ≤ T ≤ 10^6.

// The next T lines contain 2 space-separated integers X, Y where 1 ≤ X,Y ≤ 10^18.


// Output Format

// For each test case print the minimum number of operations required in a new line.


// Constraints

// 1 ≤ T ≤ 10^6.
// 1 ≤ X,Y ≤ 10^18

// Sample Input 1

// 3
// 10 15
// 21 14
// 10 22

// Sample Output 1

// 4
// 7
// 7

// Note

// TEST CASE 1: X=10 Y=15

// MOVES : 10 → 9 → 8 → 16 → 15     #Moves = 4
 

// TEST CASE 2: X=21 Y =14

// MOVES : 21 → 20 → 19 → 18 → 17 → 16 → 15 → 14    # moves = 7
 

// TEST CASE 3: X=10 Y=22

// MOVES : 10 → 9 → 8 → 7 → 6 → 12 → 11 → 22 # moves = 7
