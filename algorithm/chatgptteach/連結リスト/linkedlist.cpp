#include <iostream>
using namespace std;
// 1.3 連結リスト（Linked List）
// ✅ ポイント

// メモリの連続性が不要
// 挿入・削除が速い（O(1)）
// ランダムアクセスが遅い（O(N)）

struct Node{
    int data;
    Node* next; 
};

int main(){
    Node* head = new Node{1,nullptr};
    
    head->next = new Node{2,nullptr};
    
    head->next->next = new Node{3,nullptr};

    Node* cur = head;

    while(cur){
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}