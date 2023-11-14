#pragma once
#include <vector>
#include <string>

class Phoneme {
public:
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
		
		
		Continuant,
		Lateral,
		Sonorant,
			Nasal,
			Approximant,
				Liquid,
					Tap,
					Trill,
				Glide,
				Vowel,
					Rounded,

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

			Obstruent,
				Stop,
				Affricate,
				Fricative,
					Sibilant,

			Labialized,
			Palatalized,
			Velarized,
			Pharyngealized,
			Glottalized,
			Aspirated,

			Ejective,
			Click,
			Implosive
	};

public:
	Phoneme(std::string representation) {
		m_Representation = representation;
	}
	~Phoneme() {
		//Clear();
	}

	std::vector<Type> GetSpecifiers() {
		return m_Specifiers;
	}
	void AddSpecifier(Type constraint) {
		for (auto& entry : m_Specifiers) {
			if (constraint == entry)
				return;
		}
		m_Specifiers.push_back(constraint);

		switch (constraint) {
		case Type::Bilabial: case Type::LabioDental: case Type::LinguoLabial:
			AddSpecifier(Type::Labial);
			break;
		case Type::Dental: case Type::Alveolar: case Type::PostAlveolar: case Type::Retroflex:
			AddSpecifier(Type::Coronal);
			break;
		case Type::Palatal: case Type::Velar: case Type::Uvular:
			AddSpecifier(Type::Dorsal);
			break;
		case Type::Pharyngeal: case Type::Glottal:
			AddSpecifier(Type::Laryngeal);
			break;
		case Type::Nasal:
			AddSpecifier(Type::Sonorant);
			break;
		case Type::Approximant:
			AddSpecifier(Type::Sonorant);
			AddSpecifier(Type::Continuant);
			break;
		case Type::Glide:
			AddSpecifier(Type::Approximant);
			break;
		case Type::Rounded: case Type::Close: case Type::NearClose: case Type::CloseMid: case Type::Mid: case Type::OpenMid: case Type::NearOpen: case Type::Open: case Type::Front: case Type::Central: case Type::Back:
			AddSpecifier(Type::Vowel);
			break;
		case Type::Trill: case Type::Tap:
			AddSpecifier(Type::Approximant);
			break;
		case Type::Voiced: case Type::Obstruent: case Type::Ejective: case Type::Click: case Type::Implosive: case Type::Labialized: case Type::Palatalized: case Type::Velarized: case Type::Pharyngealized: case Type::Glottalized: case Type::Aspirated:
			AddSpecifier(Type::Consonant);
			break;
		case Type::Stop: case Type::Affricate: case Type::Fricative:
			AddSpecifier(Type::Obstruent);
			break;
		case Type::Sibilant:
			AddSpecifier(Type::Fricative);
			break;
		}
	}
	std::string GetRepresentation() {
		return m_Representation;
	}
	void CopySpecifiers(Phoneme from) {
		m_Specifiers = from.GetSpecifiers();
	}

	void Clear() {
		for (auto& entry : m_Specifiers) {
			delete &entry;
		}
		delete& m_Representation;
	}


private:
	std::string m_Representation;
	std::vector<Type> m_Specifiers;
};