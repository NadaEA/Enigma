//
// Created by Nada El Arabi on 2023-07-02.
//

#include <iostream>
#include <string>

class Keyboard{//Keyboard probably isn't the best name for this class
    private:
    std::string script;
    std::string edited_script;
    int rotors [3];
    int rotor1,rotor2,rotor3;
    char startingPositions[3];
    char position1,position2,position3;

    public:
    std::string scriptCaptor();
    std::string scriptValidator(std::string message);
    void rotorSelection();
    int getRotorI();
    int getRotorII();
    int getRotorIII();
    void intialPositionSelection();
    int letterCharacterToIndex(char upperCaseLetter);


};
