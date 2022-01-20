//cai dat cay nhi phan
struct node{
	int data;
	struct node * left;
	struct node * right;
};
//khoi tao node goc
struct node root;
//khoi tao con tro Node
struct node * MakeNode(int value){
	struct node *temp = (node *)malloc(sizeof(node));
	temp->data = value;
	temp->left = temp->right=NULL;
	return temp;
}
//tinh chieu cao cay
int MaxDepth(struct node* node){
	if(node == NULL){
		return 0;
	}else{
		//tinh toan do cao cua cac cay con
		int leftDepth = MaxDepth(node->left);
		int rightDepth = MaxDepth(node->right);
		//su dung nhanh lon hon lam chieu cao MaxDepth
		if(leftDepth > rightDepth){
			return (leftDepth + 1);//+1 node goc
		}
		else{
			return (rightDepth + 1);
		}
	}
}