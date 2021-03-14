#include<stdlib.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
	node* t=root;
	node* r=NULL,*p;
	if(root==NULL){
		p=(node*)malloc(sizeof(node));
		p->left=p->right=NULL;
		p->node_id=node_id;
		p->data=data;
		root=p;
		return;
	}
	while(t!=NULL){
		r=t;
		if(node_id<t->node_id){
			t=t->left;
		}
		else if(node_id>t->node_id){
			t=t->right;
		}
		else{
			return;
		}
	}
	p=(node*)malloc(sizeof(node));
	p->left=p->right=NULL;
	p->node_id=node_id;
	p->data=data;
	if(node_id<r->node_id)r->left=p;
	else r->right=p;

}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {

	node* t=root;
	while(t!=NULL){
		if(node_id==t->node_id){
			return t->data;
		}
		else if(node_id<t->node_id){
			t=t->left;
		}
		else{
			t=t->right;
		}
	}

	return -1;
	
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
