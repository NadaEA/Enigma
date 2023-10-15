#include <iostream>
#include <string>
#include "InputProcessor.h"
#include "Rotors.h"
#include "Reflectors.h"

int main() {
    Keyboard *pKeyboard = new Keyboard();
    std::string cypher = pKeyboard->scriptCaptor();
    std::string edited_string = pKeyboard->scriptValidator(cypher);
    std::cout<<"\n" + edited_string;

    //Rotor and reflector selection
    pKeyboard->rotorSelection();
    pKeyboard->reflectorSelection();

    //Initializing the reflector
    Reflectors *Reflector = new Reflectors(pKeyboard->getReflector());

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

                //The current travels through the first rotor
                int indexOfIncomingLetter = pKeyboard->letterCharacterToIndex(letter);//Send the incoming electrical current into the correct position/letter in the 1st rotor
                int letterAtIndexInRotorI = RotorI->getLetterAtIndex(indexOfIncomingLetter);//Finding out what the letter is where the current was sent (at the index!)
                int letterWiredToI = RotorI->getWiring(letterAtIndexInRotorI);//Determining to which letter the letter at index is wired to
                int findIndexLetterWiredToInArrayI = RotorI->findIndexWiredLetter(letterWiredToI);//We send the current through the wire and retrieve the end contact (index) to send the current to the next rotor

                //The current travels through the second rotor
                int letterAtIndexInRotorII = RotorII->getLetterAtIndex(findIndexLetterWiredToInArrayI);
                int letterWiredToII = RotorII->getWiring(letterAtIndexInRotorII);
                int findIndexLetterWiredToInArrayII = RotorII->findIndexWiredLetter(letterWiredToII);

                //The current travels through the third rotor
                int letterAtIndexInRotorIII = RotorIII->getLetterAtIndex(findIndexLetterWiredToInArrayII);
                int letterWiredToIII = RotorIII->getWiring(letterAtIndexInRotorIII);
                int findIndexLetterWiredToInArrayIII = RotorII->findIndexWiredLetter(letterWiredToIII);

                //The current travels through the reflector
                int indexLetterWiredToReflector = Reflector->getIndexLetterWiredTo(findIndexLetterWiredToInArrayIII);





            }

        }

    }



}