// Filename: printWords.h
// Last Modified: 10/7/16

#ifndef PRINTWORDS_H
#define PRINTWORDS_H
#include "International_Dictionary.h"
#include "wordList.h"

class printWords {
public:
	// Declarations
	printWords();
	~printWords();
	void printToEnglishNouns(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishVerbs(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishPrep(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishAdject(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishAdv(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishCardinal(int choice, vector<Wordlist::wordProperties> dictionary);
	void printToEnglishAll(vector<Wordlist::wordProperties> dictionary);

	void printFromEnglishNouns(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishVerbs(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishPrep(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishAdject(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishAdv(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishCardinal(int choice, vector<Wordlist::wordProperties> mDictionary);
	void printFromEnglishAll(vector<Wordlist::wordProperties> dictionary);

	void searchForWord(vector<Wordlist::wordProperties> mDictionary);
};
#endif
