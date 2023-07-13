#include <iostream>
#include <string>
#include "InputProcessor.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
//    std::string letter;
//    std::cin >> letter;
//    std::cout << letter;
//    while(std::getline(std::cin,letter) && letter !="0"){
//        std::cout << letter;
//    }
//    return 0;

    Keyboard *keyboard = new Keyboard();
    //bool validValue;
    do{
        bool validValue = keyboard->letterValidator();
    }
    while(keyboard->letterValidator());

}
