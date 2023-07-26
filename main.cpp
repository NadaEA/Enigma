#include <iostream>
#include <string>
#include "InputProcessor.h"

int main() {
    Keyboard *pKeyboard = new Keyboard();
    //bool validValue;
    std::string cypher = pKeyboard->scriptCaptor();
    pKeyboard->scriptValidator(cypher);

}
