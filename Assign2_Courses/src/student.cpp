//
// Created by sarah on 2023-02-15.
//
#include <iostream>
#include <string>

#include "../inc/student.h"

using namespace std;

class Student {
    string studentName;
    int numCourses;
    string *courseList;

    //
    Student() {

    }
    Student(int integer) {

    }

    //setter/getting for studentName
    void setName(string studentName) {
        studentName = studentName;
    }
    string getName() {
        return studentName;
    }
};