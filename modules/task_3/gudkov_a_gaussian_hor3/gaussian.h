// Copyright 2022 Gudkov Andrey
#ifndef MODULES_TASK_3_GUDKOV_A_GAUSSIAN_HOR3_GAUSSIAN_H_
#define MODULES_TASK_3_GUDKOV_A_GAUSSIAN_HOR3_GAUSSIAN_H_
#include <tbb/tbb.h>
#include <cstdint>
#include <cmath>
#include <ctime>
#include <vector>
#include <random>
#include <cinttypes>

int GetIndex(int i, int j, int rows);
std::vector<uint8_t> GetRandMatrix(int rows, int width);
std::vector<uint8_t> Filter(std::vector<uint8_t> srcVec, int rows,
    int width, double sigma = 1.0);
std::vector<uint8_t> ParFilter(std::vector<uint8_t> srcVec, int rows,
    int width, double sigma = 1.0);

#endif  // MODULES_TASK_3_GUDKOV_A_GAUSSIAN_HOR3_GAUSSIAN_H_
