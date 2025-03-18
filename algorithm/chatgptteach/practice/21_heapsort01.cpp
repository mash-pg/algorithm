#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

// 昇順ヒープ構築
void AscHeapify(vector<int>& arr, int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n && arr[right] > arr[largest]) largest = right;

    if(largest != i){
        swap(arr[i], arr[largest]);
        AscHeapify(arr, n, largest);
    }
}

// 降順ヒープ構築
void DescHeapify(vector<int>& arr, int n, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] < arr[smallest]) smallest = left;
    if(right < n && arr[right] < arr[smallest]) smallest = right;

    if(smallest != i){
        swap(arr[i], arr[smallest]);
        DescHeapify(arr, n, smallest);
    }
}

// 昇順ヒープソート
void AscHeapSort(vector<int>& arr){ 
    int n = arr.size();
    for(int i = n / 2 - 1; i >= 0; i--){
        AscHeapify(arr, n, i);
    }

    for(int i = n - 1; i > 0; i--){  // ✅ 変更: `i > 0`
        swap(arr[0], arr[i]);
        AscHeapify(arr, i, 0);
    }
}

// 降順ヒープソート
void DescHeapSort(vector<int>& arr){ 
    int n = arr.size();
    for(int i = n / 2 - 1; i >= 0; i--){
        DescHeapify(arr, n, i);
    }

    for(int i = n - 1; i > 0; i--){  // ✅ 変更: `i > 0`
        swap(arr[0], arr[i]);
        DescHeapify(arr, i, 0);
    }
}

int main(){
    // 乱数生成器を用意（C++11のrandomライブラリ）
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);
    int N;

    cout << "配列のサイズを入力してください: ";
    cin >> N;

    vector<int> arr(N);
    for(size_t i = 0; i < N; ++i){
        arr[i] = dist(gen);
    }

    cout << "\n=== ソート前の配列 ===\n";
    for(int num : arr) cout << num << " ";
    cout << "\n\n";

    // 昇順ソート
    vector<int> ascArr = arr;
    AscHeapSort(ascArr);
    cout << "=== 昇順ソート後 ===\n";
    for(int num : ascArr) cout << num << " ";
    cout << "\n\n";

    // 降順ソート
    vector<int> descArr = arr;
    DescHeapSort(descArr);
    cout << "=== 降順ソート後 ===\n";
    for(int num : descArr) cout << num << " ";
    cout << "\n";

    return 0;
}
