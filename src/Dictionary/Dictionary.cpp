#include "Dictionary.h"

namespace Dictionary {

	Dictionary::Dictionary(DataSource& data_source) 
		: data_source{ data_source } {}

	void Dictionary::add_translations(const std::wstring& word, 
									const word_list& translations) 
	{
		data_source.insert_translations(word, translations);
	}


	word_list Dictionary::translate(const std::wstring& word) 
	{
		return data_source.get_translations(word);
	}
}