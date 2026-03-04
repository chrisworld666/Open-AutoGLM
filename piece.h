//
// Created by dzc20 on 24-10-7.
//

#ifndef HIVE1_PIECE_H
#define HIVE1_PIECE_H
#pragma once
#include <string>
#include <vector>
#include "location.h"
#include <iostream>
//#include "boost\noncopyable.hpp"

using std::vector;
using std::string;

class Board;

class Piece //: boost::noncopyable
{
private:
public:
    string name;
    int nameColor;
    string color;
    string paddedColor();
    string paddedName();
    Piece(string _color, string _name);
    Piece();
    ~Piece();
    void print();
    virtual bool isQueen();
    virtual vector<Location> moves(const Board &, Location);
};
#endif //HIVE1_PIECE_H
