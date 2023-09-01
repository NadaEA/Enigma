//
// Created by Nada El Arabi on 2023-08-29.
//

#include "Rotors.h"

Rotors::Rotors() {
    rotorNumber = 0; //"this" keyword is usually omitted
    wiring = "";

}

Rotors::Rotors(int newNumber) {
    rotorNumber = newNumber;
    if(newNumber == 1){
        wiring = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    } else if(newNumber == 2){
        wiring = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
    }else if(newNumber == 3){
        wiring = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
    }else if(newNumber == 4){
        wiring = "ESOVPZJAYQUIRHXLNFTGKDCMWB";
    }else if(newNumber == 5){
        wiring = "VZBRGITYUPSDNHLXAWMJQOFECK";
    }else{
        std::cout<<"Please enter a valid number for the rotor selection";
    }

    std::cout<<"\nRotor number: "<< newNumber<< " initialized!";

}

void Rotors::initialPositionSetter(int index) {
    int letterNumber = index + 1;
    int lettersUntilA = 26 - index;
    int number = 1;
    for(int i=0; i<lettersUntilA;i++){
        arrayLetters[i] = letterNumber;
        letterNumber++;
    }
    for(int i = lettersUntilA;i<26;i++){
        arrayLetters[i] = number;
        number++;
    }

}

void Rotors::printCurrentStateArray() {
    for(int arrayLetter : arrayLetters){
        std::cout<<"\n" << arrayLetter <<" ";
    }
}