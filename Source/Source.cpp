#include <exception>
#include <iostream>
#include "Phoneme.h"

int main([[maybe_unused]] int argv, [[maybe_unused]] char** argc) {
	try {

		Phoneme VoicelessPalatalStop("c", Phoneme::Type::Palatal, Phoneme::Type::Stop);

		Phoneme VoicelessLabializedPalatalStop("cw", Phoneme::Type::Palatal, Phoneme::Type::Stop);
		VoicelessLabializedPalatalStop.CopySpecifiers(VoicelessPalatalStop);
		VoicelessLabializedPalatalStop.AddSpecifier(Phoneme::Type::Labialized);

		//std::vector<Phoneme::Type> specifiers = VoicelessPalatalStop.GetSpecifiers();

		//for (auto& entry : specifiers) {
		//	std::cout << entry
		//}







	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}