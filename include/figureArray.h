#pragma once

#include "Figure.h"

class FigureArray {
private:
    Figure **figures;
    size_t size;
    size_t capacity;

public:
    FigureArray(size_t initial_capacity = 10);

    ~FigureArray();

    FigureArray(const FigureArray &) = delete;

    FigureArray &operator=(const FigureArray &) = delete;

    void add(Figure *fig);

    void remove(size_t index);

    double getTotalArea() const;

    void printAll() const;

    bool empty() const { return size == 0; }

    Figure *at(size_t index) const;
};