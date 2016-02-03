#pragma once
#include "TreeNode.h"

class Tree
{
public:
	enum CommandType
	{
		INSERT, DELETE, PRINT
	};

	enum TargetLocation
	{
		IS_LEFT,
		IS_RIGHT
	};

	enum TargetType
	{
		HAS_NO_CHILD,
		HAS_LEFT_CHILD,
		HAS_RIGHT_CHILD,
		HAS_TWO_CHILDREN
	};

	Tree();
	~Tree();

	void Insert(int index);
	TreeNode* Find(int index);
	void Delete(int index);	
	void deleteRoot();
	int getSmallestIndexFromRightSubtree(TreeNode* node);
	TreeNode* getParent(TreeNode* node);
	TargetLocation getLocation(TreeNode* node);
	
	void Print();	

	void ReadData(char* inputFileName = nullptr);
	void ParseLine(char* line);

	void Clear();
private:
	TreeNode* root = nullptr;
	void Print(TreeNode* node);
};

