#include <iostream>
#include "../include/argsmanager.h"

int main(int argc, char *argv[])
{
    ArgsManager args_manager(argc, argv);
    std::cout << "Args length: " << args_manager.args_length << std::endl;
    std::cout << "Args: " << std::endl;
    for(std::string arg : args_manager.args)
    {
        std::cout << arg << std::endl;
    }

    system("pause");
}