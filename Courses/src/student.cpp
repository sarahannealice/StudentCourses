//
// Created by sarah on 15/02/2023.
//
#include <iostream>
#include <string>

#include "../inc/student.h"

using namespace std;

//resizes and adds new course to course list
void Student::addCourse(string courseName) {
    numCourses += 1;//adds 1 index to previous array size
    cout << "student: " << numCourses << endl;

    string *temp = new string[numCourses];//create temporary array with new size

    for (int i = 0; i < numCourses; i++) {
        temp[i] = courseList[i];
        cout << "course list: " << courseList[i] << endl;//prints
        cout << "temp: " << temp[i];//doesn't print
    }

    for (int i = 0; i < numCourses; i++) {
        cout << "temp: " << temp[i] << endl;
    }

    delete []courseList;//deletes values in courseList array
    courseList = temp;//sets courseList equal to temp array
    delete []temp;//deletes values in temp array for next iteration of addCourse()

    courseList[numCourses - 1] = courseName;//adds new course to end of array
}

void Student::printCourses() const {
    cout << "student courses: " << endl;

    //for loop to print dynamic array
    for (int i = 0; i < numCourses; i++) {
        cout << courseList[i] << endl;
    }
}