#pragma once
#include <vector>
#include <string>
#include <unordered_map>

class Phoneme {
public:
	enum class Type {
		Labial,
			Bilabial,
			Labiodental,
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
					Long,

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
	Phoneme() {
		m_Representation = L"";
	}
	Phoneme(std::wstring representation, std::vector<Type> specifiers, bool voicedRounded = false) {
		m_Representation = representation;
		for (auto& entry : specifiers) {
			AddSpecifier(entry);
		}
		if (Contains(Type::Consonant) && voicedRounded)
			AddSpecifier(Type::Voiced);
		else if(voicedRounded)
			AddSpecifier(Type::Rounded);
	}
	~Phoneme() {
		//Clear();
	}

	std::vector<Type> GetSpecifiers() {
		return m_Specifiers;
	}
	void AddSpecifier(Type specifier) {
		for (auto& entry : m_Specifiers) {
			if (entry == specifier)
				return;
		}
		m_Specifiers.push_back(specifier);

		switch (specifier) {
		case Type::Bilabial: case Type::Labiodental:
			AddSpecifier(Type::Labial);
			AddSpecifier(Type::Consonant);
			break;
		case Type::Dental: case Type::Alveolar: case Type::PostAlveolar: case Type::Retroflex:
			AddSpecifier(Type::Coronal);
			AddSpecifier(Type::Consonant);
			break;
		case Type::Palatal: case Type::Velar: case Type::Uvular:
			AddSpecifier(Type::Dorsal);
			AddSpecifier(Type::Consonant);
			break;
		case Type::Pharyngeal: case Type::Glottal:
			AddSpecifier(Type::Laryngeal);
			AddSpecifier(Type::Consonant);
			break;
		case Type::Nasal:
			if(!Contains(Type::Obstruent))
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
		case Type::Obstruent: case Type::Ejective: case Type::Click: case Type::Implosive: case Type::Labialized: case Type::Palatalized: case Type::Velarized: case Type::Pharyngealized: case Type::Glottalized: case Type::Aspirated:
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
	std::wstring GetRepresentation() {
		return m_Representation;
	}
	void CopySpecifiers(Phoneme from) {
		m_Specifiers = from.GetSpecifiers();
	}
	bool Contains(Type specifier) {
		for (auto& entry : m_Specifiers) {
			if (entry == specifier)
				return true;
		}
		return false;
	}
	void Clear() {
		for (auto& entry : m_Specifiers) {
			delete &entry;
		}
		delete& m_Representation;
	}

public:
	bool operator==(Phoneme phoneme) {
		return phoneme.m_Specifiers == m_Specifiers && phoneme.m_Representation == m_Representation;
	}

private:
	std::wstring m_Representation;
	std::vector<Type> m_Specifiers;
};