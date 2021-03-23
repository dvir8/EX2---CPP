#pragma once
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
#include "string"

namespace ariel {
    
    class Board{ public:
        void post(unsigned int row, unsigned int col, Direction theway, std::string ad);
        std::string read(unsigned int row, unsigned int col, Direction theway, unsigned int length);
        void show();
        Board();};
   
}








