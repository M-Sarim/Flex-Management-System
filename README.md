📚 Flex Management System

🔹 An OOP-based Student & Course Management System built in C++, designed to register students, manage courses, track attendance, record marks, and handle fees using a file-based storage system.

📌 Features
✔️ Student Registration – Register new students with unique IDs.
✔️ Course Management – Add, update, and assign courses to students.
✔️ Attendance Tracking – Keep student attendance records.
✔️ Marks Management – Input and update student marks.
✔️ Course Scheduling – Manage class schedules efficiently.
✔️ Fee Management – Maintain student fee records.
✔️ Persistent Storage – Uses text files (.txt) for data storage.

🗂 Project Structure
📂 Source Code Files

File	Description
Main.cpp	Entry point, manages program execution.
Source.cpp	Implements core functionalities.
Header.h	Header file containing class & function declarations.
📂 Data Files (Text-Based Storage)

File	Purpose
student.txt	Stores student details.
teacher.txt	Stores teacher information.
Course.txt	Contains course data.
attendance.txt	Records student attendance.
assigncourse.txt	Stores course assignments.
course_schedule.txt	Keeps track of course schedules.
addmarks.txt	Stores student marks.
fee.txt	Tracks student fee payments.
id.txt	Holds unique student and course IDs.
tid.txt	Stores teacher IDs.
🛠 Installation & Setup
1️⃣ Clone the Repository
bash
Copy
Edit
git clone https://github.com/M-Sarim/Flex-Management-System.git
cd Flex-Management-System
2️⃣ Compile & Run the Project
Using g++ (GCC for C++)
bash
Copy
Edit
g++ -o flex_system Main.cpp Source.cpp
./flex_system
Using Visual Studio
Open the project in Visual Studio
Click on Build > Run
3️⃣ Ensure Data Files are Available
All .txt files should be in the same directory as the executable for the system to function properly.

📌 Usage Guide
1️⃣ Register Students – Enter student details.
2️⃣ Assign Courses – Assign courses to students.
3️⃣ Record Attendance – Mark attendance.
4️⃣ Add Marks – Input student marks.
5️⃣ Manage Fees – Track student fee payments.
6️⃣ View Reports – Fetch student/course details.

🚀 Future Enhancements
🔹 Database Integration – Use MySQL or SQLite instead of text files.
🔹 Graphical User Interface (GUI) – Implement a UI with Qt or wxWidgets.
🔹 User Authentication – Add Admin, Teacher, and Student login.
🔹 Reporting System – Generate PDF reports for student performance.

🔗 Contributing
We welcome contributions! To contribute:

1️⃣ Fork the repository
2️⃣ Create a feature branch (feature-branch)
3️⃣ Commit your changes
4️⃣ Push the branch & create a Pull Request (PR)

📜 License
This project is licensed under the MIT License – see the LICENSE file for details.

📩 Contact
📧 muhammad2004sarim@gmail.com
