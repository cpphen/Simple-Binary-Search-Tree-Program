#pragma once

struct Node;

class DollarAmount {
private:
	Node * root;
	void DeleteNodes(Node *);
	void PrintTree(Node *);
	void SetTreeNode(Node *&, Node *);
public:
	DollarAmount();
	void Print();
	void SetBet(int);
	~DollarAmount();
};