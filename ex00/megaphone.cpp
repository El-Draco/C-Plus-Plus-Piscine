#include <iostream>
#include <string>
#include <ctype.h>

int main(int argc, char **argv)
{
    std::string temp;
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    
    for (int i = 1; i < argc; i++)
    {
        temp = argv[i];
        for (size_t j = 0; j < temp.size(); j++)
            temp[j] = toupper(temp[j]);
        std::cout<<temp;
    }
    return 0;
}