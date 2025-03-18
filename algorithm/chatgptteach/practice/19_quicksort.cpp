#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

// クイックソート（分割）
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // ピボットを最後の要素に設定
    int i = low - 1; // 小さい要素の境界

    for (int j = low; j < high; ++j) {
        //std::cout << "Hello, " << std::flush; // ここで出力を強制 または最終末尾にendlを出す
        cout << "j番目 : " << arr[j] << endl;
        cout << "pivot : " << pivot << endl;
        if (arr[j] < pivot) { // ピボットより小さい場合
            ++i;
            swap(arr[i], arr[j]); // 小さい値を左側へ
        }
    }
    swap(arr[i + 1], arr[high]); // ピボットを正しい位置へ
    return i + 1;
}

// クイックソートの再帰関数
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // ピボットを決定
        quickSort(arr, low, pivotIndex - 1);  // 左側をソート
        quickSort(arr, pivotIndex + 1, high); // 右側をソート
    }
}

int main() {
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

    vector<int> arr = {10, 7, 5, 9, 1, 8};  // ソートする配列
    // vector<int> arr = {1,2,3,4,5};  // ソートする配列
    // vector<int> arr = {5,2,3,4,1};  // ソートする配列
    int n = arr.size();

    cout << "ソート前: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "ソート後: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
