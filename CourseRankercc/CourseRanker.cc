#include "CourseRanker.h"
#include <iostream>

void CourseRanker::createUser() { // Function is being create when the user selects the create user option 
    std::string username;
    std::cout << "Enter a username: ";
    std::cin >> username;
    users.emplace_back(username);
    std::cout << "User " << username << " created successfully.\n";
}

void CourseRanker::createCourse() { // Function is being create when the user selects the create course option 
    std::string courseName;
    std::cout << "Enter course name: ";
    std::cin >> courseName;
    courses.emplace_back(courseName);
    std::cout << "Course " << courseName << " added successfully.\n";
}

void CourseRanker::addReview() { // Function is being created to add the review 
    std::string courseName, username, content;
    int rating;

    std::cout << "Enter course name: ";
    std::cin >> courseName;
    Course* course = getCourse(courseName); // Pointer is created to get the course name
    if (course == nullptr) { // If the course pointer is null, then the course does not exist 
        std::cout << "Course not found!\n";
        return;
    }

    std::cout << "Enter username: "; // This block of code is used to check if the user exists or not 
    std::cin >> username;
    if (!userExists(username)) {
        std::cout << "User not found!\n";
        return;
    }

    std::cout << "Enter review content: "; 
    std::cin.ignore(); // To ignore leftover newline character from previous input
    std::getline(std::cin, content); // getline is used to read the entire line of input including spaces 

    std::cout << "Enter rating (1-5): "; // Rating 
    std::cin >> rating;

    course->addReview(Review(username, content, rating)); // To add a review, the system needs to know the username, content and rating 
    std::cout << "Review added successfully.\n"; 
}

void CourseRanker::printCourseReviews() {
    std::string courseName;
    std::cout << "Enter course name: ";
    std::cin >> courseName;
    Course* course = getCourse(courseName); // Created a course pointer to be able to retrieve the course name.
    if (course != nullptr) { // If the course does not point to the course name, then the course does not exist in the system.
        course->printReviews();
    } else {
        std::cout << "Course not found!\n";
    }
}

Course* CourseRanker::getCourse(const std::string& courseName) { 
    for (auto& course : courses) { // auto is being used to help the compiler determine the type of the variable and makes the program more efficient 
        // A range based for loop is being used in this function to be able to iterate through the vector container called courses to retrieve the course required. 
        if (course.getName() == courseName) {
            return &course;
        }
    }
    return nullptr;
}

bool CourseRanker::userExists(const std::string& username) {
    for (const auto& user : users) {
        if (user.getName() == username) {
            return true;
        }
    }
    return false;
}
