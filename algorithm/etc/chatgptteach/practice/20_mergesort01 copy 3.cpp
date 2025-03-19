#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

//統合
void merge(vector<int>& arr,int left,int mid,int right){
    //arr.begin()はendを含まない（1,2,3,4）A[3]だとしても4を含まないから＋１する
    vector<int> leftArr(arr.begin() + left,arr.begin()+mid+1);
    vector<int> rightArr(arr.begin()+mid+1,arr.begin()+right+1);
    //初期値設定
    int i = 0, j = 0,k = left;
    //左が小さい場合はそのまま、右が大きい場合は左に移動させる処理
    while(i < leftArr.size() && j < rightArr.size() ){
        //<=は、同じ値の場合も入れ替わってしまう為
        if(leftArr[i] <= rightArr[j]){
            arr[k++] = leftArr[i++];
        }else{
            arr[k++] = rightArr[j++];
        }
    }

    //最後の後始末
    while(i < leftArr.size()) arr[k++] = leftArr[i++];
    while(j < rightArr.size()) arr[k++] = rightArr[j++];
}

//分割と統合
void mergeSort(vector<int>& arr,int left,int right){

    //再帰処理実装
    if(left < right){//左を小さくするよう基準する
        //中心のデータを取得する
        int mid = left + (right - left) /2;
        //左側の処理を再帰する
        mergeSort(arr,left,mid);
        //右側の処理を再帰する（midの重複をなくす為に＋１する）
        mergeSort(arr,mid + 1,right);
        //分割された配列の並び替えを行う
        merge(arr,left,mid,right);

    }
}

int main(){
    // 乱数生成器を用意（C++11のrandomライブラリ）
    // random_device rd;
    // mt19937 gen(rd()); // メルセンヌ・ツイスタ（高品質な乱数生成）
    // uniform_int_distribution<int> dist(1, 100); // 1～100 の範囲で乱数を生成
    // int N;
    // cout<<"配列のサイズを入力してください";
    // cin >> N;

    // vector<int> arr(N);

    // for(size_t i = 0;i < N;++i){
    //     arr[i] = dist(gen); // 安全な乱数を生成
    // }
    vector<int> arr = {22, 44, 79, 55, 73};
    cout << "ソート前 : " << endl;
    for(int num : arr)cout <<  num << " ";
    cout << endl;
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    mergeSort(arr,left,right);

    cout << "ソート後 : " << endl;
    for(int num : arr)cout <<  num << " ";
    cout << endl;
}