//
// Created by sarah on 15/02/2023.
// received help from lorne, ewan and kaitlyn
//

#include <iostream>

#include "../inc/student.h"

using namespace std;

int main() {
    //defining variables
    string input;
    bool addCourse = true;
    bool loopProgram = true;

    while (loopProgram) {
        //taking user input
        cout << endl << "***start of program***" << endl << endl;


        //*****student one*****//
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
        }//end name validation

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
                studentOne.addCourse(input);
            }
        }//end addition to course array loop

        //print statements
        cout << "--------------------------------" << endl;
        cout << "student 1: " << studentOne.getName() << endl;
        studentOne.printCourses();


        //*****second student*****//
        cout << "enter second student's name: ";
        getline(cin, input);

        //makes sure user inputs something
        while (true) {
            if (input.empty()) {
                cout << "please input a name: ";
                getline(cin, input);
            } else {
                break;
            }
        }//end name validation

        Student studentTwo = studentOne;//copies studentOne info
        studentTwo.setName(input);//sets name but keeps courseList untouched

        //print statements
        cout << "--------------------------------" << endl;
        cout << "student 2: " + studentTwo.getName() << endl;
        studentTwo.printCourses();

        cout << "student 1 after reset: " << studentOne.getName() << endl;
        studentOne.courseReset();
        studentOne.printCourses();


        //*****third student*****//
        cout << "enter third student's name: ";
        getline(cin, input);

        //makes sure user inputs something
        while (true) {
            if (input.empty()) {
                cout << "please input a name: ";
                getline(cin, input);
            } else {
                break;
            }
        }//end name validation

        Student studentThree;
        studentThree = studentTwo;//copies studentOne info via assignment operator

        //print statements
        cout << "--------------------------------" << endl;
        cout << "student 3: " + studentThree.getName() << endl;
        studentThree.printCourses();


        loopProgram = false;
    }//end program loop

    return 0;
}//end main method
