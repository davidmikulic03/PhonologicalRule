#include <exception>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include "Phoneme.h"
#include "InternationalPhoneticAlphabet.h"

int main([[maybe_unused]] int argv, [[maybe_unused]] char** argc) {
	try {

		InternationalPhoneticAlphabet allPhonemes;
		std::cout << "Find phoneme(s) with the specifier(s): " << std::endl;
		
		std::vector<Phoneme> test = allPhonemes.Find({ Phoneme::Type::Velar, Phoneme::Type::Glide });
		std::cout << test.size() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}