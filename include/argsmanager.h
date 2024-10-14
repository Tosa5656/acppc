#pragma once

#include <iostream>
#include <vector>

class ArgsManager
{
public:
    ArgsManager(int argc, char *argv[]);
    std::vector<std::string> args = {};
    int args_length = 0;
};