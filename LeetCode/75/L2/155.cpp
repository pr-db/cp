#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class MinStack
{
public:
	stack<int> s;
	stack<int> m;
	MinStack()
	{
		m.push(INT_MAX);
	}

	void push(int val)
	{
		s.push(val);
		if (val <= m.top())
			m.push(val);
	}

	void pop()
	{
		if (s.top() == m.top())
			m.pop();
		s.pop();
	}

	int top()
	{
		return s.top();
	}

	int getMin()
	{
		return m.top();
	}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */