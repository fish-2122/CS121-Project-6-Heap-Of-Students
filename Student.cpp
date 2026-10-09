#include <iostream>
#include <string>
#include "Student.h"

Student::Student() {
    Student::studentString = "";
    Student::firstName = "";
    Student::lastName = "";
    Student::streetAddress = "";
    Student::city = "";
    Student::state = "";
    Student::zipCode = "";
    Student::dateOfBirth = "";
    Student::dateOfGraduation = "";
    Student::creditsS = "";
    Student::credits = 0;
}

Student::init(std::string studentStringInput) {
    Student::studentString = studentStringInput;
    
    Student::converter.clear();
	Student::converter.str("");
	Student::ss.clear();
	Student::ss.str("");

    Student::ss.str(Student::studentString);

    getline(Student::ss, Student::firstName, ',');
    getline(Student::ss, Student::lastName, ',');
    getline(Student::ss, Student::streetAddress, ',');
    getline(Student::ss, Student::city, ',');
    getline(Student::ss, Student::state, ',');
    getline(Student::ss, Student::zipCode, ',');
    getline(Student::ss, Student::dateOfBirth, ',');
    getline(Student::ss, Student::dateOfGraduation, ',');

    getline(Student::ss, Student::creditsS, ',');
    Student::converter << Student::creditsS;
    Student::converter >> Student::credits;
}

void Student::printStudent() {
    std::cout << Student::firstName << std::endl;
    std::cout << Student::lastName << std::endl;
    std::cout << Student::streetAddress << std::endl;
    std::cout << Student::city << std::endl;
    std::cout << Student::state << std::endl;
    std::cout << Student::zipCode << std::endl;
    std::cout << Student::dateOfBirth << std::endl;
    std::cout << Student::dateOfGraduation << std::endl;
    std::cout << Student::credits << std::endl;
    std::cout << "-----------------------" << std::endl;
}

std::string Student::getLastFirst() {
    std::string returnString = "";
    returnString << Student::lastName << ", " << Student::firstName << std::endl;
}