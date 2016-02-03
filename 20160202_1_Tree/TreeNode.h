#pragma once

class TreeNode
{
public:
	TreeNode(void){};
	~TreeNode(void){};

	int index = 0;
	//void* data = nullptr;
	TreeNode* childLeft = nullptr;
	TreeNode* childRight = nullptr;
};


