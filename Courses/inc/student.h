//
// Created by sarah on 15/02/2023.
//

#ifndef COURSES_STUDENT_H
#define COURSES_STUDENT_H

#include <string>
#include <utility>
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
        cout << "---default constructor called---" << endl;

        name = "";
        numCourses = 0;
        courseList = new string[numCourses];
    }

    //copy constructor
    Student(Student &initialStudent) {
        cout << "---copy constructor called---" << endl;

        name = initialStudent.name;
        numCourses = initialStudent.numCourses;
        courseList = new string[numCourses];
        copy(initialStudent.courseList, initialStudent.courseList + numCourses, courseList);
    }

    //destructor -- '~' signifies destructor
    ~Student() {
        cout << "---destructor called---" << endl;

        //checks to see if dynamic array is null
        //if not null -> destroys, if null -> returns
        //note: deleting a null array will throw an error (bad)
        if (courseList) {
            delete []courseList;
            courseList = {};//resets to empty
        } else {
            return;
        }
    }


    //setter & getter
    void setName(string studentName) { this->name = std::move(studentName); }
    string getName() { return this->name; }
    void setNumCourses(int num) { this->numCourses = num; }
    int getNumCourses() { return this->numCourses; }


    //methods to be implemented in student.cpp
    void addCourse(string courseName);
    void printCourses();
    void courseReset();
    Student& operator= (const Student& initialStudent);
    friend ostream& operator<< (ostream& stream, Student& student);//this was the chevron overloading method he wanted

};//end Student class

#endif //COURSES_STUDENT_H
