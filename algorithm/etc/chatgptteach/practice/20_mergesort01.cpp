#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

void merge(vector<int>& arr,int left,int mid,int right){
    vector<int> leftArr(arr.begin() +left,arr.begin()+mid+1);
    vector<int> rightArr(arr.begin()+mid+1,arr.begin()+right + 1);
    int i = 0,j = 0,k = left;
    while(i < leftArr.size() && j < rightArr.size()){
        if(leftArr[i] <= rightArr[j]){
            arr[k++] = leftArr[i++];
        }else{
            arr[k++] = rightArr[j++];
        }
    }

    while (i < leftArr.size())
    {
        arr[k++] = leftArr[i++];
    }
    while (j < rightArr.size())
    {
        arr[k++] = rightArr[j++];
    }
    

}

void mergeSort(vector<int>& arr,int left,int right){
    if(left < right){
        int mid = left + (right - left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        cout << "左：" << left;
        cout << "中：" << mid;
        cout << "右：" << right;
        merge(arr,left,mid,right);
    }
}

int main(){
    // 乱数生成器を用意（C++11のrandomライブラリ）
    random_device rd;
    mt19937 gen(rd()); // メルセンヌ・ツイスタ（高品質な乱数生成）
    uniform_int_distribution<int> dist(1, 100); // 1～100 の範囲で乱数を生成
    int N;
    cout<<"配列のサイズを入力してください";
    cin >> N;

    vector<int> arr(N);

    for(size_t i = 0;i < N;++i){
        arr[i] = dist(gen); // 安全な乱数を生成
    }

    cout << "ソート前：";
    for(int num : arr) cout << num << " ";
    cout << endl;

    int n = arr.size();
    int left = 0;
    int right = n - 1;
    mergeSort(arr,left,right);
    
    cout << "ソート後：";
    for(int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}