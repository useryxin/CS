//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct TreeNode{
//	int data;
//	struct TreeNode* lchild;
//	struct TreeNode* rchild;
//}TreeNode;
//
//void Recursion(TreeNode* T){
//	if (T == NULL)
//		return;
//
//	printf("%d ", T->data);
//	Recursion(T->lchild);
//	Recursion(T->rchild);
//}
//
//void CreatTree(TreeNode** T, int data){
//	if (*T == NULL) {
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = data;
//
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//	}
//
//	else if (data == (*T)->data)
//		return;
//
//	else if (data < (*T)->data)
//		CreatTree(&((*T)->lchild), data);
//
//	else
//		CreatTree(&((*T)->rchild), data);
//}
//
//TreeNode* Search(TreeNode* T, int data){
//	if (T->data == data)
//		return T;
//
//	else if (T->data > data)
//		return Search(T->lchild, data);
//
//	else
//		return Search(T->rchild, data);
//}
//
//int main(){
//	TreeNode* T = NULL;
//	int nums[] = { 4,5,19,23,2,8 };
//	for (int i = 0; i < 6; i++)
//		CreatTree(&T, nums[i]);
//
//	Recursion(T);
//	printf("\n");
//	TreeNode* ret = Search(T, 5);
//	printf("%d ", ret->data);
//
//	system("pause");
//	return 0;
//}