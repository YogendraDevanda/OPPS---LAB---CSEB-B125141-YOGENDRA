#include <iostream>
#include <string>
#include <iomanip>

class Exam {
private:
    std::string studentName;
    std::string subject;
    double marks;
    double maxMarks;

public:
    // Function to get inputs from the user
    void inputDetails() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin >> std::ws, studentName);
        
        std::cout << "Enter Subject: ";
        std::getline(std::cin >> std::ws, subject);
        
        std::cout << "Enter Marks Obtained: ";
        std::cin >> marks;
        
        std::cout << "Enter Maximum Marks: ";
        std::cin >> maxMarks;
    }

    // Friend class declaration
    friend class Result;
};

class Result {
public:
    void displayResult(const Exam& exam) {
        if (exam.maxMarks <= 0) {
            std::cout << "\nError: Maximum marks must be greater than 0.\n";
            return;
        }

        double percentage = (exam.marks / exam.maxMarks) * 100.0;
        std::string status = (percentage >= 40.0) ? "Pass" : "Fail";

        std::cout << "\n-----------------------------\n";
        std::cout << "     ONLINE EXAM RESULT      \n";
        std::cout << "-----------------------------\n";
        std::cout << "Student Name   : " << exam.studentName << "\n";
        std::cout << "Subject        : " << exam.subject << "\n";
        std::cout << "Marks Obtained : " << exam.marks << " / " << exam.maxMarks << "\n";
        std::cout << "Percentage     : " << std::fixed << std::setprecision(2) << percentage << "%\n";
        std::cout << "Status         : " << status << "\n";
        std::cout << "-----------------------------\n";
    }
};

int main() {
    Exam examData;
    Result res;

    examData.inputDetails();
    res.displayResult(examData);

    return 0;
}