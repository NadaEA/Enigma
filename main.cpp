#include <iostream>
#include <string>
#include "InputProcessor.h"
#include "Rotors.h"

int main() {
    Keyboard *pKeyboard = new Keyboard();
    //bool validValue;
    std::string cypher = pKeyboard->scriptCaptor();
    std::string edited_string = pKeyboard->scriptValidator(cypher);
    std::cout<<"\n" + edited_string;
    pKeyboard->rotorSelection();

    //Initializing the rotors
    Rotors *RotorI = new Rotors(pKeyboard->getRotorI());
    Rotors *RotorII = new Rotors(pKeyboard->getRotorII());
    Rotors *RotorIII = new Rotors(pKeyboard->getRotorIII());

    pKeyboard->intialPositionSelection();

    int initialPositionIndex = pKeyboard->letterCharacterToIndex('A');

    RotorI->initialPositionSetter(initialPositionIndex);
    RotorI->printCurrentStateArray();


}
