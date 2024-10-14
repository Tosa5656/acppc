#include <iostream>
#include "../include/argsmanager.h"
#include "../include/projectconfigmanager.h"

int main(int argc, char *argv[])
{
    ArgsManager args_manager(argc, argv);

    int projectPathArg = 0;
    int outputDirectoryArg = 0;
    std::string projectPathString;
    std::string outputDirectoryString;

    int i = 0;
    for(std::string arg : args_manager.args)
    {
        if(i == projectPathArg) projectPathString = args_manager.args[i];
        if(arg == "-o")
        {
            outputDirectoryArg = i + 1;
            outputDirectoryString = args_manager.args[outputDirectoryArg];
        }
        i++;
    }

    ProjectConfigManager projectConfigManager(projectPathString);
}