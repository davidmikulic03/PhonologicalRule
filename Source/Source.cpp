#include <exception>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include "Phoneme.h"
#include "InternationalPhoneticAlphabet.h"

int main([[maybe_unused]] int argv, [[maybe_unused]] char** argc) {
	try {

		InternationalPhoneticAlphabet allPhonemes;
		PhoneticInventory inventory;
		std::cout << "PhonemeFinder: " << std::endl;
		std::string input;
		std::vector<Phoneme::Type> inclusions;
		std::vector<Phoneme::Type> exclusions;
		while (true) {
			std::cin >> input;
			if (input == "reset" || input == "r") {
				inclusions.clear();
				exclusions.clear();
				inventory.Clear();
				std::cout << "Reset all " << std::endl;
				continue;
			}
			else if (input == "search" || input == "s") {
				inventory.AddPhonemes(allPhonemes.Find(inclusions, exclusions));
				std::cout << "Found " << inventory.Count() << " phonemes matching the criteria." << std::endl;
				continue;
			}
			else if (input == "list" || input == "l") {
				std::vector<Phoneme> phonemes = inventory.GetPhonemes();
				for (auto& entry : phonemes) {
					std::wcout << entry.GetRepresentation() << std::endl;
				}
				continue;
			}

			std::string specifierKey;
			if (input[0] == '-' || input[0] == '!' || input[0] == '+')
				specifierKey = input.substr(1, input.size() - 1);
			else 
				specifierKey = input;
			Phoneme::Type specifier = allPhonemes.GetSpecifier(specifierKey);
			if (specifier == Phoneme::Type::NONE) {
				std::cout << "No phonemes match the input [" << input << "]." << std::endl;
				continue;
			}

			if (input[0] == '-' || input[0] == '!') {
				exclusions.push_back(specifier);
				std::cout << "Constraint [-" << specifierKey << "] added." << std::endl;
			}
			if (input[0] == '+' || input == specifierKey) {
				inclusions.push_back(specifier);
				std::cout << "Constraint [+" << specifierKey << "] added." << std::endl;
			}
		}
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}