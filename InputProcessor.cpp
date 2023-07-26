//
// Created by Nada El Arabi on 2023-07-02.
//


#include "InputProcessor.h"

std::string Keyboard::scriptCaptor() {
    std::cout<<"Welcome to this Enigma simulator, please begin entering capital letters!\n";
    std::getline(std::cin,script);
    return script;
};

void Keyboard::scriptValidator(std::string message) {
    int script_size = message.length();
    for(int i = 0; i<script_size;i++){
        if(message.at(i) >= 65 && message.at(i) <= 90 ){
            edited_script.push_back(message.at(i));
        }
    }
    std::cout<<edited_script;
};


