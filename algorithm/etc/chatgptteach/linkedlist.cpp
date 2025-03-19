#include <iostream>
using namespace std;

struct Node {
    int data;// 数字（データ）
    Node* next;// 次のノード（箱）への矢印
};

int main() {
    //リンゴ（ノード）を作ってつなげる！
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    //リンゴを1つずつ見ていく
    Node* cur = head;//cur を head にセット
    while (cur) {
        cout << cur->data << " ";  // 1 2 3
        cur = cur->next;
    }
    return 0;
}
