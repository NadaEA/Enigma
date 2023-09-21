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

        int indexOfCurrentLetter = pKeyboard->letterCharacterToIndex(letter);
        if(RotorI->checkTurnoverPosition()){//R1 in turnover
            //Do nothing for now


        }else{//R1 not in turnover
            if(RotorII->checkTurnoverPosition()){//R1 not in turnover, R2 in turnover
                //Do nothing for nom

            }else{//R1 not in turnover, R2 not in turnover
                RotorI->shiftRotor();//First we shift the first rotor, always

                int indexOfIncomingLetter = pKeyboard->letterCharacterToIndex(letter);//Send the incoming electrical current into the correct position in the rotor
                int letterAtIndexInRotor = RotorI->getLetterAtIndex(indexOfIncomingLetter);//Finding out what the letter is where the current was sent
                int letterWiredTo = RotorI->getWiring(letterAtIndexInRotor);//Sending the current through the correct contact


            }

        }

    }



}
