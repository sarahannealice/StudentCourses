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
        courseList = new string[numCourses];
        //cout << "default constructor called" << endl;
    }

    //copy constructor
    Student(Student &initialStudent) {
        name = initialStudent.name;
        numCourses = initialStudent.numCourses;
        courseList = new string[numCourses];
        copy(initialStudent.courseList, initialStudent.courseList + numCourses, courseList);

        cout << "copy constructor called" << endl;
    }

    //destructor -- '~' signifies destructor
    ~Student() {
        //checks to see if dynamic array is null
        //if not null -> destroys, if null -> returns
        //note: deleting a null array will throw an error (bad)
        if (courseList) {
            delete []courseList;
            courseList = {};//resets to empty
        } else {
            return;
        }

        cout << "destructor called" << endl;
    }


    //setter & getter
    void setName(string name) { this->name = name; }
    string getName() { return this->name; }
    void setNumCourses(int num) { this->numCourses = num; }
    int getNumCourses() { return this->numCourses; }


    //methods to be implemented in student.cpp
    void addCourse(string courseName);
    void printCourses() const;
    Student& operator= (Student& initialStudent);

};//end Student class

#endif //COURSES_STUDENT_H
