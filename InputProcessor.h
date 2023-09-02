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
    char startingPositions[3];

    public:
    std::string scriptCaptor();
    std::string scriptValidator(std::string message);
    void rotorSelection();
    int getRotorI();
    int getRotorII();
    int getRotorIII();
    void intialPositionSelection();
    char getStartingPositionI();
    char getStartingPositionII();
    char getStartingPositionIII();
    int letterCharacterToIndex(char upperCaseLetter);


};
