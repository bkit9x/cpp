#include <iostream>
using namespace std;
typedef int info;
struct BinT_Node{
	info key;
	BinT_Node *left;
	BinT_Node *right;
};
typedef btn *BinT_Type;
void init(BinT_Type &BTree){
	BTree = new BinT_Node;
	BTree = NULL;
}
BinT_Type create_Node(info data){
	BinT_Type bt = new BinT_Node;
	if(bt!=NULL){
		bt->left = NULL;
		bt->right = NULL;
		bt->key = data;
	}
	return bt;
}

main(){

}


