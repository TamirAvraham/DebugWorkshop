#include <iostream>
#define not !
struct Password
{
    char value[16];
    bool incorrect;
    Password() : value(""), incorrect(true)
    {
    }
};

int main()
{
    std::cout << "Enter your password to continue:" << std::endl;
    Password pwd;
    std::cin >> pwd.value;//0 ='52'
    //if we enter a 16 char value we will cuse a buffer overflow that will get as 
    if (not strcmp(pwd.value, "**"))//strcmp==0
        pwd.incorrect = false;

    if (not pwd.incorrect)
        std::cout << "Congratulations\n";

    return 0;
}