#pragma once

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <regex>

#include "../include/info.h"

using namespace std::filesystem;

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