#include "Course.h"
#include <iostream>

Course::Course(const std::string& name) : courseName(name) {} // Initializing the course constructor

std::string Course::getName() const { // Creating the getName() function to be able to retrieve the course name once it is declared in the main function 
    return courseName;
}

void Course::addReview(const Review& review) { // AddReview function is created to add a review to the course. The push_back function is used to add the review to the course 
    reviews.push_back(review);
}

void Course::printReviews() const { // This function will display what happens when the user selects the print course reviews option 
    std::cout << "Reviews for " << courseName << ":\n";
    for (const auto& review : reviews) {
        std::cout << review.user << " (" << review.rating << "/5): " << review.content << "\n";
    }
}
