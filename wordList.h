// Filename: wordList.h
// Last Modified: 10/7/16

#ifndef WORDLIST_H
#define WORDLIST_H
#include "International_Dictionary.h"

class Wordlist {
public:

	// Declarations
	struct wordProperties {
		string word;
		string meaning;
		char partOfSpeech;
		char language;
	};

	Wordlist();
	~Wordlist();
	vector<wordProperties> dictionary;
	vector<wordProperties> mDictionary;
	vector <wordProperties> createDictionary();
	vector <wordProperties> createFromDictionary();
	
private:
	void cropWord();
	void alphabeticalSort();
	void meaningSort();
	void createGermanList();
	void createFrenchList();
	void createLatinList();
	void createHebrewList();
};
#endif