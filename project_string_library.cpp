#include "project_string_library.hpp"

int main(void)
{
    clsString S;

    S.setValue("  Hello World i am a magician!  ");

    std::cout << S.getValue()  << std::endl;
    std::cout << S.countWord() << std::endl;

    std::cout << S.countWord("Hala Magician") << std::endl;
    std::cout << clsString::countWord("YOU ARE A MAGICIAN") << std::endl;

    return (0);
}
