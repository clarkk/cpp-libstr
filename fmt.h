namespace fmt {
	std::string basename(const std::string& s){
		return s.substr(s.find_last_of("/\\") + 1);
	}
	
	void replace(const char f, const char r, std::string& s){
		std::replace(s.begin(), s.end(), f, r);
	}
	
	void tolower(std::string& s){
		std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
			return std::tolower(c);
		});
	}
}