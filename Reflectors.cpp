//
// Created by Nada El Arabi on 2023-09-25.
//

#include "Reflectors.h"

Reflectors::Reflectors(char reflectorLetter) {
    if(reflectorLetter == 65){
        wiring = "EJMZALYXVBWFCRQUONTSPIKHGD";
        //std::cout<<"Reflector : A was chosen!";
    }else if(reflectorLetter == 66 ){
        wiring = "YRUHQSLDPXNGOKMIEBFZCWVJAT";
    }else{
        wiring = "FVPJIAOYEDRZXWGCTKUQSBNMHL";
    }
}

int Reflectors::getIndexLetterWiredTo(int letterIndex) {
    char letterAtIndexReflector = this->wiring.at(letterIndex);
    int wiredLetterIndex = this->letterCharacterToIndex(letterAtIndexReflector);
    return wiredLetterIndex;
}

int Reflectors::letterCharacterToIndex(char upperCaseLetter) {
    char letter = upperCaseLetter;
    int index = upperCaseLetter - 65;
    //std::cout<<"\nThe letter was: "<<letter<<" and its corresponding index is: "<<index<<"\n";
    return index;
}