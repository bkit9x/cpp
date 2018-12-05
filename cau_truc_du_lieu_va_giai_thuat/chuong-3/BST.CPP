#include <iostream>
using namespace std;
typedef int Info;

typedef struct BinT_Node{
	Info Key;
    int Count;
	BinT_Node *Left;
	BinT_Node *Right;
} BinT_OneNode;
typedef BinT_OneNode *BST_Type;

void Initialize(BinT_Type &BTree){
	BTree = new BinT_Node;
	BTree = NULL;
}
BST_Type BST_Searching(BST_Type BSTree, Info SearchData){
    BST_Type CurNode = BSTree;
    while(CurNode != NULL && CurNode->Key != SearchData)
        if(CurNode->Key > SearchData)
            CurNode = CurNode->Left;
        else
            CurNode = CurNode->Right;
    Return CurNode;
}
BST_Type BST_Add_Node(BST_Type &BSTree, Info NewData){
	BST_Type NewNode = Create_Node(NewData);
	if(BSTree == NULL)
		BSTree = NewNode;
	else{
		BST_Type CurNode = BSTree;
		int Add_Left=1;
		while(CurNode->Key != NewData){
			if(CurNode->Key > NewData){
				AddLeft = 1;
				if(CurNode->Left != NULL)
					CurNode = CurNode->Left;
				else
					break;
			}
			else{
				AddLeft = 0;
				if(CurNode->Right != NULL)
					CurNode = CurNode->Right;
				else
					break;
			}
		}
		if(AddLeft ==1)
			CurNode->Left = NewNode;
		else
			CurNode-> Right = NewNode;
	}
}

bool BST_Delete_Node_TRF(BST_Type &BSTree, Info DelData){
	BST_Type DelNode = BSTree;
	BST_Type PrDelNode = NULL;
	int OnTheLeft = 0;
	while(DelNode != NULL){
		if(DelNode->Key==DelData)
			break;
		PrDelNode = DelNode;
		if(DelNode->Key >Deldata){
			DelNode = DelNode->Left;
			OnTheLeft = 0;
		}
	}
	if(DelNode == NULL)
		return false;
	if(PrDelNode == NULL){
		if(DelNode->Left==NULL && DelNode->Right==NULL)
			BSTree == NULL;
		else
			if(DelNode->Left==NULL){
				BSTree = BSTree->Right;
				DelNode->Right = NULL;
			}
			else
				if(DelNode->Right==NULL){
					BSTree = BSTree->Left;
					DelNode->Left=NULL;
				}
				else{
					BST_Type MRNode = DelNode->Left;
					while(MRNode->Right != NULL)
						MRNode = MRNode->Right;
					MRNode->Right = DelNode->Right;
					DelNode->Right = NULL;
					BSTree = BSTree->Left;
					DelNode->Left = NULL;
				}
	}
	else{
		if(DelNode->Left==NULL && DelNode->Right==NULL)
		if(OnTheLeft==1)
			PrDelNode->Left=NULL;
		else

	}
}

/*
BinT_Type Create_Node(Info NewData){
	BinT_Type BTnode = new BinT_OneNode;
	if(BTnode != NULL){
		BTnode->Left = NULL;
		BTnode->Key = NewData;
	}
	return BTnode;
}

void Add_Left(BinT_Type &BTree, Info NewData){
	BinT_Type NewNode = Create_Node(NewData);
	if(BTree == NULL)
		BTree = NewNode;
	else{
		BinT_Type LNode = BTree;
		while(LNode->Left != NULL)
			LNode = LNode->Left;
			LNode->Left = NewNode;
	}
}

void Add_Right(BinT_Type &BTree, Info NewData){
	BinT_Type NewNode = Create_Node(NewData);
	if(BTree == NULL)
		BTree = NewNode;
	else{
		BinT_Type LNode = BTree;
		while(LNode->Right != NULL)
			LNode = LNode->Right;
			LNode->Right = NewNode;
	}
}

void LRootR_Traverse(BinT_Type BTree){
	if(BTree==NULL)
		return;
	LRootR_Traverse(BTree->Left);
	cout<<BTree->Key<<'\t';
	LRootR_Traverse(BTree->Right);
}

int Tree_Height(BinT_Type BTree){
	if(BTree == NULL)
		return 0;
	int HTL = Tree_Height(BTree->Left);
	int HTR = Tree_Height(BTree->Right);
	
	if (HTL > HTR)
		return HTL+1;
	else
		return HTR+1;
}

int Count_Node(BinT_Type BTree){
	if(BTree == NULL) return 0;
	int NNL = Count_Node(BTree->Left);
	int NNR = Count_Node(BTree->Right);
	return(NNL+NNR+1);
}

void Read_Tree(BinT_Type &BTree){
	Info X;
	cin>>X;
	if(X!=0){
		BinT_Type BT;
		BT = Create_Node(X);
		BTree = BT;
		cout<<"Nhap con trai cua "<<X<<" : ";
		Read_Tree(BTree->Left);
		cout<<"Nhap con phai cua "<<X<<" : ";
		Read_Tree(BTree->Right);
	}
	else BTree = NULL;
}
//in cac nut muc k
void inmuck(BinT_Type BT, int K, int muc=1){
	if(BT != NULL)
		if(muc==k)
			cout<<BT->Key<<'\t';
		else{
			inmuck(BT->Left, k, muc+1);
			inmuck(BT->Right, k, muc+1);
		}
}

//in con trai
void ConTrai(BinT_Type BT){
	if(BT != NULL)
		if(BT->Left != NULL)
			cout<<BT->Left->Key<<'\t';
}
//dem nut bac 2
int DemNutB2(BinT_Type BT){
	if(BT==NULL) return 0;
	else if(BT->Left != NULL && BT->Right != NULL)
			return 1+DemNutB2(BT->Left)+DemNutB2(BT->Right);
		else
			return DemNutB2(BT->Left)+DemNutB2(BT->Right);
}
//
Info Max()
//dem so nut muc k
int DemNutMucK(BinT_Type BT, int k, int muc = 1){
	if(BT==NULL) return 0;
	else if(muc==k) return 1;
		 else return DemNutMucK(BT->Left)+
}
*/
main(){
	BinT_Type BT;
	cout<<"========nhap cay nhi phan====="<<endl;
	Initialize(BT);
	Read_Tree(BT);
	cout<<"=====In cay nhi phan======="<<endl;
	LRootR_Traverse(BT);
	cout<<endl;
	cout<<"=======Cay nhi phan nhi sau khi them 2 nut la====="<<endl;
	LRootR_Traverse(BT);
	Info X;
	cout<<"Ban muon them vao nut trai nhat la bao nhieu: ";
	cin>>X;
	Add_Left(BT, X);
	Add_Right(BT, X);
	cout<<"=======Cay nhi phan nhi sau khi them 2 nut la====="<<endl;
	LRootR_Traverse(BT);
	cout<<endl;
	cout<<"chieu cao cua cay la : "<<Tree_Height(BT)<<endl;
	cout<<"Cay co "<<Count_Node(BT)<<" nut "<<endl;
	//IN CÁC NÚT MỨC K

}
