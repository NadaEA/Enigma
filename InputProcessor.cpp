//
// Created by Nada El Arabi on 2023-07-02.
//


#include "InputProcessor.h"

std::string Keyboard::scriptCaptor() {
    std::cout<<"Welcome to this Enigma simulator, please begin entering your message in capital letters!\n";
    std::getline(std::cin,script);
    return script;
};

std::string Keyboard::scriptValidator(std::string message) {
    int script_size = message.length();
    for(int i = 0; i<script_size;i++){
        if(message.at(i) >= 65 && message.at(i) <= 90 ){
            edited_script.push_back(message.at(i));
        }
    }
    std::cout<<edited_script;
    return edited_script;
};

void Keyboard::rotorSelection() {
    for(int i=0;i<3;i++){//Checkout what CLion is saying here, prettier way of doing things
        std::cout<<"Please enter a number from 1 to 5, corresponding to a rotor";
        int rotorNumber;
        std::cin>>rotorNumber;
        rotors[i] = rotorNumber;
    }
    std::cout<<"The first rotor is: ";
    std::cout<<rotors[0];
    std::cout<<"\nThe second is: ";
    std::cout<<rotors[1];
    std::cout<<"\nThe third is: ";
    std::cout<<rotors[2];

}

void Keyboard::initialPositionSelection() {
    for(int i=0;i<3;i++){//Checkout what CLion is saying here, prettier way of doing things
        std::cout<<"Please enter a capital letter, corresponding to a rotor Position";
        char position;
        std::cin>>position;
        startingPositions[i] = position;
    }
    std::cout<<"The first position is: ";
    std::cout<<startingPositions[0];
    std::cout<<"\nThe second position is: ";
    std::cout<<startingPositions[1];
    std::cout<<"\nThe third position is: ";
    std::cout<<startingPositions[2];
}

int Keyboard::getRotorI() {
    int rotorI =  this->rotors[0];
    return rotorI;
}

int Keyboard::getRotorII() {
    int rotorII =  this->rotors[1];
    return rotorII;

}
int Keyboard::getRotorIII() {
    int rotorIII =  this->rotors[2];
    return rotorIII;

}

int Keyboard::letterCharacterToIndex(char upperCaseLetter){
    char letter = upperCaseLetter;
    int index = upperCaseLetter - 65;
    std::cout<<"\nThe letter was: "<<letter<<" and its corresponding index is: "<<index<<"\n";
    return index;
}

char Keyboard::getStartingPositionI()  {
    char position =  this->startingPositions[0];
    return position;
}

char Keyboard::getStartingPositionII()  {
    char position =  this->startingPositions[1];
    return position;
}

char Keyboard::getStartingPositionIII()  {
    char position =  this->startingPositions[2];
    return position;
}

void Keyboard::reflectorSelection() {
    std::cout<<"Please enter a capital letter character for the reflector selection : ";
    std::cin>>reflector;
}

char Keyboard::getReflector() {
    return this->reflector;
}

