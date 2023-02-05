#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf(RED "ERROR" NC ": provide argument as follows -> ./program argument\n");
        exit(EXIT_FAILURE);
    }
    printf(GRN "SUCCESS!\n");

    return EXIT_SUCCESS;
}