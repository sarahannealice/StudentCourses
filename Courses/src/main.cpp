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
        cout << "***start of program***" << endl;
        cout << "enter first student's name: ";
        getline(cin, input);

        //makes sure user inputs something
        while (true) {
            if (input.empty()) {
                cout << "please input a name: ";
                getline(cin, input);
            } else {
                break;
            }
        }

        Student studentOne;
        studentOne.setName(input);

        while (addCourse) {
            cout << "enter course name (or 'q' to quit): ";
            cin.clear();//https://stackoverflow.com/a/5131654 -- good idea to clear stream
            getline(cin, input);

            //makes sure user inputs something
            while(true) {
                if (input.empty()) {
                    cout << "please input a course name or ('q' to quit): ";
                    getline(cin, input);
                } else {
                    break;
                }
            }

            //if statement to check if user has more courses to enter or not
            if (input == "q" || input == "Q") {
                addCourse = false;
            } else {
                numCourses++;
                studentOne.addCourse(input);
                studentOne.printCourses();
            }
        }

        cout << "student 1: " + studentOne.getName() << endl;
        cout << "number of courses: " << studentOne.getNumCourses() << endl;
        studentOne.printCourses();

        cout << "you have finished student one";

        loopProgram = false;
    }

    return 0;
}//end main method
