#include <iostream>
#include <sstream>
#include <string>
#include <time.h>
#include <iomanip>
#include <fstream>
#include "Header.h"
using namespace std;
fstream in, oss, a, x;
int counter = 0;
Admin *rec[4] = {new Administrator, new Course, new Student, new Teacher};
void Admin::check()
{

    int choice = 1;
    string assign = "admin";
    do
    {
        cout << "\n\n\n\n\n\n";
        cout << "\t\t\t\tUSERNAME :";
        cin >> username;
        cout << "\t\t\t\tPASSWORD :";
        cin >> password;
        cout << endl;
        if (username == assign && password == assign)
        {
            cout << "Successfully Logged-In" << endl;
            choice = 0;
        }
        system("cls");
    } while (choice == 1);
}
void Administrator::edit_student()
{
    student_display();

    in.open("student.txt");
    oss.open("student1.txt", ios::out);
    cout << "Enter Roll No. of Student you want to Edit Details of : ";
    string fileRoll;
    cin >> fileRoll;

    cout << endl;

    while (!in.eof())
    {

        getline(in, roll);
        if (in.eof())
            break;
        if (fileRoll == roll)
        {
            oss << roll << endl;

            getline(in, first_name);
            cout << "Enter First Name : ";
            cin >> first_name;
            oss << first_name << endl;

            getline(in, last_name);
            cout << "Enter Last Name : ";
            cin >> last_name;
            oss << last_name << endl;

            getline(in, fee);
            cout << "Enter Fee : ";
            cin >> fee;
            oss << fee << endl;

            getline(in, contact_no);
            cout << "Enter Contact No. : ";
            cin >> contact_no;
            oss << contact_no << endl;

            getline(in, Departm);
            oss << Departm << endl;

            getline(in, registration);
            oss << registration << endl;

            getline(in, Marks);
            oss << Marks << endl;

            getline(in, Qualification);
            oss << Qualification << endl;

            getline(in, Gender);
            oss << Gender << endl;

            getline(in, bloodgroup);
            oss << bloodgroup << endl;

            getline(in, address);
            cout << "Enter Address : ";
            cin >> address;
            oss << address << endl;
        }
        else
        {

            oss << roll << endl;

            getline(in, first_name);
            oss << first_name << endl;

            getline(in, last_name);
            oss << last_name << endl;

            getline(in, fee);
            oss << fee << endl;

            getline(in, contact_no);
            oss << contact_no << endl;

            getline(in, Departm);
            oss << Departm << endl;

            getline(in, registration);
            oss << registration << endl;

            getline(in, Marks);
            oss << Marks << endl;

            getline(in, Qualification);
            oss << Qualification << endl;

            getline(in, Gender);
            oss << Gender << endl;

            getline(in, bloodgroup);
            oss << bloodgroup << endl;

            getline(in, address);
            oss << address << endl;
            ;
        }
    }
    in.close();
    remove("student.txt");
    oss.close();
}

void Administrator::teacher_display()
{
    in.open("teacher.txt");
    string read;

    bool check = in.peek() == EOF;
    if (check == true)
    {
        cout << "File is Empty" << endl;
    }
    else
    {
        cout << "  ┌-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------┐" << endl;
        cout << "  |    ID\tFirst Name\tLast Name\tEmail\tJoining Date\tPassword\tConfirm Password\tContact\tCnic\tQualification\tParent Contact\tSalaray\tAddress\tGender                       |" << endl;
        cout << "  └-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------┘" << endl;

        const char separator = ' ';
        int nameWidth = 20;
        int numWidth = 18;

        cout << left << setw(nameWidth) << setfill(separator) << "Name";
        cout << left << setw(numWidth) << setfill(separator) << "Username";
        numWidth = 15;
        cout << left << setw(numWidth) << setfill(separator) << "Contact";
        cout << left << setw(numWidth) << setfill(separator) << "Qualification";
        cout << left << setw(numWidth) << setfill(separator) << "Gender";
        cout << endl;

        cin.get();
        nameWidth = 17;
        numWidth = 16;
        while (!in.eof())
        {
            getline(in, read);

            getline(in, read);
            cout << read;
            getline(in, read);
            cout << left << setw(nameWidth) << read;
            getline(in, read);
            cout << left << setw(numWidth) << read;
            getline(in, read);
            cout << left << setw(nameWidth * 2) << setfill(separator) << read;
            getline(in, read);

            getline(in, read);

            getline(in, read);
            cout << left << setw(numWidth) << read;
            getline(in, read);
            cout << left << setw(nameWidth * 2) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(numWidth) << read;
            getline(in, read);
            cout << left << setw(nameWidth * 2) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(numWidth) << read;

            cout << endl;
        }
    }
    in.close();
}

void Administrator::student_display()
{
    in.open("student.txt");
    string read;
    bool check = in.peek() == EOF;
    if (check == true)
    {
        cout << "File is Empty" << endl;
    }
    else
    {
        cout << "  +----------------------------------------------------------------------------------------------------------------------------+" << endl;
        cout << "  | Roll No.\tFirst Name\tLast Name\tFee\tContact\tDepartment\tReg Date\tMarks\tQualification\tGender\tBlood Group\tAddress    |" << endl;
        cout << "  +----------------------------------------------------------------------------------------------------------------------------+" << endl;

        const char separator = ' ';
        const int nameWidth = 13;
        const int numWidth = 7;

        cin.get();
        while (!in.eof())
        {
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read;
            getline(in, read);
            cout << left << setw(nameWidth) << setfill(separator) << read << endl;
        }
    }
    in.close();
}

void Administrator::display()
{
    cout << " ┌───────────────────────────────────────────┐" << endl;
    cout << " │  Select an option to display data:        │" << endl;
    cout << " │                                           │" << endl;
    cout << " │  1. Display Teacher Data                  │" << endl;
    cout << " │  2. Display Student Data                  │" << endl;
    cout << " └───────────────────────────────────────────┘" << endl;
    int no;
    cin >> no;
    switch (no)
    {
    case 1:
    {
        teacher_display();
        break;
    }
    case 2:
    {
        student_display();
        break;
    }
    }
}

void Administrator::add_student(int no)
{
    in.open("student.txt", ios::out);
    x.open("fee.txt", ios::out);
    oss.open("id.txt", ios::out);
    srand(time(0));

    if (in.is_open())
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    int ran;
    for (int i = 0; i < no; i++)
    {
        cout << "Enter Student Department : \t";
        cin >> Departm;
        ran = rand() % 1000 + 100;
        roll = to_string(ran);
        roll = Departm + roll;
        oss << roll << endl; // login
        in << roll << endl;  // student
        x << roll << " ";    // fee
        cout << "Enter Student First Name : \t";
        cin >> first_name;
        in << first_name << endl;

        cout << "Enter Student Last Name : \t";
        cin >> last_name;
        in << last_name << endl;

        cout << "Enter Student Fee : \t";
        cin >> fee;
        in << fee << endl;
        x << fee << endl;
        cout << "Enter Student Contact No. : \t";
        cin >> contact_no;
        in << contact_no << endl;

        in << Departm << endl;

        cout << "Enter Student Registration Date (YYYY-MM-DD) : \t";
        cin.ignore();
        getline(cin, registration);
        in << registration << endl;

        cout << "Enter Student Marks : \t";
        cin >> Marks;
        in << Marks << endl;

        cout << "Enter Student Qualification : \t";
        cin.ignore();
        getline(cin, Qualification);
        in << Qualification << endl;

        cout << "Enter Gender : \t";
        cin >> Gender;
        in << Gender << endl;

        cout << "Enter Student Blood Group : \t";
        cin >> bloodgroup;
        in << bloodgroup << endl;

        cout << "Enter Student Address : \t";
        cin.ignore();
        getline(cin, address);
        in << address << endl;
    }
    cout << endl;
    x.close();
    in.close();
    oss.close();
} // x close

void Administrator::Fee()
{
    in.open("student.txt");

    string read;
    bool check = in.peek() == EOF;
    if (check == true)
    {
        cout << "File is Empty" << endl;
    }
    else
    {
        while (!in.eof())
        {
            getline(in, read);
            if (in.eof())
                break;
            getline(in, read);
            cout << "Name of Student : " << read;
            getline(in, read);
            cout << read << endl;
            getline(in, read);
            cout << "FEE : " << read;
            getline(in, read);
            getline(in, read);
            getline(in, read);
            getline(in, read);
            getline(in, read);
            getline(in, read);
            getline(in, read);
            getline(in, read);
            cout << endl;
        }
    }
    in.close();
}

void Administrator::edit_teacher()
{
    teacher_display();
    in.open("teacher.txt");
    oss.open("teacher1.txt", ios::out);
    string teacherid;
    cout << "Enter Teacher Id : " << endl;
    cin >> teacherid;
    cout << endl;
    while (!in.eof())
    {
        getline(in, id);
        if (in.eof())
            break;
        if (teacherid == id)
        {
            // 1
            oss << id << endl;
            // 2
            getline(in, first_name);
            oss << first_name << endl;
            // 3
            getline(in, last_name);
            oss << last_name << endl;
            // 4
            getline(in, Username);
            oss << Username << endl;
            // 5
            getline(in, regDate);
            oss << regDate << endl;
            // 6
            getline(in, Password);
            oss << Password << endl;
            // 7

            getline(in, Confirm_password);
            oss << Confirm_password << endl;
            // 8
            getline(in, contact_no);
            cout << "Enter Contact No. : \t";
            cin.ignore();
            cin >> contact_no;
            oss << contact_no << endl;
            // 9
            getline(in, Qualification);
            cout << "Enter Qualification : ";
            cin.ignore();
            getline(cin, Qualification);
            oss << Qualification << endl;
            // 10
            getline(in, Salary);
            cout << "Enter Salary : ";

            cin >> Salary;
            oss << Salary << endl;
            // 11
            getline(in, address);
            cout << "Enter Address : ";
            cin.ignore();
            getline(cin, address);
            oss << address << endl;
            // 12
            getline(in, gender);
            oss << gender << endl;

            getline(in, Cnic);
            oss << Cnic << endl;
        }

        else
        {
            // 1
            oss << id << endl;
            // 2
            getline(in, first_name);
            oss << first_name << endl;
            // 3
            getline(in, last_name);
            oss << last_name << endl;
            // 4
            getline(in, Username);
            oss << Username << endl;
            // 5
            getline(in, regDate);
            oss << regDate << endl;
            // 6
            getline(in, Password);
            oss << Password << endl;

            // 7
            getline(in, Confirm_password);
            oss << Confirm_password << endl;

            // 8
            getline(in, contact_no);
            oss << contact_no << endl;

            // 9
            getline(in, Qualification);
            oss << Qualification << endl;

            // 10
            getline(in, Salary);
            oss << Salary << endl;
            // 11
            getline(in, address);
            oss << address << endl;
            // 12
            getline(in, gender);
            oss << gender << endl;
        }
    }
    in.close();
    remove("teacher.txt");
    oss.close();
}

void Administrator::add_teacher(int no)
{
    in.open("teacher.txt", ios::out);
    oss.open("tid.txt", ios::out);
    srand(time(0));
    int ran;
    if (in.is_open())
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    for (int i = 0; i < no; i++)
    {
        cout << "Enter Teacher Department : \t";
        cin >> Departm;
        srand(time(0));
        ran = rand() % (1000 + 100) + 1;
        id = to_string(ran);
        id = Departm + '-' + id;
        cout << id;
        in << id << endl;
        oss << id << endl;
        // 2
        cout << "\nEnter Teacher First Name : \t";
        cin >> first_name;
        in << first_name << endl;
        // 3
        cout << "Enter Teacher Last Name : \t";
        cin >> last_name;
        in << last_name << endl;
        // 4
        cout << "Enter Username : \t";
        cin >> Username;
        in << Username << endl;
        // 5
        cout << "Enter Registration Date (YYYY-MM-DD) : ";
        cin.ignore();
        getline(cin, regDate);
        in << regDate << endl;
        // 6
        cout << "Enter Password : ";
        cin >> Password;
        in << Password << endl;

        // 7
        cout << "Enter Confirm password : ";
        cin >> Confirm_password;
        if (Password == Confirm_password)
        {
            in << Confirm_password << endl;
        }
        else
        {
            while (Password != Confirm_password)
            {
                cout << "Pasword did not match, Enter again : ";
                cin >> Confirm_password;
            }
        }
        oss << id << " " << Password << endl;
        // 8
        cout << "Enter Contact No. : \t";
        cin >> contact_no;
        in << contact_no << endl;
        // 9
        cout << "Enter Salary : \t";
        cin >> Salary;
        in << Salary << endl;
        // 10
        cout << "Enter Qualification : ";
        cin >> Qualification;
        in << Qualification << endl;
        // 11

        cout << "Enter Address : ";
        cin.ignore();
        getline(cin, address);
        in << address << endl;
        // 12
        cout << "Enter Gender : ";
        getline(cin, gender);
        in << gender << endl;
        cout << "Enter Cnic No. : \t";
        getline(cin, Cnic);
        in << Cnic << endl;
    }
    in.close();
    oss.close();
}

void Course::add_Course() //
{
    a.open("addmarks.txt", ios::out);
    string course_name;
    string course_code;
    string select_Class;
    string Parent_Course;
    cout << "Enter Course Name : ";
    cin >> course_name;
    cout << "Enter Course Code : ";
    cin >> course_code;
    cout << "Select Department : " << endl;
    cin >> select_Class; // keeping a check of the class;
    if (counter == 0)
    { // counter is keeping check of the courses;
        Parent_Course = "NONE";
    }
    else
    {
        int choice = nameOF_Courses();
        if (choice == 0)
        {
            Parent_Course = "NONE";
        }
        else
        {
            Parent_Course = obj[choice - 1]->course_name;
        }
    }

    obj[counter] = new Course; // memory allocation

    obj[counter]->course_name = course_name;
    obj[counter]->course_code = course_code;
    obj[counter]->select_Class = select_Class;
    obj[counter]->Parent_Course = Parent_Course;

    in.open("Course.txt", ios::app);
    in << course_name << " " << course_code << " " << select_Class << " " << Parent_Course << endl;
    counter++;
    a.close();
    in.close();
}

void Course::add_Course(string course_name, string course_code, string select_Class, string Parent_Course)
{ //
    obj[counter] = new Course;
    obj[counter]->course_name = course_name;
    obj[counter]->course_code = course_code;
    obj[counter]->select_Class = select_Class;
    obj[counter]->Parent_Course = Parent_Course;
    counter++;
}

void Course::view_Details(int value)
{ // change the parameter;

    cout << obj[value]->course_name << " "
         << obj[value]->course_code << " "
         << obj[value]->select_Class << " "
         << obj[value]->Parent_Course << endl;
}

int Course::nameOF_Courses()
{
    for (int i = 0; i < counter; i++)
    {
        cout << i + 1 << "Course Name : " << obj[i]->course_name << endl;
    }
    int choi;
    cout << "Enter Number Of PreReq:";
    while (!(cin >> choi))
    { // if user enters a string instead of int toh it will ask you again;
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Try Again :";
    }
    return choi;
}

void Course::class_count()
{
    string temp[1000];
    int ind = 0;
    x.open("course_classes.txt", ios::out);
    x.close();
    x.open("course_classes.txt", ios::out);
    for (int i = 0; i < counter; i++)
    {
        x << obj[i]->select_Class << endl;
        x << obj[i]->course_name << endl;
    }
    x.close();
}

void Course::assigncourse()
{
    string temp;
    oss.open("assigncourse.txt", ios::out);
    in.open("teacher.txt");
    x.open("student.txt");
    a.open("Course.txt");

    string read;

    cout << endl;
    in.close();
    in.open("teacher.txt");
    while (!in.eof())
    {

        getline(in, read);
        if (in.eof())
            break;
        cout << "Teacher Id : " << read << endl;
        getline(in, read);
        cout << "Teacher Name : " << read;
        getline(in, read);
        cout << read << endl;
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        getline(in, read);
        cout << endl;
    }
    int no;
    while (!a.eof())
    {
        getline(a, read);

        cout << read << endl;
    }
    string course;
    int choic = 1;
    char choice;
    cout << "Select the Teacher and Course you want to Assign" << endl;
    choice = 'Y';
    while (choice == 'Y' || choice == 'y')
    {
        string search, read;
        int choic = 1;
        do
        {
            in.close();
            in.open("teacher.txt");
            cout << "Enter Teacher Id : ";
            cin >> search;
            while (!in.eof())
            {
                getline(in, read);

                if (search == read)
                {
                    oss << search << " ";
                    cout << "Successfully Logged-In" << endl;
                    choic = 0;
                }
            }
        } while (choic == 1);
        choic = 1;
        do
        {
            a.close();
            a.open("Course.txt");
            cout << "Enter Course Name : ";
            cin >> course;
            while (!a.eof())
            {
                a >> read;
                if (a.eof())
                    break;
                if (course == read)
                {
                    oss << course << endl; // oss==assigncourse write

                    cout << "Successfully Loggen-In" << endl;
                    choic = 0;
                }
            }
        } while (choic == 1);

        cout << "Do you want to Assign Another Course to the Teacher? " << endl;
        cin >> choic;
    }
    x.close();
    oss.close();
    in.close();
    a.close();
}

void Course::addmarks() // assignCoursesToStudents() intialise to zero
{
    in.close();
    fstream m;
    m.open("addmarks.txt", ios::out);
    in.open("student.txt");

    string read;
    string classNum;
    while (!in.eof())
    {

        getline(in, id);
        if (in.eof())
            break;
        cout << "Student Id is : " << id << endl;
        m << id << " ";

        getline(in, first_name);

        getline(in, last_name);

        getline(in, fee);

        getline(in, contact_no);

        getline(in, Departm);
        x.open("course_classes.txt");
        while (!x.eof())
        {
            getline(x, classNum);
            if (classNum == Departm)
            {
                getline(x, course_name);
                cout << "Course Name: " << course_name << endl;
                m << course_name << " ";
                cout << course_name << " Marks: "
                     << "0" << endl;
                m << "0"
                  << " ";
            }
            else
            {
                getline(x, course_name);
            }
        }
        m << " "
          << ".";
        m << endl;
        x.close();
        getline(in, registration);

        getline(in, Marks);

        getline(in, Qualification);

        getline(in, Gender);

        getline(in, bloodgroup);

        getline(in, address);
    }
    in.close();
    m.close();
}
void Course::editmarks()
{
    // displayMarks();
    // close marks file
    a.close();
    string readmarks;
    a.open("addmarks.txt");
    while (!a.eof())
    {
        getline(a, readmarks);
        cout << readmarks << endl;
    }
    a.close();
    a.open("addmarks.txt");
    fstream newFile;
    newFile.open("addmarks1.txt", ios::out);
    string search, read;
    string rNo, sub, nMarks;
    cout << "Enter Roll No. of student whose marks you want to update : ";
    cin >> rNo;
    cout << "\nEnter the subject whose marks you want to update :";
    cin >> sub;
    cout << endl;
    while (!a.eof())
    {

        a >> id;
        if (a.eof())
            break;
        if (id == rNo)
        {
            if (a.eof())
                break;
            newFile << id;
            a >> course_name;
            while (course_name != ".")
            {
                if (sub == course_name)
                {
                    cout << "Enter new marks of subject " << sub << " : ";
                    cin >> nMarks;
                    a >> marks;
                    newFile << " " << course_name;
                    newFile << " " << nMarks;
                }
                else
                {
                    newFile << " " << course_name;
                    a >> marks;
                    newFile << " " << marks;
                }
                a >> course_name;
            }
            newFile << " ." << endl;
        }
        else
        {
            newFile << id;
            a >> course_name;
            while (course_name != ".")
            {
                newFile << " " << course_name;
                a >> marks;
                newFile << " " << marks;
                a >> course_name;
            }
            newFile << " ." << endl;
        }
    }
    a.close();
    remove("addmarks.txt");
    newFile.close();
}
void Student::feeStatus(string passedid)
{
    in.close();
    in.open("student.txt");
    string line, FileId, firstname, lastname, fee;
    // Search for the student's name in the file
    while (!in.eof())
    {
        getline(in, line);
        getline(in, firstname);
        getline(in, lastname);
        getline(in, fee);
        getline(in, line);
        getline(in, line);
        getline(in, line);
        getline(in, line);
        getline(in, line);
        getline(in, line);
        getline(in, line);
        getline(in, line);
    }

    in.close();
    // If the student's name is not found, display an error message
    if (firstname.empty() || lastname.empty())
    {
        cout << "Student not found with ID " << passedid << endl;
        return;
    }
    // Search for the student's fee status in the file
    in.open("fee.txt");
    while (getline(in, line))
    {
        stringstream ss(line);
        ss >> FileId;

        if (FileId == passedid)
        {
            cout << "Roll Number: " << line << endl;
            cout << "Student name: " << firstname << " " << lastname << endl;
            ss >> fee;
            if (stoi(fee) >= 20000)
            {
                cout << "Fee status: "
                     << "Paid" << endl;
            }
            else
            {
                cout << "Fee Status: "
                     << "Unpaid" << endl;
            }

            in.close();
            return;
        }
    }
    // If the student's fee status is not found, display an error message
    cout << "Fee Status not found for student " << firstname << " " << lastname << endl;
    in.close();
}

string Student::login()
{
    {
        int choice = 1;
        string password;
        do
        {
            in.close();
            in.open("id.txt");
            string search1, read;
            cout << "\n\n\n\n\n\n";
            cout << "\t\t\t\tEnter id :";
            cin.ignore();
            cin >> search1;
            cout << "\t\t\t\tPassword :";
            cin >> password;
            cout << endl;
            while (!in.eof())
            {
                getline(in, read);
                if (search1 == read && password == "pass")
                {
                    cout << "Successfully Logged-In" << endl;
                    choice = 0;
                    return search1;
                }
            }
            return "";
            system("cls");
        } while (choice == 1);
    }
}
void Student::assessmentmarks(string passedId)
{
    in.close();
    in.open("addmarks.txt");
    string FileId;
    int count = 0;
    while (!in.eof())
    {
        in >> FileId;
        if (FileId == passedId)
        {
            count = 0;
            cout << "Student Id is :" << FileId;
            in >> course_name;
            while (course_name != ".")
            {
                count++;
                cout << "Course # " << count << " Course Name : " << course_name;
                in >> marks;
                cout << "  Marks : " << marks << endl;
                in >> course_name;
            }
        }
        else
        {
            in >> course_name;
            while (course_name != ".")
            {
                in >> marks;
                in >> course_name;
            }
        }
    }
    in.close();
}

string Teacher::login()
{
    int choice = 1;
    string password;
    do
    {
        in.close();
        in.open("tid.txt");
        string search, read;
        cout << "\n\n\n\n\n\n";
        cout << "\t\t\t\tEnter id :";
        cin >> search;
        cout << "\t\t\t\tPassword :";
        cin >> password;
        cout << endl;
        while (in >> read)
        {
            stringstream ss(read);
            getline(ss, search, ' ');
            getline(ss, read, ' ');

            if (search == search && read == password)
            {
                cout << "Successfully logged in" << endl;
                choice = 0;
                return search;
            }
        }
        // If the login fails, display an error message and prompt the user to try again
        cout << "Invalid ID or Password. Please try again." << endl;
        system("cls");
    } while (choice == 1);

    return ""; // This line should not be reached
}

void Student::viewAttendance(string passedId)
{
    in.close();
    in.open("attendance.txt");
    string line;
    bool foundAttendance = false;
    while (getline(in, line))
    {
        stringstream ss(line);
        string courseName, date, studentId, attendanceStatus;
        ss >> courseName >> date >> studentId >> attendanceStatus;
        if (studentId == passedId)
        {
            foundAttendance = true;
            cout << "Course Name : " << courseName << endl;
            cout << "Date : " << date << endl;
            cout << "Attendance Status : " << attendanceStatus << endl
                 << endl;
        }
    }
    in.close();
    if (!foundAttendance)
    {
        cout << "No Attendance record found for Student ID " << passedId << endl;
    }
}
void Student::viewGrades(string studentId)
{
    ifstream gradesFile("grades.txt");
    string line;
    // Search for the student's grades in the file
    while (getline(gradesFile, line))
    {
        stringstream ss(line);
        string id, grade;
        ss >> id >> grade;
        if (id == studentId)
        {
            cout << "Grades for Student " << studentId << ": " << grade << endl;
            gradesFile.close();
            return;
        }
    }
    // If the student's grades are not found, display an error message
    cout << "Grades not found for Student " << studentId << endl;
    gradesFile.close();
}

void Teacher::displayAssignedCourse(string passedId)
{
    in.close();
    in.open("assigncourse.txt");
    string FileId;
    string course;
    while (!in.eof())
    {
        in >> FileId;
        if (in.eof())
            break;
        if (FileId == passedId)
        {
            cout << "Teacher Id is :" << FileId;
            in >> course;
            cout << "Course is : " << course << endl;
        }
        else
        {
            in >> course;
        }
    }
    in.close();
}

void Teacher::createCourseSchedule(string passedId)
{
    in.close();
    in.open("course_schedule.txt", ios::app);
    string courseName, startDate, endDate, timetable;
    cout << "Enter course name : ";
    cin >> courseName;
    // Check if course name exists in course_names.txt
    ifstream courseNamesFile("assigncourse.txt");
    string line;
    bool courseExists = false;
    while (courseNamesFile >> line)
    {
        courseNamesFile >> line;
        if (line == courseName)
        {
            courseExists = true;
            break;
        }
    }
    courseNamesFile.close();
    if (!courseExists)
    {
        cout << "Error : Course name does not exist." << endl;
        return;
    }
    cout << "Enter Start Date (YYYY-MM-DD): ";
    cin >> startDate;
    cout << "Enter End Date (YYYY-MM-DD): ";
    cin >> endDate;
    cout << "Enter Time Table (comma-separated list of times in 24-hour format, e.g. 08:00,10:00,14:00): ";
    cin >> timetable;
    in << passedId << " " << courseName << " " << startDate << " " << endDate << " " << timetable << endl;
    in.close();
    cout << "Course Schedule Created Successfully." << endl;
}
void Teacher::markAttendance()
{
    in.close();
    in.open("attendance.txt", ios::app);
    string courseName, date, studentId, attendanceStatus;
    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;
    // Check if course name exists in course_schedule.txt
    ifstream courseScheduleFile("course_schedule.txt");
    string line;
    bool courseExists = false;
    while (getline(courseScheduleFile, line))
    {
        stringstream ss(line);
        string teacherId, course, startDate, endDate, timetable;
        ss >> teacherId >> course >> startDate >> endDate >> timetable;
        if (course == courseName)
        {
            courseExists = true;
            break;
        }
    }
    courseScheduleFile.close();
    if (!courseExists)
    {
        cout << "Error : Course name does not exist." << endl;
        return;
    }
    // Read student IDs from file
    ifstream studentIdsFile("id.txt");
    while (getline(studentIdsFile, studentId))
    {
        cout << "Enter Attendance Status for Student " << studentId << " (P for present, A for absent): ";
        cin >> attendanceStatus;
        in << courseName << " " << date << " " << studentId << " " << attendanceStatus << endl;
    }
    studentIdsFile.close();
    in.close();
    cout << "Attendance Marked Successfully." << endl;
}

void Teacher::assignGrades()
{
    ifstream marksFile("addmarks.txt");
    ofstream gradesFile("grades.txt", ios::app);
    string studentId, courseName, marksStr;
    double marks, totalMarks, percentage;
    string line;
    // Read each line from the marks file
    while (getline(marksFile, line))
    {
        stringstream ss(line);
        ss >> studentId;
        // Write the student's ID to the grades file
        gradesFile << studentId << " ";
        // Calculate the total marks and percentage for the student
        totalMarks = 0;
        int numCourses = 0;
        while (ss >> courseName >> marksStr)
        {
            marks = stod(marksStr);
            totalMarks += marks;
            numCourses++;
        }
        double maxMarks = numCourses * 100; // Assuming each course is out of 100 marks
        percentage = (totalMarks / maxMarks) * 100;
        // Assign the grade based on the percentage
        if (percentage >= 90)
        {
            gradesFile << "A+";
        }
        else if (percentage >= 80)
        {
            gradesFile << "A";
        }
        else if (percentage >= 70)
        {
            gradesFile << "B";
        }
        else if (percentage >= 60)
        {
            gradesFile << "C";
        }
        else if (percentage >= 50)
        {
            gradesFile << "D";
        }
        else
        {
            gradesFile << "F";
        }

        gradesFile << endl;
    }
    marksFile.close();
    gradesFile.close();
    cout << "Grades Assigned Successfully." << endl;
}