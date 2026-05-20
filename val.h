#pragma once

#include <cstring>

namespace val {
	inline bool is_digits(const char* c){
		if(!c || !*c) return false;
		
		for(; *c; ++c){
			if(*c < '0' || *c > '9') return false;
		}
		return true;
	}
	
	/*bool is_digits(const std::string s){
		return s.find_first_not_of("0123456789") == std::string::npos;
	}*/
	
	inline bool starts_with(const char* a, const char* b){
		if(!a || !b) return false;
		
		return std::strncmp(a, b, std::strlen(b)) == 0;
	}
}