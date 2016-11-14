// Filename: printWords.cpp
// Last Modified: 10/7/16
#include "printWords.h"

// constructors
printWords::printWords() {}
printWords::~printWords() {}

// functions
void printAllContent(const string language, const string partOfSpeech, const char p, const int WIDTH, vector<Wordlist::wordProperties> dictionary) {
	cout << language << " " << partOfSpeech << setw(WIDTH) << "English\n";
	for (int i = 0; i < dictionary.size(); i++) {
		if (dictionary[i].partOfSpeech == p) {
			cout << setw(0) << dictionary[i].word << setw(30 - dictionary[i].word.length()) << dictionary[i].meaning << "\n";
		}
	}
}

void printFilteredContent(const string language, const string partOfSpeech, const char p, const char l, const int WIDTH, vector<Wordlist::wordProperties> dictionary) {
	cout << language << " " << partOfSpeech << setw(WIDTH) << "English\n";
	for (int i = 0; i < dictionary.size(); i++) {
		if (dictionary[i].partOfSpeech == p && dictionary[i].language == l) {
			cout << dictionary[i].word << setw(30 - dictionary[i].word.length()) << dictionary[i].meaning << "\n";
		}
	}
}

void printAllContentFrom(const string language, const string partOfSpeech, const char p, const int WIDTH, vector<Wordlist::wordProperties> dictionary) {
	cout << "English" << setw(WIDTH) << language << " " << partOfSpeech << "\n";
	for (int i = 0; i < dictionary.size(); i++) {
		if (dictionary[i].partOfSpeech == p) {
			cout << dictionary[i].meaning << setw(30 - dictionary[i].meaning.length()) << dictionary[i].word << "\n";
		}
	}
}

void printFilteredContentFrom(const string language, const string partOfSpeech, const char p, const char l, const int WIDTH, vector<Wordlist::wordProperties> dictionary) {
	cout << "English" << setw(WIDTH) << language << " " << partOfSpeech << "\n";
	for (int i = 0; i < dictionary.size(); i++) {
		if (dictionary[i].partOfSpeech == p && dictionary[i].language == l) {
			cout << dictionary[i].meaning << setw(30 - dictionary[i].meaning.length()) << dictionary[i].word << "\n";
		}
	}

}

void printWords::printToEnglishNouns(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Nouns";
	const char p = 'n';
		switch (choice) {
		case 1:
			printAllContent("ALL", partOfSpeech, p, 22, dictionary);
			break;
		case 2:
			printFilteredContent("German", partOfSpeech, p, 'g', 19, dictionary);
			break;
		case 3:
			printFilteredContent("French", partOfSpeech, p, 'f', 19, dictionary);
			break;
		case 4:
			printFilteredContent("Latin", partOfSpeech, p, 'l', 20, dictionary);
			break;
		case 5:
			printFilteredContent("Hebrew", partOfSpeech, p, 'h', 19, dictionary);
			break;
		}
}


void printWords::printToEnglishVerbs(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Verbs";
	const char p = 'v';
	switch (choice) {
	case 1:
		printAllContent("ALL", partOfSpeech, p, 22, dictionary);
		break;
	case 2:
		printFilteredContent("German", partOfSpeech, p, 'g', 19, dictionary);
		break;
	case 3:
		printFilteredContent("French", partOfSpeech, p, 'f', 19, dictionary);
		break;
	case 4:
		printFilteredContent("Latin", partOfSpeech, p, 'l', 20, dictionary);
		break;
	case 5:
		printFilteredContent("Hebrew", partOfSpeech, p, 'h', 19, dictionary);
		break;
	}
}

void printWords::printToEnglishPrep(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Prepositions";
	const char p = 'p';
	switch (choice) {
	case 1:
		printAllContent("ALL", partOfSpeech, p, 15, dictionary);
		break;
	case 2:
		printFilteredContent("German", partOfSpeech, p, 'g', 12, dictionary);
		break;
	case 3:
		printFilteredContent("French", partOfSpeech, p, 'f', 12, dictionary);
		break;
	case 4:
		printFilteredContent("Latin", partOfSpeech, p, 'l', 13, dictionary);
		break;
	case 5:
		printFilteredContent("Hebrew", partOfSpeech, p, 'h', 12, dictionary);
		break;
	}
}

void printWords::printToEnglishAdject(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Adjectives";
	const char p = 'j';
	switch (choice) {
	case 1:
		printAllContent("ALL", partOfSpeech, p, 17, dictionary);
		break;
	case 2:
		printFilteredContent("German", partOfSpeech, p, 'g', 14, dictionary);
		break;
	case 3:
		printFilteredContent("French", partOfSpeech, p, 'f', 14, dictionary);
		break;
	case 4:
		printFilteredContent("Latin", partOfSpeech, p, 'l', 15, dictionary);
		break;
	case 5:
		printFilteredContent("Hebrew", partOfSpeech, p, 'h', 14, dictionary);
		break;
	}
}

void printWords::printToEnglishAdv(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Adverbs";
	const char p = 'a';
	switch (choice) {
	case 1:
		printAllContent("ALL", partOfSpeech, p, 20, dictionary);
		break;
	case 2:
		printFilteredContent("German", partOfSpeech, p, 'g', 17, dictionary);
		break;
	case 3:
		printFilteredContent("French", partOfSpeech, p, 'f', 17, dictionary);
		break;
	case 4:
		printFilteredContent("Latin", partOfSpeech, p, 'l', 18, dictionary);
		break;
	case 5:
		printFilteredContent("Hebrew", partOfSpeech, p, 'h', 17, dictionary);
		break;
	}
}

void printWords::printToEnglishCardinal(int choice, vector<Wordlist::wordProperties> dictionary) {
	const string partOfSpeech = "Cardinals";
	const char p = 'c';
	switch (choice) {
	case 1:
		printAllContent("ALL", partOfSpeech, p, 18, dictionary);
		break;
	case 2:
		printFilteredContent("German", partOfSpeech, p, 'g', 15, dictionary);
		break;
	case 3:
		printFilteredContent("French", partOfSpeech, p, 'f', 15, dictionary);
		break;
	case 4:
		printFilteredContent("Latin", partOfSpeech, p, 'l', 16, dictionary);
		break;
	case 5:
		printFilteredContent("Hebrew", partOfSpeech, p, 'h', 15, dictionary);
		break;
	}
}

void printWords::printToEnglishAll(vector<Wordlist::wordProperties> dictionary) {
	cout << "All Words" << setw(18) << "English\n";
	for (int i = 0; i < dictionary.size(); i++) {
		cout << setw(0) << dictionary[i].word << setw(30 - dictionary[i].word.length()) << dictionary[i].meaning << "\n";
	}
}

void printWords::printFromEnglishNouns(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Nouns";
	const char p = 'n';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishVerbs(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Verbs";
	const char p = 'v';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishPrep(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Prepositions";
	const char p = 'p';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishAdject(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Adjectives";
	const char p = 'j';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishAdv(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Adverbs";
	const char p = 'a';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishCardinal(int choice, vector<Wordlist::wordProperties> mDictionary) {
	const string partOfSpeech = "Cardinal";
	const char p = 'c';
	switch (choice) {
	case 1:
		printAllContentFrom("ALL", partOfSpeech, p, 18, mDictionary);
		break;
	case 2:
		printFilteredContentFrom("German", partOfSpeech, p, 'g', 15, mDictionary);
		break;
	case 3:
		printFilteredContentFrom("French", partOfSpeech, p, 'f', 15, mDictionary);
		break;
	case 4:
		printFilteredContentFrom("Latin", partOfSpeech, p, 'l', 16, mDictionary);
		break;
	case 5:
		printFilteredContentFrom("Hebrew", partOfSpeech, p, 'h', 15, mDictionary);
		break;
	}
}

void printWords::printFromEnglishAll(vector<Wordlist::wordProperties> mDictionary) {
	cout << "English" << setw(18) << "All Words\n";
	for (int i = 0; i < mDictionary.size(); i++) {
		cout << setw(0) << mDictionary[i].meaning << setw(30 - mDictionary[i].meaning.length()) << mDictionary[i].word << "\n";
	}
}

void printWords::searchForWord(vector<Wordlist::wordProperties> dictionary) {
	string word;

	cout << "Enter a word: ";
	getline(cin, word);

	cout << "Corresponding Words\n";
	for (int i = 0; i < dictionary.size(); i++) {
	// english to foriegn
		if (word == dictionary[i].meaning) {
			cout << dictionary[i].word << "\n";
		}
		else if (word == dictionary[i].word) {
			cout << dictionary[i].meaning << "\n";
		}
	}
}
