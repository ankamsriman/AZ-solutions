#include<bits/stdc++.h>
using namespace std;
# define lli long long int
//using int=long long int;

lli n,m,k;
vector<lli>arr1,arr2;

int check(int x){
    lli cnt=0;
    for(int i=0;i<n;i++){
        cnt+=upper_bound(arr2.begin(),arr2.end(),x-arr1[i])-arr2.begin();
    }

    return cnt>=k;
}


void solve(){
    cin >> n>>m >>k;
    arr1.resize(n);
    arr2.resize(m);
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }

    if(n>m){
        swap(n,m);
        swap(arr1,arr2);
    }

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    lli lo=arr1[0]+arr2[0];
    lli hi=arr1[n-1]+arr2[m-1];

    lli ans=lo;

    while(lo<=hi){
        lli mid=(lo+hi)/2;
        if (check(mid)){
            ans=mid;
            hi=mid-1;
        }

        else{
            lo=mid+1;
        }
    }

    cout << ans <<"\n";





    
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
// Description

// Given two arrays A of size N and B of size M and an integer K. Create a new array C of size N*M consisting of A[i]+B[j] for 1≤i≤N, 1≤j≤M. Find the Kth smallest element in the array C.


// Input Format

// The first line contains T, the number of test cases (1<=T<=10000).

// The first line contains 3 space-separated integer N, M, K where 1<=N<=10^6, 1<=M<=10^6, 1<=K<=N*M.

// Next line contains N space-separated integers (0<=Ai<=1e4).

// Next line contains M space-separated integers (0<=Bi<=1e4).

// Sum of min(N, M) across all test cases<=10^5.


// Output Format

// For each test case print the Kth smallest element in the array C.


// Sample Input 1

// 1
// 3 3 6
// 1 2 3
// 4 5 6

// Sample Output 1

// 7

// Note

// Array C -> [1+4,1+5,1+6,2+4,2+5,2+6,3+4,3+5,3+6] -> [5,6,7,6,7,8,7,8,9]
// Array C after sorting - [5,6,6,7,7,7,8,8,9]
// 6th element is 7.
