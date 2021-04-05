/**
 * Demo program for message-board exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-03
 */

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	ariel::Board board;
	            //cout<<board.read(99, 201, Direction::Vertical, 3)<<endl;
cout << board.read(0, 0, Direction::Horizontal, 1) << endl;
board.post(0, 0, Direction::Vertical, "Reut");
cout << board.read(0, 0, Direction::Vertical, 5) << endl;
board.post(10, 0, Direction::Vertical, "ghhllll");
board.post(5, 0, Direction::Horizontal, "rr34");


	//cout << board.read(99, 201, Direction::Vertical, 3) << endl;  
		// prints "_b_" (starts at row 99 which is empty; then at row 100 there is "b"; then row 101 is empty again).
	//board.post(99, 202, Direction::Vertical, "xsz");
	//cout << board.read(100, 200, Direction::Horizontal, /*length=*/6) << endl;  
		// prints "abyd__" (First letters are ab; then y from the "xyz"; then d; then two empty cells).

	board.show(); // shows the board in a reasonable wa                    y. For example:
		//    98:  _________
		//    99:  ____x____
		//    100: __abyd___ 
		//    101: ____z____
		//    102: _________
}

