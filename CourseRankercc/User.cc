#include "User.h"

User::User(const std::string& name) : username(name) {} // Initializing the user constructor 

std::string User::getName() const { // Getter function for the username to be able to retrieve the username once it is declared in the main function
    return username;
}
