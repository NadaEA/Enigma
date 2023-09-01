//
// Created by Nada El Arabi on 2023-08-11.
//
#include <iostream>

class Rotors{

    private:
    int rotorNumber;
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int arrayLetters[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};


public:
    std::string wiring;

    //Constructors
    Rotors();
    Rotors(int newNumber);

    //Methods
//    void shiftRotor(Rotors& rotor);
    void initialPositionSetter(int index);
    void printCurrentStateArray();



};