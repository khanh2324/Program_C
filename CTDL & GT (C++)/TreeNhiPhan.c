//dinh nghia kieu du lieu cho cac Node
typedef struct Node
{
	int data;
	Node* left;
	Node* right;
} node_t;
//ham giai phong du lieu khi muon xoa 1 cay con hoac toan bo cay
void Free(node_t* root){
	if(root == NULL){
		return;
	}
	Free(root->left);//de quy xoa cay con ben trai
	Free(root->right);
	free(root);//giai phong vung nho con tro hien tai
}
//ham dieu huong cua cay (giup them phan tu vao cay va tim kiem tren cay)
int LeftOf(const int value,const node_t* root){
	//neu ban muon cay cho phep gia tri trung lap thi dung dong code thu 2
	return value < root->data;
	//return value <= root->data;
}
int RightOf(const int value, const node_t* root){
	return value > root->data;
}
//them phan tu vao cay nhi phan
/*Nếu Node hiện tại = NULL, đó là vị trí cần thêm. Thêm vào BST và kết thúc
Nếu giá trị cần thêm < giá trị root hiện tại, gọi đệ quy Insert vào cây con bên trái
Nếu giá trị cần thêm > giá trị root hiện tại, gọi đệ quy Insert vào cây con bên phải.*/
node_t* Insert(node_t* root, const int value){
	if(root == NULL){
		node_t* node = (node_t*)malloc(sizeof(node_t));
		node->left = NULL;
		node->right = NULL;
		node->data = value;
		return node;
	}
	if(LeftOf(value,root))
		root->left = Insert(root->left,value);//dung de quy lien tuc
	else if(RightOf(value,root))
		root->right = Insert(root->right,value);//node se di chuyen lien tuc theo nguyen tac ban dau cua cay
	return root;
}
//tim kiem tren cay nhi phan
bool Search(const node_t* root, int value){
	if(root == NULL){
		return false;
	}
	if(root->data == value){
		return true;
	}else if(LeftOf(value,root)){
		return Search(root->left, value);
	}else if(RightOf(value,root))
		return Search(root->right,value);
}
//Lay gia tri con trai nhat
//duyet theo con tro den cay con ben trai toi khi nao k con ben trai nua
int LeftMostValue( const node_t* root )
{
    while ( root->left != NULL )
        root = root->left;
    return root->data;
}
//xoa Node trong cay nhi phan
//TH1: Node can xoa la node la
//TH2: Node can xoa co 1 Child
//TH3: Node can xoa co du 2 Child (can tim Node the than)
/* Cach lam truong hop 3:
1, Tim Node con trai nhat ("leftmost")cua cay con ben phai Node can xoa
2, Cap nhat gia tri cua Node can xoa = gia tri cua Node "leftmost"
3, Goi de quy ham Delete xoa "leftmost" khoi cay*/
node_t* Delete( node_t* root, int value )
{
    if ( root == NULL )
        return root;
    if ( LeftOf( value, root ) )
        root->left = Delete( root->left, value );
    else if ( RightOf( value, root ) )
        root->right = Delete( root->right, value );
    else
    {
        // root->data == value, delete this node
        if ( root->left == NULL )
        {
            node_t* newRoot = root->right;
            free( root );
            return newRoot;
        }
        if ( root->right == NULL )
        {
            node_t* newRoot = root->left;
            free( root );
            return newRoot;
        }
        root->data = LeftMostValue( root->right );
        root->right = Delete( root->right, root->data );
    }
    return root;
}
//duyet cay tim kiem nhi phan 
//1: Duyet PreOrder (Node -> Left -> Right)
void PreOrder(node_t* root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
//2: Duyet InOrder (Left-> Node -> Right)
void InOrder(node_t* root){
    if(root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
//3: Duyet PostOrder (Left -> Right -> Node)
void PostOrder(node_t* root){
    if(root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}

