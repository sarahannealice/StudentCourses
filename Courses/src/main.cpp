//
// Created by sarah on 15/02/2023.
//received help from ewan and kaitlyn
//

#include <iostream>
#include <cctype>

#include "../inc/student.h"

using namespace std;

int main() {
    //defining variables
    string input;
    bool addCourse = true;
    bool loopProgram = true;
    int numCourses = 0;

    while (loopProgram) {
        //taking user input
        cout << "enter first student's name: ";
        getline(cin, input);

        Student studentOne;
        studentOne.setName(input);

        while (addCourse) {
            cout << "enter course name (or 'q' to quit): ";
            cin.clear();//https://stackoverflow.com/a/5131654
            getline(cin, input);

            if (input == "q" || input == "Q") {
                addCourse = false;
            } else {
                numCourses++;
                cout << "main: " << numCourses << endl;
                studentOne.addCourse(input);
                //studentOne.printCourses();
            }
        }

        cout << "student 1: " + studentOne.getName() << endl;
        cout << "number of courses: " << numCourses << endl;
        studentOne.printCourses();

        cout << "you have finished student one";

        loopProgram = false;
    }

    return 0;
}//end main method
