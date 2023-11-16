#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "Phoneme.h"

class PhoneticInventory {
public:
	PhoneticInventory() {
		m_Map = DefineMap();
	}
	~PhoneticInventory() = default;
	
public:
	void AddPhoneme(Phoneme phoneme) {
		for (auto& entry : m_PhoneticInventory) {
			if (phoneme == entry)
				return;
		}
		m_PhoneticInventory.emplace_back(phoneme);
	}
	void AddPhonemes(std::vector<Phoneme> phonemes) {
		for (auto& phoneme : phonemes) {
			AddPhoneme(phoneme);
		}
	}
	std::vector<Phoneme> GetPhonemes() {
		return m_PhoneticInventory;
	}
public:
	Phoneme::Type GetSpecifier(std::string name) {
		auto search = m_Map.find(name);
		if (search == m_Map.end())
			return Phoneme::Type(0);
		else
			return m_Map[search->first];
	}
	
	Phoneme Find(std::wstring representation) {
		for (auto& entry : m_PhoneticInventory) {
			if (entry.GetRepresentation() == representation)
				return entry;
		}
		return Phoneme();
	}
	std::vector<Phoneme> Find(std::vector<Phoneme::Type> include, std::vector<Phoneme::Type> exclude) {
		std::vector<Phoneme> output;
		for (unsigned int i = 0; i < m_PhoneticInventory.size(); i++) {
			bool hasNoExclusions = true;
			bool hasAllInclusions = true;
			for (auto& exclusion : exclude) {
				if (m_PhoneticInventory[i].Contains(exclusion)) {
					hasNoExclusions = false;
					break;
				}
			}
			for (auto& inclusion : include) {
				if (!m_PhoneticInventory[i].Contains(inclusion)) {
					hasAllInclusions = false;
					break;
				}
			}
			if (hasNoExclusions && hasAllInclusions)
				output.emplace_back(m_PhoneticInventory[i]);
		}
		return output;
	}
	size_t Count() {
		return m_PhoneticInventory.size();
	}
public:
	void Clear() {
		m_PhoneticInventory.clear();
	}
public:
	/*static std::unordered_map<Phoneme::Type, std::string> DefineMap() {
		std::unordered_map<Phoneme::Type, std::string> map;

		map[Phoneme::Type::Labial] = "Labial";
		map[Phoneme::Type::Bilabial] = "Bilabial";
		map[Phoneme::Type::Labiodental] = "Labiodental";
		map[Phoneme::Type::Coronal] = "Coronal";
		map[Phoneme::Type::Dental] = "Dental";
		map[Phoneme::Type::Alveolar] = "Alveolar";
		map[Phoneme::Type::PostAlveolar] = "Post-Alveolar";
		map[Phoneme::Type::Retroflex] = "Retroflex";
		map[Phoneme::Type::Dorsal] = "Dorsal";
		map[Phoneme::Type::Palatal] = "Palatal";
		map[Phoneme::Type::Velar] = "Velar";
		map[Phoneme::Type::Uvular] = "Uvular";
		map[Phoneme::Type::Laryngeal] = "Laryngeal";
		map[Phoneme::Type::Pharyngeal] = "Pharyngeal";
		map[Phoneme::Type::Glottal] = "Glottal";
		map[Phoneme::Type::Continuant] = "Continuant";
		map[Phoneme::Type::Lateral] = "Lateral";
		map[Phoneme::Type::Sonorant] = "Sonorant";
		map[Phoneme::Type::Nasal] = "Nasal";
		map[Phoneme::Type::Approximant] = "Approximant";
		map[Phoneme::Type::Liquid] = "Liquid";
		map[Phoneme::Type::Tap] = "Tap/Flap";
		map[Phoneme::Type::Trill] = "Trill";
		map[Phoneme::Type::Glide] = "Glide";
		map[Phoneme::Type::Vowel] = "Vowel";
		map[Phoneme::Type::Rounded] = "Rounded";
		map[Phoneme::Type::Close] = "Close";
		map[Phoneme::Type::NearClose] = "Near Close";
		map[Phoneme::Type::CloseMid] = "Close Mid";
		map[Phoneme::Type::Mid] = "Mid";
		map[Phoneme::Type::OpenMid] = "Open Mid";
		map[Phoneme::Type::NearOpen] = "Near Open";
		map[Phoneme::Type::Open] = "Open;";
		map[Phoneme::Type::Front] = "Front";
		map[Phoneme::Type::Central] = "Central";
		map[Phoneme::Type::Back] = "Back";
		map[Phoneme::Type::Consonant] = "Consonant";
		map[Phoneme::Type::Voiced] = "Voiced";
		map[Phoneme::Type::Obstruent] = "Obstruent";
		map[Phoneme::Type::Stop] = "Stop";
		map[Phoneme::Type::Affricate] = "Affricate";
		map[Phoneme::Type::Fricative] = "Fricative";
		map[Phoneme::Type::Sibilant] = "Sibilant";
		map[Phoneme::Type::Labialized] = "Labialized";
		map[Phoneme::Type::Palatalized] = "Palatalized";
		map[Phoneme::Type::Velarized] = "Velarized";
		map[Phoneme::Type::Pharyngealized] = "Pharyngealized";
		map[Phoneme::Type::Glottalized] = "Glottalized";
		map[Phoneme::Type::Aspirated] = "Aspirated";
		map[Phoneme::Type::Ejective] = "Ejective";
		map[Phoneme::Type::Click] = "Click";
		map[Phoneme::Type::Implosive] = "Implosive";

	}*/
	static std::unordered_map<std::string, Phoneme::Type> DefineMap() {
		std::unordered_map<std::string, Phoneme::Type> map;
			map["Labial"] = Phoneme::Type::Labial;
			map["Bilabial"] = Phoneme::Type::Bilabial;
			map["Labiodental"] = Phoneme::Type::Labiodental;
			map["Coronal"] = Phoneme::Type::Coronal;
			map["Dental"] = Phoneme::Type::Dental;
			map["Alveolar"] = Phoneme::Type::Alveolar;
			map["Post-Alveolar"] = Phoneme::Type::PostAlveolar;
			map["Retroflex"] = Phoneme::Type::Retroflex;
			map["Dorsal"] = Phoneme::Type::Dorsal;
			map["Palatal"] = Phoneme::Type::Palatal;
			map["Velar"] = Phoneme::Type::Velar;
			map["Uvular"] = Phoneme::Type::Uvular;
			map["Laryngeal"] = Phoneme::Type::Laryngeal;
			map["Pharyngeal"] = Phoneme::Type::Pharyngeal;
			map["Glottal"] = Phoneme::Type::Glottal;
			map["Continuant"] = Phoneme::Type::Continuant;
			map["Lateral"] = Phoneme::Type::Lateral;
			map["Sonorant"] = Phoneme::Type::Sonorant;
			map["Nasal"] = Phoneme::Type::Nasal;
			map["Approximant"] = Phoneme::Type::Approximant;
			map["Liquid"] = Phoneme::Type::Liquid;
			map["Tap/Flap"] = Phoneme::Type::Tap;
			map["Trill"] = Phoneme::Type::Trill;
			map["Glide"] = Phoneme::Type::Glide;
			map["Vowel"] = Phoneme::Type::Vowel;
			map["Rounded"] = Phoneme::Type::Rounded;
			map["Close"] = Phoneme::Type::Close;
			map["Near Close"] = Phoneme::Type::NearClose;
			map["Close Mid"] = Phoneme::Type::CloseMid;
			map["Mid"] = Phoneme::Type::Mid;
			map["Open Mid"] = Phoneme::Type::OpenMid;
			map["Near Open"] = Phoneme::Type::NearOpen;
			map["Open"] = Phoneme::Type::Open;
			map["Front"] = Phoneme::Type::Front;
			map["Central"] = Phoneme::Type::Central;
			map["Back"] = Phoneme::Type::Back;
			map["Consonant"] = Phoneme::Type::Consonant;
			map["Voiced"] = Phoneme::Type::Voiced;
			map["Obstruent"] = Phoneme::Type::Obstruent;
			map["Stop"] = Phoneme::Type::Stop;
			map["Affricate"] = Phoneme::Type::Affricate;
			map["Fricative"] = Phoneme::Type::Fricative;
			map["Sibilant"] = Phoneme::Type::Sibilant;
			map["Labialized"] = Phoneme::Type::Labialized;
			map["Palatalized"] = Phoneme::Type::Palatalized;
			map["Velarized"] = Phoneme::Type::Velarized;
			map["Pharyngealized"] = Phoneme::Type::Pharyngealized;
			map["Glottalized"] = Phoneme::Type::Glottalized;
			map["Aspirated"] = Phoneme::Type::Aspirated;
			map["Ejective"] = Phoneme::Type::Ejective;
			map["Click"] = Phoneme::Type::Click;
			map["Implosive"] = Phoneme::Type::Implosive;
		return map;
	}

	// N[+Alveolar] > [+Velar] / _C[+Velar]
	
private:
	std::vector<Phoneme> m_PhoneticInventory;
	
private:
	std::unordered_map<std::string, Phoneme::Type> m_Map;
};