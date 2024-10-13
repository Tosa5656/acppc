#include "../include/argsmanager.h"

ArgsManager::ArgsManager(int argc, char *argv[])
{
    int i = 1;
    args_length = argc-1;
    while(i < argc)
    {
        args.push_back(argv[i]);
        i++;
    }
}