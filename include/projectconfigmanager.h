#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <regex>

using namespace std::filesystem;

bool IS_DEBUG = true;

class ProjectConfigManager
{
public:
    ProjectConfigManager(std::string projectPath);
private:
    std::string m_ProjectPath;
    std::string m_projectName;
    std::string m_projectSourcesDir;
    std::string m_projectIncludeDir;
    std::string m_outputName;
};