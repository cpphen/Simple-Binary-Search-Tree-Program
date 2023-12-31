#include "stdafx.h"
#include "DollarAmount.h"
#include <iostream>
using std::cout;
using std::endl;

struct Node {
	int bet;
	Node *left, *right;
	Node::Node();
	Node::Node(int);
};

DollarAmount::DollarAmount() 
	: root(NULL){}

Node::Node():bet(NULL), left(NULL), right(NULL){}

Node::Node(int amount)
{
	bet = amount;
	left = NULL;
	right = NULL;
}

void DollarAmount::SetBet(int bet)
{
	Node *newNode = new Node(bet);
	if (root == NULL)
	{
		root = newNode;
	}
	SetTreeNode(root, newNode);
}

void DollarAmount::SetTreeNode(Node *&node, Node *newNode)
{
	if (node == NULL)
	{
		node = newNode;
	}
	else
	{
		if (newNode->bet > node->bet)
		{
			SetTreeNode(node->right, newNode);
		}
		else if (newNode->bet < node->bet)
		{
			SetTreeNode(node->left, newNode);
		}
	}

}

void DollarAmount::Print()
{
	if (root != NULL)
	{
		PrintTree(root);
	}
}

void DollarAmount::PrintTree(Node *node)
{
	if (node != NULL)
	{
		PrintTree(node->left);
		cout << "Bet Amount: " << node->bet << endl;
		PrintTree(node->right);
	}
}

DollarAmount::~DollarAmount()
{
	if (root)
	{
		DeleteNodes(root);
	}
}

void DollarAmount::DeleteNodes(Node *node)
{
	if (node != NULL)
	{
		DeleteNodes(node->right);
		DeleteNodes(node->left);
		delete node;
	}
}
