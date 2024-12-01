#ifndef COURSERANKER_H
#define COURSERANKER_H

#include <vector>
#include "Course.h"
#include "User.h"

class CourseRanker {
private:
    std::vector<Course> courses; // This vector creates a container to hold all the courses that are being ranked
    std::vector<User> users; // This is a vector to hold all the users that are being ranked 

public:
    void createUser(); // This function is used to create a new user 
    void createCourse(); // This function is used to create a new course
    void addReview(); // This function is used to add a review to a course 
    void printCourseReviews(); // This function is used to print all the review for a particular couse 
// The functions above are used to help create the menu that is being displayed to the user
private:
    Course* getCourse(const std::string& courseName); // Function pointer is created to help get the course object 
    bool userExists(const std::string& username); // This function checks if the user exists within the data base
};

#endif 
