#include <bits/stdc++.h>
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define cn cout << "\n";

struct Node
{
public:
	int data;
	Node *next;
};

void push_front(Node **head_ref, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void push_back(Node *node, int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;
	while (node->next != NULL)
		node = node->next;
	node->next = new_node;
}

void print_list(Node *node)
{
	if (node != NULL)
		while (node != NULL)
		{
			cout << node->data << " ";
			node = node->next;
		}
	else
		cout << "NULL";
}

void reverse(Node **node)
{
	Node *curr = *node;
	Node *prev = NULL, *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*node = prev;
}

void del_node(Node **head, int data)
{
	Node *node = *head;

	while (node != NULL && node->data == data)
		if (node->next != NULL)
		{
			*head = node->next->next;
			delete node->next;
			delete node;
			node = *head;
		}
		else
		{
			*head = NULL;
			delete node;
			node = *head;
		}

	Node *prev = NULL;

	while (node != NULL)
	{
		if (node->data == data)
		{
			if (node->next != NULL)
			{
				prev->next = node->next->next;
				delete node->next;
				delete node;
				node = prev;
			}
			else
			{
				prev->next = node->next;
				delete node;
				node = prev;
			}
		}
		prev = node;
		if (node != NULL)
			node = node->next;
	}
}

int main()
{
	FastIO;
	Node *head = NULL;
	int n;
	cin >> n;
	int inp;
	cin >> inp;
	push_front(&head, inp);

	for (int i = 1; i < n; i++)
	{
		cin >> inp;
		push_back(head, inp);
	}

	print_list(head);
	cn;

	reverse(&head);
	print_list(head);
	cn;

	cout << n * sizeof(Node *);
	cn;

	del_node(&head, 1);
	print_list(head);

	return 0;
}
