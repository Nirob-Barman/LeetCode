#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> newQueue;
        int last;
        while (!q.empty())
        {
            // newQueue.push(q.front());
            // q.pop();
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                // not to be pushed
                last = k;
                break;
            }
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    }

    int top()
    {
        queue<int> newQueue;
        int last;
        while (!q.empty())
        {
            // newQueue.push(q.front());
            // q.pop();
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                last = k;
            }
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyStack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);

    cout << obj.top() << endl;   // 5
    cout << obj.pop() << endl;   // 5
    cout << obj.top() << endl;   // 4
    cout << obj.empty() << endl; // false

    cout << "Stack : ";
    while (!obj.empty())
    {
        cout << obj.pop() << " "; // 4 3 2 1
    }
    cout << endl;
    
    return 0;
}