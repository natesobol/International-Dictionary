// Filename: International_Dictionary_Library.cpp
// Last Modified: 10/7/16

#include "International_Dictionary.h"
#include "wordList.h"
#include "printWords.h"

// Validation Functions
double getNum() {
	double num;
	while (!(cin >> num)) {
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please no letter: ";
	}
	cin.ignore(80, '\n');
	return num;
}

int getInt() {
	double num = getNum();
	while (num != int(num)) {
		cout << num << " isn't a integer. Try Again: ";
		num = getNum();
	}
	return int(num);
}

double getInRange(double startNum, double endNum) {
	// Input
	double num = getInt();

	// Validation
	while (num < startNum || num > endNum) {
		cout << "Number isn't in range. Try again: ";
		num = getNum();
	}

	// Return
	return num;
}

// Menu Functions
void printTitle() {
	cout
		<< "\n\t\t          International Dictionary                                    "
		<< "\n    Translates words between English, French, German, Latin, and Hebrew ";
}

void printMenu() {
	cout
		<< "\n\n\n\t"
		<< "1.  Create the word list\n\t"
		<< "2.  German, French, Latin, or Hebrew to English nouns\n\t"
		<< "3.  German, French, Latin, or Hebrew to English verbs\n\t"
		<< "4.  German, French, Latin, or Hebrew to English prepositions\n\t"
		<< "5.  German, French, Latin, or Hebrew to English adjectives\n\t"
		<< "6.  German, French, Latin, or Hebrew to English adverbs\n\t"
		<< "7.  German, French, Latin, or Hebrew to English cardinal numbers\n\t"
		<< "8.  German, French, Latin, or Hebrew to English all\n\t"
		<< "9.  English to German, French, Latin, or Hebrew nouns\n\t"
		<< "10. English to German, French, Latin, or Hebrew verbs\n\t"
		<< "11. English to German, French, Latin, or Hebrew prepositions\n\t"
		<< "12. English to German, French, Latin, or Hebrew adjectives\n\t"
		<< "13. English to German, French, Latin, or Hebrew adverbs\n\t"
		<< "14. English to German, French, Latin, or Hebrew cardinal numbers\n\t"
		<< "15. English to German, French, Latin, or Hebrew all\n\t"
		<< "16. Search for a word in one language and return other languages\n\t"
		<< "17. Quit\n";
	for (int i = 0; i < 80; i++) {
		cout << "-";
	}
	cout << "\n\n";
}

void printSubMenu() {
	cout
		<< "\n\t  1. ALL"
		<< "\n\t  2. German"
		<< "\n\t  3. French"
		<< "\n\t  4. Latin"
		<< "\n\t  5. Hebrew";
}

int getSubChoice(){
	cout <<"\n\tChose your language: ";
	int choice = getInRange(1, 5);
	return choice;
}

int getChoice() {
	cout << "\nEnter your choice: ";
	int choice = getInRange(1, 17);
	return choice;
}

// Decision Function
void executeChoice() {
	// declarations
	int choice, subChoice;
	bool isCreated = false;
	Wordlist wList;
	printWords pWords;
	vector <Wordlist::wordProperties> dictionary;
	vector <Wordlist::wordProperties> mDictionary;
	choice = getChoice();
	// Validates if list has been created
	while (choice != 1) {
		cout << "Create the word list first!\n";
		choice = getChoice();
	}
	dictionary = wList.createDictionary();
	mDictionary = wList.createFromDictionary();
	cout << "List Created\n";

	while (true) {
		switch (choice) {
		case 2:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishNouns(subChoice, dictionary);
			break;
		case 3:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishVerbs(subChoice, dictionary);
			break;
		case 4:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishPrep(subChoice, dictionary);
			break;
		case 5:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishAdject(subChoice, dictionary);
			break;
		case 6:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishAdv(subChoice, dictionary);
			break;
		case 7:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printToEnglishCardinal(subChoice, dictionary);
			break;
		case 8:
			pWords.printToEnglishAll(dictionary);
			break;
		case 9:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishNouns(subChoice, mDictionary);
			break;
		case 10:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishVerbs(subChoice, mDictionary);
			break;
		case 11:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishPrep(subChoice, mDictionary);
			break;
		case 12:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishAdject(subChoice, mDictionary);
			break;
		case 13:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishAdv(subChoice, mDictionary);
			break;
		case 14:
			printSubMenu();
			subChoice = getSubChoice();
			pWords.printFromEnglishCardinal(subChoice, mDictionary);
			break;
		case 15:
			pWords.printFromEnglishAll(mDictionary);
			break;
		case 16:
			pWords.searchForWord(dictionary);
			break;
		case 17:
			exit(0);
		}
		system("pause");
		printMenu();
		choice = getChoice();
	}
}





