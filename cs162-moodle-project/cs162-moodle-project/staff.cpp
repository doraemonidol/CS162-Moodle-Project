#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
#pragma warning(disable : 4996)
void updateCourseInfomation(Courses* courseList) {
    viewCourses(courseList);
    string courseID;
    while (true) {
        cout << "---------------\n";
        cout << "Enter the course ID to update: \n>> ";
        cin >> courseID;
        Courses* curCourse = courseList;
        while (curCourse && curCourse->courseID != courseID) {
            curCourse = curCourse->next;
        }
        if (curCourse) {
            cout << "Leave blank to keep the original data!\n";
            string change = "";
            cout << "Course name: " << curCourse->courseName << " -> ";
            cin.get();
            getline(cin, change);
            if (change != "") {
                curCourse->courseName = change;
                change = "";
            }
            cout << "Number of credits: " << curCourse->credits << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->credits = stoi(change);
                change = "";
            }
            cout << "Maximum students: " << curCourse->maxStudents << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->maxStudents = stoi(change);
                change = "";
            }
            cout << "Lecturer: " << curCourse->lecturerName << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->lecturerName = change;
                change = "";
            }
            cout << "Room: " << curCourse->room << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }

            cout << "Schedule: " << curCourse->day1 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "           " << curCourse->session1 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "          " << curCourse->day2 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "           " << curCourse->session2 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }

            cout << "Update course successfully!\n";
            cout << "Press any key to Return to Main Screen!";
            _getch();
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}

void deleteCourseByID(Courses*& courseList) {
    string courseID;
    while (true) {
        cout << "Enter the course ID to delete: \n>> ";
        cin >> courseID;
        Courses *curCourse = courseList, *father = nullptr;
        while (curCourse && curCourse->courseID != courseID) {
            father = curCourse;
            curCourse = curCourse->next;
        }
        if (curCourse) {
            while (curCourse->studentList) {
                Students* tmp = curCourse->studentList->next;
                delete curCourse->studentList;
                curCourse->studentList = tmp;
            }
            if (father)
                father->next = curCourse->next;
            else
                courseList = courseList->next;
            // remove enrolled course for students here
            delete curCourse;
            cout << "Delete course successfully!\n";
            cout << "Press any key to Return to Main Screen!";
            _getch();
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}
Scoreboards* AddScoreBoard(Students* student, string courseID) {
    Scoreboards* scoreboard = student->scoreBoards;
    while (scoreboard && scoreboard->next) {
        scoreboard = scoreboard->next;
    }
    string courseName = student->enrolledCourse->findCourseByID(courseID)->courseName;
    if (scoreboard) {
        scoreboard->next = new Scoreboards;
        scoreboard->next->next = nullptr;
        scoreboard->next->courseID = courseID;
        scoreboard->next->courseName = courseName;
        return scoreboard->next;
    }
    else {
        scoreboard = new Scoreboards;
        scoreboard->next = nullptr;
        scoreboard->courseID = courseID;
        student->scoreBoards = scoreboard;
        scoreboard->courseName = courseName;
        return scoreboard;
    }
}

bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList) {
    Students* student = allStudentList->findStudentByID(studentID);
    if (!student) return false;
    Scoreboards* scoreboard = student->findScoreboardByID(courseID);
    if (!scoreboard) {
        if (coursesList->findCourseByID(courseID))
            scoreboard = AddScoreBoard(student, courseID);
        else return false;
    }
    cout << ">>>" << student->account->firstname << " " << student->account->lastname << "'s Scoreboard of " << coursesList->findCourseByID(courseID) << " Update Session<<<\n";
    double sc;
    cout << "(Input nothing to skip editing a session)\n";
    cout << "Midterm Score update to: ";
    cin >> sc;
    scoreboard->midtermScore = sc;
    cout << "Lab Score update to: ";
    cin >> sc;
    scoreboard->totalScore = sc;
    cout << "Final Score update to: ";
    cin >> sc;
    scoreboard->finalScore = sc;
    cout << "Bonus Score update to: ";
    cin >> sc;
    scoreboard->otherScore = sc;
    return true;
}

void courseToCSV(Courses* course) {
    FileOutputManager f;
    f.open("./Database/courseCSV.txt");
    cout << course->courseID << '\n';
    cout << "Student ID, Name\n";
    Students* student = course->studentList;
    while (student) {
        cout << student->studentID << ", " << student->account->firstname << " " << student->account->lastname << '\n';
    }
    f.back();
}

void CSVToScoreboard(Courses* course) {
    ifstream f;
    f.open("./Database/scoreboardCSV.txt");
    string trash="231", courseID;
    f >> courseID;
    f.get();
    getline(f, trash);
    while (!f.eof()) {
        string studentID = "", no = "", name = "";
        getline(f, no, ',');
        f.get();
        getline(f, studentID, ',');
        f.get();
        getline(f, name, ',');
        f.get();
        Scoreboards* scoreboard = course->findStudentByID(studentID)->findScoreboardByID(courseID);
        if (!scoreboard) {
            scoreboard = AddScoreBoard(course->findStudentByID(studentID), courseID);
        }
        f >> scoreboard->totalScore;
        f.get();
        f >> scoreboard->midtermScore;
        f.get();
        f >> scoreboard->finalScore;
        f.get();
        f >> scoreboard->otherScore;
        f.get();
    }
    f.close();
}
  

void addSchoolYear (AcademicYears* &year){
    string tmp;
    cout << "Enter school year: ";
    cin >> tmp;
    AcademicYears* cur_year = new AcademicYears;
    cur_year->year = tmp;
    inpClasses(cur_year->classes);
    if (!year) {
        year = cur_year;
    } else {
        cur_year->next = year;
        year = cur_year;
    }
}  

void addSemester(Semesters* &smt){
    int tmp;
    Date d1,d2;
    cout << "Enter semester: ";
    cin >> tmp;
    cout << "Start date: ";
    inpDate(d1);
    cout << "End date ";
    inpDate(d2);
    Semesters* cur_smt = new Semesters;

    cur_smt->semesterNo = tmp;
    cur_smt->startDate = d1;
    cur_smt->endDate = d2;
    cout << "Course registration session\n";
    cout << "Start date: ";
    inpDate(d1);
    cout << "End date: ";
    inpDate(d2);
    inpCoursesUser(cur_smt->courses, d1, d2);

    if (!smt){
        smt = cur_smt;
    }
    else{
        cur_smt->next = smt;
        smt = cur_smt;
    }
}