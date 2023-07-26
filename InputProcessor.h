//
// Created by Nada El Arabi on 2023-07-02.
//

#include <iostream>
#include <string>

class Keyboard{
    private:
    std::string script;
    std::string edited_script;

    public:
    std::string scriptCaptor();
    void scriptValidator(std::string message);

};
