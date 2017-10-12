/********************************************
CSCI 240	Program 5	Fall 2017

Programmers: Group
Michael Balling 
Z1758575

Austin Pinson
Z1785533

Section: 2

Date Due: 10/13/2017

Purpose: Create a dice game for the user to
			roll the dice like in the casino 
			game craps.
*********************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	char choice;
	int die1, die2, pointRoll;
	const int MIN_ROLL = 1;												//symbolic constants used to make changes easier
	const int MAX_ROLL = 6;													
	const int SEVEN_WIN = 7;
	const int ELEVEN_WIN = 11;
					
	srand(time(0));														//seeding the random number generator
	 
	cout << "EXTRA CREDIT ATTEMPTED" << endl;

	choice = 'Y';
	while( choice == 'Y' or choice == 'y' )                             //force user into the loop
		{
			cout << endl << "Rolling the dice..." << endl << endl;
			die1 = (rand() % (MAX_ROLL - MIN_ROLL + 1)) + MIN_ROLL;		//generating the dice roll
			die2 = (rand() % (MAX_ROLL - MIN_ROLL + 1)) + MIN_ROLL;;
			cout << "The come out roll is " << die1+die2 << endl << endl;	
	
		if (die1+die2 == SEVEN_WIN || die1+die2 == ELEVEN_WIN)
			{
				cout << "YOU WIN!" << endl << endl;
			}

		else if (die1+die2 == 2 || die1+die2 == 3 || die1+die2 ==12)
			{
				cout << "Craps, you lose!" << endl << endl;
			}

		else
			{	
				pointRoll = die1+die2;
				cout << "The point roll is " << pointRoll << endl << endl;
		
					bool i = 0;											//using a boolean value to either continue or exit the program
					while (i == 0)										//the while loop will continue to roll the dice until the boolean value becomes true
						{	
							cout << "Rolling the dice..." << endl << endl;
							die1 = (rand() % (MAX_ROLL - MIN_ROLL + 1)) + MIN_ROLL;
							die2 = (rand() % (MAX_ROLL - MIN_ROLL + 1)) + MIN_ROLL;	
							cout << "The roll is "<< die1+die2 << endl << endl;
					
						if (die1+die2 == pointRoll)
							{
								cout <<"Congratulations, you rolled your point and won!" << endl << endl;
								i = 1;
							}
						
						else if (die1+die2 == 7)
							{
								cout << "Bum luck, you seven'd out and lost!" << endl << endl;
								i = 1;
							}

		 				}
			}
			
			cout << endl << "Play Again? (Press Y/y)" << endl << endl;	//a "Y/y" entry will go back into the main loop, any other entry will terminate
			cin >> choice;
		}
	return 0;
}
