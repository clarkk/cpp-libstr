#ifndef LIBSTR_ARG
#define LIBSTR_ARG

#include <string>
#include <stdexcept>

namespace arg {
	bool flag(const std::string& name, char* arg){
		return ("-"+name == std::string(arg));
	}
	
	char* argument(const std::string& name, const int& argc, char* argv[], int& i){
		if(!flag(name, argv[i])){
			return NULL;
		}
		
		int v = i + 1;
		
		if(argc <= v || argv[v][0] == '-'){
			throw std::invalid_argument("Argument '"+std::string(argv[i])+"' excepted a value");
		}
		
		return argv[++i];
	}
}

#endif