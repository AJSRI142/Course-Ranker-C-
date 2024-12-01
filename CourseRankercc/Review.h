#ifndef REVIEW_H
#define REVIEW_H

#include <string>

class Review {
public:
    std::string user; // This a user variable that will be needed to store the username of the user who wrote the review 
    std::string content; // This is used for the physical contant of the review 
    int rating; // This is used for the rating of the course 

    Review(const std::string& user, const std::string& content, int rating); // Review constructor to help create the review object 
};

#endif
    