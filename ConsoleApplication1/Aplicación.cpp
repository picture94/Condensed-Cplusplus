/**
* Some tricks and tips to follow for when I forgot C++
*/

#include "pch.h"
#include "someFunctions.h"
void printHelloWorld();

int main(int argc, char *argv[]) // or int argc, char **argv

	// That's "illegal", but is used only to show how include works
	// 'someFunctions.h'embeds function prototypes as void printHelloWorld();
	#include "someFile.h" 
	 = 10;
	
	// passing arguments to the program?
	if (argc != 1) {
		std::cout << "You entered" << argc <<
			"arguments\n";
		try {
			for (int i = 0; i < argc; i++)
				std::cout << argv[i] << std::endl;
			throw std::runtime_error("Error ocurred");
			std::cout << "This message won't be displayed if an exception ocurred" << std::endl;
		}
		catch (std::exception &exp) {
			std::cout << "Handled exception: " << exp.what() << std::endl;
		}
		catch (const char* exp) {
			std::cout << "Error: " << exp << std::endl;
			// endl flush the buffer, cin makes it automat, not \n
		}
	}
	// Creating a new scope
	//{
	//	int j = 0;
	//}

	// Unsing a typedef only creates an alias for a specific type
	typedef int entero;
	entero num = 77;
	std::cout << num << std::endl;

	//// Parameters by reference and recursivity, short if
	//infinitySum(i); 
	//std::cout << "i has the vaue: " << i << std::endl;

	//// Study of types and its spaces
	//typeNotes();

	//// Functions can be managed without a .h too (more common)
	//// & does't need any include
	//printHelloWorld();

	//// Matrices
	//int arr[] = { 4, 5, 8, 33, 42 }; // or int arr[5];
	//int arr_descrip[] = { 5 }; // {width, height, deep, ... }
	//matricesNotes(arr);

	//// Structs
	//structNotes();

	//// std vectors
	//vectorNotes();

	//// IOFiles
	//ioFilesNotes();

	//// Classes deep
	//classesNotes();

	//// Type deductions & templates
	//deductionNotes();

	//// Advanced functions as a modules
	//functionNotes();

	// Memory management
	//memoryNotes();


	//TODO: function pointers
	//		polymorphic templates
	//		threads STL (not OpenMP)
	//		STL containers
	//		This
	//		Mutable
	//		Const vs Static

	return 0;
}





/**
* Programa contador de caracteres del abecedario
*/

/*
struct charCounter {
	char ch;
	int count;
	charCounter(char c, int i) :
		ch(c), count(i) {};
};

bool charCounterComp(charCounter const& lhs, charCounter const& rhs) {
	return lhs.count < rhs.count;
}

int main()
{
	vector<char> chars;
	char ch;
	cout << "Enter some characters terminated by ctrl z" << endl;
	while (cin >> ch) {
		ch = tolower(ch);
		if (ch >= 'a' && ch <= 'z')
			chars.push_back(ch);
	};

	// now sort the chars so that we can count each type of char

	sort(chars.begin(), chars.end());

	// now copy structs to a vector and increment each struct counter
	// then sort the vector by comparint the struct counter

	vector<charCounter> charCounters;
	if (0 < chars.size()) {
		charCounter cc = charCounter(chars[0], 1);
		charCounters.push_back(cc);
		for (int i = 1; i < chars.size(); ++i)
			if (chars[i - 1] != chars[i]) {
				cc = charCounter(chars[i], 1);
				charCounters.push_back(cc);
			}
			else {
				++charCounters[charCounters.size() - 1].count;
			}
	}

	// now sort the vector of charconters using a charCounter comparison
	// function to determine the ordering

	sort(charCounters.begin(), charCounters.end(), &charCounterComp);

	// print the results

	cout << "found " << chars.size() - charCounters.size() << " duplicates\n";
	for (int i = 0; i < charCounters.size(); ++i)  cout << charCounters[i].ch
		<< " : " << charCounters[i].count << "\n";
	//
	// thats all
	return(0);
}
*/

