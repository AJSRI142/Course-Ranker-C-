#include "Review.h"

Review::Review(const std::string& user, const std::string& content, int rating) // Intializing the review constructor 
    : user(user), content(content), rating(rating) {}
