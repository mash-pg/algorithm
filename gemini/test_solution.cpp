#include "solution.cpp"
#include <gtest/gtest.h>

TEST(TwoSumTest, Example1) {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected = {0, 1};
    std::vector<int> result = sol.twoSum(nums, target);
    std::sort(result.begin(), result.end());
    ASSERT_EQ(expected, result);
}

TEST(TwoSumTest, Example2) {
    Solution sol;
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> expected = {1, 2};
    std::vector<int> result = sol.twoSum(nums, target);
    std::sort(result.begin(), result.end());
    ASSERT_EQ(expected, result);
}

TEST(TwoSumTest, Example3) {
    Solution sol;
    std::vector<int> nums = {3, 3};
    int target = 6;
    std::vector<int> expected = {0, 1};
    std::vector<int> result = sol.twoSum(nums, target);
    std::sort(result.begin(), result.end());
    ASSERT_EQ(expected, result);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
