#ifndef MPAGSCIPHER__PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>
#include <cctype>
#include <iostream>

bool processCommandLine(const std::vector<std::string>& args,
                        bool& helpRequested, bool& versionRequested,
                        std::string& inputFile, std::string& outputFile);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP