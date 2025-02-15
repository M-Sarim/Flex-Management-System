#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Admin
{
private:
	string username;
	string password;

public:
	Admin(){};
	void check();
	virtual string login() = 0;
	virtual void editmarks() = 0;
	virtual void add_student(int) = 0;
	virtual void viewAttendance(string passedId) = 0;
	virtual void add_teacher(int) = 0;
	virtual void edit_student() = 0;
	virtual void student_display() = 0;
	virtual void teacher_display() = 0;
	virtual void assignGrades() = 0;
	virtual void assessmentmarks(string) = 0;
	virtual void viewGrades(string) = 0;
	virtual void edit_teacher() = 0;
	virtual void displayAssignedCourse(string) = 0;
	virtual void feeStatus(string) = 0;
	virtual void display() = 0;
	virtual void addmarks() = 0;
	virtual void markAttendance() = 0;
	virtual void add_Course() = 0;
	virtual void assigncourse() = 0;
	virtual void add_Course(string course_name, string course_code, string select_Class, string Parent_Course) = 0;
	virtual void view_Details(int value) = 0;
	virtual void createCourseSchedule(string passedId) = 0;
	virtual int nameOF_Courses() = 0;
	virtual void Fee() = 0;
	virtual void class_count() = 0;
};
class Administrator : public Admin
{
protected:
	string roll;
	string first_name;
	string last_name;
	string bloodgroup;
	string address, Salary;
	string Marks, Cnic, Confirm_password;
	string Qualification;
	string Departm, Username, regDate, Password;
	string registration, DOB;
	string gender;
	string contact_no;
	string Gender;
	string fee, id;

public:
	Administrator(){};
	void add_student(int no);
	void edit_student();
	void edit_teacher();
	void add_teacher(int no);
	void feeStatus(string passedid) {}
	void viewGrades(string loginSId) {}
	void assignGrades() {}
	virtual void createCourseSchedule(string passedId) {}
	void Fee();
	void assessmentmarks(string passedId) {}
	void displayAssignedCourse(string passedId) {}
	void markAttendance() {}
	void viewAttendance(string passedId) {}
	void student_display();
	void teacher_display();
	string login()
	{
		string a = "";
		return a;
	}
	void display();
	void editmarks() {}
	void addmarks() {}
	void assigncourse() {}
	void add_Course() {}
	void add_Course(string course_name, string course_code, string select_Class, string Parent_Course) {}
	void view_Details(int value) {}
	int nameOF_Courses()
	{
		return 0;
	}
	void class_count() {}
};

extern int counter;
class Course : public Administrator
{
protected:
	string course_name;
	string course_code;
	string select_Class;
	string Parent_Course;
	string marks;

public:
	Course() {}
	Course *obj[100];
	void assessmentmarks(string passedId) {}
	void createCourseSchedule(string passedId) {}
	void add_Course();
	void add_Course(string course_name, string course_code, string select_Class, string Parent_Course);
	void view_Details(int value);
	int nameOF_Courses();
	void feeStatus(string passedid) {}
	void viewGrades(string loginSId) {}
	void class_count();
	void viewAttendance(string passedId) {}
	void assigncourse();
	void markAttendance() {}
	void assignGrades() {}
	void addmarks();
	void editmarks();
};

class Teacher : public Administrator
{
public:
	string login();
	void displayAssignedCourse(string passedId);
	void createCourseSchedule(string passedId);
	void viewAttendance(string passedId) {}
	void viewGrades(string loginSId) {}
	void markAttendance();
	void assignGrades();
};
void read_Courses();
class Student : public Course
{
public:
	string login();
	void assessmentmarks(string passedId);
	void feeStatus(string passedid);
	void viewAttendance(string passedId);
	void viewGrades(string loginSId);
};
extern fstream in, oss, a, x; // Declared them globally.
extern Admin *rec[4];