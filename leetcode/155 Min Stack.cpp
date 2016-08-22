/*
author : mengguoru
date   : 2016/8/22
*/

struct Node {
	Node* pre;
	int val;
	Node* next;
};

class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {
		head = new Node();
		head->pre = NULL;
		head->val = -1;//it is arbitrary
		head->next = NULL;
		tail = head;

		minHead = new Node();
		minHead->pre = NULL;
		minHead->val = INT_MAX;
		minHead->next = NULL;
		minTail = minHead;
	}

	void push(int x) {
		Node* tmp = new Node();
		tmp->val = x;
		//let tail & tmp point to each other
		tmp->pre = tail;
		tail->next = tmp;
		tmp->next = NULL;
		// after operation,tail point to tmp
		tail = tmp;

		if (x <= minTail->val)
		{
			Node* tmp = new Node();
			tmp->val = x;
			tmp->pre = minTail;
			tmp->next = NULL;
			minTail->next = tmp;
			minTail = tmp;
		}
	}

	void pop() {
		if (tail->val == minTail->val)
		{
			Node* tmp = minTail;
			minTail = minTail->pre;
			minTail->next = NULL;
			delete(tmp);
		}

		Node* tmp = tail;
		tail = tail->pre;
		//delete Node 
		tail->next = NULL;
		delete(tmp);
	}

	int top() {
		return tail->val;
	}

	int getMin() {
		return minTail->val;
	}
private:
	Node* head;
	Node* tail;
	Node* minHead;
	Node* minTail;
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(x);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/