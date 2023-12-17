#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout
using namespace std;


class Node {
public:
	int data;
	Node* left, *right;
	Node(int data) {
		this->data = data;
		this->left = NULL; this->right = NULL;
	}
};

Node * insertNode(Node * root, int x) {
	if (!root) {
		Node * node = new Node(x);
		return node;
	}
	if (x > root->data) {
		root->right = insertNode(root->right, x);
	} else {
		root->left = insertNode(root->left, x);
	}
	return root;
}

Node * getRoot(vi& ar, int n) {
	Node * root = NULL;
	FOR(i, n) {
		root = insertNode(root, ar[i]);
	}
	return root;
}

int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		Node * root = getRoot(ar, n);




	}
	return 0;
}

