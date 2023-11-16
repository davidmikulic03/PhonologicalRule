#pragma once
#include "Phoneme.h"
#include "PhoneticInventory.h"

class InternationalPhoneticAlphabet : public PhoneticInventory {
public:
	InternationalPhoneticAlphabet() {
		AddAllRecognizedPhonemes();
	}

private:
	void AddAllRecognizedPhonemes() {
		// Nasals
		AddPhoneme(	Phoneme(L"m̥",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"m",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"ɱ",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"n̥",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"n",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"ɳ̊",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"ɳ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"ɲ̊",	{ Phoneme::Type::Palatal,		Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"ɲ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"ŋ̊",	{ Phoneme::Type::Velar,			Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"ŋ",	{ Phoneme::Type::Velar,			Phoneme::Type::Nasal },			true));
		AddPhoneme(	Phoneme(L"ɴ̥",	{ Phoneme::Type::Uvular,		Phoneme::Type::Nasal },			false));
		AddPhoneme(	Phoneme(L"ɴ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Nasal },			true));
		// Stops																											
		AddPhoneme(	Phoneme(L"p",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"b",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"t",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"d",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"ʈ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"ɖ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"c",	{ Phoneme::Type::Palatal,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"ɟ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"k",	{ Phoneme::Type::Velar,			Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"g",	{ Phoneme::Type::Velar,			Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"q",	{ Phoneme::Type::Uvular,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"ɢ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Stop },			true));
		AddPhoneme(	Phoneme(L"ʡ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"ʔ",	{ Phoneme::Type::Glottal,		Phoneme::Type::Stop },			false));
		AddPhoneme(	Phoneme(L"pʼ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"tʼ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"ʈʼ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"cʼ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"kʼ",	{ Phoneme::Type::Velar,			Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"qʼ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"ʡʼ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Stop,			Phoneme::Type::Ejective }));
		// Sibilant Affricate								
		AddPhoneme(	Phoneme(L"ts",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		false));
		AddPhoneme(	Phoneme(L"dz",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		true));
		AddPhoneme(	Phoneme(L"tʃ",	{ Phoneme::Type::PostAlveolar,	Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		false));
		AddPhoneme(	Phoneme(L"dʒ",	{ Phoneme::Type::PostAlveolar,	Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		true));
		AddPhoneme(	Phoneme(L"tʂ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		false));
		AddPhoneme(	Phoneme(L"dʐ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		true));
		AddPhoneme(	Phoneme(L"tɕ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		false));
		AddPhoneme(	Phoneme(L"dʑ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant },		true));
		AddPhoneme(	Phoneme(L"tsʼ", { Phoneme::Type::Alveolar,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"tʃʼ", { Phoneme::Type::PostAlveolar,	Phoneme::Type::Affricate,		Phoneme::Type::Sibilant,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"tʂʼ", { Phoneme::Type::Retroflex,		Phoneme::Type::Affricate,		Phoneme::Type::Sibilant,		Phoneme::Type::Ejective }));
		// Non-Sibilant Affricate							
		AddPhoneme(	Phoneme(L"pɸ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"bβ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"pf",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"bv",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"tθ",	{ Phoneme::Type::Dental,		Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"dð",	{ Phoneme::Type::Dental,		Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"tɹ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"dɹ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"cç",	{ Phoneme::Type::Palatal,		Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"ɟʝ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"kx",	{ Phoneme::Type::Velar,			Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"gɣ",	{ Phoneme::Type::Velar,			Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"qχ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Affricate },		false));
		AddPhoneme(	Phoneme(L"ɢʁ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Affricate },		true));
		AddPhoneme(	Phoneme(L"tɬ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate,		Phoneme::Type::Lateral },	false));
		AddPhoneme(	Phoneme(L"dɮ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Affricate,		Phoneme::Type::Lateral },	true));
		AddPhoneme(	Phoneme(L"pfʼ", { Phoneme::Type::Labiodental,	Phoneme::Type::Affricate,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"tθʼ", { Phoneme::Type::Dental,		Phoneme::Type::Affricate,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"cçʼ", { Phoneme::Type::Palatal,		Phoneme::Type::Affricate,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"kxʼ", { Phoneme::Type::Velar,			Phoneme::Type::Affricate,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"qχʼ", { Phoneme::Type::Uvular,		Phoneme::Type::Affricate,		Phoneme::Type::Ejective }));
		// Sibilant Fricative								
		AddPhoneme(	Phoneme(L"s",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	false));
		AddPhoneme(	Phoneme(L"z",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	true));
		AddPhoneme(	Phoneme(L"ʃ",	{ Phoneme::Type::PostAlveolar,	Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	false));
		AddPhoneme(	Phoneme(L"ʒ",	{ Phoneme::Type::PostAlveolar,	Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	true));
		AddPhoneme(	Phoneme(L"ʂ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	false));
		AddPhoneme(	Phoneme(L"ʐ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	true));
		AddPhoneme(	Phoneme(L"ɕ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	false));
		AddPhoneme(	Phoneme(L"ʑ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant },	true));
		AddPhoneme(	Phoneme(L"sʼ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant,	Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"ʃʼ",	{ Phoneme::Type::PostAlveolar,	Phoneme::Type::Fricative,		Phoneme::Type::Sibilant,	Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"ʂʼ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant,	Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"ɕʼ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative,		Phoneme::Type::Sibilant,	Phoneme::Type::Ejective }));
		// Non-Sibilant Fricative							
		AddPhoneme(	Phoneme(L"ɸ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"β",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"f",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"v",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"θ",	{ Phoneme::Type::Dental,		Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ð",	{ Phoneme::Type::Dental,		Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"ç",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ʝ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"x",	{ Phoneme::Type::Velar,			Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ɣ",	{ Phoneme::Type::Velar,			Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"χ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ʁ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"ħ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ʕ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"ħ",	{ Phoneme::Type::Glottal,		Phoneme::Type::Fricative },		false));
		AddPhoneme(	Phoneme(L"ɦ",	{ Phoneme::Type::Glottal,		Phoneme::Type::Fricative },		true));
		AddPhoneme(	Phoneme(L"ɬ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Lateral },	false));
		AddPhoneme(	Phoneme(L"ɮ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Lateral },	true));
		AddPhoneme(	Phoneme(L"ɸʼ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"fʼ",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"θʼ",	{ Phoneme::Type::Dental,		Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"sʼ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"çʼ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"xʼ",	{ Phoneme::Type::Velar,			Phoneme::Type::Fricative,		Phoneme::Type::Ejective }));
		AddPhoneme(	Phoneme(L"χʼ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Fricative,		Phoneme::Type::Ejective}));
		// Approximants										
		AddPhoneme(	Phoneme(L"w",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Velar,			Phoneme::Type::Glide,		Phoneme::Type::Labialized },	true));
		AddPhoneme(	Phoneme(L"ɥ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Glide,			Phoneme::Type::Labialized },true));
		AddPhoneme(	Phoneme(L"j",	{ Phoneme::Type::Palatal,		Phoneme::Type::Glide },			true));
		AddPhoneme(	Phoneme(L"ɰ",	{ Phoneme::Type::Velar,			Phoneme::Type::Glide },			true));
		AddPhoneme(	Phoneme(L"ʋ",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Approximant },			true));
		AddPhoneme(	Phoneme(L"ɹ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Approximant },	true));
		AddPhoneme(	Phoneme(L"ɻ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Approximant },	true));
		AddPhoneme(	Phoneme(L"l",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Approximant,		Phoneme::Type::Lateral },	true));
		AddPhoneme(	Phoneme(L"ɭ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Approximant,		Phoneme::Type::Lateral },	true));
		AddPhoneme(	Phoneme(L"ʎ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Approximant,		Phoneme::Type::Lateral },	true));
		AddPhoneme(	Phoneme(L"ʟ",	{ Phoneme::Type::Velar,			Phoneme::Type::Approximant,		Phoneme::Type::Lateral },	true));
		// Tap/Flap											
		AddPhoneme(	Phoneme(L"ⱱ",	{ Phoneme::Type::Labiodental,	Phoneme::Type::Tap },			true));
		AddPhoneme(	Phoneme(L"ɾ̥",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Tap },			false));
		AddPhoneme(	Phoneme(L"ɾ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Tap },			true));
		AddPhoneme(	Phoneme(L"ɽ̊",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Tap },			false));
		AddPhoneme(	Phoneme(L"ɽ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Tap },			true));
		AddPhoneme(	Phoneme(L"ɢ̆",	{ Phoneme::Type::Uvular,		Phoneme::Type::Tap },			true));
		// Trill											
		AddPhoneme(	Phoneme(L"ʙ̥",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Trill },			false));
		AddPhoneme(	Phoneme(L"ʙ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Trill },			true));
		AddPhoneme(	Phoneme(L"r̥",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Trill },			false));
		AddPhoneme(	Phoneme(L"r",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Trill },			true));
		AddPhoneme(	Phoneme(L"ʀ̥",	{ Phoneme::Type::Uvular,		Phoneme::Type::Trill },			false));
		AddPhoneme(	Phoneme(L"ʀ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Trill },			true));
		AddPhoneme(	Phoneme(L"ʜ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Trill },			false));
		AddPhoneme(	Phoneme(L"ʢ",	{ Phoneme::Type::Pharyngeal,	Phoneme::Type::Trill },			true));
		// Click Consonant									
		AddPhoneme(	Phoneme(L"kʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"gʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"qʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ɴʘ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"kǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"gǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"qǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ɴǀ",	{ Phoneme::Type::Dental,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"kǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"gǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"qǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ɴǃ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"kǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"gǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal, Phoneme::Type::Lateral }, true));
		AddPhoneme(	Phoneme(L"qǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋǁ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal, Phoneme::Type::Lateral }, true));
		AddPhoneme(	Phoneme(L"k‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"g‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋ‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"q‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢ‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ɴ‼",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"kǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Velar,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"gǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Velar,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ŋǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Velar,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		AddPhoneme(	Phoneme(L"qǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		false));
		AddPhoneme(	Phoneme(L"ɢǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Uvular,			Phoneme::Type::Click },		true));
		AddPhoneme(	Phoneme(L"ɴǂ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Uvular,			Phoneme::Type::Click,		Phoneme::Type::Nasal }, true));
		// Implosive
		AddPhoneme(	Phoneme(L"ɓ̥",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ɓ",	{ Phoneme::Type::Bilabial,		Phoneme::Type::Implosive },		true));
		AddPhoneme(	Phoneme(L"ɗ̥",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ɗ",	{ Phoneme::Type::Alveolar,		Phoneme::Type::Implosive },		true));
		AddPhoneme(	Phoneme(L"ᶑ̊",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ᶑ",	{ Phoneme::Type::Retroflex,		Phoneme::Type::Implosive },		true));
		AddPhoneme(	Phoneme(L"ʄ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ʄ",	{ Phoneme::Type::Palatal,		Phoneme::Type::Implosive },		true));
		AddPhoneme(	Phoneme(L"ɠ̊",	{ Phoneme::Type::Velar,			Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ɠ",	{ Phoneme::Type::Velar,			Phoneme::Type::Implosive },		true));
		AddPhoneme(	Phoneme(L"ʛ̥",	{ Phoneme::Type::Uvular,		Phoneme::Type::Implosive },		false));
		AddPhoneme(	Phoneme(L"ʛ",	{ Phoneme::Type::Uvular,		Phoneme::Type::Implosive },		true));
		// Vowels
		AddPhoneme(	Phoneme(L"i",	{ Phoneme::Type::Close,			Phoneme::Type::Front },			false));
		AddPhoneme(	Phoneme(L"y",	{ Phoneme::Type::Close,			Phoneme::Type::Front },			true));
		AddPhoneme(	Phoneme(L"ɨ",	{ Phoneme::Type::Close,			Phoneme::Type::Central },		false));
		AddPhoneme(	Phoneme(L"ʉ",	{ Phoneme::Type::Close,			Phoneme::Type::Central },		true));
		AddPhoneme(	Phoneme(L"ɯ",	{ Phoneme::Type::Close,			Phoneme::Type::Back },			false));
		AddPhoneme(	Phoneme(L"u",	{ Phoneme::Type::Close,			Phoneme::Type::Back },			true));
		AddPhoneme(	Phoneme(L"ɪ",	{ Phoneme::Type::NearClose,		Phoneme::Type::Front },			false));
		AddPhoneme(	Phoneme(L"ʏ",	{ Phoneme::Type::NearClose,		Phoneme::Type::Front },			true));
		AddPhoneme(	Phoneme(L"ʊ",	{ Phoneme::Type::NearClose,		Phoneme::Type::Back },			true));
		AddPhoneme(	Phoneme(L"ɘ",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Central },		false));
		AddPhoneme(	Phoneme(L"ɵ",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Central },		true));
		AddPhoneme(	Phoneme(L"e",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Front },			false));
		AddPhoneme(	Phoneme(L"ø",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Front },			true));
		AddPhoneme(	Phoneme(L"ə",	{ Phoneme::Type::Mid,			Phoneme::Type::Central },		false));
		AddPhoneme(	Phoneme(L"ɤ",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Back },			false));
		AddPhoneme(	Phoneme(L"o",	{ Phoneme::Type::CloseMid,		Phoneme::Type::Back },			true));
		AddPhoneme(	Phoneme(L"ɛ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Front },			false));
		AddPhoneme(	Phoneme(L"œ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Front },			true));
		AddPhoneme(	Phoneme(L"ɜ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Central },		false));
		AddPhoneme(	Phoneme(L"ɞ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Central },		true));
		AddPhoneme(	Phoneme(L"ʌ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Back },			false));
		AddPhoneme(	Phoneme(L"ɔ",	{ Phoneme::Type::OpenMid,		Phoneme::Type::Back },			true));
		AddPhoneme(	Phoneme(L"a",	{ Phoneme::Type::Open,			Phoneme::Type::Front },			false));
		AddPhoneme(	Phoneme(L"ɶ",	{ Phoneme::Type::Open,			Phoneme::Type::Front },			true));
		AddPhoneme(	Phoneme(L"ä",	{ Phoneme::Type::Open,			Phoneme::Type::Central },		false));
		AddPhoneme(	Phoneme(L"ɑ",	{ Phoneme::Type::Open,			Phoneme::Type::Back },			false));
		AddPhoneme(	Phoneme(L"ɒ",	{ Phoneme::Type::Open,			Phoneme::Type::Back },			true));
	}
};