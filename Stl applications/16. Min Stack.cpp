#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
class MinStack {
private:
    stack<ll>s,ms;
public:

    
    void push(int x) 
    {
        if(s.empty())s.push(x),ms.push(x);
        else
        {
            s.push(x);
            if(ms.top()<x)
                ms.push(ms.top());
            else ms.push(x);     
           
        }
    }

    void pop() {
        if(!s.empty())
        {
            s.pop();
            ms.pop();
        }
    }

    int top() {
        if(!s.empty())
        {
            return s.top();
        }
        return -1;
    }

    int getMin() 
    {
        if(!s.empty())
        {
            return ms.top();
        }
        return -1;
    }
};
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;

    MinStack s;

    while(q--) {
        string op;
        cin >> op;

        if(op == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if(op == "pop") {
            s.pop();
        }
        else if(op == "top") {
            cout << s.top() << "\n";
        }
        else if(op == "getMin") {
            cout << s.getMin() << "\n";
        }
    }

    return 0;
}

// Description

// Implement a stack that supports the following operations.

// push x -- Push element x onto stack.
// pop -- Remove the element on top of the stack, if the stack is non-empty. Otherwise do nothing.
// top -- Print the top element, if the stack is non-empty. Otherwise, print -1.
// getMin -- Print the minimum element in the stack, if the stack is non-empty. Otherwise, print -1.
// Initially, the stack is empty.


// Input Format

// The first line of input contains Q - the number of queries.
// Each of next line contains input in one of the four formats mentioned in the problem statement.


// Output Format

// Print the answer for the top and getMin operations.


// Constraints

// 1 ≤ Q ≤ 106
// 0 ≤ x ≤ 109


// Sample Input 1

// 11
// push 1
// push 3
// top
// getMin
// pop
// top
// getMin
// pop
// pop
// top
// getMin

// Sample Output 1

// 3
// 1
// 1
// 1
// -1
// -1
