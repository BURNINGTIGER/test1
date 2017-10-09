struct Node {
	int data;
	Node * next;
};

Node * reverse(Node * head) {
	Node *reversehead = NULL;

	for (Node *node = head, *nextnode; node != NULL; node = nextnode)
	{
		nextnode = node->next;
		node->next = reversehead;
		reversehead = node;
	}

	return reversehead;
}
