//
//  main.cpp
//  hw4.team3
//
//  Created by Zineb Zarwal on 10/15/17.
//  Copyright © 2017 Zineb Zarwal. All rights reserved.
//
#include <string>
#include <iostream>
#include "game.hpp"
using namespace std;

//Defining a structure to hold Player information
 struct Player
{
    string name;
    int score;
};

//Function prototypes
Questions setQuiz(Questions quiz[]);
void quizP1(Questions quiz[], Player *P1);
void quizP2(Questions quiz[], Player *P2);
void getWinner(Player *P1, Player *P2);

int main() {
    
    /* Lines 29-32 declare an object quiz from the Questions class,
     declares an array of size 10 and calls a function to set the variable */
    const int size = 10;
    Questions quiz[size];
    setQuiz(quiz);
    
    //Declaring two players from the Player structure and initializing the variables
    Player P1 = { "", 0};
    Player P2 = { "", 0};
    
    cout << "**********************" << endl;
    cout << " Capital Trivia Game" << endl;
    cout << "**********************" << endl;
    cout << "Player 1 enter your name: " << endl;
    cin >> P1.name;
    cout << "Player 2 enter your name: " << endl;
    cin >> P2.name;
    cout << endl;
    
    cout << P1.name << " you are up first!" << endl;
    cout << "**********************" << endl;
    quizP1(quiz, &P1);
    cout << endl;
    
    cout << P2.name << " it's your turn now!" << endl;
    cout << "**********************" << endl;
    quizP2(quiz, &P2);
    
    getWinner(&P1, &P2);

    return 0;
}

/*****************************************************************************************
 The following functions call the 1st and 2nd parts of the quiz for each player. It recieves
 input from the user and determines whether the answer is correct. Using a pointer, once the
 loop completes each players score is updated. Input validation is included to ensure only
 choices 1-4 will be accepted.
 *****************************************************************************************/
void quizP1(Questions quiz[], Player *P1)
{
    int input;
    for (int i = 0; i < 5; i++)
    {
        cout << quiz[i].getTrivia() << endl;
        cout << "1. " << quiz[i].getC1() << endl;
        cout << "2. " << quiz[i].getC2() << endl;
        cout << "3. " << quiz[i].getC3() << endl;
        cout << "4. " << quiz[i].getC4() << endl;
        cin >> input;
            while (input < 1 || input > 4)
            {
                cout << "Please select one of the available choices!" << endl;
                cin >> input;
            }
            if (input == quiz[i].getAnswer())
            {
                P1->score += 1;
            }
        }
    }

void quizP2(Questions quiz[], Player *P2)
{
    int input;
    for (int i = 5; i < 10; i++)
    {
        cout << quiz[i].getTrivia() << endl;
        cout << "1. " << quiz[i].getC1() << endl;
        cout << "2. " << quiz[i].getC2() << endl;
        cout << "3. " << quiz[i].getC3() << endl;
        cout << "4. " << quiz[i].getC4() << endl;
        cin >> input;
        while (input < 1 || input > 4)
        {
            cout << "Please select one of the available choices!" << endl;
            cin >> input;
        }
        if (input == quiz[i].getAnswer())
        {
            P2->score += 1;
        }
    }
}

/* Function passes two parameters by reference and determines whether
 there is a winner or a tie */
void getWinner(Player *P1, Player *P2)
{
    if ( P1->score > P2->score)
    {
        cout << P1->name << " is the WINNER with " << P1->score << " point(s)!" << endl;
        cout << P2->name << " loses with " << P2->score << " point(s)" << endl;
    }
    else if ( P2->score > P1->score)
    {
        cout << P2->name << " is the WINNER with " << P2->score << " point(s)!" << endl;
        cout << P1->name << " loses with " << P1->score << " point(s)!" << endl;
    }
    else
        cout << P1->name << " & " << P2->name << " tied with " << P1->score << " point(s) each!" << endl;
}

/*****************************************************************************************
 The function setQuiz calls the mutators functions for the trivia question, its 4 four
 answer options and the correct answer from the Questions class
 *****************************************************************************************/
Questions setQuiz(Questions quiz[])
{
    quiz[0].setTrivia("What is the capital of Japan?");
    quiz[0].setC1("Tokyo");
    quiz[0].setC2("Kyoto");
    quiz[0].setC3("Seoul");
    quiz[0].setC4("Osaka");
    quiz[0].setAnswer(1);
    
    quiz[1].setTrivia("What is the capital of France?");
    quiz[1].setC1("Nice");
    quiz[1].setC2("Paris");
    quiz[1].setC3("Lyon");
    quiz[1].setC4("Brussels");
    quiz[1].setAnswer(2);
    
    quiz[2].setTrivia("What is the capital of Canada?");
    quiz[2].setC1("Montreal");
    quiz[2].setC2("Toronto");
    quiz[2].setC3("Ottowa");
    quiz[2].setC4("Vancouver");
    quiz[2].setAnswer(3);
    
    quiz[3].setTrivia("What is the capital of Thailand?");
    quiz[3].setC1("Phuket City");
    quiz[3].setC2("Pattaya");
    quiz[3].setC3("Phnom Penh");
    quiz[3].setC4("Bangkok");
    quiz[3].setAnswer(4);
    
    quiz[4].setTrivia("What is the capital of Russia?");
    quiz[4].setC1("Moscow");
    quiz[4].setC2("Kiev");
    quiz[4].setC3("St. Petersburg");
    quiz[4].setC4("Zagreb");
    quiz[4].setAnswer(1);
    
    quiz[5].setTrivia("What is the capital of Morocco?");
    quiz[5].setC1("Marrakech");
    quiz[5].setC2("Rabat");
    quiz[5].setC3("Casablanca");
    quiz[5].setC4("Tangier");
    quiz[5].setAnswer(2);
    
    quiz[6].setTrivia("What is the capital of the U.S?");
    quiz[6].setC1("New York");
    quiz[6].setC2("Los Angelos");
    quiz[6].setC3("Washington D.C");
    quiz[6].setC4("Houston");
    quiz[6].setAnswer(3);
    
    quiz[7].setTrivia("What is the capital of Sweden");
    quiz[7].setC1("Amsterdam");
    quiz[7].setC2("Copenhagen");
    quiz[7].setC3("Malmö");
    quiz[7].setC4("Stockholm");
    quiz[7].setAnswer(4);
    
    quiz[8].setTrivia("What is the capital of Brazil?");
    quiz[8].setC1("Brasilia");
    quiz[8].setC2("Rio de Janeiro");
    quiz[8].setC3("Sao Paulo");
    quiz[8].setC4("Buenos Aires");
    quiz[8].setAnswer(1);
    
    quiz[9].setTrivia("What is the capital of Malaysia?");
    quiz[9].setC1("Johor Bahru");
    quiz[9].setC2("Kuala Lumpur");
    quiz[9].setC3("Mumbai");
    quiz[9].setC4("Istanbul");
    quiz[9].setAnswer(2);
    
    return *quiz;
}
