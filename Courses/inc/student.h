//
// Created by sarah on 15/02/2023.
//

#ifndef COURSES_STUDENT_H
#define COURSES_STUDENT_H

#include <string>
using namespace std;

//https://stackoverflow.com/a/12733966
//class definition should be added to header file
class Student {

private:
    string name;
    int numCourses;
    string *courseList;

public:
    //default constructor
    Student(){
        name = "";
        numCourses = 0;
        courseList = new string[0];
    }

    //copy constructor
    Student(Student &initialStudent) {
        name = initialStudent.name;
        numCourses = initialStudent.numCourses;
        courseList = new string[numCourses];
        copy(initialStudent.courseList, initialStudent.courseList + numCourses, courseList);
    }

    //destructor
    ~Student() {
        //checks to see if dynamic array is null
        //if not null -> destroys, if null -> returns
        if (courseList) {
            delete []courseList;
            courseList = {};//resets to empty
        } else {
            return;
        }
    }

    //setter & getter
    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getNumCourses() {
        return this->numCourses;
    }

    void addCourse(string courseName);

    void printCourses() const;

};//end Student class

#endif //COURSES_STUDENT_H
