#pragma once

#include <string>
#include <stdexcept>
#include <string_view>

namespace arg {
	inline bool flag(const std::string& name, const char* arg){
		return std::string_view(arg) == ("-"+name);
	}
	
	inline char* argument(const std::string& name, int argc, char* argv[], int& i){
		if(!flag(name, argv[i])){
			return nullptr;
		}
		
		int v = i + 1;
		
		if(v >= argc){
			throw std::invalid_argument("Argument '"+std::string(argv[i])+"' expected a value");
		}
		
		return argv[++i];
	}
}