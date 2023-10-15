//
// Created by Nada El Arabi on 2023-09-25.
//
#include <iostream>

class Reflectors{

    private:
    char Reflector;
    std::string wiring;

    public:
    Reflectors();
    Reflectors(char reflectorLetter);
    int getIndexLetterWiredTo(int letter);
    int letterCharacterToIndex(char upperCaseLetter);

};
