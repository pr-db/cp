#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class MyQueue
{
public:
	stack<int> s;
	stack<int> t;

	MyQueue()
	{
	}

	void push(int x)
	{
		s.push(x);
	}

	int pop()
	{
		if (!t.size())
			while (s.size())
				t.push(s.top()), s.pop();

		int ttop = t.top();
		t.pop();
		return ttop;
	}

	int peek()
	{
		if (!t.size())
			while (s.size())
				t.push(s.top()), s.pop();

		return t.top();
	}

	bool empty()
	{
		if (!s.size() && !t.size())
			return true;
		return false;
	}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */