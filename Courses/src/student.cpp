//
// Created by sarah on 15/02/2023.
//
#include <iostream>
#include <string>

#include "../inc/student.h"

using namespace std;

//resizes and adds new course to course list
void Student::addCourse(string course) {
    int maxCourses = 0;
    if (numCourses >= maxCourses){
        int tempMax = numCourses + 1;
        string* temp = new string[tempMax]; //Creating an array that is one size larger than my current array

        copy(courseList, courseList + numCourses, temp); //Copying the contents of courseList into temp

        delete[] courseList; //Removing the array to prevent a memory leak
        courseList = temp; //Assigning courseList pointer to temp pointer
        maxCourses = tempMax; //Updating the value of maxCourses to the new max value
    }
    courseList[numCourses] = std::move(course); //Assigning the course to the last indices
    numCourses = numCourses + 1; //Updating count



    /*//check to see if first element in array
    if (numCourses == 1) {
        courseList[0] = courseName;
        cout << numCourses << endl;
    } else {
        cout << numCourses << endl;

        //resizing dynamic array for potential additional course
        string *temp = new string[numCourses + 1];//create temporary array with new size

        //deep copy of array to temporary array
        for (int i = 0; i < numCourses + 1; i++) {
            temp[i] = courseList[i];
        }

        delete []courseList;//deletes values in courseList array
        courseList = temp;//sets fresh courseList equal to temp array
        delete []temp;//deletes values in temp array for next iteration of addCourse()
        //sets last element of dynamic array to most recent inputted course
        courseList[numCourses] = courseName;
    }*/
}//end addCourse method

void Student::printCourses() const {
    cout << "student courses: " << endl;

    //for loop to print dynamic array
    for (int i = 0; i < numCourses; i++) {
        if (courseList[i] != "") {
            cout << courseList[i] << endl;
        }
    }
}//end printCourses method

//method to reset courseNum and courseList to 0
void Student::courseReset() {
    setNumCourses(0);
    delete []courseList;
    courseList = {};
}

//assignment operator -- https://www.geeksforgeeks.org/operator-overloading-cpp/
//a method which overrides the '=' operator into copying a Student object completely
Student& Student::operator=(Student &initialStudent) {
    name = initialStudent.name;
    numCourses = initialStudent.numCourses;

    string *temp = new string[numCourses];
    copy(initialStudent.courseList, initialStudent.courseList + initialStudent.numCourses, temp);
    cout << "assignment operator called" << endl;

    return *this;
}//end assignment operator method