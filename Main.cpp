#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include <fstream>
#include "Header.h"
using namespace std;

int main()
{

    read_Courses(); // reads from the file at the start;
    cout << "\n\n\n\n\n";
    string s = "";
    cout << "\t\t**************\n"
            "\t\t  WELCOME TO FLEX MANAGEMENT SYSTEM  \n\n"
            "\t\t              LOADING\n"
            "\t\t**************\n";
    for (int j = 0; j < s.size(); j++)
    {
        for (int i = 0; i <= 1999999; i++)
            cout << s[j];
    }
    system("color F0");
    system("pause");
    system("cls");

    int no, num;
    string passedId;
    cout << "**********" << endl;
    cout << "Choose 1 for Admin Module" << endl;
    cout << "Choose 2 for Student Module" << endl;
    cout << "Choose 3 for Teacher Module" << endl;
    cout << "**********" << endl;
    cin >> no;
    string loginSId = "", loginTId = "";
    switch (no)
    {
    case 1:
        system("cls");
        rec[0]->check();
        system("cls");
        do
        {
            cout << "  +------------------------------------+" << endl;
            cout << "  |   FLEX MANAGEMENT SYSTEM           |" << endl;
            cout << "  +------------------------------------+" << endl;
            cout << "  |  Press 1 to Enter No. of Students  |" << endl;
            cout << "  |  Press 2 to Edit Student Details   |" << endl;
            cout << "  |  Press 3 to Enter No. of Teachers  |" << endl;
            cout << "  |  Press 4 to View                   |" << endl;
            cout << "  |  Press 5 to Exit from Menu         |" << endl;
            cout << "  |  Press 6 to Edit Teacher           |" << endl;
            cout << "  |  Press 7 to Add Course             |" << endl;
            cout << "  |  Press 8 to Display Courses        |" << endl;
            cout << "  |  Press 9 to Assign Courses         |" << endl;
            cout << "  |  Press 10 for Add Marks            |" << endl;
            cout << "  |  Press 11 for Edit Marks           |" << endl;
            cout << "  |  Press 12 for Fee                  |" << endl;
            cout << "  +------------------------------------+" << endl;
            cin >> num;
            switch (num)
            {
            case 1:
                system("cls");
                cout << "Enter No. of Students you want to Enter " << endl;
                cin >> no;
                rec[0]->add_student(no);
                break;
            case 2:
                system("cls");
                cout << "Enter No. of Students you want to Edit" << endl;
                cin >> no;
                rec[0]->edit_student();
                rename("student1.txt", "student.txt");
                break;
            case 3:
                system("cls");
                cout << "Enter No. of Teachers you want to Enter" << endl;
                cin >> no;
                rec[0]->add_teacher(no);
                break;
            case 4:
                rec[0]->display();
                break;
            case 5:
                num = 13;
                break;
            case 6:
                rec[0]->edit_teacher();
                rename("teacher1.txt", "teacher.txt");
                break;
            case 7:
                system("cls");
                rec[1]->add_Course();
                rec[1]->class_count();
                break;
            case 8:
                system("cls");
                for (int i = 0; i < counter; i++)
                {
                    rec[1]->view_Details(i);
                }
                break;
            case 9:
                system("cls");
                rec[1]->assigncourse();
                break;
            case 10:
                system("cls");
                rec[1]->addmarks();
                break;
            case 11:
                system("cls");
                rec[1]->editmarks();
                rename("addmarks1.txt", "addmarks.txt");
                break;
            case 12:
                system("cls");
                rec[1]->Fee();
                break;
            }

        } while (num != 13);
        break;
    case 2:
        system("cls");
        loginSId = rec[2]->login();
        int stno;

        do
        {
            cout << "  --------------------------------------" << endl;
            cout << " |          STUDENT MENU                |" << endl;
            cout << " |--------------------------------------|" << endl;
            cout << " | Enter 1 for Marks Assessment         |" << endl;
            cout << " | Enter 2 to See Fee Status            |" << endl;
            cout << " | Enter 3 to View Attendance           |" << endl;
            cout << " | Enter 4 to View Your Grade           |" << endl;
            cout << " | Enter 0 to Quit                      |" << endl;
            cout << "  --------------------------------------" << endl;

            cin >> stno;
            cout << endl;
            switch (stno)
            {
            case 1:
                system("cls");
                rec[2]->assessmentmarks(loginSId);
                break;
            case 2:
                rec[2]->feeStatus(loginSId);
                break;
            case 3:
                rec[2]->viewAttendance(loginSId);
                break;
            case 4:
                rec[2]->viewGrades(loginSId);
                break;
            }
        } while (stno != 0);
        break;
    case 3:
        system("cls");
        loginTId = rec[3]->login();
        int noo;

        do
        {
            cout << "  ----------------------------------------" << endl;
            cout << " |        FLEX MANAGEMENT SYSTEM          |" << endl;
            cout << " |----------------------------------------|" << endl;
            cout << " | Enter 1 to View Assigned Courses       |" << endl;
            cout << " | Enter 2 to Edit Marks of Student       |" << endl;
            cout << " | Enter 3 to Create Timetable            |" << endl;
            cout << " | Enter 4 to Mark Attendance             |" << endl;
            cout << " | Enter 5 to Assign Grades               |" << endl;
            cout << " | Enter 0 to Quit                        |" << endl;
            cout << "  ----------------------------------------" << endl;
            cin >> noo;
            cout << endl;
            switch (noo)
            {
            case 1:
                system("cls");
                rec[3]->displayAssignedCourse(loginTId);
                break;
            case 2:
                system("cls");
                rec[1]->editmarks();
                rename("addmarks1.txt", "addmarks.txt");
                break;

            case 3:
                system("cls");
                rec[3]->createCourseSchedule(loginTId);
                break;

            case 4:
                system("cls");
                rec[3]->markAttendance();
                break;

            case 5:
                system("cls");
                rec[3]->assignGrades();
                break;
            }
        } while (noo != 0);
        break;
    default:
        cout << "You Entered Wrong Number" << endl;
        cout << "Enter Number Again" << endl;
        cin >> stno;
    }
    system("pause");
    return 0;
}
void read_Courses()
{ // read from the file
    string course_name;
    string course_code;
    string select_Class;
    string Parent_Course;

    in.open("Course.txt", ios::in);
    while (in >> course_name >> course_code >> select_Class >> Parent_Course)
    {
        rec[1]->add_Course(course_name, course_code, select_Class, Parent_Course); // calling the course function;
    }
    in.close();
}