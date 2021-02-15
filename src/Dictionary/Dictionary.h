#ifndef DICTIONARY_H BODYGUARD
#define DICTIONARY_H BODYGUARD

#include <string>
#include <vector>

namespace Dictionary {

	typedef std::vector<std::wstring> word_list;

	class DataSource;

	class Dictionary {
	public:
		Dictionary(DataSource& data_source);

		word_list translate(const std::wstring& word);
		void add_translations(const std::wstring& word, const word_list& translations);

	private:
		DataSource& data_source;
	};
	

	class DataSource {
	public:
		virtual void insert_translations(const std::wstring& word, 
			const word_list& translations) = 0;

		virtual word_list get_translations(const std::wstring& word) 
			const = 0;
	};
};

#endif // !DICTIONARY_H BODYGUARD