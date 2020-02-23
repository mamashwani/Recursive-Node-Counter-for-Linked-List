#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node* next;
};


void insert_at_beg(struct Node** head_ref, int new_data)
{
	
	struct Node* temp = new Node;

	temp->data = new_data;

	temp->next = (*head_ref);

	(*head_ref) = temp;
}

int getCount(struct Node* head)
{
	if (head == nullptr)
	{
		return 0;
	}

	return (1 + getCount(head->next));
}


int main()
{
	struct Node* head = nullptr;

	insert_at_beg(&head, 1);
	insert_at_beg(&head, 3);
	insert_at_beg(&head, 1);
	insert_at_beg(&head, 2);
	insert_at_beg(&head, 1);


	cout << "count of nodes is: " << getCount(head) << endl;

	system("pause");
	return 0;
}