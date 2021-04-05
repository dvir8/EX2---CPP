#include "Direction.hpp"
using ariel::Direction;
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include "string"

namespace ariel {
    
    class Board{ 
        unsigned int aStart=4294967295;
        unsigned int bStart=4294967295;
        unsigned int aEnd=0;
        unsigned int bEnd=0;
         std::unordered_map<unsigned int, std::unordered_map<unsigned int , char>> theMap;
        
        public:
        void seta1(unsigned int a1) {
             aStart = a1;
            }
        void setb1(unsigned int b1) {
             bStart = b1;
            }
        void seta2(unsigned int a2) {
             aEnd = a2;
            }
        void setb2(unsigned int b2) {
             bEnd = b2;
            }
        unsigned int geta1() {
             return aStart;
            }
        unsigned int geta2() {
             return aEnd;
            }
        unsigned int getb1() {
             return bStart;
            }
        unsigned int getb2() {
             return bEnd;
            }
        void post(unsigned int row, unsigned int col, Direction theway, std::string ad);
        std::string read(unsigned int row, unsigned int col, Direction theway, unsigned int length);
        void show();
        Board();};
   
}








