//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_ANT_H
#define HIVE1_ANT_H
#pragma once
#include "piece.h"
#include "board.h"
#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;

class Ant :
        public Piece
{
public:
    Ant(string);
    vector<Location> moves(const Board &, Location);
    ~Ant();
};
#endif //HIVE1_ANT_H
