#include <bits/stdc++.h>
using namespace std;

int main()
{ 
	// Take input from Player1 for Player2 to guess
	string word;
	cout << "Player1: Enter word to guess : ";
	cin >> word;
	
	cout << "Player2: Guess the word ";
	// take a string "hidden" to print the value of "word"
	// and print them on basis of whether they are true or not
	int hidden[word.size()];
	for (int i=0; i<word.size(); i++) {
		hidden[i] = 0;
	}
	int gameover = 0;
	// The loop for the entire game
	while (!gameover) {
		// Loop to print * in place of the letter if not guessed yet
		// using fallacy and tautology
		cout << "The word is : ";
		for (int j=0; j<word.size(); j++) {
			if (hidden[j]) {
				cout << word[j];
			}
			else {
				cout << '*';
			}
		}
		cout << endl;
		
		// Input of letter and loop to determine the status of "hidden"
		// by equating it to the guess
		char guess;
		cout << "Letter? ";
		cin >> guess;
		
		for (int k=0; k<word.size(); k++) {
			if (word[k] == guess) {
				hidden[k] = 1;
			}
		}
		// Loop to check whether game is over or not
		gameover = 1;
		for (int m=0; m<word.size(); m++) {
			if (!hidden[m]) {
				gameover = 0;
				break;
			}
		}
	}
	// Winning statement
	cout << "Congrats !! You are AWESOME ! The word is \"" << word << "\"" << endl;
	return 0;
}
