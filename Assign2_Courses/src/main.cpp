#include <iostream>
#include <cctype>

#include "..\inc\student.h"

using namespace std;

int main() {
    string studentName;
    int addCourse = 0;
    int numCourses = 1;
    bool done = false;
    string courseName;
    string *courseList = new string[numCourses];
    string *tempCourseList = new string[numCourses+1];

    //taking user input
    cout << "please input student's name: ";
    cin >> studentName;

    do {
        cout << "enter course name: ";
        cin >> courseName;

        cout << "would you like to add another course? [1]yes [2]no]";
        cin >> addCourse;

        if (addCourse == 1) {
            cout << "yes was chosen" << endl;
            cout << "previous course: " + courseName << endl;
        } else if (addCourse == 2) {
            //run print method
            done = true;
            break;
        } else {
            cout << "please choose one of the above options";
        }
    } while (!done);

}