#include <string>
//#include <cstring>

namespace val {
	bool is_digits(const char* c){
		for( ; *c; c++){
			if(*c < '0' || *c > '9'){
				return false;
			}
		}
		
		return true;
	}
	
	/*bool is_digits(const std::string s){
		return s.find_first_not_of("0123456789") == std::string::npos;
	}*/
	
	bool starts_with(const char* a, const char* b){
		return strncmp(a, b, strlen(b)) == 0;
	}
}