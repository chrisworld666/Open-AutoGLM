//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_QUEEN_H
#define HIVE1_QUEEN_H
#pragma once
#include "piece.h"
#include "board.h"
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;

class Queen :
        public Piece
{
public:
    Queen(string);
    vector<Location> moves(const Board & b, Location);
    bool isQueen();
    ~Queen();
};
#endif //HIVE1_QUEEN_H
