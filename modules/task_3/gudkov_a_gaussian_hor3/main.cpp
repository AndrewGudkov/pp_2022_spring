// Copyright 2022 Gudkov Andrey

#include <gtest/gtest.h>
#include "./gaussian.h"

TEST(Gauss_Filter, _50x50) {
    int rows = 50;
    int width = 50;
    std::vector<uint8_t> img = GetRandMatrix(rows, width);
    std::vector<uint8_t> seq;
    std::vector<uint8_t> par;

    seq = Filter(img, rows, width, 32);
    par = ParFilter(img, rows, width, 32);
    ASSERT_EQ(seq, par);
}

TEST(Gauss_Filter, _100x100) {
    int rows = 10;
    int width = 10;
    std::vector<uint8_t> img = GetRandMatrix(rows, width);
    std::vector<uint8_t> seq;
    std::vector<uint8_t> par;

    seq = Filter(img, rows, width, 32);
    par = ParFilter(img, rows, width, 32);
    ASSERT_EQ(seq, par);
}

TEST(Gauss_Filter, _200x200) {
    int rows = 20;
    int width = 20;
    std::vector<uint8_t> img = GetRandMatrix(rows, width);
    std::vector<uint8_t> seq;
    std::vector<uint8_t> par;

    seq = Filter(img, rows, width, 32);
    par = ParFilter(img, rows, width, 32);
    ASSERT_EQ(seq, par);
}

TEST(Gauss_Filter, _320x240) {
    int rows = 32;
    int width = 24;
    std::vector<uint8_t> img = GetRandMatrix(rows, width);
    std::vector<uint8_t> seq;
    std::vector<uint8_t> par;

    seq = Filter(img, rows, width, 32);
    par = ParFilter(img, rows, width, 32);
    ASSERT_EQ(seq, par);
}

TEST(Gauss_Filter, _500x500) {
    int rows = 50;
    int width = 50;
    std::vector<uint8_t> img = GetRandMatrix(rows, width);
    std::vector<uint8_t> seq;
    std::vector<uint8_t> par;

    seq = Filter(img, rows, width, 32);
    par = ParFilter(img, rows, width, 32);
    ASSERT_EQ(seq, par);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
