#include "queen.h"
#include <iostream>
Queen::Queen(string _color)
{
    color = _color;
    name = "QUEEN";
    nameColor = 6; //yellow
}

vector<Location> Queen::moves(const Board & b, Location curLoc)
{
    return b.slide(curLoc, 1);
}

bool Queen::isQueen()
{
    return true;
}

Queen::~Queen()
{
}//
// Created by dzc20 on 24-10-7.
//

#include "queen.h"
