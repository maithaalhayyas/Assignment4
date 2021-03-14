#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/
	insert_node(101,40);
	insert_node(200,110);
	insert_node(54,101);
	insert_node(65,140);
	insert_node(450,120);
	insert_node(232,150);

	printf("%d\n",find_node_data(54));


	return 0;
}
