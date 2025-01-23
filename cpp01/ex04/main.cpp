#include "Replacer.hpp"

void dotReplace(const std::string& filename, const std::string s1, const std::string s2) {
    std::ifstream inputFile(filename);
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    std::string line;

    if (!inputFile.is_open()) {
        std::cerr << "Error while opening the input file." << std::endl;
        return; }
    if (!outputFile.is_open()) {
        std::cerr << "Error while creating the output file" << std::endl;
        inputFile.close();
        return; }
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) 
		{
			std::string before = line.substr(0, pos);
        	std::string after = line.substr(pos + s1.length());
        	line = before + s2 + after;
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
}


int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Incompatible output. It should be like that:  ./Replace <filename> <s1> <s2> " << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    dotReplace(filename, s1, s2);
    return 0;
}