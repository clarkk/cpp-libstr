#pragma once

#include <string>
#include <algorithm>
#include <cctype>

namespace fmt {
	inline std::string basename(const std::string& s){
		size_t pos = s.find_last_of("/\\");
		return (pos == std::string::npos) ? s : s.substr(pos + 1);
	}
	
	inline void replace(const char from, const char to, std::string& s){
		std::replace(s.begin(), s.end(), from, to);
	}
	
	inline void tolower(std::string& s){
		std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
			return static_cast<char>(std::tolower(c));
		});
	}
}