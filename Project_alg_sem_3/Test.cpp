#include <gtest/gtest.h>
#include "shell_sort.h"
#include "quick_sort.h"


// сортиривка шелла
TEST(shell_sortTest, SingleElementArray) {
    int arr[] = { 5 };
    shell_sort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(shell_sortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    shell_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shell_sortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    shell_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(shell_sortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    shell_sort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shell_sortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    shell_sort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(shell_sortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    shell_sort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// быстрая сортировка
TEST(quick_sortTest, SingleElementArray) {
    int arr[] = { 5 };
    quick_sort(arr, 0, 0);
    EXPECT_EQ(arr[0], 5);
}


TEST(quick_sortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    quick_sort(arr,0 , 4);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(quick_sortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    quick_sort(arr, 0, 4);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(quick_sortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    quick_sort(arr, 0, 3);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(quick_sortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    quick_sort(arr,0, 4);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(quick_sortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    quick_sort(arr, 0, 4);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
