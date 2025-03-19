#include <iostream>
//単方向連結リスト
// 🚃 電車の車両（ノード）
struct Node {
    int data;   // 車両に乗ってるデータ（数字）
    Node* next; // 次の車両を指すひも（ポインタ）

    Node(int val) : data(val), next(nullptr) {} // ノードを作るときのルール
};

// 🚂 電車（連結リスト）
class LinkedList {
public:
    Node* head; // 一番前の車両

    LinkedList() : head(nullptr) {}//まだ車両がないことをPC教えて上げる

    // 🚃 新しい車両を前に追加する
    void insert(int val) {
        Node* newNode = new Node(val);//新しい車両を作り、その車両の場所を覚える
        newNode->next = head; // 新しい車両が今の先頭を指す
        head = newNode; // 新しい車両が先頭になる
    }
    //特定の車両を更新する
    void updatenode(int oldval, int newval){
        Node* temp = head;////その場所を覚える駅員さん 

        while(temp){ // 🚆 電車を進みながら探す
            if(temp -> data == oldval){// 📌 更新対象のデータを発見！
                temp -> data = newval; // 🔄 データを変更！
                return;// 更新したら終了
            }else{
                temp = temp -> next;// 次の車両へ進む
            }
        }
    }
    //全ノードのデータを一括更新
    void updateAll(int newVal) {
        Node* temp = head;//その場所を覚える駅員さん 
        while (temp) { // 🚆 すべての車両をチェック
            temp->data = newVal; // 🔄 データを新しい値に変更！
            temp = temp->next; // 次の車両へ進む
        }
    }
    //インデックス（位置）で更新
    void updateAtIndex(int index, int newVal) {
        Node* temp = head;
        int count = 0;
    
        while (temp) { // 🚆 指定の位置まで移動
            if (count == index) {
                temp->data = newVal; // 🔄 データを変更！
                return;
            }
            count++;
            temp = temp->next;
        }
    }    
    //🚃 先頭の車両を削除する
    void deletehead(){
        if(!head){
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
     //🚃 末尾の車両を削除する
    void deletetail(){
        //空なら何もしない
        if(!head){
            return;
        }
        //１両しかない場合
        if(!head->next){
            delete head;
            head = nullptr;
            return;
        }
        Node*temp = head;
        //最後の１つ前まで進む
        while(temp->next->next){
            temp = temp -> next;
        }
        delete temp->next;//最後の車両を削除
        temp->next = nullptr;//ひもを切る
    }

    //特定のノードを削除（値 val を持つ車両）
    void deletenode(int val){
        if(!head){
            return;
        }
        //先頭のノード対象なら、先頭削除
        if(head->data ==val){
            deletehead();
            return;
        }
        Node* temp = head;
        while(temp -> next && temp->next->data != val){
            temp = temp-> next; //削除対象の１つまえの車両まで進む
        }
        //見つからなかったら何もしない
        if(!temp -> next){
            return;
        }
        Node* target = temp -> next;
        temp -> next = target -> next;
        delete target;
    }

    void deleteAll() {
        while (head) {
            deletehead(); // 先頭を1つずつ削除
        }
    }
    // 🚆 電車を表示する
    void display() {
        Node* temp = head;//その場所を覚える駅員さん 🧑‍✈️
        while (temp) { // 車両がなくなるまで
            std::cout << temp->data << " → ";
            temp = temp->next; // 次の車両へ
        }
        std::cout << "nullptr" << std::endl; // 最後は終点！
    }
};

// 🚉 電車を走らせてみよう！
int main() {
    LinkedList train;
    train.insert(3); // 3番の車両を追加
    train.insert(5); // 5番の車両を追加（5 → 3）
    train.insert(7); // 7番の車両を追加（7 → 5 → 3）
    train.insert(19);
    train.insert(193);
    //193 → 19 → 7 → 5 → 3 → null
    //train.updatenode(193,2);
    train.updateAtIndex(4,20);
    // train.deletehead();
    // train.deletetail();
    // train.deletenode(5);
    // train.deleteAll();

    train.display(); // 🚆 7 → 5 → 3 → nullptr
}
