#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"

using ariel::Direction;

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
using namespace ariel;


TEST_CASE("GOOD BORAD") {
            ariel::Board board;
            CHECK_NOTHROW(board.post(50, 100, Direction::Horizontal, "abcd"));
            CHECK(board.read(49, 101, Direction::Vertical, 3) == string("_b_"));
            CHECK_NOTHROW(board.post(49, 102, Direction::Vertical, "rtz"));
            CHECK(board.read(50, 101, Direction::Horizontal, 6) == string("abtd__"));
            CHECK_NOTHROW(board.post(1, 100, Direction::Horizontal, "c"));
            CHECK(board.read(1, 100, Direction::Vertical, 1) == string("c"));
            CHECK_NOTHROW(board.post(25, 50, Direction::Horizontal, "thistrue"));
            CHECK(board.read(23, 52, Direction::Vertical, 6) == string("__i___"));
            CHECK_NOTHROW(board.post(20, 32, Direction::Vertical,"_"));
            CHECK(board.read(20, 32, Direction::Horizontal, 0) == string(""));
            CHECK_NOTHROW(board.post(65, 75, Direction::Vertical, "g"));
            CHECK(board.read(64, 75, Direction::Horizontal, 0) == string(""));

}



TEST_CASE("EROR BORAD"){
            ariel::Board board;
            CHECK_NOTHROW(board.post(50, 100, Direction::Horizontal, "abcd"));
            CHECK_FALSE(board.read(49, 101, Direction::Vertical, 3) == string("_c_"));
            CHECK_NOTHROW(board.post(49, 102, Direction::Vertical, "rtz"));
            CHECK_FALSE(board.read(50, 101, Direction::Horizontal, 6) == string("abtd__za"));
            CHECK_NOTHROW(board.post(1, 100, Direction::Horizontal, "c"));
            CHECK_FALSE((board.read(1, 100, Direction::Vertical, 1) == string("czaza")));
            CHECK_NOTHROW(board.post(25, 50, Direction::Horizontal, "thistrue"));
            CHECK_FALSE(board.read(23, 52, Direction::Vertical, 6) == string("__isis___"));
            CHECK_NOTHROW(board.post(20, 32, Direction::Vertical, "_"));
            CHECK_FALSE(board.read(20, 32, Direction::Horizontal, 0) == string("_12"));
            CHECK_NOTHROW(board.post(90, 200, Direction::Horizontal, "cool"));
            CHECK_FALSE(board.read(89, 201, Direction::Vertical, 4) == string("_o__1"));
            CHECK_NOTHROW(board.post(89, 202, Direction::Vertical, "www"));
            CHECK_FALSE(board.read(90, 201, Direction::Horizontal,5 ) == string("cwoll"));

}
