//
// Created by Nada El Arabi on 2023-07-02.
//


#include "InputProcessor.h"

bool Keyboard::letterValidator()  {
    std::cout<<"Welcome to this Enigma simulator, please begin entering letters!\n";
    std::cin>> CurrentLetter;
//    bool validValue = true;
//    while(validValue){
//        if((int)CurrentLetter >= 65 && (int)CurrentLetter <= 90){
//            std::cin>> CurrentLetter;
//            return true;
//        }
//        else{
//            std::cout<<"Please enter a valid capital letter character!";
//            validValue = false;
//            return false;
//        }
//
//    }
    if((int)CurrentLetter >= 65 && (int)CurrentLetter <= 90){
        return true;
    }
    else{
        std::cout<<"Please enter a valid capital letter character!";
        return false;
    }

};
