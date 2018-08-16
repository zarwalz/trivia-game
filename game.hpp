//
//  game.hpp
//  hw4.team3
//
//  Created by Zineb Zarwal on 10/15/17.
//  Copyright © 2017 Zineb Zarwal. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Questions
{
private:
    string trivia;
    string c1, c2, c3, c4;
    int answer;
    
    
public:
    Questions();
    void setTrivia(string x);
    string getTrivia();
    void setC1(string x);
    string getC1();
    void setC2(string x);
    string getC2();
    void setC3(string x);
    string getC3();
    void setC4(string x);
    string getC4();
    void setAnswer(int x);
    int getAnswer();
    
};

#endif /* game_hpp */
