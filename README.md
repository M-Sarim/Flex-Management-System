# 📚 Flex Management System

<h1 align="center">📚 Flex Management System</h1>
<p align="center">
  <b>A C++ Object-Oriented Student & Course Management System</b><br>
  Manages student registration, courses, attendance, marks, and fees with a file-based storage system.
</p>

## 📌 Features
- **Student Registration**: Register new students with unique IDs.
- **Course Management**: Add, update, and assign courses to students.
- **Attendance Tracking**: Keep student attendance records.
- **Marks Management**: Input and update student marks.
- **Course Scheduling**: Manage class schedules efficiently.
- **Fee Management**: Maintain student fee records.
- **Persistent Storage**: Uses text files (.txt) for data storage.
  
---

## 🗂 Project Structure

### 📂 Source Code Files
| File          | Description                                      |
|--------------|--------------------------------------------------|
| `Main.cpp`   | Entry point, manages program execution.         |
| `Source.cpp` | Implements core functionalities.                |
| `Header.h`   | Contains class & function declarations.         |

### 📂 Data Files (Text-Based Storage)
| File                 | Purpose                                  |
|----------------------|-----------------------------------------|
| `student.txt`        | Stores student details.                 |
| `teacher.txt`        | Stores teacher information.             |
| `course.txt`         | Contains course data.                   |
| `attendance.txt`     | Records student attendance.             |
| `assigncourse.txt`   | Stores course assignments.              |
| `course_schedule.txt`| Keeps track of course schedules.        |
| `addmarks.txt`       | Stores student marks.                   |
| `fee.txt`            | Tracks student fee payments.            |
| `id.txt`             | Holds unique student and course IDs.    |
| `tid.txt`            | Stores teacher IDs.                     |

---

## 🛠 Installation & Setup

### 📌 1. Clone the Repository
git clone https://github.com/M-Sarim/Flex-Management-System.git
cd Flex-Management-System
📌 2. Compile & Run the Project
▶ Using g++ (GCC for C++)
g++ -o flex_system Main.cpp Source.cpp
./flex_system
▶ Using Visual Studio
Open the project in Visual Studio
Click on Build > Run
📌 3. Ensure Data Files Are Available
All .txt files must be in the same directory as the executable for the system to function correctly.

🎯 Usage Guide
🔹 Register Students – Enter student details.
🔹 Assign Courses – Assign courses to students.
🔹 Record Attendance – Mark student attendance.
🔹 Add Marks – Input student marks.
🔹 Manage Fees – Track student fee payments.
🔹 View Reports – Fetch student/course details.

🔮 Future Enhancements
🔹 Database Integration – Transition to MySQL or SQLite.
🔹 Graphical User Interface (GUI) – Develop a UI with Qt or wxWidgets.
🔹 User Authentication – Implement Admin, Teacher, and Student login.
🔹 Reporting System – Generate PDF reports for student performance.

🔗 Contributing
💡 Want to contribute? Follow these steps:

Fork the repository.
Create a feature branch (feature-branch).
Commit your changes.
Push the branch and create a Pull Request (PR).
📜 License
This project is licensed under the MIT License – see the LICENSE file for details.

📩 Contact
For any inquiries or suggestions, feel free to reach out:

📧 Email: muhammad2004sarim@gmail.com

<p align="center">💻 Developed with ❤️ by <b>Muhammad Sarim</b></p>
