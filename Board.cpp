
#include "Board.hpp"
using namespace std;
#include <string>
namespace ariel {
    
         Board::Board(){};
         void Board::post(unsigned int row, unsigned int col, Direction theway, string ad){
         unsigned int adLength = ad.length();
         char makaf = '_';
         char space = ' ';
         if(theway == Direction::Vertical){
                if (row+adLength > aEnd){
                    seta2(row + adLength);
                }
                if(row < aStart){
                    seta1(row);
                }
                if(col < bStart){
                    setb1(col);
                }
                if(col > bEnd){
                    setb2(col);
                }
            }
            else if(theway == Direction::Horizontal){
                if(col < bStart){
                    setb1(col);
                }
                if(col+adLength > bEnd){
                    setb2(col + adLength);
                }
                if (row > aEnd){
                    seta2(row);
                }
                if(row < aStart){
                    seta1(row);
                }
            }
            for(size_t i = 0; i < adLength; i++){  
                if(theway == Direction::Vertical){
                    theMap[row][col] = ad.at(i);
                    row++;
                    }
                                                         
                if(theway == Direction::Horizontal){
                    theMap[row][col] = ad.at(i);
                    col++;
                    
                }
            }
            
         }
        string Board::read(unsigned int row, unsigned int col, Direction theway, unsigned int length){
            std::string s;
            char space = ' ';
            char makaf = '_';
            for (size_t i = 0; i < length; i++){
                if(theway == Direction::Vertical){
                    if (theMap[row].find(col) == theMap[row].end()){  
                            s.push_back(makaf);
                             row++;
                    }
                    
                    else{
                            s.push_back(theMap[row][col]);
                             row++;
                        }
                    }
                else if(theway == Direction::Horizontal){
                        if (theMap[row].find(col) == theMap[row].end()){    
                           s.push_back(makaf);
                            col++;
                        }
                        else{
                            s.push_back(theMap[row][col]);
                            col++;
                        }
               }

            }
            return s;
        }
        
        void Board:: show(){
            for (size_t i = aStart; i < aEnd; i++){
                 for (size_t j = bStart; j < bEnd; j++){
                    if (theMap.find(i) == theMap.end()|| theMap[i].find(j) == theMap[i].end() ){  
                        cout << "_" ;
                    }
                    else{
                         cout << theMap[i][j];
                         }  
                 }
                   cout << "\n"; 
             }
                
            
            
        }
       
    
  }
