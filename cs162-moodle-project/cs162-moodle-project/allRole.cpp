#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"

Classes* findClass(Students* student, Classes* classes) {
    while (classes) {
        Students* cur = classes->students;
        while (cur) {
            if (cur->studentID == student->studentID)
                return classes;
            cur = cur->next;
        }
        classes = classes->next;
    }
	return nullptr;
}

void viewStudents(Students* studentList, Classes* classes) {
    cout << setw(10) << "Student ID" << setw(25) << "Full name" << setw(10) << "Class ID" << endl;

    while (studentList) {
        cout << setw(10) << studentList->studentID;
        cout << setw(25);
        cout << studentList->account->lastname + " " + studentList->account->firstname;
        cout << setw(10) << studentList->classID << endl;
        studentList = studentList->next;
    }
}

void viewDate(Date d) {
	if (d.day.size() != 2) cout << 0;
	cout << d.day << '/';
	if (d.month.size() != 2) cout << 0;
	cout << d.month << '/';
	cout << d.year << ' ';
}
void viewClasses(Classes* classes) {
	while (classes) {
		cout << classes->classID << '\n';
		classes = classes->next;
	}
}
void viewAccounts(Accounts* acc) {
	cout << "Main Profile\n";
	cout << "Username: " << acc->uName<<'\n';
	cout << "Role: ";
	switch (acc->role) {
	case 1:
		cout << ">>> Academic Staff <<<\n";
		break;
	case 0:
		cout << ">>> Student <<<\n";
		break;
	default:
		cout << "N/A\n";
	}
	cout << '\n'
         << "Last name: " << acc->lastname << '\n'
         << "First name: " << acc->firstname << '\n'
         << "Social ID: " << acc->socialID << '\n';
	if (acc->gender != 'O') {
		cout << "Gender: ";
		if (acc->gender == 'F') cout << "Female\n";
		else cout << "Male\n";
	}
	cout << "Day of birth: ";
	viewDate(acc->doB);
}

//
void viewCourses(Courses* Course){
	while (Course){
		cout << "Course ID: " << Course->courseID << '\n';
		cout << "Course name: " << Course->courseName << '\n';
        cout << "Number of credits: " << Course->credits << '\n';
        cout << "Current enrolled students: " << Course->numStudents << "/" << Course->maxStudents << '\n';
 		cout << "Lecturer: " << Course->lecturerName << '\n';
        cout << "Room: " << Course->room << '\n';
        cout << "Schedule: " << Course->day1 << " (" << Course->session1 << ") and " << Course->day2 << " (" << Course->session2 << ")\n";
		Course = Course->next;
	}
}
void viewScoreboards (Scoreboards* scoreb){
    while (scoreb){
        cout << "Course name: " << scoreb->courseName << endl;
        cout << "Course ID: " << scoreb->courseID << endl;
        cout << "Midterm score: " << scoreb->midtermScore << endl;
		cout << "Final score: " << scoreb->finalScore << endl;
		cout << "Lab score: " << scoreb->labScore << endl;
		cout << "Bonus score: " << scoreb->bonusScore << endl;
        scoreb = scoreb->next;
    }
}
void viewClassScoreboards(Classes* classes) {
	Students* student = classes->students;
	while (student) {
		double sum = 0, count = 0, allsum = 0, allcount = 0;
		Scoreboards* scoreBoards = student->scoreBoards;
		cout << student->account->firstname << ' ' << student->account->lastname << ": \n";
		while (scoreBoards) {
			//check if in the semester
			if (student->enrolledCourse->findCourseByID(scoreBoards->courseID)) {
				cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
				count++;
				sum += scoreBoards->finalScore;
			}
			allcount++;
			allsum += scoreBoards->finalScore;
		}
		cout.precision(2);
		if (count!=0) cout << "   Semester's GPA: " << (double)(sum / count) << '\n';
		else cout << "   Semester's GPA: " << "N/A" << '\n';
		if (allcount!=0) cout << "   Overall GPA: " << (double)(allsum / allcount) << '\n';
		else cout << "   Overall GPA: " << "N/A" << '\n';
		cout.precision(6);
		student = student->next;
	}
}
void viewCourseScoreboards(Courses* course) {
	Students* student = course->studentList;
	while (student) {
		Scoreboards* scoreBoards = student->scoreBoards;
		cout << student->account->firstname << ' ' << student->account->lastname << ": \n";
		while (scoreBoards) {
			cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
		}
		student = student->next;
	}
}
//
bool check_match_username_password(Accounts*& accountList, string account, string password) {
	Accounts* cur = accountList;
	while (cur) {
		if ((account.compare(cur->uName) == 0) && (password.compare(cur->pwd) == 0)) {
			return true;
		}
		cur = cur->next;
	}
	return false;
}
void Login(Accounts*& accountList, int& status) {
	string username, password, log_input, re_log;
	cout << "LOGIN [Y/N]: "; getline(cin, log_input);
	while (true) {
		if (log_input == "N" || log_input == "n") {
			break;
		}
		if (log_input == "Y" || log_input == "y") {
			cout << "Username: "; getline(cin, username);
			cout << "Password: "; getline(cin, password);
			if (check_match_username_password(accountList, username, password)) {
				cout << "LOGIN SUCCESSFULLY";
			}
			else {
				cout << "Either password or username is wrong" << '\n';
				cout << "Press Y to re_login or N to stop "; getline(cin, re_log);
				if (re_log == "Y" || re_log == "y") {
					continue;
				}
				else {
					if (re_log == "N" || re_log == "n") {
						break;
					}
				}
			}
		}
	}
}