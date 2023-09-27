//
// Created by Nada El Arabi on 2023-09-25.
//

#include "Reflectors.h"

Reflectors::Reflectors(char reflectorLetter) {
    if(reflectorLetter == 65){
        wiring = "EJMZALYXVBWFCRQUONTSPIKHGD";
        std::cout<<"Reflector : A was chosen!";
    }else if(reflectorLetter == 64 ){
        wiring = "YRUHQSLDPXNGOKMIEBFZCWVJAT";
    }else{
        wiring = "FVPJIAOYEDRZXWGCTKUQSBNMHL";
    }
}