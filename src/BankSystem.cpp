#include <iostream>
#include "clsLoginScreen.h"
#include "clsUtility.h"

int main() {
    while (true) {
        if(!clsLoginScreen::ShowLoginScreen()){
            break;
        }
        
    }

    return 0;
}