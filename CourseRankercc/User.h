#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    std::string username; // Creating a username variable of string type

    User(const std::string& name); // Creating a constructor for the User class

    std::string getName() const; // Creating a getName() function to return the username 
};

#endif
