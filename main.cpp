#include <iostream>
#include <string>
#include "InputProcessor.h"
#include "Rotors.h"

int main() {
    Keyboard *pKeyboard = new Keyboard();
    std::string cypher = pKeyboard->scriptCaptor();
    std::string edited_string = pKeyboard->scriptValidator(cypher);
    std::cout<<"\n" + edited_string;
    pKeyboard->rotorSelection();

    //Initializing the rotors
    Rotors *RotorI = new Rotors(pKeyboard->getRotorI());
    Rotors *RotorII = new Rotors(pKeyboard->getRotorII());
    Rotors *RotorIII = new Rotors(pKeyboard->getRotorIII());

    pKeyboard->initialPositionSelection();

    //Rotating the rotors to their selected initial position
    int rotorIPositionIndex = pKeyboard->letterCharacterToIndex(pKeyboard->getStartingPositionI());
    int rotorIIPositionIndex = pKeyboard->letterCharacterToIndex(pKeyboard->getStartingPositionII());
    int rotorIIIPositionIndex = pKeyboard->letterCharacterToIndex(pKeyboard->getStartingPositionIII());

    RotorI->initialPositionSetter(rotorIPositionIndex);
    RotorI->printCurrentStateArray();

    RotorII->initialPositionSetter(rotorIIPositionIndex);
    RotorII->printCurrentStateArray();

    RotorIII->initialPositionSetter(rotorIIIPositionIndex);
    RotorIII->printCurrentStateArray();

    //RotorI->shiftRotor();

//    std::cout<<"\nIs RotorI in turnoverPos?" << RotorI->checkTurnoverPosition();

    for(char letter: edited_string){
        //First need to check if the first rotor is in turnover position
        //Need to get the current first position of the rotor
        //Need to get the turnover position of the rotor
        //Need to check current first position against turnover position of rotor

        //After that probably going to branch out into 1)yes currently in turnover and no, not currently in turnover

        RotorI->shiftRotor();//Always advance the first rotor after each key is pressed
        int indexLetter = pKeyboard->letterCharacterToIndex(letter);//We retrieve the index of the current letter
        //to send it to its proper entry point to the rotors


    }



}
