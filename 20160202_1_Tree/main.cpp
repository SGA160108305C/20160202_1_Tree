#include <stdio.h>
#include "MemoryLeakCheck.h"
#include "Tree.h"

int main()
{	
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Tree tree;
	//tree.Insert(50);
	//tree.Insert(30);
	//tree.Insert(70);
	//tree.Insert(10);
	//tree.Insert(15);
	//tree.Insert(55);
	//TreeNode* findNode = tree.Find(50);
	//tree.Delete(30);

	//tree.Print();


	tree.ReadData("data_tree.txt");
	//
	//tree.Clear();

	getchar();

	//
}