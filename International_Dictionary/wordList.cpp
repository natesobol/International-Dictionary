// Filename: wordList.cpp
// Last Modified: 10/7/16

#include "Wordlist.h"

// Constructors
Wordlist::Wordlist() {}
Wordlist::~Wordlist() {}

// Declarations
vector<Wordlist::wordProperties> germanList;
vector<Wordlist::wordProperties> frenchList;
vector<Wordlist::wordProperties> latinList;
vector<Wordlist::wordProperties> hebrewList;

// Functions
bool sortByWord(const Wordlist::wordProperties &lhs, const Wordlist::wordProperties &rhs){ 
	return lhs.word < rhs.word; 
}

bool sortByMeaning(const Wordlist::wordProperties &lhs, const Wordlist::wordProperties &rhs) {
	return lhs.meaning < rhs.meaning;
}

void Wordlist::cropWord(){
	for (int i = 0; i < (dictionary.size()); i++) {
		if (dictionary[i].language == 'g' && dictionary[i].partOfSpeech == 'n')
				dictionary[i].word = dictionary[i].word.substr(4, 6);
		else if (dictionary[i].language == 'f' && dictionary[i].partOfSpeech == 'n') 
			dictionary[i].word = dictionary[i].word.substr(3, 6);
	}
}

void Wordlist::alphabeticalSort(){
	sort(dictionary.begin(), dictionary.end(), sortByWord);
}

void Wordlist::meaningSort() {
	sort(mDictionary.begin(), mDictionary.end(), sortByMeaning);
}

vector <Wordlist::wordProperties> Wordlist::createFromDictionary() {

	
	createGermanList();
	createFrenchList();
	createLatinList();
	createHebrewList();
	
	// Combines vectors
	mDictionary.insert(mDictionary.end(), germanList.begin(), germanList.end());
	mDictionary.insert(mDictionary.end(), frenchList.begin(), frenchList.end());
	mDictionary.insert(mDictionary.end(), latinList.begin(), latinList.end());
	mDictionary.insert(mDictionary.end(), hebrewList.begin(), hebrewList.end());
	
	meaningSort();

	return mDictionary;
}

vector <Wordlist::wordProperties> Wordlist::createDictionary() {

	createGermanList();
	createFrenchList();
	createLatinList();
	createHebrewList();

	// Combines vectors
	dictionary.insert(dictionary.end(), germanList.begin(), germanList.end());
	dictionary.insert(dictionary.end(), frenchList.begin(), frenchList.end());
	dictionary.insert(dictionary.end(), latinList.begin(), latinList.end());
	dictionary.insert(dictionary.end(), hebrewList.begin(), hebrewList.end());

	cropWord();
	alphabeticalSort();

	return dictionary;
}



// noun = n
// verb = v
// preposition = p
// adverb = a
// adjective = j
// pronoun = r
// cardinal = c
// conjunction = u

void Wordlist::createGermanList() {
	germanList.resize(25);
	
	germanList[0].word = "der mann";
	germanList[0].partOfSpeech = 'n';
	germanList[0].meaning = "man";
	germanList[0].language = 'g';

	germanList[1].word = "das ol";
	germanList[1].partOfSpeech = 'n';
	germanList[1].meaning = "oil";
	germanList[1].language = 'g';

	germanList[2].word = "die frau";
	germanList[2].partOfSpeech = 'n';
	germanList[2].meaning = "woman";
	germanList[2].language = 'g';

	germanList[3].word = "das fraulein";
	germanList[3].partOfSpeech = 'n';
	germanList[3].meaning = "miss";
	germanList[3].language = 'g';

	germanList[4].word = "das madchen";
	germanList[4].partOfSpeech = 'n';
	germanList[4].meaning = "child";
	germanList[4].language = 'g';

	germanList[5].word = "das kind";
	germanList[5].partOfSpeech = 'n';
	germanList[5].meaning = "house";
	germanList[5].language = 'g';

	germanList[6].word = "das haus";
	germanList[6].partOfSpeech = 'n';
	germanList[6].meaning = "house";
	germanList[6].language = 'g';

	germanList[7].word = "die schule";
	germanList[7].partOfSpeech = 'n';
	germanList[7].meaning = "school";
	germanList[7].language = 'g';

	germanList[8].word = "die tur";
	germanList[8].partOfSpeech = 'n';
	germanList[8].meaning = "door";
	germanList[8].language = 'g';

	germanList[9].word = "kommen";
	germanList[9].partOfSpeech = 'v';
	germanList[9].meaning = "to come";
	germanList[9].language = 'g';

	germanList[10].word = "gehen";
	germanList[10].partOfSpeech = 'v';
	germanList[10].meaning = "to go";
	germanList[10].language = 'g';

	germanList[11].word = "sehen";
	germanList[11].partOfSpeech = 'v';
	germanList[11].meaning = "to see";
	germanList[11].language = 'g';

	germanList[12].word = "wollen";
	germanList[12].partOfSpeech = 'v';
	germanList[12].meaning = "to want";
	germanList[12].language = 'g';

	germanList[13].word = "wissen";
	germanList[13].partOfSpeech = 'v';
	germanList[13].meaning = "to know";
	germanList[13].language = 'g';

	germanList[14].word = "konnen";
	germanList[14].partOfSpeech = 'v';
	germanList[14].meaning = "to be able";
	germanList[14].language = 'g';

	germanList[15].word = "vor";
	germanList[15].partOfSpeech = 'p';
	germanList[15].meaning = "before";
	germanList[15].language = 'g';

	germanList[16].word = "nach";
	germanList[16].partOfSpeech = 'p';
	germanList[16].meaning = "after";
	germanList[16].language = 'g';

	germanList[17].word = "zu";
	germanList[17].partOfSpeech = 'p';
	germanList[17].meaning = "to";
	germanList[17].language = 'g';

	germanList[18].word = "bis";
	germanList[18].partOfSpeech = 'p';
	germanList[18].meaning = "until";
	germanList[18].language = 'g';

	germanList[19].word = "ohne";
	germanList[19].partOfSpeech = 'p';
	germanList[19].meaning = "without";
	germanList[19].language = 'g';

	germanList[20].word = "eins";
	germanList[20].partOfSpeech = 'c';
	germanList[20].meaning = "one";
	germanList[20].language = 'g';

	germanList[21].word = "zwei";
	germanList[21].partOfSpeech = 'c';
	germanList[21].meaning = "two";
	germanList[21].language = 'g';

	germanList[22].word = "drei";
	germanList[22].partOfSpeech = 'c';
	germanList[22].meaning = "three";
	germanList[22].language = 'g';

	germanList[23].word = "hoch";
	germanList[23].partOfSpeech = 'a';
	germanList[23].meaning = "high";
	germanList[23].language = 'g';

	germanList[24].word = "gut";
	germanList[24].partOfSpeech = 'a';
	germanList[24].meaning = "good";
	germanList[24].language = 'g';
}

void Wordlist::createFrenchList() {
	frenchList.resize(25);

	frenchList[0].word = "le mot";
	frenchList[0].partOfSpeech = 'n';
	frenchList[0].meaning = "word";
	frenchList[0].language = 'f';

	frenchList[1].word = "le garcon";
	frenchList[1].partOfSpeech = 'n';
	frenchList[1].meaning = "boy";
	frenchList[1].language = 'f';

	frenchList[2].word = "jeune";
	frenchList[2].partOfSpeech = 'j';
	frenchList[2].meaning = "young";
	frenchList[2].language = 'f';

	frenchList[3].word = "le boulanger";
	frenchList[3].partOfSpeech = 'n';
	frenchList[3].meaning = "baker";
	frenchList[3].language = 'f';

	frenchList[4].word = "la fille";
	frenchList[4].partOfSpeech = 'n';
	frenchList[4].meaning = "girl";
	frenchList[4].language = 'f';

	frenchList[5].word = "francais";
	frenchList[5].partOfSpeech = 'j';
	frenchList[5].meaning = "French";
	frenchList[5].language = 'f';

	frenchList[6].word = "le livre";
	frenchList[6].partOfSpeech = 'n';
	frenchList[6].meaning = "book";
	frenchList[6].language = 'f';

	frenchList[7].word = "l'ecole";
	frenchList[7].partOfSpeech = 'n';
	frenchList[7].meaning = "school";
	frenchList[7].language = 'f';

	frenchList[8].word = "la maison";
	frenchList[8].partOfSpeech = 'n';
	frenchList[8].meaning = "house";
	frenchList[8].language = 'f';

	frenchList[9].word = "etre";
	frenchList[9].partOfSpeech = 'v';
	frenchList[9].meaning = "to be";
	frenchList[9].language = 'f';

	frenchList[10].word = "apres";
	frenchList[10].partOfSpeech = 'p';
	frenchList[10].meaning = "after";
	frenchList[10].language = 'f';

	frenchList[11].word = "voir";
	frenchList[11].partOfSpeech = 'v';
	frenchList[11].meaning = "to see";
	frenchList[11].language = 'f';

	frenchList[12].word = "dire";
	frenchList[12].partOfSpeech = 'v';
	frenchList[12].meaning = "to say";
	frenchList[12].language = 'f';

	frenchList[13].word = "aller";
	frenchList[13].partOfSpeech = 'v';
	frenchList[13].meaning = "to go";
	frenchList[13].language = 'f';

	frenchList[14].word = "bon";
	frenchList[14].partOfSpeech = 'j';
	frenchList[14].meaning = "good";
	frenchList[14].language = 'f';

	frenchList[15].word = "le mardi";
	frenchList[15].partOfSpeech = 'n';
	frenchList[15].meaning = "Tuesday";
	frenchList[15].language = 'f';

	frenchList[16].word = "la salle";
	frenchList[16].partOfSpeech = 'n';
	frenchList[16].meaning = "room";
	frenchList[16].language = 'f';

	frenchList[17].word = "elle";
	frenchList[17].partOfSpeech = 'r';
	frenchList[17].meaning = "she";
	frenchList[17].language = 'f';

	frenchList[18].word = "le jour";
	frenchList[18].partOfSpeech = 'n';
	frenchList[18].meaning = "day";
	frenchList[18].language = 'f';

	frenchList[19].word = "aujourd'hui";
	frenchList[19].partOfSpeech = 'a';
	frenchList[19].meaning = "today";
	frenchList[19].language = 'f';

	frenchList[20].word = "la pluie";
	frenchList[20].partOfSpeech = 'n';
	frenchList[20].meaning = "rain";
	frenchList[20].language = 'f';

	frenchList[21].word = "le cheval";
	frenchList[21].partOfSpeech = 'n';
	frenchList[21].meaning = "horse";
	frenchList[21].language = 'f';

	frenchList[22].word = "le moulin";
	frenchList[22].partOfSpeech = 'n';
	frenchList[22].meaning = "mill";
	frenchList[22].language = 'f';

	frenchList[23].word = "rouge";
	frenchList[23].partOfSpeech = 'j';
	frenchList[23].meaning = "red";
	frenchList[23].language = 'f';

	frenchList[24].word = "la neige";
	frenchList[24].partOfSpeech = 'n';
	frenchList[24].meaning = "snow";
	frenchList[24].language = 'f';
	
}

void Wordlist::createLatinList() {
	latinList.resize(25);

	latinList[0].word = "puer";
	latinList[0].partOfSpeech = 'n';
	latinList[0].meaning = "boy";
	latinList[0].language = 'l';

	latinList[1].word = "pistor";
	latinList[1].partOfSpeech = 'n';
	latinList[1].meaning = "baker";
	latinList[1].language = 'l';

	latinList[2].word = "puella";
	latinList[2].partOfSpeech = 'n';
	latinList[2].meaning = "girl";
	latinList[2].language = 'l';

	latinList[3].word = "bonus";
	latinList[3].partOfSpeech = 'j';
	latinList[3].meaning = "good";
	latinList[3].language = 'l';

	latinList[4].word = "liber";
	latinList[4].partOfSpeech = 'n';
	latinList[4].meaning = "book";
	latinList[4].language = 'l';

	latinList[5].word = "schola";
	latinList[5].partOfSpeech = 'n';
	latinList[5].meaning = "school";
	latinList[5].language = 'l';

	latinList[6].word = "domus";
	latinList[6].partOfSpeech = 'n';
	latinList[6].meaning = "house";
	latinList[6].language = 'l';

	latinList[7].word = "esse";
	latinList[7].partOfSpeech = 'v';
	latinList[7].meaning = "to be";
	latinList[7].language = 'l';

	latinList[8].word = "post";
	latinList[8].partOfSpeech = 'p';
	latinList[8].meaning = "after";
	latinList[8].language = 'l';

	latinList[9].word = "illa";
	latinList[9].partOfSpeech = 'r';
	latinList[9].meaning = "she";
	latinList[9].language = 'l';

	latinList[10].word = "conclave";
	latinList[10].partOfSpeech = 'n';
	latinList[10].meaning = "room";
	latinList[10].language = 'l';

	latinList[11].word = "hodie";
	latinList[11].partOfSpeech = 'a';
	latinList[11].meaning = "today";
	latinList[11].language = 'l';

	latinList[12].word = "pluvia";
	latinList[12].partOfSpeech = 'n';
	latinList[12].meaning = "rain";
	latinList[12].language = 'l';

	latinList[13].word = "equus";
	latinList[13].partOfSpeech = 'n';
	latinList[13].meaning = "horse";
	latinList[13].language = 'l';

	latinList[14].word = "mola";
	latinList[14].partOfSpeech = 'n';
	latinList[14].meaning = "mill";
	latinList[14].language = 'l';

	latinList[15].word = "ruber";
	latinList[15].partOfSpeech = 'j';
	latinList[15].meaning = "red";
	latinList[15].language = 'l';

	latinList[16].word = "nix";
	latinList[16].partOfSpeech = 'n';
	latinList[16].meaning = "snow";
	latinList[16].language = 'l';

	latinList[17].word = "ire";
	latinList[17].partOfSpeech = 'v';
	latinList[17].meaning = "to go";
	latinList[17].language = 'l';

	latinList[18].word = "oculus";
	latinList[18].partOfSpeech = 'n';
	latinList[18].meaning = "eye";
	latinList[18].language = 'l';

	latinList[19].word = "intro";
	latinList[19].partOfSpeech = 'a';
	latinList[19].meaning = "within";
	latinList[19].language = 'l';

	latinList[20].word = "femina";
	latinList[20].partOfSpeech = 'n';
	latinList[20].meaning = "woman";
	latinList[20].language = 'l';

	latinList[21].word = "homunculus";
	latinList[21].partOfSpeech = 'n';
	latinList[21].meaning = "little man";
	latinList[21].language = 'l';

	latinList[22].word = "malum";
	latinList[22].partOfSpeech = 'n';
	latinList[22].meaning = "apple";
	latinList[22].language = 'l';

	latinList[23].word = "nam";
	latinList[23].partOfSpeech = 'u';
	latinList[23].meaning = "for";
	latinList[23].language = 'l';

	latinList[24].word = "zelus";
	latinList[24].partOfSpeech = 'n';
	latinList[24].meaning = "zeal";
	latinList[24].language = 'l';
}

void Wordlist::createHebrewList() {
	hebrewList.resize(25);

	hebrewList[0].word = "rachok";
	hebrewList[0].partOfSpeech = 'a';
	hebrewList[0].meaning = "far";
	hebrewList[0].language = 'h';

	hebrewList[1].word = "panim";
	hebrewList[1].partOfSpeech = 'n';
	hebrewList[1].meaning = "face";
	hebrewList[1].language = 'h';

	hebrewList[2].word = "tapuach";
	hebrewList[2].partOfSpeech = 'n';
	hebrewList[2].meaning = "apple";
	hebrewList[2].language = 'h';

	hebrewList[3].word = "ma'afiah";
	hebrewList[3].partOfSpeech = 'n';
	hebrewList[3].meaning = "bakery";
	hebrewList[3].language = 'h';

	hebrewList[4].word = "ayin";
	hebrewList[4].partOfSpeech = 'n';
	hebrewList[4].meaning = "eye";
	hebrewList[4].language = 'h';

	hebrewList[5].word = "adom";
	hebrewList[5].partOfSpeech = 'j';
	hebrewList[5].meaning = "red";
	hebrewList[5].language = 'h';

	hebrewList[6].word = "sheleg";
	hebrewList[6].partOfSpeech = 'n';
	hebrewList[6].meaning = "snow";
	hebrewList[6].language = 'h';

	hebrewList[7].word = "ochel";
	hebrewList[7].partOfSpeech = 'n';
	hebrewList[7].meaning = "food";
	hebrewList[7].language = 'h';

	hebrewList[8].word = "bari";
	hebrewList[8].partOfSpeech = 'j';
	hebrewList[8].meaning = "healthy";
	hebrewList[8].language = 'h';

	hebrewList[9].word = "cham";
	hebrewList[9].partOfSpeech = 'j';
	hebrewList[9].meaning = "hot";
	hebrewList[9].language = 'h';

	hebrewList[10].word = "yom shlishi";
	hebrewList[10].partOfSpeech = 'n';
	hebrewList[10].meaning = "Tuesday";
	hebrewList[10].language = 'h';

	hebrewList[11].word = "tov";
	hebrewList[11].partOfSpeech = 'j';
	hebrewList[11].meaning = "good";
	hebrewList[11].language = 'h';

	hebrewList[12].word = "latet";
	hebrewList[12].partOfSpeech = 'v';
	hebrewList[12].meaning = "to give";
	hebrewList[12].language = 'h';

	hebrewList[13].word = "kan";
	hebrewList[13].partOfSpeech = 'a';
	hebrewList[13].meaning = "here";
	hebrewList[13].language = 'h';

	hebrewList[14].word = "juke";
	hebrewList[14].partOfSpeech = 'n';
	hebrewList[14].meaning = "bug";
	hebrewList[14].language = 'h';

	hebrewList[15].word = "lemala";
	hebrewList[15].partOfSpeech = 'a';
	hebrewList[15].meaning = "up";
	hebrewList[15].language = 'h';

	hebrewList[16].word = "mitah";
	hebrewList[16].partOfSpeech = 'n';
	hebrewList[16].meaning = "bed";
	hebrewList[16].language = 'h';

	hebrewList[17].word = "kafa'fa";
	hebrewList[17].partOfSpeech = 'n';
	hebrewList[17].meaning = "glove";
	hebrewList[17].language = 'h';

	hebrewList[18].word = "katis ashrei";
	hebrewList[18].partOfSpeech = 'n';
	hebrewList[18].meaning = "credit card";
	hebrewList[18].language = 'h';

	hebrewList[19].word = "zol";
	hebrewList[19].partOfSpeech = 'j';
	hebrewList[19].meaning = "inexpensive";
	hebrewList[19].language = 'h';

	hebrewList[20].word = "smartoot";
	hebrewList[20].partOfSpeech = 'n';
	hebrewList[20].meaning = "rain";
	hebrewList[20].language = 'h';

	hebrewList[21].word = "sus";
	hebrewList[21].partOfSpeech = 'n';
	hebrewList[21].meaning = "horse";
	hebrewList[21].language = 'h';

	hebrewList[22].word = "matai";
	hebrewList[22].partOfSpeech = 'a';
	hebrewList[22].meaning = "when";
	hebrewList[22].language = 'h';

	hebrewList[23].word = "chatza'it";
	hebrewList[23].partOfSpeech = 'n';
	hebrewList[23].meaning = "skirt";
	hebrewList[23].language = 'h';

	hebrewList[24].word = "cheshbom";
	hebrewList[24].partOfSpeech = 'n';
	hebrewList[24].meaning = "bill";
	hebrewList[24].language = 'h';
}


