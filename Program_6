/********************************************
CSCI 240	Program 6	Fall 2017

Programmers: Group
Michael Balling 
Z1758575

Austin Pinson
Z1785533

Section: 2

Date Due: 10/20/2017

Purpose: Using functions to manipulate and
			test an integer number.
*********************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_VALS = 10;       //the maximum number of values to use

/********* Put the function prototypes below this line *********/
int sumDigits(int num), reverse(int num);
bool isPalindrome(int num), isPrime(int num);

int main()
{
int number,          //holds the random number that is manipulated and tested
    loopCnt;         //controls the loop

//set the seed value for the random number generator
//Note: a value of 1 will generate the same sequence of "random" numbers every
//      time the program is executed

srand(31);


//Generate 10 random numbers to be manipulated and tested

for( loopCnt = 1; loopCnt <= NUM_VALS; loopCnt++ )
  {
  //Get a random number
  number = rand();

  //Display the sum of adding up the digits in the random number, the reversed
  //random number, and whether or not the number is palindromic or a prime number
  
  cout << "The number is " << number << endl
       << "----------------------------------------" << endl
       << "Adding the digits result" << setw(16) << sumDigits( number ) << endl
       << "Reversing the digits result" << setw(13) << reverse(number) << endl
       << "Is the number a palindrome?" << setw(13) << (isPalindrome(number)? "Yes" : "No") << endl //using the condtional ternary operator to print Yes or No
       << "Is the number prime?" << setw(20) << (isPrime(number)? "Yes" : "No") << endl
	   << endl << endl;
  }

/** If the extra credit is being attempted, call the extra function below this line **/



return 0;
}


/********* Code the functions below this line *********/
/***************************************************************
Function:  bool sumDigits( int )

Use: This function adds up the digits of a random number

Arguments: an integer, the number to be used to add together its 
			digits

Returns: the value of the added digits from the random number
***************************************************************/
int sumDigits(int num)
{
	int remain, sum = 0;
	while(num != 0)
	{
		remain = num % 10;
		sum += remain;
		num /= 10;
	}
	return sum;
}
/***************************************************************
Function: int reverse( int )

Use: will reverse the number using a while loop

Arguments: an integer, the random number

Returns: the random number with the digits reversed
***************************************************************/
int reverse(int num)
{
	int reversed = 0;
	int quo, remain;
	quo = num;
	while (quo != 0)
	{
		remain = quo % 10;
		reversed = reversed * 10 + remain;
		quo /= 10;
	}
	return reversed;
}
/***************************************************************
Function: isPalindrome( int )

Use: determines if the random number is a palindrome

Arguments: an integer, the random number

Returns: a T/F in the form of Yes or No as to whether the
			random number is a palindrome
***************************************************************/
bool isPalindrome(int num)
{
	if(reverse(num) == num)
		return true;
	else
		return false;
}
/***************************************************************
Function: isPrime( int )

Use: determine if the random number is a prime number

Arguments: an integer, the random number

Returns: a T/F in the form of yes or no as to whether the
			random number is prime
***************************************************************/
bool isPrime(int num)
{
	int i;
	if(num % 2 == 0)
		return false;
		for(i = 3; i*i <= num; i+= 2)
			{
				if(num % i == 0)
					return false;
			}
	return true;
}
