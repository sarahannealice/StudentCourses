//
// Created by sarah on 15/02/2023.
//
#include <iostream>
#include <string>

#include "../inc/student.h"

using namespace std;

//help from lorne
//resizes and adds new course to course list
void Student::addCourse(string courseName) {
    int maxCourses = 0;
    if (numCourses >= maxCourses){
        int tempMax = numCourses + 1;
        string* temp = new string[tempMax]; //Creating an array that is one size larger than my current array

        copy(courseList, courseList + numCourses, temp); //Copying the contents of courseList into temp

        delete[] courseList; //Removing the array to prevent a memory leak
        courseList = temp; //Assigning courseList pointer to temp pointer
    }

    //sets last element of dynamic array to most recent inputted course
    //'move' used when something is soon destroyed -- https://stackoverflow.com/a/27026280
    courseList[numCourses] = std::move(courseName); //Assigning the course to the last indices
    numCourses += 1; //Updating count
}//end addCourse method

void Student::printCourses() {
    cout << "number of courses: " << getNumCourses() << endl;
    cout << "student courses: " << endl;

    //for loop to print dynamic array
    for (int i = 0; i < numCourses; i++) {
        if (!courseList[i].empty()) {
            cout << "\t" << i+1 << ": " << courseList[i] << endl;
        }
    }
    cout << endl;
}//end printCourses method

//method to reset courseNum and courseList to 0
void Student::courseReset() {
    setNumCourses(0);
    delete []courseList;
    courseList = {};
}

//help from lorne
//assignment operator -- https://www.geeksforgeeks.org/operator-overloading-cpp/
//a method which overrides the '=' operator into copying a Student object completely
Student& Student::operator=(const Student& initialStudent) {
    cout << "---assignment operator called---" << endl;
    //self-check assignment is good practice -- https://stackoverflow.com/a/12015213
    if (this == &initialStudent) {
        return *this;
    }

    this->name = initialStudent.name;
    this->numCourses = initialStudent.numCourses;
    this->courseList = new string[numCourses];
    copy(initialStudent.courseList, initialStudent.courseList + initialStudent.numCourses, this->courseList);

    return *this;
}//end assignment operator method