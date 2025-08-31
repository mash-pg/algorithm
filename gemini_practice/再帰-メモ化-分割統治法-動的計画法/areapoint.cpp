#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

// A struct to represent a point with x and y coordinates.
// 座標(x, y)を表すための構造体です。
struct Point {
    long long x, y;
};

// Function to calculate the squared distance between two points.
// We use squared distance to avoid floating-point inaccuracies.
// 2点間の距離の2乗を計算する関数です。
// 浮動小数点誤差を避けるため、距離の2乗を使用します。
long long dist_sq(const Point& p1, const Point& p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}

int main() {
    // We will store the 4 points in a vector.
    // 4つの点をvectorに格納します。
    std::vector<Point> points(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    // A vector to hold all 6 possible distances (squared) between the points.
    // 4つの点から考えられる6つの距離（辺4つ、対角線2つ）の2乗を格納するvectorです。
    std::vector<long long> distances;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            distances.push_back(dist_sq(points[i], points[j]));
        }
    }

    // Sort the distances in ascending order.
    // 距離を昇順にソートします。
    std::sort(distances.begin(), distances.end());

    // --- 正方形の判定ロジック (Square determination logic) ---
    // A square has 4 equal sides and 2 equal diagonals.
    // A square is also a rectangle, and its diagonals are equal.
    // The squared length of the diagonals should be twice the squared length of the sides (a^2 + a^2 = d^2).
    //
    // 正方形は4つの等しい辺と、2つの等しい対角線を持っています。
    // また、正方形は長方形でもあるため、対角線は等しいです。
    // 辺の長さの2乗の2倍が対角線の長さの2乗に等しくなります（ピタゴラスの定理：a^2 + a^2 = d^2）。
    //
    // After sorting, the first 4 elements are the sides, and the last 2 are the diagonals.
    // ソート後、最初の4つの要素が辺の長さの2乗、最後の2つの要素が対角線の長さの2乗に対応します。
    
    bool is_square = false;
    
    // Check if the first four distances are equal (all sides are equal).
    // 最初の4つの距離が等しいか確認（すべての辺が等しいか）。
    if (distances[0] > 0 && 
        distances[0] == distances[1] &&
        distances[1] == distances[2] &&
        distances[2] == distances[3]) {
            // Check if the last two distances are equal (diagonals are equal).
            // 最後の2つの距離が等しいか確認（対角線が等しいか）。
            if (distances[4] == distances[5]) {
                // Check if the squared diagonal is double the squared side.
                // 対角線の2乗が辺の2乗の2倍であるか確認。
                if (distances[4] == 2 * distances[0]) {
                    is_square = true;
                }
            }
    }

    if (is_square) {
        std::cout << "正方形" << std::endl;
    } else {
        std::cout << "長方形" << std::endl;
    }

    return 0;


    //input
    // 正方形の入力例
    // 0 0
    // 3 0
    // 3 3
    // 0 3
    // 正方形ではない長方形の入力例
    // 0 0
    // 4 0
    // 4 3
    // 0 3
    // ひし形の入力例
    // 0 0
    // 5 0
    // 8 4
    // 3 4
    // 一般的な四角形の入力例
    // 1 1
    // 5 2
    // 6 8
    // 2 7
}