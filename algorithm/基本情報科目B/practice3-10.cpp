#include <iostream>
#include <vector>
#include <numeric>

// Function to search for data in a sorted 2D array
bool arraySearch(const std::vector<std::vector<int>>& mdata, int n) {
    int i_max = mdata.size() - 1;
    int j_max = mdata[0].size() - 1;
    
    int i = i_max;
    int j = 0; // Assuming the search starts from the bottom-left corner
    
    while (i >= 0 && j <= j_max) {
        if (mdata[i][j] == n) {
            std::cout << "OK" << std::endl;
            return true;
        } else if (mdata[i][j] > n) {
            i = i - 1; // Move up
        } else { // mdata[i][j] < n
            j = j + 1; // Move right
        }
    }
    
    std::cout << "NG" << std::endl;
    return false;
}

int main() {
    std::vector<std::vector<int>> mdata = {
        {3, 5, 8, 11, 15},
        {17, 20, 25, 31, 33},
        {40, 43, 51, 62, 71}
    };
    
    int search_value = 25; // Example search value
    std::cout << "Searching for " << search_value << std::endl;
    arraySearch(mdata, search_value);
    
    search_value = 100; // Another example
    std::cout << "Searching for " << search_value << std::endl;
    arraySearch(mdata, search_value);
    
    return 0;
}