//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_BEETLE_H
#define HIVE1_BEETLE_H
#pragma once
#include "piece.h"
#include "board.h"
#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;

class Beetle :
        public Piece
{
public:
    Beetle(string);
    vector<Location> moves(const Board & b, Location);
    ~Beetle();
};
#endif //HIVE1_BEETLE_H
