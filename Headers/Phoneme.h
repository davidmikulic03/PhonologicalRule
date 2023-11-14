#pragma once
#include <vector>
#include <string>

class Phoneme {
	enum class Type {
		Labial,
			Bilabial,
			LabioDental,
			LinguoLabial,
		Coronal,
			Dental,
			Alveolar,
			PostAlveolar,
			Retroflex,
		Dorsal,
			Palatal,
			Velar,
			Uvular,
		Laryngeal,
			Pharyngeal,
			Glottal,
		
		Pulmonic,
		Ejective,
		Click,
		Implosive,

		Continuant,

		Lateral,

		Sonorant,
			Nasal,
			Approximant,
				Glide,
				Liquid,
				Tap,
				Trill,
				Vowel,
					Rounded,
					Unrounded,

					Close,
					NearClose,
					CloseMid,
					Mid,
					OpenMid,
					NearOpen,
					Open,

					Front,
					Central,
					Back,

		Consonant,
			Voiced,
			Voiceless,
			Obstruent,
				Stop,
				Affricate,
				Fricative,
				Sibilant
	};

	std::vector<Type> GetAttributes() {
		return m_Constraints;
	}
	void SetAttributes(std::vector<Type> attributes) {
		m_Constraints = attributes;
	}
	void AddAttribute(Type attribute) {
		
	}

public:
	std::string Representation;
private:
	std::vector<Type> m_Constraints;
};