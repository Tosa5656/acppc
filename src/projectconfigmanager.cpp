#include "../include/projectconfigmanager.h"

ProjectConfigManager::ProjectConfigManager(std::string projectPath)
{
    if(!exists(projectPath + "/ProjectConfig.txt"))
        std::cerr << "ProjectConfig.txt not exists!" << std::endl;
        
    m_projectSourcesDir = projectPath + "/ProjectConfig.txt";

    std::ifstream projectConfig(projectPath + "/ProjectConfig.txt");
    std::string line;
    if (projectConfig.is_open())
    {
        while (std::getline(projectConfig, line))
        {
            if(line.starts_with("project"))
            {
                std::regex project_reg("project = ");
                m_projectName = std::regex_replace(line, project_reg, "");
            }

            else if(line.starts_with("sources_dir"))
            {
                std::regex sources_dir_reg("sources_dir = ");
                m_projectSourcesDir = std::regex_replace(line, sources_dir_reg, "");
            }

            else if(line.starts_with("include_dir"))
            {
                std::regex include_dir_reg("include_dir = ");
                m_projectIncludeDir = std::regex_replace(line, include_dir_reg, "");
            }

            else if(line.starts_with("output_name"))
            {
                std::regex output_name_reg("output_name = ");
                m_outputName = std::regex_replace(line, output_name_reg, "");
            }
        }
    }

    projectConfig.close();

    if(IS_DEBUG)
    {
        std::cout << m_projectName << std::endl;
        std::cout << m_projectSourcesDir << std::endl;
        std::cout << m_projectIncludeDir << std::endl;
        std::cout << m_outputName << std::endl;
    }
}