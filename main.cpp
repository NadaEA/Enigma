#include <iostream>
#include <string>
#include "InputProcessor.h"

int main() {
    Keyboard *pKeyboard = new Keyboard();
    //bool validValue;
    std::string cypher = pKeyboard->scriptCaptor();
    std::string edited_string = pKeyboard->scriptValidator(cypher);
    std::cout<<"\n" + edited_string;
    pKeyboard->rotorSelection();
}
