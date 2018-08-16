//
//  game.cpp
//  hw4.team3
//
//  Created by Zineb Zarwal on 10/15/17.
//  Copyright © 2017 Zineb Zarwal. All rights reserved.
//

#include "game.hpp"
#include <iostream>
#include <string>
using namespace std;

//Default constructor with no parameters
Questions::Questions()
{
    trivia = "";
    c1 = "";
    c2 = "";
    c3 = "";
    c4 = "";
    answer = 0;
    
}

// Mutator for trivia
void Questions::setTrivia(string x)
{
    trivia = x;
}

// Accessor for trivia
string Questions::getTrivia()
{
    return trivia;
}

// Mutator for c1
void Questions::setC1(string x)
{
    c1 = x;
}

// Accessor for c1
string Questions::getC1()
{
    return c1;
}

// Mutator for c2
void Questions::setC2(string x)
{
    c2 = x;
}

// Accessor for c2
string Questions::getC2()
{
    return c2;
}

// Mutator for c3
void Questions::setC3(string x)
{
    c3 = x;
}

//Accessor for c3
string Questions::getC3()
{
    return c3;
}

//Mutator for c4
void Questions::setC4(string x)
{
    c4 = x;
}

//Accessor for c4
string Questions::getC4()
{
    return c4;
}

//Mutator for answer
void Questions::setAnswer(int x)
{
    answer = x;
}

//Accessor for answer
int Questions::getAnswer()
{
    return answer;
}

