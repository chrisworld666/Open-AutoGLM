//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_GRASSHOPPER_H
#define HIVE1_GRASSHOPPER_H
#pragma once
#include "piece.h"
#include "board.h"
#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;

class Grasshopper :
        public Piece
{
public:
    Grasshopper(string);
    vector<Location> moves(const Board & b, Location);
    ~Grasshopper();
};
#endif //HIVE1_GRASSHOPPER_H
