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
        turnoverPosition = 17;
    } else if(newNumber == 2){
        wiring = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
        turnoverPosition = 5;
    }else if(newNumber == 3){
        wiring = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
        turnoverPosition = 22;
    }else if(newNumber == 4){
        wiring = "ESOVPZJAYQUIRHXLNFTGKDCMWB";
        turnoverPosition = 10;
    }else if(newNumber == 5){
        wiring = "VZBRGITYUPSDNHLXAWMJQOFECK";
        turnoverPosition = 26;
    }else{
        std::cout<<"Please enter a valid number for the rotor selection";
    }

    std::cout<<"\nRotor number: "<< newNumber<< " initialized!";

}

void Rotors::initialPositionSetter(int index) {
    int letterNumber = index + 1;
    int lettersUntilA = 26 - index;
    int number = 1;
    for(int i=0; i<lettersUntilA;i++){//Here we set up all the letters starting from the given initial position
        arrayLetters[i] = letterNumber;
        letterNumber++;
    }
    for(int i = lettersUntilA;i<26;i++){//Here we initialize the rest of the array with the letters alphabetically before the initial position
        arrayLetters[i] = number;
        number++;
    }

}

void Rotors::printCurrentStateArray() {
    for(int arrayLetter : arrayLetters){
        std::cout<<" " << arrayLetter <<" ";
    }
    std::cout<<"\n================================\n";
}

void Rotors::shiftRotor() {
    int firstElementOldArray = this->arrayLetters[0];//Shifting all the elements by one position to the left
    int lastElementNewArray = firstElementOldArray;
    for(int i = 0; i<25;i++){
        this->arrayLetters[i] = this->arrayLetters[i+1];
    }
    this->arrayLetters[25] = firstElementOldArray;

    std::cout<<"\nThis is the shifted array: ";//Printing out the result to make sure it's valid
    for(int arrayLetter : arrayLetters){
        std::cout<<" " << arrayLetter <<" ";
    }
    std::cout<<"\n================================\n";



}