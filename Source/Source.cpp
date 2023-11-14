#include <exception>
#include <iostream>
#include "Phoneme.h"

int main([[maybe_unused]] int argv, [[maybe_unused]] char** argc) {
	try {

		Phoneme VoicelessPalatalStop{ "c" };
		VoicelessPalatalStop.AddSpecifier(Phoneme::Type::Palatal);
		VoicelessPalatalStop.AddSpecifier(Phoneme::Type::Stop);

		Phoneme VoicelessLabializedPalatalStop("C");
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