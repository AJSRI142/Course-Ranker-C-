#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Review.h"

class Course {
private:
    std::string courseName; // Creating a courseName variable to be able to store the courseName of the course 
    std::vector<Review> reviews; // Creating a vector or container to store the review of a particular course. It would help manage multiple reviews made for that specific course. 

public:
    Course(const std::string& name); // Course constructor is being created 

    std::string getName() const; // getName function is created to return the courseName of the course

    void addReview(const Review& review); // addReview function is created to add a review to the course 

    void printReviews() const; // Prints all the reviews of a particular course  
};

#endif 
