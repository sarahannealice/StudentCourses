//
// Created by sarah on 15/02/2023.
//
#include <iostream>
#include <string>

#include "../inc/student.h"

using namespace std;

//resizes and adds new course to course list
void Student::addCourse(string courseName) {
    //check to see if first element in array
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
    }
}

void Student::printCourses() const {
    cout << "student courses: " << endl;

    //for loop to print dynamic array
    for (int i = 0; i < numCourses; i++) {
        if (courseList[i] != "") {
            cout << courseList[i] << endl;
        }
    }
}