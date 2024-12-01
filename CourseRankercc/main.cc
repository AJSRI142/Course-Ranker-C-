#include <iostream>
#include "CourseRanker.h"

int main() {
    CourseRanker courseRanker;
    int choice;

    while (true) {
        std::cout << "\nCourse Ranker Menu:\n";
        std::cout << "1. Create User\n";
        std::cout << "2. Add Course\n";
        std::cout << "3. Add Review\n";
        std::cout << "4. Print Course Reviews\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                courseRanker.createUser();
                break;
            case 2:
                courseRanker.createCourse();
                break;
            case 3:
                courseRanker.addReview();
                break;
            case 4:
                courseRanker.printCourseReviews();
                break;
            case 5:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
