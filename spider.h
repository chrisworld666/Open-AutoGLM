//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_SPIDER_H
#define HIVE1_SPIDER_H
#pragma once
#include "piece.h"
#include "board.h"
#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;

class Spider :
        public Piece
{
public:
    Spider(string);
    vector<Location> moves(const Board & b, Location);
    ~Spider();
};
#endif //HIVE1_SPIDER_H
