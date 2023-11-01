#include<bits/stdc++.h>
using namespace std;
# define lli long long int

void solve(){
	int n;
	cin >> n;
	int arr[n],brr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i]>> brr[i];
	}

	sort(arr,arr+n);
	sort(brr,brr+n);

	int x=arr[n/2];
	int y=brr[n/2];
	lli ans=0;
	for(int i=0;i<n;i++){
		ans+=abs(arr[i]-x);
		ans+=abs(brr[i]-y);
	}

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

// Meet at a Point

// Time-Limit: 2 sec Score: 100.00/100
// Difficulty : 
//  Memory: 256 MB Accepted Submissions: 100
// Relevant For:
// Description

// There are 
// n
//  friends in a 2D plane who want to meet at some common point. Each of their position is given to you as 
// x
//  & 
// y
//  coordinates.

// The distance a person covers to go from position 
// (
// x
// 1
// ,
// y
// 1
// )
//  to 
// (
// x
// 2
// ,
// y
// 2
// )
//  is the Manhattan distance, i.e., 
// |
// x
// 1
// −
// x
// 2
// |
// +
// |
// y
// 1
// −
// y
// 2
// |
// .

// They choose the meeting point such that the sum of distances covered by each of them to reach it is minimum. Find this minimum sum of distances.


// Input Format

// The first line of input contains 
// T
// , the number of test cases.
// The first line of each test case contains 
// n
// .
// Each of the next 
// n
//  lines contains two integers 
// (
// x
// ,
// y
// )
// .


// Output Format

// For each test case output one integer: The minimum sum of distances covered by them.


// Constraints

// 1
// ≤
// T
// ≤
// 10

// 1
// ≤
// n
// ≤
// 10
// 5

// 0
// ≤
// x
// ,
// y
// ≤
// 10
// 6

// Sample Input 1

// 1
// 3
// 0 4
// 4 0
// 2 2

// Sample Output 1

// 8

// Note

// Point 
// (
// 2
// ,
// 2
// )
//  is the optimal meeting point in this case.
