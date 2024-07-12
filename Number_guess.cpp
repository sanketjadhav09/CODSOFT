#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num,guess,tries=0;
	cout<<"Number Guessing Game\n\n";
	srand(time(0));
	num=rand()%100+1;

	do
	{
		cout<<"Enter a guess between 1 and 100: ";
		cin>>guess;
		tries++;

		if(guess==num)
			cout<<"\nCorrect! You got it in "<<tries<<" guesses!\n";
		else if(guess>num && guess<=100)
			cout<<"Too high!\n\n";
		else if(guess<num && guess>=1)
			cout<<"Too low!\n\n";
		else
			cout<<"Invalid Number!\n\n";
			
	} while(guess!=num);

	return 0;
}