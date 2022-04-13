#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
#include "loginScreen.h"
#include "inputClassCourse.h"

namespace CS162MoodleProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std;
    using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class functionScreen : public System::Windows::Forms::Form {
    public:
                bool Exit1 = false;
                AcademicYears* yearList2 = nullptr;
                Students* studentList2 = nullptr;
                Staffs* staffList2 = nullptr;
                Accounts* accountList2 = nullptr;
                Courses* curCourseUpdate = nullptr;

            private:
                System::Windows::Forms::ListView ^ viewStudentUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentLName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentFName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentClassID;

            private:
                System::Windows::Forms::ListView ^ viewCoSBUI;

            private:


            private:


            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBStudenID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBStudentName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBTotal;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBFinal;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBMid;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBOther;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCOSBClass;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentSocialID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentGender;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentdob;

            private:
                System::Windows::Forms::ListView ^ viewClSBUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBStudentID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBStudentName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBCourseID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBTotalMark;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBGPA;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBOGPA;

            private:
                System::Windows::Forms::ListView ^ viewClassUI;

            private:


            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUINo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUIYear;

            private:


            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUIClID;

            private:
                System::Windows::Forms::Panel ^ courseUpdateUI;

            private:


            private:
                System::Windows::Forms::Panel ^ updateCoursePanel;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseD2;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseS2;

            private:


            private:


            private:
                System::Windows::Forms::ComboBox ^ updateCourseD1;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseS1;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ labelWorkspaceName;

            private:
                System::Windows::Forms::TextBox ^ updateCourseName;

            private:
                System::Windows::Forms::Button ^ btnSave;

            private:
                System::Windows::Forms::Button ^ btRevertChanges;

            private:
                System::Windows::Forms::Label ^ label1;

            private:
                System::Windows::Forms::TextBox ^ updateCourseCre;

            private:
                System::Windows::Forms::Label ^ label2;

            private:
                System::Windows::Forms::Label ^ label10;

            private:
                System::Windows::Forms::TextBox ^ updateCourseMaxSt;

            private:
                System::Windows::Forms::Label ^ label3;

            private:
                System::Windows::Forms::TextBox ^ updateCourseLecturer;

            private:
                System::Windows::Forms::Label ^ label4;

            private:
                System::Windows::Forms::TextBox ^ updateCourseRoom;

            private:
                System::Windows::Forms::Label ^ label5;

            private:
                System::Windows::Forms::Label ^ label6;

            private:
                System::Windows::Forms::DateTimePicker ^ updateCourseRegisStart;

            private:
                System::Windows::Forms::Label ^ label7;

            private:
                System::Windows::Forms::Label ^ label8;

            private:
                System::Windows::Forms::Label ^ label9;

            private:
                System::Windows::Forms::DateTimePicker ^ updateCourseRegisEnd;

            private:
                System::Windows::Forms::Label ^ labelCourseList;

            private:


            private:
                System::Windows::Forms::Button ^ btDelCourse;

            private:
                System::Windows::Forms::ListBox ^ listCourses;

            private:
                System::Windows::Forms::Panel ^ panel1;

            private:
                System::Windows::Forms::Panel ^ panelSchoolYear;

            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label13;

            private:
                System::Windows::Forms::TextBox ^ classInput;

            private:


            private:
                System::Windows::Forms::Label ^ label11;

            private:
                System::Windows::Forms::Button ^ btnAddClass;

            private:
                System::Windows::Forms::TreeView ^ treeViewClass;

            private:
                System::Windows::Forms::Panel ^ panelAddStudent;

            private:


            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::ComboBox ^ gender;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label14;

            private:
                System::Windows::Forms::TextBox ^ studentID;

            private:
                System::Windows::Forms::Button ^ btnAddStd;

            private:
                System::Windows::Forms::Button ^ btnCancel;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label15;

            private:
                System::Windows::Forms::TextBox ^ fName;

            private:


            private:
                System::Windows::Forms::Label ^ label16;

            private:
                System::Windows::Forms::TextBox ^ lName;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label18;

            private:


            private:
                System::Windows::Forms::Label ^ label19;

            private:
                System::Windows::Forms::TextBox ^ socialID;

            private:
                System::Windows::Forms::DateTimePicker ^ doB;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label22;

            private:


            private:


            private:


            private:
                System::Windows::Forms::Panel ^ panel4;

            private:
                System::Windows::Forms::Panel ^ panel3;

            private:
                System::Windows::Forms::TextBox ^ endYear;

            private:


            private:
                System::Windows::Forms::Label ^ label12;

            private:
                System::Windows::Forms::TextBox ^ startYear;

            private:
                System::Windows::Forms::Button ^ btnFinish;

            private:
                System::Windows::Forms::Button ^ btnCancelAll;

            private:
                System::Windows::Forms::Button ^ btnFromFile;

            private:
                System::Windows::Forms::Panel ^ newSemesterUI;

            private:


            private:
                System::Windows::Forms::Button ^ button1;

            private:
                System::Windows::Forms::Button ^ button2;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label17;

            private:


            private:
                System::Windows::Forms::Label ^ label20;

            private:
                System::Windows::Forms::TextBox ^ newSem;

            private:


            private:
                System::Windows::Forms::Label ^ label21;

            private:
                System::Windows::Forms::ComboBox ^ newSemYear;

            private:


            private:


            private:


            private:
                System::Windows::Forms::ListBox ^ inputedCourseList;

            private:


            private:
                System::Windows::Forms::Panel ^ panel8;

            private:
                System::Windows::Forms::Label ^ label23;

            private:
                System::Windows::Forms::TextBox ^ nsCourseID;

            private:
                System::Windows::Forms::Button ^ nsBtnDone;

            private:


            private:


            private:


            private:
                System::Windows::Forms::Button ^ nsBtnAdd;

            private:
                System::Windows::Forms::Button ^ nsBtnCancel;

            private:


            private:


            private:
                System::Windows::Forms::ComboBox ^ nsDay2;

            private:
                System::Windows::Forms::ComboBox ^ nsSession2;

            private:


            private:


            private:
                System::Windows::Forms::ComboBox ^ nsDay1;

            private:
                System::Windows::Forms::ComboBox ^ nsSession1;

            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::Label ^ label29;

            private:
                System::Windows::Forms::TextBox ^ nsCourseName;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label30;

            private:
                System::Windows::Forms::TextBox ^ nsCredit;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label31;

            private:
                System::Windows::Forms::Label ^ label32;

            private:
                System::Windows::Forms::TextBox ^ nsMaxStd;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label33;

            private:
                System::Windows::Forms::TextBox ^ nsLecturerName;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label34;

            private:
                System::Windows::Forms::TextBox ^ nsRoom;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label35;

            private:
                System::Windows::Forms::Label ^ label36;

            private:


            private:


            private:


            private:


            private:


            private:
                System::Windows::Forms::DateTimePicker ^ semStartDate;

            private:
                System::Windows::Forms::DateTimePicker ^ semEndDate;

            private:
                System::Windows::Forms::DateTimePicker ^ nsRegisStart;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label37;

            private:
                System::Windows::Forms::Label ^ label38;

            private:
                System::Windows::Forms::Label ^ label39;

            private:
                System::Windows::Forms::DateTimePicker ^ nsRegisEnd;

            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:

                Accounts* curAccount;
	public:
		functionScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

        void setRole(int role)
        {
            if (role == 1) {
                staffFunctionPanel->Show();
                studentFunctionPanel->Hide();
            } else {
                staffFunctionPanel->Hide();
                studentFunctionPanel->Show();
            }
        }

        void getData(AcademicYears* year, Students* student, Staffs* staff, Accounts* account, Accounts* cur_account)
        {
            yearList2 = year;
            studentList2 = student;
            staffList2 = staff;
            accountList2 = account;
            curAccount = cur_account;
        }

        void returnData(AcademicYears*& year, Students*& student, Staffs*& staff, Accounts*& account)
        {
            year = yearList2;
            student = studentList2;
            staff = staffList2;
            account = accountList2;
        }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~functionScreen()
		{
			if (components)
			{
				delete components;
			}
		}

            private:
                System::Windows::Forms::Label ^ greetText;

            private:
                System::Windows::Forms::Button ^ btMinimise;

            private:
                System::Windows::Forms::Button ^ btCloseApp;

            private:
                System::Windows::Forms::Button ^ btMinimiseBG;

            private:
                System::Windows::Forms::Button ^ btCloseBG;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ allRolePanel;

            private:
                System::Windows::Forms::Button ^ showProfile;

            private:
                System::Windows::Forms::Button ^ changePassword;

            private:
                System::Windows::Forms::Button ^ logoutBTN;

            private:


            private:
                System::Windows::Forms::Timer ^ timer1;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ staffFunctionPanel;

            private:
                System::Windows::Forms::Button ^ newbtn;

            private:
                System::Windows::Forms::Button ^ viewbtn;

            private:
                System::Windows::Forms::Label ^ time;

            private:
                System::Windows::Forms::Label ^ date;

            private:
                System::Windows::Forms::Timer ^ timeController;

            private:
                System::Windows::Forms::Button ^ updateCoursebtn;

            private:


            private:
                System::Windows::Forms::Button ^ button4;

            private:
                System::Windows::Forms::Button ^ button5;

            private:
                System::Windows::Forms::Button ^ button6;

            private:
                System::Windows::Forms::Button ^ newSchoolYear;

            private:
                System::Windows::Forms::Button ^ newSemester;

            private:
                System::Windows::Forms::Button ^ viewCourses;

            private:
                System::Windows::Forms::Button ^ viewScoreboard;

            private:
                System::Windows::Forms::Button ^ viewStudentList;

            private:
                System::Windows::Forms::Button ^ viewClasses;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ studentFunctionPanel;

            private:
                System::Windows::Forms::Button ^ courseRegistrationbtn;

            private:
                System::Windows::Forms::Button ^ studentView;

            private:
                System::Windows::Forms::Button ^ studentViewCourse;

            private:
                System::Windows::Forms::Button ^ studentViewScoreboard;

            private:
                System::Windows::Forms::ListView ^ viewCourseUI;

            private:


            private:


            private:


            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseNo;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseID;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseName;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseCre;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseStudentNum;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseD1;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseD2;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseRoom;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseLecturer;

            private:
                System::ComponentModel::IContainer ^ components;

            protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

        private:
            int selectedIndex = -1;

        private:
            int selectedItemIndex = -1;

        private:
            List<String^>^ coursesToUpdate;

        private:
            List<String ^> ^ classIDList;

        private:
            List<List<studentClass^> ^> ^ stdClassList;

        private:
            List<courseClass ^>^ inputedCourse;
        private:
            int classIDIndex;
            int studentIndex;
            
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
                    this->components = (gcnew System::ComponentModel::Container());
                    System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(functionScreen::typeid));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup3 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup4 = (gcnew System::Windows::Forms::ListViewGroup(L"Overall Gpa", System::Windows::Forms::HorizontalAlignment::Center));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup5 = (gcnew System::Windows::Forms::ListViewGroup(L"Overall Gpa", System::Windows::Forms::HorizontalAlignment::Center));
                    this->greetText = (gcnew System::Windows::Forms::Label());
                    this->btMinimise = (gcnew System::Windows::Forms::Button());
                    this->btCloseApp = (gcnew System::Windows::Forms::Button());
                    this->btMinimiseBG = (gcnew System::Windows::Forms::Button());
                    this->btCloseBG = (gcnew System::Windows::Forms::Button());
                    this->allRolePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->logoutBTN = (gcnew System::Windows::Forms::Button());
                    this->changePassword = (gcnew System::Windows::Forms::Button());
                    this->showProfile = (gcnew System::Windows::Forms::Button());
                    this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
                    this->staffFunctionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->newbtn = (gcnew System::Windows::Forms::Button());
                    this->newSchoolYear = (gcnew System::Windows::Forms::Button());
                    this->newSemester = (gcnew System::Windows::Forms::Button());
                    this->viewbtn = (gcnew System::Windows::Forms::Button());
                    this->viewStudentList = (gcnew System::Windows::Forms::Button());
                    this->viewScoreboard = (gcnew System::Windows::Forms::Button());
                    this->viewCourses = (gcnew System::Windows::Forms::Button());
                    this->viewClasses = (gcnew System::Windows::Forms::Button());
                    this->updateCoursebtn = (gcnew System::Windows::Forms::Button());
                    this->button4 = (gcnew System::Windows::Forms::Button());
                    this->button5 = (gcnew System::Windows::Forms::Button());
                    this->button6 = (gcnew System::Windows::Forms::Button());
                    this->time = (gcnew System::Windows::Forms::Label());
                    this->date = (gcnew System::Windows::Forms::Label());
                    this->timeController = (gcnew System::Windows::Forms::Timer(this->components));
                    this->studentFunctionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->studentView = (gcnew System::Windows::Forms::Button());
                    this->courseRegistrationbtn = (gcnew System::Windows::Forms::Button());
                    this->studentViewCourse = (gcnew System::Windows::Forms::Button());
                    this->studentViewScoreboard = (gcnew System::Windows::Forms::Button());
                    this->viewCourseUI = (gcnew System::Windows::Forms::ListView());
                    this->enrolledCourseNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseCre = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseStudentNum = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseD1 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseD2 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseRoom = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseLecturer = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentUI = (gcnew System::Windows::Forms::ListView());
                    this->viewStudentNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentLName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentFName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentSocialID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentGender = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentdob = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentClassID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBUI = (gcnew System::Windows::Forms::ListView());
                    this->viewCoSBNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBStudenID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBStudentName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCOSBClass = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBTotal = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBFinal = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBMid = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBOther = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBUI = (gcnew System::Windows::Forms::ListView());
                    this->viewClSBNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBStudentID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBStudentName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBCourseID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBTotalMark = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBGPA = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBOGPA = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUI = (gcnew System::Windows::Forms::ListView());
                    this->viewClassUINo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUIYear = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUIClID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->courseUpdateUI = (gcnew System::Windows::Forms::Panel());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->listCourses = (gcnew System::Windows::Forms::ListBox());
                    this->btDelCourse = (gcnew System::Windows::Forms::Button());
                    this->labelCourseList = (gcnew System::Windows::Forms::Label());
                    this->updateCoursePanel = (gcnew System::Windows::Forms::Panel());
                    this->updateCourseD2 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseS2 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseD1 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseS1 = (gcnew System::Windows::Forms::ComboBox());
                    this->labelWorkspaceName = (gcnew System::Windows::Forms::Label());
                    this->updateCourseName = (gcnew System::Windows::Forms::TextBox());
                    this->btnSave = (gcnew System::Windows::Forms::Button());
                    this->btRevertChanges = (gcnew System::Windows::Forms::Button());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseCre = (gcnew System::Windows::Forms::TextBox());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->label10 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseMaxSt = (gcnew System::Windows::Forms::TextBox());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseLecturer = (gcnew System::Windows::Forms::TextBox());
                    this->label4 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRoom = (gcnew System::Windows::Forms::TextBox());
                    this->label5 = (gcnew System::Windows::Forms::Label());
                    this->label6 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRegisStart = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label7 = (gcnew System::Windows::Forms::Label());
                    this->label8 = (gcnew System::Windows::Forms::Label());
                    this->label9 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRegisEnd = (gcnew System::Windows::Forms::DateTimePicker());
                    this->panelSchoolYear = (gcnew System::Windows::Forms::Panel());
                    this->btnFinish = (gcnew System::Windows::Forms::Button());
                    this->btnCancelAll = (gcnew System::Windows::Forms::Button());
                    this->treeViewClass = (gcnew System::Windows::Forms::TreeView());
                    this->panel4 = (gcnew System::Windows::Forms::Panel());
                    this->panel3 = (gcnew System::Windows::Forms::Panel());
                    this->endYear = (gcnew System::Windows::Forms::TextBox());
                    this->label12 = (gcnew System::Windows::Forms::Label());
                    this->startYear = (gcnew System::Windows::Forms::TextBox());
                    this->label13 = (gcnew System::Windows::Forms::Label());
                    this->classInput = (gcnew System::Windows::Forms::TextBox());
                    this->label11 = (gcnew System::Windows::Forms::Label());
                    this->btnAddClass = (gcnew System::Windows::Forms::Button());
                    this->panelAddStudent = (gcnew System::Windows::Forms::Panel());
                    this->btnFromFile = (gcnew System::Windows::Forms::Button());
                    this->gender = (gcnew System::Windows::Forms::ComboBox());
                    this->label14 = (gcnew System::Windows::Forms::Label());
                    this->studentID = (gcnew System::Windows::Forms::TextBox());
                    this->btnAddStd = (gcnew System::Windows::Forms::Button());
                    this->btnCancel = (gcnew System::Windows::Forms::Button());
                    this->label15 = (gcnew System::Windows::Forms::Label());
                    this->fName = (gcnew System::Windows::Forms::TextBox());
                    this->label16 = (gcnew System::Windows::Forms::Label());
                    this->lName = (gcnew System::Windows::Forms::TextBox());
                    this->label18 = (gcnew System::Windows::Forms::Label());
                    this->label19 = (gcnew System::Windows::Forms::Label());
                    this->socialID = (gcnew System::Windows::Forms::TextBox());
                    this->doB = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label22 = (gcnew System::Windows::Forms::Label());
                    this->newSemesterUI = (gcnew System::Windows::Forms::Panel());
                    this->semStartDate = (gcnew System::Windows::Forms::DateTimePicker());
                    this->semEndDate = (gcnew System::Windows::Forms::DateTimePicker());
                    this->newSemYear = (gcnew System::Windows::Forms::ComboBox());
                    this->inputedCourseList = (gcnew System::Windows::Forms::ListBox());
                    this->panel8 = (gcnew System::Windows::Forms::Panel());
                    this->label23 = (gcnew System::Windows::Forms::Label());
                    this->nsCourseID = (gcnew System::Windows::Forms::TextBox());
                    this->nsBtnDone = (gcnew System::Windows::Forms::Button());
                    this->nsBtnAdd = (gcnew System::Windows::Forms::Button());
                    this->nsBtnCancel = (gcnew System::Windows::Forms::Button());
                    this->nsDay2 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsSession2 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsDay1 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsSession1 = (gcnew System::Windows::Forms::ComboBox());
                    this->label29 = (gcnew System::Windows::Forms::Label());
                    this->nsCourseName = (gcnew System::Windows::Forms::TextBox());
                    this->label30 = (gcnew System::Windows::Forms::Label());
                    this->nsCredit = (gcnew System::Windows::Forms::TextBox());
                    this->label31 = (gcnew System::Windows::Forms::Label());
                    this->label32 = (gcnew System::Windows::Forms::Label());
                    this->nsMaxStd = (gcnew System::Windows::Forms::TextBox());
                    this->label33 = (gcnew System::Windows::Forms::Label());
                    this->nsLecturerName = (gcnew System::Windows::Forms::TextBox());
                    this->label34 = (gcnew System::Windows::Forms::Label());
                    this->nsRoom = (gcnew System::Windows::Forms::TextBox());
                    this->label35 = (gcnew System::Windows::Forms::Label());
                    this->label36 = (gcnew System::Windows::Forms::Label());
                    this->nsRegisStart = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label37 = (gcnew System::Windows::Forms::Label());
                    this->label38 = (gcnew System::Windows::Forms::Label());
                    this->label39 = (gcnew System::Windows::Forms::Label());
                    this->nsRegisEnd = (gcnew System::Windows::Forms::DateTimePicker());
                    this->button1 = (gcnew System::Windows::Forms::Button());
                    this->button2 = (gcnew System::Windows::Forms::Button());
                    this->label17 = (gcnew System::Windows::Forms::Label());
                    this->label20 = (gcnew System::Windows::Forms::Label());
                    this->newSem = (gcnew System::Windows::Forms::TextBox());
                    this->label21 = (gcnew System::Windows::Forms::Label());
                    this->allRolePanel->SuspendLayout();
                    this->staffFunctionPanel->SuspendLayout();
                    this->studentFunctionPanel->SuspendLayout();
                    this->courseUpdateUI->SuspendLayout();
                    this->panel1->SuspendLayout();
                    this->updateCoursePanel->SuspendLayout();
                    this->panelSchoolYear->SuspendLayout();
                    this->panelAddStudent->SuspendLayout();
                    this->newSemesterUI->SuspendLayout();
                    this->panel8->SuspendLayout();
                    this->SuspendLayout();
                    //
                    // greetText
                    //
                    this->greetText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->greetText->BackColor = System::Drawing::Color::Transparent;
                    this->greetText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->greetText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
                    this->greetText->ForeColor = System::Drawing::Color::White;
                    this->greetText->Location = System::Drawing::Point(928, 62);
                    this->greetText->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->greetText->Name = L"greetText";
                    this->greetText->Size = System::Drawing::Size(493, 37);
                    this->greetText->TabIndex = 9;
                    this->greetText->Text = L"Good morning, Dang Hoang Nhat Hung";
                    this->greetText->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
                    this->greetText->MouseEnter += gcnew System::EventHandler(this, &functionScreen::greetText_MouseEnter);
                    this->greetText->MouseHover += gcnew System::EventHandler(this, &functionScreen::greetText_MouseEnter);
                    //
                    // btMinimise
                    //
                    this->btMinimise->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btMinimise.BackgroundImage")));
                    this->btMinimise->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btMinimise->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btMinimise->FlatAppearance->BorderSize = 0;
                    this->btMinimise->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimise->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimise->Location = System::Drawing::Point(1360, 26);
                    this->btMinimise->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btMinimise->Name = L"btMinimise";
                    this->btMinimise->Size = System::Drawing::Size(20, 1);
                    this->btMinimise->TabIndex = 24;
                    this->btMinimise->UseMnemonic = false;
                    this->btMinimise->UseVisualStyleBackColor = false;
                    this->btMinimise->Click += gcnew System::EventHandler(this, &functionScreen::btMinimise_Click);
                    this->btMinimise->MouseHover += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    //
                    // btCloseApp
                    //
                    this->btCloseApp->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btCloseApp.BackgroundImage")));
                    this->btCloseApp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btCloseApp->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btCloseApp->FlatAppearance->BorderSize = 0;
                    this->btCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseApp->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->Location = System::Drawing::Point(1398, 18);
                    this->btCloseApp->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btCloseApp->Name = L"btCloseApp";
                    this->btCloseApp->Size = System::Drawing::Size(16, 16);
                    this->btCloseApp->TabIndex = 23;
                    this->btCloseApp->UseMnemonic = false;
                    this->btCloseApp->UseVisualStyleBackColor = false;
                    this->btCloseApp->Click += gcnew System::EventHandler(this, &functionScreen::btCloseApp_Click);
                    this->btCloseApp->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    this->btCloseApp->MouseHover += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    //
                    // btMinimiseBG
                    //
                    this->btMinimiseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btMinimiseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btMinimiseBG->FlatAppearance->BorderSize = 0;
                    this->btMinimiseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimiseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->Location = System::Drawing::Point(1355, 11);
                    this->btMinimiseBG->Name = L"btMinimiseBG";
                    this->btMinimiseBG->Size = System::Drawing::Size(30, 30);
                    this->btMinimiseBG->TabIndex = 25;
                    this->btMinimiseBG->UseVisualStyleBackColor = false;
                    this->btMinimiseBG->Click += gcnew System::EventHandler(this, &functionScreen::btMinimise_Click);
                    this->btMinimiseBG->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    this->btMinimiseBG->MouseLeave += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseLeave);
                    this->btMinimiseBG->MouseHover += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    //
                    // btCloseBG
                    //
                    this->btCloseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btCloseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btCloseBG->FlatAppearance->BorderSize = 0;
                    this->btCloseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->Location = System::Drawing::Point(1391, 11);
                    this->btCloseBG->Name = L"btCloseBG";
                    this->btCloseBG->Size = System::Drawing::Size(30, 30);
                    this->btCloseBG->TabIndex = 26;
                    this->btCloseBG->UseVisualStyleBackColor = false;
                    this->btCloseBG->Click += gcnew System::EventHandler(this, &functionScreen::btCloseApp_Click);
                    this->btCloseBG->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    this->btCloseBG->MouseLeave += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseLeave);
                    this->btCloseBG->MouseHover += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    //
                    // allRolePanel
                    //
                    this->allRolePanel->BackColor = System::Drawing::Color::Transparent;
                    this->allRolePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->allRolePanel->Controls->Add(this->logoutBTN);
                    this->allRolePanel->Controls->Add(this->changePassword);
                    this->allRolePanel->Controls->Add(this->showProfile);
                    this->allRolePanel->FlowDirection = System::Windows::Forms::FlowDirection::BottomUp;
                    this->allRolePanel->ForeColor = System::Drawing::Color::Transparent;
                    this->allRolePanel->Location = System::Drawing::Point(1179, 83);
                    this->allRolePanel->Name = L"allRolePanel";
                    this->allRolePanel->Size = System::Drawing::Size(230, 168);
                    this->allRolePanel->TabIndex = 27;
                    this->allRolePanel->Visible = false;
                    this->allRolePanel->MouseEnter += gcnew System::EventHandler(this, &functionScreen::allRolePanel_MouseEnter);
                    this->allRolePanel->MouseHover += gcnew System::EventHandler(this, &functionScreen::allRolePanel_MouseEnter);
                    //
                    // logoutBTN
                    //
                    this->logoutBTN->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->logoutBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->logoutBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->logoutBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->logoutBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->logoutBTN->ForeColor = System::Drawing::Color::Red;
                    this->logoutBTN->Location = System::Drawing::Point(3, 120);
                    this->logoutBTN->Name = L"logoutBTN";
                    this->logoutBTN->Size = System::Drawing::Size(226, 45);
                    this->logoutBTN->TabIndex = 4;
                    this->logoutBTN->Text = L"Log out";
                    this->logoutBTN->UseVisualStyleBackColor = true;
                    this->logoutBTN->Click += gcnew System::EventHandler(this, &functionScreen::logoutBTN_Click);
                    //
                    // changePassword
                    //
                    this->changePassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->changePassword->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->changePassword->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->changePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->changePassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->changePassword->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->changePassword->Location = System::Drawing::Point(3, 69);
                    this->changePassword->Name = L"changePassword";
                    this->changePassword->Size = System::Drawing::Size(226, 45);
                    this->changePassword->TabIndex = 3;
                    this->changePassword->Text = L"Change Password";
                    this->changePassword->UseVisualStyleBackColor = true;
                    //
                    // showProfile
                    //
                    this->showProfile->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->showProfile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->showProfile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->showProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->showProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->showProfile->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->showProfile->Location = System::Drawing::Point(3, 18);
                    this->showProfile->Name = L"showProfile";
                    this->showProfile->Size = System::Drawing::Size(226, 45);
                    this->showProfile->TabIndex = 2;
                    this->showProfile->Text = L"Profile";
                    this->showProfile->UseVisualStyleBackColor = true;
                    //
                    // timer1
                    //
                    this->timer1->Tick += gcnew System::EventHandler(this, &functionScreen::timer1_Tick);
                    //
                    // staffFunctionPanel
                    //
                    this->staffFunctionPanel->BackColor = System::Drawing::Color::Transparent;
                    this->staffFunctionPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->staffFunctionPanel->Controls->Add(this->newbtn);
                    this->staffFunctionPanel->Controls->Add(this->newSchoolYear);
                    this->staffFunctionPanel->Controls->Add(this->newSemester);
                    this->staffFunctionPanel->Controls->Add(this->viewbtn);
                    this->staffFunctionPanel->Controls->Add(this->viewStudentList);
                    this->staffFunctionPanel->Controls->Add(this->viewScoreboard);
                    this->staffFunctionPanel->Controls->Add(this->viewCourses);
                    this->staffFunctionPanel->Controls->Add(this->viewClasses);
                    this->staffFunctionPanel->Controls->Add(this->updateCoursebtn);
                    this->staffFunctionPanel->Controls->Add(this->button4);
                    this->staffFunctionPanel->Controls->Add(this->button5);
                    this->staffFunctionPanel->Controls->Add(this->button6);
                    this->staffFunctionPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->staffFunctionPanel->ForeColor = System::Drawing::Color::Transparent;
                    this->staffFunctionPanel->Location = System::Drawing::Point(29, 104);
                    this->staffFunctionPanel->Name = L"staffFunctionPanel";
                    this->staffFunctionPanel->Size = System::Drawing::Size(232, 696);
                    this->staffFunctionPanel->TabIndex = 28;
                    this->staffFunctionPanel->Visible = false;
                    //
                    // newbtn
                    //
                    this->newbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->newbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->newbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newbtn->ForeColor = System::Drawing::Color::White;
                    this->newbtn->Location = System::Drawing::Point(3, 3);
                    this->newbtn->Name = L"newbtn";
                    this->newbtn->Size = System::Drawing::Size(226, 45);
                    this->newbtn->TabIndex = 3;
                    this->newbtn->Text = L"New...";
                    this->newbtn->UseVisualStyleBackColor = true;
                    this->newbtn->Click += gcnew System::EventHandler(this, &functionScreen::newbtn_Click);
                    //
                    // newSchoolYear
                    //
                    this->newSchoolYear->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newSchoolYear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->newSchoolYear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->newSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSchoolYear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newSchoolYear->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->newSchoolYear->Location = System::Drawing::Point(22, 54);
                    this->newSchoolYear->Name = L"newSchoolYear";
                    this->newSchoolYear->Size = System::Drawing::Size(188, 40);
                    this->newSchoolYear->TabIndex = 9;
                    this->newSchoolYear->Text = L"School Year";
                    this->newSchoolYear->UseVisualStyleBackColor = true;
                    this->newSchoolYear->Visible = false;
                    this->newSchoolYear->Click += gcnew System::EventHandler(this, &functionScreen::newSchoolYear_Click);
                    //
                    // newSemester
                    //
                    this->newSemester->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newSemester->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->newSemester->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->newSemester->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSemester->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newSemester->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->newSemester->Location = System::Drawing::Point(22, 100);
                    this->newSemester->Name = L"newSemester";
                    this->newSemester->Size = System::Drawing::Size(188, 40);
                    this->newSemester->TabIndex = 8;
                    this->newSemester->Text = L"Semester";
                    this->newSemester->UseVisualStyleBackColor = true;
                    this->newSemester->Visible = false;
                    this->newSemester->Click += gcnew System::EventHandler(this, &functionScreen::newSemester_Click);
                    //
                    // viewbtn
                    //
                    this->viewbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->viewbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->viewbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewbtn->ForeColor = System::Drawing::Color::White;
                    this->viewbtn->Location = System::Drawing::Point(3, 146);
                    this->viewbtn->Name = L"viewbtn";
                    this->viewbtn->Size = System::Drawing::Size(226, 45);
                    this->viewbtn->TabIndex = 2;
                    this->viewbtn->Text = L"View...";
                    this->viewbtn->UseVisualStyleBackColor = true;
                    this->viewbtn->Click += gcnew System::EventHandler(this, &functionScreen::viewbtn_Click);
                    //
                    // viewStudentList
                    //
                    this->viewStudentList->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewStudentList->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewStudentList->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewStudentList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewStudentList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewStudentList->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewStudentList->Location = System::Drawing::Point(22, 197);
                    this->viewStudentList->Name = L"viewStudentList";
                    this->viewStudentList->Size = System::Drawing::Size(188, 40);
                    this->viewStudentList->TabIndex = 12;
                    this->viewStudentList->Text = L"Students List";
                    this->viewStudentList->UseVisualStyleBackColor = true;
                    this->viewStudentList->Visible = false;
                    this->viewStudentList->Click += gcnew System::EventHandler(this, &functionScreen::viewStudentList_Click);
                    //
                    // viewScoreboard
                    //
                    this->viewScoreboard->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewScoreboard->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewScoreboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewScoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewScoreboard->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewScoreboard->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewScoreboard->Location = System::Drawing::Point(22, 243);
                    this->viewScoreboard->Name = L"viewScoreboard";
                    this->viewScoreboard->Size = System::Drawing::Size(188, 40);
                    this->viewScoreboard->TabIndex = 10;
                    this->viewScoreboard->Text = L"Scoreboard";
                    this->viewScoreboard->UseVisualStyleBackColor = true;
                    this->viewScoreboard->Visible = false;
                    this->viewScoreboard->Click += gcnew System::EventHandler(this, &functionScreen::viewScoreboard_Click);
                    //
                    // viewCourses
                    //
                    this->viewCourses->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewCourses->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewCourses->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewCourses->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewCourses->Location = System::Drawing::Point(22, 289);
                    this->viewCourses->Name = L"viewCourses";
                    this->viewCourses->RightToLeft = System::Windows::Forms::RightToLeft::No;
                    this->viewCourses->Size = System::Drawing::Size(188, 40);
                    this->viewCourses->TabIndex = 11;
                    this->viewCourses->Text = L"Courses";
                    this->viewCourses->UseVisualStyleBackColor = true;
                    this->viewCourses->Visible = false;
                    this->viewCourses->Click += gcnew System::EventHandler(this, &functionScreen::viewCourses_Click);
                    //
                    // viewClasses
                    //
                    this->viewClasses->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewClasses->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewClasses->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewClasses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewClasses->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewClasses->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewClasses->Location = System::Drawing::Point(22, 335);
                    this->viewClasses->Name = L"viewClasses";
                    this->viewClasses->Size = System::Drawing::Size(188, 40);
                    this->viewClasses->TabIndex = 13;
                    this->viewClasses->Text = L"Classes";
                    this->viewClasses->UseVisualStyleBackColor = true;
                    this->viewClasses->Visible = false;
                    this->viewClasses->Click += gcnew System::EventHandler(this, &functionScreen::viewClasses_Click);
                    //
                    // updateCoursebtn
                    //
                    this->updateCoursebtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->updateCoursebtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->updateCoursebtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->updateCoursebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCoursebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->updateCoursebtn->ForeColor = System::Drawing::Color::White;
                    this->updateCoursebtn->Location = System::Drawing::Point(3, 381);
                    this->updateCoursebtn->Name = L"updateCoursebtn";
                    this->updateCoursebtn->Size = System::Drawing::Size(226, 45);
                    this->updateCoursebtn->TabIndex = 4;
                    this->updateCoursebtn->Text = L"Update Course Info";
                    this->updateCoursebtn->UseVisualStyleBackColor = true;
                    this->updateCoursebtn->Click += gcnew System::EventHandler(this, &functionScreen::updateCoursebtn_Click);
                    //
                    // button4
                    //
                    this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button4->ForeColor = System::Drawing::Color::White;
                    this->button4->Location = System::Drawing::Point(3, 432);
                    this->button4->Name = L"button4";
                    this->button4->Size = System::Drawing::Size(226, 45);
                    this->button4->TabIndex = 5;
                    this->button4->Text = L"Delete Course";
                    this->button4->UseVisualStyleBackColor = true;
                    //
                    // button5
                    //
                    this->button5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button5->ForeColor = System::Drawing::Color::White;
                    this->button5->Location = System::Drawing::Point(3, 483);
                    this->button5->Name = L"button5";
                    this->button5->Size = System::Drawing::Size(226, 45);
                    this->button5->TabIndex = 6;
                    this->button5->Text = L"Import Scoreboard";
                    this->button5->UseVisualStyleBackColor = true;
                    //
                    // button6
                    //
                    this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button6->ForeColor = System::Drawing::Color::White;
                    this->button6->Location = System::Drawing::Point(3, 534);
                    this->button6->Name = L"button6";
                    this->button6->Size = System::Drawing::Size(226, 45);
                    this->button6->TabIndex = 7;
                    this->button6->Text = L"Update Student Result";
                    this->button6->UseVisualStyleBackColor = true;
                    //
                    // time
                    //
                    this->time->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->time->BackColor = System::Drawing::Color::Transparent;
                    this->time->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->time->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 32));
                    this->time->ForeColor = System::Drawing::Color::White;
                    this->time->Location = System::Drawing::Point(-20, 689);
                    this->time->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->time->Name = L"time";
                    this->time->Size = System::Drawing::Size(159, 73);
                    this->time->TabIndex = 31;
                    this->time->Text = L"10:05";
                    this->time->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
                    //
                    // date
                    //
                    this->date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->date->BackColor = System::Drawing::Color::Transparent;
                    this->date->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->date->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 16));
                    this->date->ForeColor = System::Drawing::Color::Transparent;
                    this->date->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->date->Location = System::Drawing::Point(151, 689);
                    this->date->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->date->Name = L"date";
                    this->date->Size = System::Drawing::Size(93, 73);
                    this->date->TabIndex = 32;
                    this->date->Text = L"MAR 17 2022";
                    this->date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                    //
                    // timeController
                    //
                    this->timeController->Tick += gcnew System::EventHandler(this, &functionScreen::timeController_Tick);
                    //
                    // studentFunctionPanel
                    //
                    this->studentFunctionPanel->BackColor = System::Drawing::Color::Transparent;
                    this->studentFunctionPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->studentFunctionPanel->Controls->Add(this->studentView);
                    this->studentFunctionPanel->Controls->Add(this->courseRegistrationbtn);
                    this->studentFunctionPanel->Controls->Add(this->studentViewCourse);
                    this->studentFunctionPanel->Controls->Add(this->studentViewScoreboard);
                    this->studentFunctionPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->studentFunctionPanel->ForeColor = System::Drawing::Color::Transparent;
                    this->studentFunctionPanel->Location = System::Drawing::Point(290, 736);
                    this->studentFunctionPanel->Name = L"studentFunctionPanel";
                    this->studentFunctionPanel->Size = System::Drawing::Size(232, 696);
                    this->studentFunctionPanel->TabIndex = 33;
                    this->studentFunctionPanel->Visible = false;
                    //
                    // studentView
                    //
                    this->studentView->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentView->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->studentView->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->studentView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentView->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentView->ForeColor = System::Drawing::Color::White;
                    this->studentView->Location = System::Drawing::Point(3, 3);
                    this->studentView->Name = L"studentView";
                    this->studentView->Size = System::Drawing::Size(226, 45);
                    this->studentView->TabIndex = 2;
                    this->studentView->Text = L"View...";
                    this->studentView->UseVisualStyleBackColor = true;
                    this->studentView->Click += gcnew System::EventHandler(this, &functionScreen::studentView_Click);
                    //
                    // courseRegistrationbtn
                    //
                    this->courseRegistrationbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->courseRegistrationbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->courseRegistrationbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->courseRegistrationbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->courseRegistrationbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->courseRegistrationbtn->ForeColor = System::Drawing::Color::White;
                    this->courseRegistrationbtn->Location = System::Drawing::Point(3, 54);
                    this->courseRegistrationbtn->Name = L"courseRegistrationbtn";
                    this->courseRegistrationbtn->Size = System::Drawing::Size(226, 45);
                    this->courseRegistrationbtn->TabIndex = 3;
                    this->courseRegistrationbtn->Text = L"Course Registration";
                    this->courseRegistrationbtn->UseVisualStyleBackColor = true;
                    //
                    // studentViewCourse
                    //
                    this->studentViewCourse->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentViewCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->studentViewCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->studentViewCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentViewCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentViewCourse->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->studentViewCourse->Location = System::Drawing::Point(22, 105);
                    this->studentViewCourse->Name = L"studentViewCourse";
                    this->studentViewCourse->Size = System::Drawing::Size(188, 40);
                    this->studentViewCourse->TabIndex = 12;
                    this->studentViewCourse->Text = L"Enrolled Courses";
                    this->studentViewCourse->UseVisualStyleBackColor = true;
                    this->studentViewCourse->Visible = false;
                    //
                    // studentViewScoreboard
                    //
                    this->studentViewScoreboard->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentViewScoreboard->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->studentViewScoreboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->studentViewScoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentViewScoreboard->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentViewScoreboard->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->studentViewScoreboard->Location = System::Drawing::Point(22, 151);
                    this->studentViewScoreboard->Name = L"studentViewScoreboard";
                    this->studentViewScoreboard->Size = System::Drawing::Size(188, 40);
                    this->studentViewScoreboard->TabIndex = 10;
                    this->studentViewScoreboard->Text = L"Scoreboard";
                    this->studentViewScoreboard->UseVisualStyleBackColor = true;
                    this->studentViewScoreboard->Visible = false;
                    //
                    // viewCourseUI
                    //
                    this->viewCourseUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewCourseUI->AllowColumnReorder = true;
                    this->viewCourseUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewCourseUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewCourseUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(9) { this->enrolledCourseNo,
                        this->enrolledCourseID, this->enrolledCourseName, this->enrolledCourseCre, this->enrolledCourseStudentNum, this->enrolledCourseD1,
                        this->enrolledCourseD2, this->enrolledCourseRoom, this->enrolledCourseLecturer });
                    this->viewCourseUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewCourseUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup1->Header = L"aaaa";
                    listViewGroup1->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup1->Name = L"aaaaa";
                    this->viewCourseUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup1 });
                    this->viewCourseUI->HideSelection = false;
                    this->viewCourseUI->Location = System::Drawing::Point(280, 107);
                    this->viewCourseUI->Name = L"viewCourseUI";
                    this->viewCourseUI->ShowGroups = false;
                    this->viewCourseUI->Size = System::Drawing::Size(1129, 623);
                    this->viewCourseUI->TabIndex = 35;
                    this->viewCourseUI->UseCompatibleStateImageBehavior = false;
                    this->viewCourseUI->View = System::Windows::Forms::View::Details;
                    this->viewCourseUI->Visible = false;
                    this->viewCourseUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewCourseUI_MouseMove);
                    //
                    // enrolledCourseNo
                    //
                    this->enrolledCourseNo->Text = L"No.";
                    this->enrolledCourseNo->Width = 40;
                    //
                    // enrolledCourseID
                    //
                    this->enrolledCourseID->Text = L"Course ID";
                    this->enrolledCourseID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseID->Width = 91;
                    //
                    // enrolledCourseName
                    //
                    this->enrolledCourseName->Text = L"Course Name";
                    this->enrolledCourseName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseName->Width = 284;
                    //
                    // enrolledCourseCre
                    //
                    this->enrolledCourseCre->Text = L"Credits";
                    this->enrolledCourseCre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseCre->Width = 68;
                    //
                    // enrolledCourseStudentNum
                    //
                    this->enrolledCourseStudentNum->Text = L"Students";
                    this->enrolledCourseStudentNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseStudentNum->Width = 84;
                    //
                    // enrolledCourseD1
                    //
                    this->enrolledCourseD1->Text = L"Day 1";
                    this->enrolledCourseD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseD1->Width = 135;
                    //
                    // enrolledCourseD2
                    //
                    this->enrolledCourseD2->Text = L"Day 2";
                    this->enrolledCourseD2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseD2->Width = 135;
                    //
                    // enrolledCourseRoom
                    //
                    this->enrolledCourseRoom->Text = L"Room";
                    this->enrolledCourseRoom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseRoom->Width = 71;
                    //
                    // enrolledCourseLecturer
                    //
                    this->enrolledCourseLecturer->Text = L"Lecturer";
                    this->enrolledCourseLecturer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseLecturer->Width = 220;
                    //
                    // viewStudentUI
                    //
                    this->viewStudentUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewStudentUI->AllowColumnReorder = true;
                    this->viewStudentUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewStudentUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewStudentUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(8) { this->viewStudentNo,
                        this->viewStudentID, this->viewStudentLName, this->viewStudentFName, this->viewStudentSocialID, this->viewStudentGender, this->viewStudentdob,
                        this->viewStudentClassID });
                    this->viewStudentUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewStudentUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup2->Header = L"aaaa";
                    listViewGroup2->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup2->Name = L"aaaaa";
                    this->viewStudentUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup2 });
                    this->viewStudentUI->HideSelection = false;
                    this->viewStudentUI->Location = System::Drawing::Point(280, 107);
                    this->viewStudentUI->Name = L"viewStudentUI";
                    this->viewStudentUI->ShowGroups = false;
                    this->viewStudentUI->Size = System::Drawing::Size(1129, 623);
                    this->viewStudentUI->TabIndex = 36;
                    this->viewStudentUI->UseCompatibleStateImageBehavior = false;
                    this->viewStudentUI->View = System::Windows::Forms::View::Details;
                    this->viewStudentUI->Visible = false;
                    this->viewStudentUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewStudentUI_MouseMove);
                    //
                    // viewStudentNo
                    //
                    this->viewStudentNo->Text = L"No.";
                    this->viewStudentNo->Width = 40;
                    //
                    // viewStudentID
                    //
                    this->viewStudentID->Text = L"Student ID";
                    this->viewStudentID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentID->Width = 149;
                    //
                    // viewStudentLName
                    //
                    this->viewStudentLName->Text = L"Last Name";
                    this->viewStudentLName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentLName->Width = 260;
                    //
                    // viewStudentFName
                    //
                    this->viewStudentFName->Text = L"First Name";
                    this->viewStudentFName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentFName->Width = 130;
                    //
                    // viewStudentSocialID
                    //
                    this->viewStudentSocialID->Text = L"Social ID";
                    this->viewStudentSocialID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentSocialID->Width = 162;
                    //
                    // viewStudentGender
                    //
                    this->viewStudentGender->Text = L"Gender";
                    this->viewStudentGender->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentGender->Width = 100;
                    //
                    // viewStudentdob
                    //
                    this->viewStudentdob->Text = L"Date of Birth";
                    this->viewStudentdob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentdob->Width = 165;
                    //
                    // viewStudentClassID
                    //
                    this->viewStudentClassID->Text = L"Class ID";
                    this->viewStudentClassID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentClassID->Width = 123;
                    //
                    // viewCoSBUI
                    //
                    this->viewCoSBUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewCoSBUI->AllowColumnReorder = true;
                    this->viewCoSBUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewCoSBUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewCoSBUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(8) { this->viewCoSBNo, this->viewCoSBStudenID,
                        this->viewCoSBStudentName, this->viewCOSBClass, this->viewCoSBTotal, this->viewCoSBFinal, this->viewCoSBMid, this->viewCoSBOther });
                    this->viewCoSBUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewCoSBUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup3->Header = L"aaaa";
                    listViewGroup3->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup3->Name = L"aaaaa";
                    this->viewCoSBUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup3 });
                    this->viewCoSBUI->HideSelection = false;
                    this->viewCoSBUI->Location = System::Drawing::Point(280, 107);
                    this->viewCoSBUI->Name = L"viewCoSBUI";
                    this->viewCoSBUI->ShowGroups = false;
                    this->viewCoSBUI->Size = System::Drawing::Size(1129, 623);
                    this->viewCoSBUI->TabIndex = 37;
                    this->viewCoSBUI->UseCompatibleStateImageBehavior = false;
                    this->viewCoSBUI->View = System::Windows::Forms::View::Details;
                    this->viewCoSBUI->Visible = false;
                    this->viewCoSBUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewCoSBUI_MouseMove);
                    //
                    // viewCoSBNo
                    //
                    this->viewCoSBNo->Text = L"No.";
                    this->viewCoSBNo->Width = 40;
                    //
                    // viewCoSBStudenID
                    //
                    this->viewCoSBStudenID->Text = L"Student ID";
                    this->viewCoSBStudenID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBStudenID->Width = 149;
                    //
                    // viewCoSBStudentName
                    //
                    this->viewCoSBStudentName->Text = L"Student Name";
                    this->viewCoSBStudentName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBStudentName->Width = 290;
                    //
                    // viewCOSBClass
                    //
                    this->viewCOSBClass->Text = L"Class ID";
                    this->viewCOSBClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCOSBClass->Width = 129;
                    //
                    // viewCoSBTotal
                    //
                    this->viewCoSBTotal->Text = L"Total Mark";
                    this->viewCoSBTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBTotal->Width = 130;
                    //
                    // viewCoSBFinal
                    //
                    this->viewCoSBFinal->Text = L"Final Mark";
                    this->viewCoSBFinal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBFinal->Width = 130;
                    //
                    // viewCoSBMid
                    //
                    this->viewCoSBMid->Text = L"Midterm Mark";
                    this->viewCoSBMid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBMid->Width = 130;
                    //
                    // viewCoSBOther
                    //
                    this->viewCoSBOther->Text = L"Other Mark";
                    this->viewCoSBOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBOther->Width = 130;
                    //
                    // viewClSBUI
                    //
                    this->viewClSBUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewClSBUI->AllowColumnReorder = true;
                    this->viewClSBUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewClSBUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewClSBUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(7) { this->viewClSBNo, this->viewClSBStudentID,
                        this->viewClSBStudentName, this->viewClSBCourseID, this->viewClSBTotalMark, this->viewClSBGPA, this->viewClSBOGPA });
                    this->viewClSBUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewClSBUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup4->Header = L"Overall Gpa";
                    listViewGroup4->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
                    listViewGroup4->Name = L"aaaaaadff";
                    listViewGroup4->Tag = L"aa";
                    this->viewClSBUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup4 });
                    this->viewClSBUI->HideSelection = false;
                    this->viewClSBUI->Location = System::Drawing::Point(280, 107);
                    this->viewClSBUI->Name = L"viewClSBUI";
                    this->viewClSBUI->ShowGroups = false;
                    this->viewClSBUI->Size = System::Drawing::Size(1129, 623);
                    this->viewClSBUI->TabIndex = 38;
                    this->viewClSBUI->UseCompatibleStateImageBehavior = false;
                    this->viewClSBUI->View = System::Windows::Forms::View::Details;
                    this->viewClSBUI->Visible = false;
                    this->viewClSBUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewClSBUI_MouseMove);
                    //
                    // viewClSBNo
                    //
                    this->viewClSBNo->Text = L"No.";
                    this->viewClSBNo->Width = 40;
                    //
                    // viewClSBStudentID
                    //
                    this->viewClSBStudentID->Text = L"Student ID";
                    this->viewClSBStudentID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBStudentID->Width = 149;
                    //
                    // viewClSBStudentName
                    //
                    this->viewClSBStudentName->Text = L"Student Name";
                    this->viewClSBStudentName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBStudentName->Width = 423;
                    //
                    // viewClSBCourseID
                    //
                    this->viewClSBCourseID->Text = L"Course ID";
                    this->viewClSBCourseID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBCourseID->Width = 155;
                    //
                    // viewClSBTotalMark
                    //
                    this->viewClSBTotalMark->Text = L"Total Mark";
                    this->viewClSBTotalMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBTotalMark->Width = 120;
                    //
                    // viewClSBGPA
                    //
                    this->viewClSBGPA->Text = L"GPA";
                    this->viewClSBGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBGPA->Width = 120;
                    //
                    // viewClSBOGPA
                    //
                    this->viewClSBOGPA->Text = L"Overall GPA";
                    this->viewClSBOGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBOGPA->Width = 120;
                    //
                    // viewClassUI
                    //
                    this->viewClassUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewClassUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewClassUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewClassUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(3) { this->viewClassUINo,
                        this->viewClassUIYear, this->viewClassUIClID });
                    this->viewClassUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewClassUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup5->Header = L"Overall Gpa";
                    listViewGroup5->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
                    listViewGroup5->Name = L"aaaaaadff";
                    listViewGroup5->Tag = L"aa";
                    this->viewClassUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup5 });
                    this->viewClassUI->HideSelection = false;
                    this->viewClassUI->Location = System::Drawing::Point(280, 107);
                    this->viewClassUI->Name = L"viewClassUI";
                    this->viewClassUI->ShowGroups = false;
                    this->viewClassUI->Size = System::Drawing::Size(494, 623);
                    this->viewClassUI->TabIndex = 39;
                    this->viewClassUI->UseCompatibleStateImageBehavior = false;
                    this->viewClassUI->View = System::Windows::Forms::View::Details;
                    this->viewClassUI->Visible = false;
                    this->viewClassUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewClassUI_MouseMove);
                    //
                    // viewClassUINo
                    //
                    this->viewClassUINo->Text = L"No.";
                    this->viewClassUINo->Width = 40;
                    //
                    // viewClassUIYear
                    //
                    this->viewClassUIYear->Text = L"Academic Year";
                    this->viewClassUIYear->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClassUIYear->Width = 292;
                    //
                    // viewClassUIClID
                    //
                    this->viewClassUIClID->Text = L"Class ID";
                    this->viewClassUIClID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClassUIClID->Width = 162;
                    //
                    // courseUpdateUI
                    //
                    this->courseUpdateUI->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                        | System::Windows::Forms::AnchorStyles::Right));
                    this->courseUpdateUI->Controls->Add(this->panel1);
                    this->courseUpdateUI->Controls->Add(this->updateCoursePanel);
                    this->courseUpdateUI->Location = System::Drawing::Point(279, 83);
                    this->courseUpdateUI->Name = L"courseUpdateUI";
                    this->courseUpdateUI->Size = System::Drawing::Size(1129, 643);
                    this->courseUpdateUI->TabIndex = 40;
                    this->courseUpdateUI->Visible = false;
                    //
                    // panel1
                    //
                    this->panel1->Controls->Add(this->listCourses);
                    this->panel1->Controls->Add(this->btDelCourse);
                    this->panel1->Controls->Add(this->labelCourseList);
                    this->panel1->Location = System::Drawing::Point(85, 3);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(355, 637);
                    this->panel1->TabIndex = 41;
                    //
                    // listCourses
                    //
                    this->listCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->listCourses->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->listCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->listCourses->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
                    this->listCourses->ItemHeight = 28;
                    this->listCourses->Location = System::Drawing::Point(51, 65);
                    this->listCourses->Name = L"listCourses";
                    this->listCourses->Size = System::Drawing::Size(255, 476);
                    this->listCourses->TabIndex = 65;
                    this->listCourses->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::listCourses_SelectedIndexChanged);
                    //
                    // btDelCourse
                    //
                    this->btDelCourse->FlatAppearance->BorderSize = 0;
                    this->btDelCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btDelCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btDelCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btDelCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->btDelCourse->ForeColor = System::Drawing::Color::Red;
                    this->btDelCourse->Location = System::Drawing::Point(51, 562);
                    this->btDelCourse->Name = L"btDelCourse";
                    this->btDelCourse->Size = System::Drawing::Size(247, 45);
                    this->btDelCourse->TabIndex = 64;
                    this->btDelCourse->Text = L"Delete Course";
                    this->btDelCourse->UseVisualStyleBackColor = true;
                    this->btDelCourse->Visible = false;
                    this->btDelCourse->Click += gcnew System::EventHandler(this, &functionScreen::btDelCourse_Click);
                    //
                    // labelCourseList
                    //
                    this->labelCourseList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->labelCourseList->BackColor = System::Drawing::Color::Transparent;
                    this->labelCourseList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
                    this->labelCourseList->ForeColor = System::Drawing::Color::White;
                    this->labelCourseList->Location = System::Drawing::Point(84, 12);
                    this->labelCourseList->Name = L"labelCourseList";
                    this->labelCourseList->Size = System::Drawing::Size(189, 46);
                    this->labelCourseList->TabIndex = 63;
                    this->labelCourseList->Text = L"Course List";
                    this->labelCourseList->TextAlign = System::Drawing::ContentAlignment::TopCenter;
                    //
                    // updateCoursePanel
                    //
                    this->updateCoursePanel->Controls->Add(this->updateCourseD2);
                    this->updateCoursePanel->Controls->Add(this->updateCourseS2);
                    this->updateCoursePanel->Controls->Add(this->updateCourseD1);
                    this->updateCoursePanel->Controls->Add(this->updateCourseS1);
                    this->updateCoursePanel->Controls->Add(this->labelWorkspaceName);
                    this->updateCoursePanel->Controls->Add(this->updateCourseName);
                    this->updateCoursePanel->Controls->Add(this->btnSave);
                    this->updateCoursePanel->Controls->Add(this->btRevertChanges);
                    this->updateCoursePanel->Controls->Add(this->label1);
                    this->updateCoursePanel->Controls->Add(this->updateCourseCre);
                    this->updateCoursePanel->Controls->Add(this->label2);
                    this->updateCoursePanel->Controls->Add(this->label10);
                    this->updateCoursePanel->Controls->Add(this->updateCourseMaxSt);
                    this->updateCoursePanel->Controls->Add(this->label3);
                    this->updateCoursePanel->Controls->Add(this->updateCourseLecturer);
                    this->updateCoursePanel->Controls->Add(this->label4);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRoom);
                    this->updateCoursePanel->Controls->Add(this->label5);
                    this->updateCoursePanel->Controls->Add(this->label6);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRegisStart);
                    this->updateCoursePanel->Controls->Add(this->label7);
                    this->updateCoursePanel->Controls->Add(this->label8);
                    this->updateCoursePanel->Controls->Add(this->label9);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRegisEnd);
                    this->updateCoursePanel->Location = System::Drawing::Point(470, 21);
                    this->updateCoursePanel->Name = L"updateCoursePanel";
                    this->updateCoursePanel->Size = System::Drawing::Size(537, 599);
                    this->updateCoursePanel->TabIndex = 66;
                    this->updateCoursePanel->Visible = false;
                    //
                    // updateCourseD2
                    //
                    this->updateCourseD2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseD2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseD2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseD2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseD2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseD2->ForeColor = System::Drawing::Color::White;
                    this->updateCourseD2->FormattingEnabled = true;
                    this->updateCourseD2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseD2->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->updateCourseD2->Location = System::Drawing::Point(148, 468);
                    this->updateCourseD2->Name = L"updateCourseD2";
                    this->updateCourseD2->Size = System::Drawing::Size(137, 33);
                    this->updateCourseD2->TabIndex = 109;
                    this->updateCourseD2->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseD2_SelectedIndexChanged);
                    //
                    // updateCourseS2
                    //
                    this->updateCourseS2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseS2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseS2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseS2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseS2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseS2->ForeColor = System::Drawing::Color::White;
                    this->updateCourseS2->FormattingEnabled = true;
                    this->updateCourseS2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseS2->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->updateCourseS2->Location = System::Drawing::Point(315, 468);
                    this->updateCourseS2->Name = L"updateCourseS2";
                    this->updateCourseS2->Size = System::Drawing::Size(179, 33);
                    this->updateCourseS2->TabIndex = 110;
                    this->updateCourseS2->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseS2_SelectedIndexChanged);
                    //
                    // updateCourseD1
                    //
                    this->updateCourseD1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseD1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseD1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseD1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseD1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseD1->ForeColor = System::Drawing::Color::White;
                    this->updateCourseD1->FormattingEnabled = true;
                    this->updateCourseD1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseD1->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->updateCourseD1->Location = System::Drawing::Point(148, 425);
                    this->updateCourseD1->Name = L"updateCourseD1";
                    this->updateCourseD1->Size = System::Drawing::Size(137, 33);
                    this->updateCourseD1->TabIndex = 107;
                    this->updateCourseD1->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseD1_SelectedIndexChanged);
                    //
                    // updateCourseS1
                    //
                    this->updateCourseS1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseS1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseS1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseS1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseS1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseS1->ForeColor = System::Drawing::Color::White;
                    this->updateCourseS1->FormattingEnabled = true;
                    this->updateCourseS1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseS1->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->updateCourseS1->Location = System::Drawing::Point(315, 425);
                    this->updateCourseS1->Name = L"updateCourseS1";
                    this->updateCourseS1->Size = System::Drawing::Size(179, 33);
                    this->updateCourseS1->TabIndex = 108;
                    this->updateCourseS1->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseS1_SelectedIndexChanged);
                    //
                    // labelWorkspaceName
                    //
                    this->labelWorkspaceName->AutoSize = true;
                    this->labelWorkspaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->labelWorkspaceName->ForeColor = System::Drawing::Color::White;
                    this->labelWorkspaceName->Location = System::Drawing::Point(3, 16);
                    this->labelWorkspaceName->Name = L"labelWorkspaceName";
                    this->labelWorkspaceName->Size = System::Drawing::Size(123, 25);
                    this->labelWorkspaceName->TabIndex = 21;
                    this->labelWorkspaceName->Text = L"Course name";
                    //
                    // updateCourseName
                    //
                    this->updateCourseName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseName->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseName->Location = System::Drawing::Point(6, 53);
                    this->updateCourseName->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseName->Name = L"updateCourseName";
                    this->updateCourseName->Size = System::Drawing::Size(525, 31);
                    this->updateCourseName->TabIndex = 100;
                    this->updateCourseName->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseName_KeyUp);
                    //
                    // btnSave
                    //
                    this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnSave->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnSave->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnSave->ForeColor = System::Drawing::Color::White;
                    this->btnSave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnSave->Location = System::Drawing::Point(399, 544);
                    this->btnSave->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnSave->Name = L"btnSave";
                    this->btnSave->Size = System::Drawing::Size(112, 39);
                    this->btnSave->TabIndex = 111;
                    this->btnSave->Text = L"Save";
                    this->btnSave->UseMnemonic = false;
                    this->btnSave->UseVisualStyleBackColor = false;
                    this->btnSave->Click += gcnew System::EventHandler(this, &functionScreen::btnSave_Click);
                    //
                    // btRevertChanges
                    //
                    this->btRevertChanges->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btRevertChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btRevertChanges->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btRevertChanges->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btRevertChanges->Location = System::Drawing::Point(241, 544);
                    this->btRevertChanges->Name = L"btRevertChanges";
                    this->btRevertChanges->Size = System::Drawing::Size(152, 39);
                    this->btRevertChanges->TabIndex = 112;
                    this->btRevertChanges->Text = L"Revert Changes";
                    this->btRevertChanges->UseVisualStyleBackColor = true;
                    this->btRevertChanges->Click += gcnew System::EventHandler(this, &functionScreen::btRevertChanges_Click);
                    //
                    // label1
                    //
                    this->label1->AutoSize = true;
                    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label1->ForeColor = System::Drawing::Color::White;
                    this->label1->Location = System::Drawing::Point(3, 112);
                    this->label1->Name = L"label1";
                    this->label1->Size = System::Drawing::Size(164, 25);
                    this->label1->TabIndex = 29;
                    this->label1->Text = L"Number of credits";
                    //
                    // updateCourseCre
                    //
                    this->updateCourseCre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseCre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseCre->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseCre->Location = System::Drawing::Point(6, 149);
                    this->updateCourseCre->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseCre->Name = L"updateCourseCre";
                    this->updateCourseCre->Size = System::Drawing::Size(144, 31);
                    this->updateCourseCre->TabIndex = 101;
                    this->updateCourseCre->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseCre_KeyUp);
                    //
                    // label2
                    //
                    this->label2->AutoSize = true;
                    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label2->ForeColor = System::Drawing::Color::White;
                    this->label2->Location = System::Drawing::Point(213, 112);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(172, 25);
                    this->label2->TabIndex = 31;
                    this->label2->Text = L"Maximum students";
                    //
                    // label10
                    //
                    this->label10->AutoSize = true;
                    this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label10->ForeColor = System::Drawing::Color::White;
                    this->label10->Location = System::Drawing::Point(44, 473);
                    this->label10->Name = L"label10";
                    this->label10->Size = System::Drawing::Size(80, 23);
                    this->label10->TabIndex = 57;
                    this->label10->Text = L"Session 2";
                    //
                    // updateCourseMaxSt
                    //
                    this->updateCourseMaxSt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseMaxSt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseMaxSt->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseMaxSt->Location = System::Drawing::Point(218, 149);
                    this->updateCourseMaxSt->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseMaxSt->Name = L"updateCourseMaxSt";
                    this->updateCourseMaxSt->Size = System::Drawing::Size(159, 31);
                    this->updateCourseMaxSt->TabIndex = 102;
                    this->updateCourseMaxSt->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseMaxSt_KeyUp);
                    //
                    // label3
                    //
                    this->label3->AutoSize = true;
                    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label3->ForeColor = System::Drawing::Color::White;
                    this->label3->Location = System::Drawing::Point(1, 208);
                    this->label3->Name = L"label3";
                    this->label3->Size = System::Drawing::Size(133, 25);
                    this->label3->TabIndex = 33;
                    this->label3->Text = L"Lecturer name";
                    //
                    // updateCourseLecturer
                    //
                    this->updateCourseLecturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseLecturer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseLecturer->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseLecturer->Location = System::Drawing::Point(6, 245);
                    this->updateCourseLecturer->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseLecturer->Name = L"updateCourseLecturer";
                    this->updateCourseLecturer->Size = System::Drawing::Size(526, 31);
                    this->updateCourseLecturer->TabIndex = 104;
                    this->updateCourseLecturer->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseLecturer_KeyUp);
                    //
                    // label4
                    //
                    this->label4->AutoSize = true;
                    this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label4->ForeColor = System::Drawing::Color::White;
                    this->label4->Location = System::Drawing::Point(431, 112);
                    this->label4->Name = L"label4";
                    this->label4->Size = System::Drawing::Size(60, 25);
                    this->label4->TabIndex = 35;
                    this->label4->Text = L"Room";
                    //
                    // updateCourseRoom
                    //
                    this->updateCourseRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRoom->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseRoom->Location = System::Drawing::Point(432, 149);
                    this->updateCourseRoom->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseRoom->Name = L"updateCourseRoom";
                    this->updateCourseRoom->Size = System::Drawing::Size(100, 31);
                    this->updateCourseRoom->TabIndex = 103;
                    this->updateCourseRoom->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseRoom_KeyUp);
                    //
                    // label5
                    //
                    this->label5->AutoSize = true;
                    this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label5->ForeColor = System::Drawing::Color::White;
                    this->label5->Location = System::Drawing::Point(3, 392);
                    this->label5->Name = L"label5";
                    this->label5->Size = System::Drawing::Size(89, 25);
                    this->label5->TabIndex = 37;
                    this->label5->Text = L"Schedule";
                    //
                    // label6
                    //
                    this->label6->AutoSize = true;
                    this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label6->ForeColor = System::Drawing::Color::White;
                    this->label6->Location = System::Drawing::Point(44, 430);
                    this->label6->Name = L"label6";
                    this->label6->Size = System::Drawing::Size(80, 23);
                    this->label6->TabIndex = 39;
                    this->label6->Text = L"Session 1";
                    //
                    // updateCourseRegisStart
                    //
                    this->updateCourseRegisStart->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->updateCourseRegisStart->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->updateCourseRegisStart->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->updateCourseRegisStart->CustomFormat = L"dd/MM/yyyy";
                    this->updateCourseRegisStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRegisStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->updateCourseRegisStart->Location = System::Drawing::Point(113, 337);
                    this->updateCourseRegisStart->Name = L"updateCourseRegisStart";
                    this->updateCourseRegisStart->Size = System::Drawing::Size(153, 31);
                    this->updateCourseRegisStart->TabIndex = 105;
                    this->updateCourseRegisStart->CloseUp += gcnew System::EventHandler(this, &functionScreen::updateCourseRegisStart_CloseUp);
                    //
                    // label7
                    //
                    this->label7->AutoSize = true;
                    this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label7->ForeColor = System::Drawing::Color::White;
                    this->label7->Location = System::Drawing::Point(3, 304);
                    this->label7->Name = L"label7";
                    this->label7->Size = System::Drawing::Size(154, 25);
                    this->label7->TabIndex = 42;
                    this->label7->Text = L"Registration date";
                    //
                    // label8
                    //
                    this->label8->AutoSize = true;
                    this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label8->ForeColor = System::Drawing::Color::White;
                    this->label8->Location = System::Drawing::Point(44, 341);
                    this->label8->Name = L"label8";
                    this->label8->Size = System::Drawing::Size(53, 23);
                    this->label8->TabIndex = 44;
                    this->label8->Text = L"From:";
                    //
                    // label9
                    //
                    this->label9->AutoSize = true;
                    this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label9->ForeColor = System::Drawing::Color::White;
                    this->label9->Location = System::Drawing::Point(294, 341);
                    this->label9->Name = L"label9";
                    this->label9->Size = System::Drawing::Size(31, 23);
                    this->label9->TabIndex = 45;
                    this->label9->Text = L"To:";
                    //
                    // updateCourseRegisEnd
                    //
                    this->updateCourseRegisEnd->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->updateCourseRegisEnd->CustomFormat = L"dd/MM/yyyy";
                    this->updateCourseRegisEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRegisEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->updateCourseRegisEnd->Location = System::Drawing::Point(341, 337);
                    this->updateCourseRegisEnd->Name = L"updateCourseRegisEnd";
                    this->updateCourseRegisEnd->Size = System::Drawing::Size(153, 31);
                    this->updateCourseRegisEnd->TabIndex = 106;
                    this->updateCourseRegisEnd->CloseUp += gcnew System::EventHandler(this, &functionScreen::updateCourseRegisEnd_CloseUp);
                    //
                    // panelSchoolYear
                    //
                    this->panelSchoolYear->Controls->Add(this->btnFinish);
                    this->panelSchoolYear->Controls->Add(this->btnCancelAll);
                    this->panelSchoolYear->Controls->Add(this->treeViewClass);
                    this->panelSchoolYear->Controls->Add(this->panel4);
                    this->panelSchoolYear->Controls->Add(this->panel3);
                    this->panelSchoolYear->Controls->Add(this->endYear);
                    this->panelSchoolYear->Controls->Add(this->label12);
                    this->panelSchoolYear->Controls->Add(this->startYear);
                    this->panelSchoolYear->Controls->Add(this->label13);
                    this->panelSchoolYear->Controls->Add(this->classInput);
                    this->panelSchoolYear->Controls->Add(this->label11);
                    this->panelSchoolYear->Controls->Add(this->btnAddClass);
                    this->panelSchoolYear->Controls->Add(this->panelAddStudent);
                    this->panelSchoolYear->Location = System::Drawing::Point(279, 83);
                    this->panelSchoolYear->Name = L"panelSchoolYear";
                    this->panelSchoolYear->Size = System::Drawing::Size(1130, 643);
                    this->panelSchoolYear->TabIndex = 41;
                    this->panelSchoolYear->Visible = false;
                    this->panelSchoolYear->Click += gcnew System::EventHandler(this, &functionScreen::panelSchoolYear_Click);
                    //
                    // btnFinish
                    //
                    this->btnFinish->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnFinish->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnFinish->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnFinish->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnFinish->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnFinish->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnFinish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnFinish->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnFinish->ForeColor = System::Drawing::Color::White;
                    this->btnFinish->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnFinish->Location = System::Drawing::Point(747, 577);
                    this->btnFinish->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnFinish->Name = L"btnFinish";
                    this->btnFinish->Size = System::Drawing::Size(148, 39);
                    this->btnFinish->TabIndex = 153;
                    this->btnFinish->Text = L"Finish";
                    this->btnFinish->UseMnemonic = false;
                    this->btnFinish->UseVisualStyleBackColor = false;
                    this->btnFinish->Click += gcnew System::EventHandler(this, &functionScreen::btnFinish_Click);
                    //
                    // btnCancelAll
                    //
                    this->btnCancelAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnCancelAll->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnCancelAll->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnCancelAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnCancelAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnCancelAll->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnCancelAll->Location = System::Drawing::Point(918, 577);
                    this->btnCancelAll->Name = L"btnCancelAll";
                    this->btnCancelAll->Size = System::Drawing::Size(148, 39);
                    this->btnCancelAll->TabIndex = 154;
                    this->btnCancelAll->Text = L"Cancel";
                    this->btnCancelAll->UseVisualStyleBackColor = true;
                    this->btnCancelAll->Click += gcnew System::EventHandler(this, &functionScreen::btnCancelAll_Click);
                    //
                    // treeViewClass
                    //
                    this->treeViewClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->treeViewClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->treeViewClass->ForeColor = System::Drawing::SystemColors::Info;
                    this->treeViewClass->Location = System::Drawing::Point(59, 237);
                    this->treeViewClass->Name = L"treeViewClass";
                    this->treeViewClass->Size = System::Drawing::Size(334, 386);
                    this->treeViewClass->TabIndex = 68;
                    this->treeViewClass->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &functionScreen::treeViewClass_NodeMouseClick);
                    //
                    // panel4
                    //
                    this->panel4->BackColor = System::Drawing::Color::White;
                    this->panel4->ForeColor = System::Drawing::Color::White;
                    this->panel4->Location = System::Drawing::Point(246, 113);
                    this->panel4->Name = L"panel4";
                    this->panel4->Size = System::Drawing::Size(143, 2);
                    this->panel4->TabIndex = 46;
                    //
                    // panel3
                    //
                    this->panel3->BackColor = System::Drawing::Color::White;
                    this->panel3->ForeColor = System::Drawing::Color::White;
                    this->panel3->Location = System::Drawing::Point(59, 113);
                    this->panel3->Name = L"panel3";
                    this->panel3->Size = System::Drawing::Size(143, 2);
                    this->panel3->TabIndex = 43;
                    //
                    // endYear
                    //
                    this->endYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->endYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->endYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->endYear->ForeColor = System::Drawing::SystemColors::Info;
                    this->endYear->HideSelection = false;
                    this->endYear->Location = System::Drawing::Point(246, 88);
                    this->endYear->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->endYear->Name = L"endYear";
                    this->endYear->Size = System::Drawing::Size(143, 27);
                    this->endYear->TabIndex = 141;
                    //
                    // label12
                    //
                    this->label12->AutoSize = true;
                    this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label12->ForeColor = System::Drawing::Color::White;
                    this->label12->Location = System::Drawing::Point(240, 49);
                    this->label12->Name = L"label12";
                    this->label12->Size = System::Drawing::Size(85, 25);
                    this->label12->TabIndex = 44;
                    this->label12->Text = L"End year";
                    //
                    // startYear
                    //
                    this->startYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->startYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->startYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->startYear->ForeColor = System::Drawing::SystemColors::Info;
                    this->startYear->HideSelection = false;
                    this->startYear->Location = System::Drawing::Point(59, 88);
                    this->startYear->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->startYear->Name = L"startYear";
                    this->startYear->Size = System::Drawing::Size(143, 27);
                    this->startYear->TabIndex = 140;
                    //
                    // label13
                    //
                    this->label13->AutoSize = true;
                    this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label13->ForeColor = System::Drawing::Color::White;
                    this->label13->Location = System::Drawing::Point(52, 143);
                    this->label13->Name = L"label13";
                    this->label13->Size = System::Drawing::Size(73, 25);
                    this->label13->TabIndex = 37;
                    this->label13->Text = L"Classes";
                    //
                    // classInput
                    //
                    this->classInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->classInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->classInput->ForeColor = System::Drawing::SystemColors::Control;
                    this->classInput->Location = System::Drawing::Point(58, 185);
                    this->classInput->Margin = System::Windows::Forms::Padding(5);
                    this->classInput->Name = L"classInput";
                    this->classInput->Size = System::Drawing::Size(144, 34);
                    this->classInput->TabIndex = 142;
                    this->classInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::classInput_KeyDown);
                    //
                    // label11
                    //
                    this->label11->AutoSize = true;
                    this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label11->ForeColor = System::Drawing::Color::White;
                    this->label11->Location = System::Drawing::Point(53, 49);
                    this->label11->Name = L"label11";
                    this->label11->Size = System::Drawing::Size(91, 25);
                    this->label11->TabIndex = 31;
                    this->label11->Text = L"Start year";
                    //
                    // btnAddClass
                    //
                    this->btnAddClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnAddClass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnAddClass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnAddClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnAddClass->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnAddClass->Location = System::Drawing::Point(246, 185);
                    this->btnAddClass->Name = L"btnAddClass";
                    this->btnAddClass->Size = System::Drawing::Size(140, 34);
                    this->btnAddClass->TabIndex = 143;
                    this->btnAddClass->Text = L"Add class";
                    this->btnAddClass->UseVisualStyleBackColor = true;
                    this->btnAddClass->Click += gcnew System::EventHandler(this, &functionScreen::btnAddClass_Click);
                    //
                    // panelAddStudent
                    //
                    this->panelAddStudent->Controls->Add(this->btnFromFile);
                    this->panelAddStudent->Controls->Add(this->gender);
                    this->panelAddStudent->Controls->Add(this->label14);
                    this->panelAddStudent->Controls->Add(this->studentID);
                    this->panelAddStudent->Controls->Add(this->btnAddStd);
                    this->panelAddStudent->Controls->Add(this->btnCancel);
                    this->panelAddStudent->Controls->Add(this->label15);
                    this->panelAddStudent->Controls->Add(this->fName);
                    this->panelAddStudent->Controls->Add(this->label16);
                    this->panelAddStudent->Controls->Add(this->lName);
                    this->panelAddStudent->Controls->Add(this->label18);
                    this->panelAddStudent->Controls->Add(this->label19);
                    this->panelAddStudent->Controls->Add(this->socialID);
                    this->panelAddStudent->Controls->Add(this->doB);
                    this->panelAddStudent->Controls->Add(this->label22);
                    this->panelAddStudent->Location = System::Drawing::Point(537, 24);
                    this->panelAddStudent->Name = L"panelAddStudent";
                    this->panelAddStudent->Size = System::Drawing::Size(537, 599);
                    this->panelAddStudent->TabIndex = 67;
                    this->panelAddStudent->Visible = false;
                    //
                    // btnFromFile
                    //
                    this->btnFromFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnFromFile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnFromFile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->btnFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnFromFile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnFromFile->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnFromFile->Location = System::Drawing::Point(35, 531);
                    this->btnFromFile->Name = L"btnFromFile";
                    this->btnFromFile->Size = System::Drawing::Size(148, 39);
                    this->btnFromFile->TabIndex = 151;
                    this->btnFromFile->Text = L"From file...";
                    this->btnFromFile->UseVisualStyleBackColor = true;
                    this->btnFromFile->Click += gcnew System::EventHandler(this, &functionScreen::btnFromFile_Click);
                    //
                    // gender
                    //
                    this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->gender->Cursor = System::Windows::Forms::Cursors::Default;
                    this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->gender->ForeColor = System::Drawing::Color::White;
                    this->gender->FormattingEnabled = true;
                    this->gender->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->gender->Items->AddRange(gcnew cli::array<System::Object ^>(3) { L"Female", L"Male", L"Don\'t want to answer" });
                    this->gender->Location = System::Drawing::Point(7, 373);
                    this->gender->Name = L"gender";
                    this->gender->Size = System::Drawing::Size(227, 33);
                    this->gender->TabIndex = 148;
                    this->gender->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::gender_KeyDown);
                    //
                    // label14
                    //
                    this->label14->AutoSize = true;
                    this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label14->ForeColor = System::Drawing::Color::White;
                    this->label14->Location = System::Drawing::Point(2, 59);
                    this->label14->Name = L"label14";
                    this->label14->Size = System::Drawing::Size(99, 25);
                    this->label14->TabIndex = 21;
                    this->label14->Text = L"Student ID";
                    //
                    // studentID
                    //
                    this->studentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->studentID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->studentID->ForeColor = System::Drawing::SystemColors::Control;
                    this->studentID->Location = System::Drawing::Point(7, 91);
                    this->studentID->Margin = System::Windows::Forms::Padding(5);
                    this->studentID->Name = L"studentID";
                    this->studentID->Size = System::Drawing::Size(525, 31);
                    this->studentID->TabIndex = 144;
                    this->studentID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::studentID_KeyDown);
                    //
                    // btnAddStd
                    //
                    this->btnAddStd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnAddStd->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnAddStd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnAddStd->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnAddStd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnAddStd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnAddStd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddStd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnAddStd->ForeColor = System::Drawing::Color::White;
                    this->btnAddStd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnAddStd->Location = System::Drawing::Point(202, 531);
                    this->btnAddStd->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnAddStd->Name = L"btnAddStd";
                    this->btnAddStd->Size = System::Drawing::Size(148, 39);
                    this->btnAddStd->TabIndex = 150;
                    this->btnAddStd->Text = L"Add";
                    this->btnAddStd->UseMnemonic = false;
                    this->btnAddStd->UseVisualStyleBackColor = false;
                    this->btnAddStd->Click += gcnew System::EventHandler(this, &functionScreen::btnAddStd_Click);
                    //
                    // btnCancel
                    //
                    this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnCancel->Location = System::Drawing::Point(369, 531);
                    this->btnCancel->Name = L"btnCancel";
                    this->btnCancel->Size = System::Drawing::Size(148, 39);
                    this->btnCancel->TabIndex = 152;
                    this->btnCancel->Text = L"Cancel";
                    this->btnCancel->UseVisualStyleBackColor = true;
                    this->btnCancel->Click += gcnew System::EventHandler(this, &functionScreen::btnCancel_Click);
                    //
                    // label15
                    //
                    this->label15->AutoSize = true;
                    this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label15->ForeColor = System::Drawing::Color::White;
                    this->label15->Location = System::Drawing::Point(2, 153);
                    this->label15->Name = L"label15";
                    this->label15->Size = System::Drawing::Size(99, 25);
                    this->label15->TabIndex = 29;
                    this->label15->Text = L"First name";
                    //
                    // fName
                    //
                    this->fName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->fName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->fName->ForeColor = System::Drawing::SystemColors::Control;
                    this->fName->Location = System::Drawing::Point(7, 185);
                    this->fName->Margin = System::Windows::Forms::Padding(5);
                    this->fName->Name = L"fName";
                    this->fName->Size = System::Drawing::Size(144, 31);
                    this->fName->TabIndex = 145;
                    this->fName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::fName_KeyDown);
                    //
                    // label16
                    //
                    this->label16->AutoSize = true;
                    this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label16->ForeColor = System::Drawing::Color::White;
                    this->label16->Location = System::Drawing::Point(188, 153);
                    this->label16->Name = L"label16";
                    this->label16->Size = System::Drawing::Size(97, 25);
                    this->label16->TabIndex = 31;
                    this->label16->Text = L"Last name";
                    //
                    // lName
                    //
                    this->lName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->lName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->lName->ForeColor = System::Drawing::SystemColors::Control;
                    this->lName->Location = System::Drawing::Point(193, 185);
                    this->lName->Margin = System::Windows::Forms::Padding(5);
                    this->lName->Name = L"lName";
                    this->lName->Size = System::Drawing::Size(343, 31);
                    this->lName->TabIndex = 146;
                    this->lName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::lName_KeyDown);
                    //
                    // label18
                    //
                    this->label18->AutoSize = true;
                    this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label18->ForeColor = System::Drawing::Color::White;
                    this->label18->Location = System::Drawing::Point(2, 341);
                    this->label18->Name = L"label18";
                    this->label18->Size = System::Drawing::Size(74, 25);
                    this->label18->TabIndex = 33;
                    this->label18->Text = L"Gender";
                    //
                    // label19
                    //
                    this->label19->AutoSize = true;
                    this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label19->ForeColor = System::Drawing::Color::White;
                    this->label19->Location = System::Drawing::Point(2, 247);
                    this->label19->Name = L"label19";
                    this->label19->Size = System::Drawing::Size(85, 25);
                    this->label19->TabIndex = 35;
                    this->label19->Text = L"Social ID";
                    //
                    // socialID
                    //
                    this->socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->socialID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->socialID->ForeColor = System::Drawing::SystemColors::Control;
                    this->socialID->Location = System::Drawing::Point(7, 279);
                    this->socialID->Margin = System::Windows::Forms::Padding(5);
                    this->socialID->Name = L"socialID";
                    this->socialID->Size = System::Drawing::Size(531, 31);
                    this->socialID->TabIndex = 147;
                    this->socialID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::socialID_KeyDown);
                    //
                    // doB
                    //
                    this->doB->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->doB->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->doB->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->doB->CustomFormat = L"dd/MM/yyyy";
                    this->doB->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
                    this->doB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->doB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->doB->Location = System::Drawing::Point(7, 469);
                    this->doB->Name = L"doB";
                    this->doB->Size = System::Drawing::Size(153, 31);
                    this->doB->TabIndex = 149;
                    this->doB->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::doB_KeyDown);
                    //
                    // label22
                    //
                    this->label22->AutoSize = true;
                    this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label22->ForeColor = System::Drawing::Color::White;
                    this->label22->Location = System::Drawing::Point(2, 437);
                    this->label22->Name = L"label22";
                    this->label22->Size = System::Drawing::Size(118, 25);
                    this->label22->TabIndex = 42;
                    this->label22->Text = L"Date of birth";
                    //
                    // newSemesterUI
                    //
                    this->newSemesterUI->Controls->Add(this->semStartDate);
                    this->newSemesterUI->Controls->Add(this->semEndDate);
                    this->newSemesterUI->Controls->Add(this->newSemYear);
                    this->newSemesterUI->Controls->Add(this->inputedCourseList);
                    this->newSemesterUI->Controls->Add(this->panel8);
                    this->newSemesterUI->Controls->Add(this->button1);
                    this->newSemesterUI->Controls->Add(this->button2);
                    this->newSemesterUI->Controls->Add(this->label17);
                    this->newSemesterUI->Controls->Add(this->label20);
                    this->newSemesterUI->Controls->Add(this->newSem);
                    this->newSemesterUI->Controls->Add(this->label21);
                    this->newSemesterUI->Location = System::Drawing::Point(278, 86);
                    this->newSemesterUI->Name = L"newSemesterUI";
                    this->newSemesterUI->Size = System::Drawing::Size(1130, 643);
                    this->newSemesterUI->TabIndex = 42;
                    this->newSemesterUI->Visible = false;
                    this->newSemesterUI->Click += gcnew System::EventHandler(this, &functionScreen::newSemesterUI_Click);
                    //
                    // semStartDate
                    //
                    this->semStartDate->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->semStartDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->semStartDate->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->semStartDate->CustomFormat = L"dd/MM/yyyy";
                    this->semStartDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->semStartDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->semStartDate->Location = System::Drawing::Point(58, 174);
                    this->semStartDate->Name = L"semStartDate";
                    this->semStartDate->Size = System::Drawing::Size(153, 31);
                    this->semStartDate->TabIndex = 122;
                    //
                    // semEndDate
                    //
                    this->semEndDate->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->semEndDate->CustomFormat = L"dd/MM/yyyy";
                    this->semEndDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->semEndDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->semEndDate->Location = System::Drawing::Point(247, 174);
                    this->semEndDate->Name = L"semEndDate";
                    this->semEndDate->Size = System::Drawing::Size(153, 31);
                    this->semEndDate->TabIndex = 123;
                    //
                    // newSemYear
                    //
                    this->newSemYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->newSemYear->Cursor = System::Windows::Forms::Cursors::Default;
                    this->newSemYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->newSemYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSemYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->newSemYear->ForeColor = System::Drawing::Color::White;
                    this->newSemYear->FormattingEnabled = true;
                    this->newSemYear->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->newSemYear->Location = System::Drawing::Point(204, 82);
                    this->newSemYear->Name = L"newSemYear";
                    this->newSemYear->Size = System::Drawing::Size(196, 33);
                    this->newSemYear->TabIndex = 121;
                    //
                    // inputedCourseList
                    //
                    this->inputedCourseList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->inputedCourseList->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->inputedCourseList->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->inputedCourseList->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
                    this->inputedCourseList->ItemHeight = 28;
                    this->inputedCourseList->Location = System::Drawing::Point(64, 224);
                    this->inputedCourseList->Name = L"inputedCourseList";
                    this->inputedCourseList->Size = System::Drawing::Size(326, 392);
                    this->inputedCourseList->TabIndex = 71;
                    this->inputedCourseList->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::inputedCourseList_SelectedIndexChanged);
                    //
                    // panel8
                    //
                    this->panel8->Controls->Add(this->label23);
                    this->panel8->Controls->Add(this->nsCourseID);
                    this->panel8->Controls->Add(this->nsBtnDone);
                    this->panel8->Controls->Add(this->nsBtnAdd);
                    this->panel8->Controls->Add(this->nsBtnCancel);
                    this->panel8->Controls->Add(this->nsDay2);
                    this->panel8->Controls->Add(this->nsSession2);
                    this->panel8->Controls->Add(this->nsDay1);
                    this->panel8->Controls->Add(this->nsSession1);
                    this->panel8->Controls->Add(this->label29);
                    this->panel8->Controls->Add(this->nsCourseName);
                    this->panel8->Controls->Add(this->label30);
                    this->panel8->Controls->Add(this->nsCredit);
                    this->panel8->Controls->Add(this->label31);
                    this->panel8->Controls->Add(this->label32);
                    this->panel8->Controls->Add(this->nsMaxStd);
                    this->panel8->Controls->Add(this->label33);
                    this->panel8->Controls->Add(this->nsLecturerName);
                    this->panel8->Controls->Add(this->label34);
                    this->panel8->Controls->Add(this->nsRoom);
                    this->panel8->Controls->Add(this->label35);
                    this->panel8->Controls->Add(this->label36);
                    this->panel8->Controls->Add(this->nsRegisStart);
                    this->panel8->Controls->Add(this->label37);
                    this->panel8->Controls->Add(this->label38);
                    this->panel8->Controls->Add(this->label39);
                    this->panel8->Controls->Add(this->nsRegisEnd);
                    this->panel8->Location = System::Drawing::Point(533, 31);
                    this->panel8->Name = L"panel8";
                    this->panel8->Size = System::Drawing::Size(537, 599);
                    this->panel8->TabIndex = 72;
                    //
                    // label23
                    //
                    this->label23->AutoSize = true;
                    this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label23->ForeColor = System::Drawing::Color::White;
                    this->label23->Location = System::Drawing::Point(3, 112);
                    this->label23->Name = L"label23";
                    this->label23->Size = System::Drawing::Size(94, 25);
                    this->label23->TabIndex = 71;
                    this->label23->Text = L"Course ID";
                    //
                    // nsCourseID
                    //
                    this->nsCourseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCourseID->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCourseID->Location = System::Drawing::Point(6, 149);
                    this->nsCourseID->Margin = System::Windows::Forms::Padding(5);
                    this->nsCourseID->Name = L"nsCourseID";
                    this->nsCourseID->Size = System::Drawing::Size(112, 31);
                    this->nsCourseID->TabIndex = 125;
                    //
                    // nsBtnDone
                    //
                    this->nsBtnDone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnDone->BackColor = System::Drawing::Color::DodgerBlue;
                    this->nsBtnDone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->nsBtnDone->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->nsBtnDone->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnDone->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnDone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnDone->ForeColor = System::Drawing::Color::White;
                    this->nsBtnDone->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->nsBtnDone->Location = System::Drawing::Point(28, 534);
                    this->nsBtnDone->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->nsBtnDone->Name = L"nsBtnDone";
                    this->nsBtnDone->Size = System::Drawing::Size(148, 39);
                    this->nsBtnDone->TabIndex = 137;
                    this->nsBtnDone->Text = L"Done";
                    this->nsBtnDone->UseMnemonic = false;
                    this->nsBtnDone->UseVisualStyleBackColor = false;
                    this->nsBtnDone->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnDone_Click);
                    //
                    // nsBtnAdd
                    //
                    this->nsBtnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnAdd->BackColor = System::Drawing::Color::DodgerBlue;
                    this->nsBtnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->nsBtnAdd->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->nsBtnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnAdd->ForeColor = System::Drawing::Color::White;
                    this->nsBtnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->nsBtnAdd->Location = System::Drawing::Point(198, 534);
                    this->nsBtnAdd->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->nsBtnAdd->Name = L"nsBtnAdd";
                    this->nsBtnAdd->Size = System::Drawing::Size(148, 39);
                    this->nsBtnAdd->TabIndex = 136;
                    this->nsBtnAdd->Text = L"Add";
                    this->nsBtnAdd->UseMnemonic = false;
                    this->nsBtnAdd->UseVisualStyleBackColor = false;
                    this->nsBtnAdd->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnAdd_Click);
                    //
                    // nsBtnCancel
                    //
                    this->nsBtnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->nsBtnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->nsBtnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->nsBtnCancel->Location = System::Drawing::Point(365, 534);
                    this->nsBtnCancel->Name = L"nsBtnCancel";
                    this->nsBtnCancel->Size = System::Drawing::Size(148, 39);
                    this->nsBtnCancel->TabIndex = 138;
                    this->nsBtnCancel->Text = L"Cancel";
                    this->nsBtnCancel->UseVisualStyleBackColor = true;
                    this->nsBtnCancel->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnCancel_Click);
                    //
                    // nsDay2
                    //
                    this->nsDay2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsDay2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsDay2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsDay2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsDay2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsDay2->ForeColor = System::Drawing::Color::White;
                    this->nsDay2->FormattingEnabled = true;
                    this->nsDay2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsDay2->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->nsDay2->Location = System::Drawing::Point(148, 468);
                    this->nsDay2->Name = L"nsDay2";
                    this->nsDay2->Size = System::Drawing::Size(137, 33);
                    this->nsDay2->TabIndex = 134;
                    //
                    // nsSession2
                    //
                    this->nsSession2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsSession2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsSession2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsSession2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsSession2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsSession2->ForeColor = System::Drawing::Color::White;
                    this->nsSession2->FormattingEnabled = true;
                    this->nsSession2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsSession2->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->nsSession2->Location = System::Drawing::Point(315, 468);
                    this->nsSession2->Name = L"nsSession2";
                    this->nsSession2->Size = System::Drawing::Size(179, 33);
                    this->nsSession2->TabIndex = 135;
                    //
                    // nsDay1
                    //
                    this->nsDay1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsDay1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsDay1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsDay1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsDay1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsDay1->ForeColor = System::Drawing::Color::White;
                    this->nsDay1->FormattingEnabled = true;
                    this->nsDay1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsDay1->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->nsDay1->Location = System::Drawing::Point(148, 425);
                    this->nsDay1->Name = L"nsDay1";
                    this->nsDay1->Size = System::Drawing::Size(137, 33);
                    this->nsDay1->TabIndex = 132;
                    //
                    // nsSession1
                    //
                    this->nsSession1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsSession1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsSession1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsSession1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsSession1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsSession1->ForeColor = System::Drawing::Color::White;
                    this->nsSession1->FormattingEnabled = true;
                    this->nsSession1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsSession1->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->nsSession1->Location = System::Drawing::Point(315, 425);
                    this->nsSession1->Name = L"nsSession1";
                    this->nsSession1->Size = System::Drawing::Size(179, 33);
                    this->nsSession1->TabIndex = 133;
                    //
                    // label29
                    //
                    this->label29->AutoSize = true;
                    this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label29->ForeColor = System::Drawing::Color::White;
                    this->label29->Location = System::Drawing::Point(3, 16);
                    this->label29->Name = L"label29";
                    this->label29->Size = System::Drawing::Size(123, 25);
                    this->label29->TabIndex = 21;
                    this->label29->Text = L"Course name";
                    //
                    // nsCourseName
                    //
                    this->nsCourseName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCourseName->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCourseName->Location = System::Drawing::Point(6, 53);
                    this->nsCourseName->Margin = System::Windows::Forms::Padding(5);
                    this->nsCourseName->Name = L"nsCourseName";
                    this->nsCourseName->Size = System::Drawing::Size(525, 31);
                    this->nsCourseName->TabIndex = 124;
                    //
                    // label30
                    //
                    this->label30->AutoSize = true;
                    this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label30->ForeColor = System::Drawing::Color::White;
                    this->label30->Location = System::Drawing::Point(151, 112);
                    this->label30->Name = L"label30";
                    this->label30->Size = System::Drawing::Size(71, 25);
                    this->label30->TabIndex = 29;
                    this->label30->Text = L"Credits";
                    //
                    // nsCredit
                    //
                    this->nsCredit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCredit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCredit->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCredit->Location = System::Drawing::Point(160, 149);
                    this->nsCredit->Margin = System::Windows::Forms::Padding(5);
                    this->nsCredit->Name = L"nsCredit";
                    this->nsCredit->Size = System::Drawing::Size(85, 31);
                    this->nsCredit->TabIndex = 126;
                    //
                    // label31
                    //
                    this->label31->AutoSize = true;
                    this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label31->ForeColor = System::Drawing::Color::White;
                    this->label31->Location = System::Drawing::Point(282, 112);
                    this->label31->Name = L"label31";
                    this->label31->Size = System::Drawing::Size(124, 25);
                    this->label31->TabIndex = 31;
                    this->label31->Text = L"Max students";
                    //
                    // label32
                    //
                    this->label32->AutoSize = true;
                    this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label32->ForeColor = System::Drawing::Color::White;
                    this->label32->Location = System::Drawing::Point(44, 473);
                    this->label32->Name = L"label32";
                    this->label32->Size = System::Drawing::Size(80, 23);
                    this->label32->TabIndex = 57;
                    this->label32->Text = L"Session 2";
                    //
                    // nsMaxStd
                    //
                    this->nsMaxStd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsMaxStd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsMaxStd->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsMaxStd->Location = System::Drawing::Point(287, 149);
                    this->nsMaxStd->Margin = System::Windows::Forms::Padding(5);
                    this->nsMaxStd->Name = L"nsMaxStd";
                    this->nsMaxStd->Size = System::Drawing::Size(119, 31);
                    this->nsMaxStd->TabIndex = 127;
                    //
                    // label33
                    //
                    this->label33->AutoSize = true;
                    this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label33->ForeColor = System::Drawing::Color::White;
                    this->label33->Location = System::Drawing::Point(1, 208);
                    this->label33->Name = L"label33";
                    this->label33->Size = System::Drawing::Size(133, 25);
                    this->label33->TabIndex = 33;
                    this->label33->Text = L"Lecturer name";
                    //
                    // nsLecturerName
                    //
                    this->nsLecturerName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsLecturerName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsLecturerName->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsLecturerName->Location = System::Drawing::Point(6, 245);
                    this->nsLecturerName->Margin = System::Windows::Forms::Padding(5);
                    this->nsLecturerName->Name = L"nsLecturerName";
                    this->nsLecturerName->Size = System::Drawing::Size(526, 31);
                    this->nsLecturerName->TabIndex = 129;
                    //
                    // label34
                    //
                    this->label34->AutoSize = true;
                    this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label34->ForeColor = System::Drawing::Color::White;
                    this->label34->Location = System::Drawing::Point(443, 112);
                    this->label34->Name = L"label34";
                    this->label34->Size = System::Drawing::Size(60, 25);
                    this->label34->TabIndex = 35;
                    this->label34->Text = L"Room";
                    //
                    // nsRoom
                    //
                    this->nsRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRoom->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsRoom->Location = System::Drawing::Point(448, 149);
                    this->nsRoom->Margin = System::Windows::Forms::Padding(5);
                    this->nsRoom->Name = L"nsRoom";
                    this->nsRoom->Size = System::Drawing::Size(84, 31);
                    this->nsRoom->TabIndex = 128;
                    //
                    // label35
                    //
                    this->label35->AutoSize = true;
                    this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label35->ForeColor = System::Drawing::Color::White;
                    this->label35->Location = System::Drawing::Point(3, 392);
                    this->label35->Name = L"label35";
                    this->label35->Size = System::Drawing::Size(89, 25);
                    this->label35->TabIndex = 37;
                    this->label35->Text = L"Schedule";
                    //
                    // label36
                    //
                    this->label36->AutoSize = true;
                    this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label36->ForeColor = System::Drawing::Color::White;
                    this->label36->Location = System::Drawing::Point(44, 430);
                    this->label36->Name = L"label36";
                    this->label36->Size = System::Drawing::Size(80, 23);
                    this->label36->TabIndex = 39;
                    this->label36->Text = L"Session 1";
                    //
                    // nsRegisStart
                    //
                    this->nsRegisStart->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->nsRegisStart->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->nsRegisStart->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->nsRegisStart->CustomFormat = L"dd/MM/yyyy";
                    this->nsRegisStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRegisStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->nsRegisStart->Location = System::Drawing::Point(113, 337);
                    this->nsRegisStart->Name = L"nsRegisStart";
                    this->nsRegisStart->Size = System::Drawing::Size(153, 31);
                    this->nsRegisStart->TabIndex = 130;
                    //
                    // label37
                    //
                    this->label37->AutoSize = true;
                    this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label37->ForeColor = System::Drawing::Color::White;
                    this->label37->Location = System::Drawing::Point(3, 304);
                    this->label37->Name = L"label37";
                    this->label37->Size = System::Drawing::Size(154, 25);
                    this->label37->TabIndex = 42;
                    this->label37->Text = L"Registration date";
                    //
                    // label38
                    //
                    this->label38->AutoSize = true;
                    this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label38->ForeColor = System::Drawing::Color::White;
                    this->label38->Location = System::Drawing::Point(44, 341);
                    this->label38->Name = L"label38";
                    this->label38->Size = System::Drawing::Size(53, 23);
                    this->label38->TabIndex = 44;
                    this->label38->Text = L"From:";
                    //
                    // label39
                    //
                    this->label39->AutoSize = true;
                    this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label39->ForeColor = System::Drawing::Color::White;
                    this->label39->Location = System::Drawing::Point(294, 341);
                    this->label39->Name = L"label39";
                    this->label39->Size = System::Drawing::Size(31, 23);
                    this->label39->TabIndex = 45;
                    this->label39->Text = L"To:";
                    //
                    // nsRegisEnd
                    //
                    this->nsRegisEnd->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->nsRegisEnd->CustomFormat = L"dd/MM/yyyy";
                    this->nsRegisEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRegisEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->nsRegisEnd->Location = System::Drawing::Point(341, 337);
                    this->nsRegisEnd->Name = L"nsRegisEnd";
                    this->nsRegisEnd->Size = System::Drawing::Size(153, 31);
                    this->nsRegisEnd->TabIndex = 131;
                    //
                    // button1
                    //
                    this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->button1->BackColor = System::Drawing::Color::DodgerBlue;
                    this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->button1->ForeColor = System::Drawing::Color::White;
                    this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->button1->Location = System::Drawing::Point(747, 577);
                    this->button1->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->button1->Name = L"button1";
                    this->button1->Size = System::Drawing::Size(148, 39);
                    this->button1->TabIndex = 69;
                    this->button1->Text = L"Finish";
                    this->button1->UseMnemonic = false;
                    this->button1->UseVisualStyleBackColor = false;
                    //
                    // button2
                    //
                    this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->button2->Location = System::Drawing::Point(918, 577);
                    this->button2->Name = L"button2";
                    this->button2->Size = System::Drawing::Size(148, 39);
                    this->button2->TabIndex = 70;
                    this->button2->Text = L"Cancel";
                    this->button2->UseVisualStyleBackColor = true;
                    //
                    // label17
                    //
                    this->label17->AutoSize = true;
                    this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label17->ForeColor = System::Drawing::Color::White;
                    this->label17->Location = System::Drawing::Point(240, 139);
                    this->label17->Name = L"label17";
                    this->label17->Size = System::Drawing::Size(86, 25);
                    this->label17->TabIndex = 44;
                    this->label17->Text = L"End date";
                    //
                    // label20
                    //
                    this->label20->AutoSize = true;
                    this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label20->ForeColor = System::Drawing::Color::White;
                    this->label20->Location = System::Drawing::Point(53, 48);
                    this->label20->Name = L"label20";
                    this->label20->Size = System::Drawing::Size(89, 25);
                    this->label20->TabIndex = 37;
                    this->label20->Text = L"Semester";
                    //
                    // newSem
                    //
                    this->newSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->newSem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->newSem->ForeColor = System::Drawing::SystemColors::Control;
                    this->newSem->Location = System::Drawing::Point(59, 82);
                    this->newSem->Margin = System::Windows::Forms::Padding(5);
                    this->newSem->Name = L"newSem";
                    this->newSem->Size = System::Drawing::Size(102, 34);
                    this->newSem->TabIndex = 120;
                    //
                    // label21
                    //
                    this->label21->AutoSize = true;
                    this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label21->ForeColor = System::Drawing::Color::White;
                    this->label21->Location = System::Drawing::Point(53, 139);
                    this->label21->Name = L"label21";
                    this->label21->Size = System::Drawing::Size(92, 25);
                    this->label21->TabIndex = 31;
                    this->label21->Text = L"Start date";
                    //
                    // functionScreen
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->ClientSize = System::Drawing::Size(1436, 771);
                    this->Controls->Add(this->greetText);
                    this->Controls->Add(this->allRolePanel);
                    this->Controls->Add(this->studentFunctionPanel);
                    this->Controls->Add(this->date);
                    this->Controls->Add(this->time);
                    this->Controls->Add(this->staffFunctionPanel);
                    this->Controls->Add(this->btMinimise);
                    this->Controls->Add(this->btCloseApp);
                    this->Controls->Add(this->btMinimiseBG);
                    this->Controls->Add(this->btCloseBG);
                    this->Controls->Add(this->newSemesterUI);
                    this->Controls->Add(this->panelSchoolYear);
                    this->Controls->Add(this->courseUpdateUI);
                    this->Controls->Add(this->viewClassUI);
                    this->Controls->Add(this->viewClSBUI);
                    this->Controls->Add(this->viewCourseUI);
                    this->Controls->Add(this->viewCoSBUI);
                    this->Controls->Add(this->viewStudentUI);
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
                    this->ForeColor = System::Drawing::Color::Black;
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
                    this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->Name = L"functionScreen";
                    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                    this->Text = L"Moodle";
                    this->Load += gcnew System::EventHandler(this, &functionScreen::MyForm1_Load);
                    this->MouseEnter += gcnew System::EventHandler(this, &functionScreen::MyForm1_MouseEnter);
                    this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::MyForm1_MouseMove);
                    this->allRolePanel->ResumeLayout(false);
                    this->staffFunctionPanel->ResumeLayout(false);
                    this->studentFunctionPanel->ResumeLayout(false);
                    this->courseUpdateUI->ResumeLayout(false);
                    this->panel1->ResumeLayout(false);
                    this->updateCoursePanel->ResumeLayout(false);
                    this->updateCoursePanel->PerformLayout();
                    this->panelSchoolYear->ResumeLayout(false);
                    this->panelSchoolYear->PerformLayout();
                    this->panelAddStudent->ResumeLayout(false);
                    this->panelAddStudent->PerformLayout();
                    this->newSemesterUI->ResumeLayout(false);
                    this->newSemesterUI->PerformLayout();
                    this->panel8->ResumeLayout(false);
                    this->panel8->PerformLayout();
                    this->ResumeLayout(false);
                }
#pragma endregion
            private:
                System::String ^ convertString(string st) {
                    return gcnew System::String(st.c_str());
                } 
            private : string convertToString(System::String ^ st)
                {
                    return msclr::interop::marshal_as<std::string>(st);
                }
            private:
                System::Void MyForm1_Load(System::Object ^ sender, System::EventArgs ^ e)
                {
                    timeController->Start();
                    viewCourseUI->Hide();
                }

            private:
                System::Void btCloseApp_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Exit1 = true;
                    Close();
                }

            private:
                System::Void btMinimise_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    this->WindowState = FormWindowState::Minimized;
                }

            private:
                System::Void btMinimiseBG_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btMinimiseBG->FlatAppearance->BorderSize = 1;
                }

            private:
                System::Void btMinimiseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btMinimiseBG->FlatAppearance->BorderSize = 0;
                }

            private:
                System::Void btCloseBG_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btCloseBG->FlatAppearance->BorderSize = 1;
                }

            private:
                System::Void btCloseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btCloseBG->FlatAppearance->BorderSize = 0;
                }

            int count = 0;
            private:
                System::Void greetText_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    allRolePanel->Show();
                    count = 0;
                }

            private:
                System::Void allRolePanel_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    count = 0;
                }

            private:
                System::Void timer1_Tick(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (count < 5)
                        count++;
                }

            private:
                System::Void MyForm1_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                void hide(int n) {
                    if (n != 1)
                        allRolePanel->Hide();
                }

            private:
                System::Void MyForm1_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            public:
                string getMonthLetter(int n) {
                    switch (n) {
                        case 1:
                            return "JAN";
                        case 2:
                            return "FEB";
                        case 3:
                            return "MAR";
                        case 4:
                            return "APR";
                        case 5:
                            return "MAY";
                        case 6:
                            return "JUN";
                        case 7:
                            return "JUL";
                        case 8:
                            return "AUG";
                        case 9:
                            return "SEP";
                        case 10:
                            return "OCT";
                        case 11:
                            return "NOV";
                        case 12:
                            return "DEC";
                    }
                }

            private:
                System::Void timeController_Tick(System::Object ^ sender, System::EventArgs ^ e)
                {
                    time_t now = std::time(0);
                    tm* ltm = localtime(&now);
                    string tmp = asctime(ltm);
                    System::String ^ datetime = gcnew System::String(tmp.c_str());
                    time->Text = datetime->Remove(0, 11)->Remove(5, 9);
                    //date->Text = getMonthLetter(1 + ltm->tm_mon) + " " + System::Convert::ToString(DateTime::Now)->Remove(0, 2)->Remove(2, 16);

                    date->Text = datetime->Remove(0, 4)->Remove(6) + datetime->Remove(0, 19);
                    string name = curAccount->lastname + " " + curAccount->firstname;
                    System::String ^ nameText = gcnew System::String(name.c_str());
                    if (ltm->tm_hour >= 5 && ltm->tm_hour < 12)
                        greetText->Text = "Good morning, " + nameText;
                    if (ltm->tm_hour >= 12 && ltm->tm_hour < 17)
                        greetText->Text = "Good afternoon, " + nameText;
                    if ((ltm->tm_hour >= 17 && ltm->tm_hour <= 24) || (ltm->tm_hour >=0 && ltm->tm_hour < 5))
                        greetText->Text = "Good evening, " + nameText;
                    //datetime.substr(4, 5);
                }

            private:
                System::Void newbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!newSchoolYear->Visible) {
                        newSchoolYear->Show();
                        newSemester->Show();
                    } else {
                        newSchoolYear->Hide();
                        newSemester->Hide();
                    }
                }

            private:
                System::Void viewbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!viewCourses->Visible) {
                        viewCourses->Show();
                        viewScoreboard->Show();
                        viewStudentList->Show();
                        viewClasses->Show();
                    } else {
                        viewCourses->Hide();
                        viewScoreboard->Hide();
                        viewStudentList->Hide();
                        viewClasses->Hide();
                    }
                }

            private:
                System::Void studentView_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!studentViewCourse->Visible) {
                        studentViewCourse->Show();
                        studentViewScoreboard->Show();
                    } else {
                        studentViewCourse->Hide();
                        studentViewScoreboard->Hide();
                    }                    
                }

            private:
                System::Void logoutBTN_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Close();
                }

            private:

            private:
                string getSession(string s) {
                    if (s == "1")
                        return "07:30-09:10";
                    if (s == "2")
                        return "09:30-11:30";
                    if (s == "3")
                        return "13:30-15:30";
                    if (s == "4")
                        return "15:30-17:10";
                }
            private:
                System::Void viewCourses_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    viewCourseUI->Items->Clear();
                    if (viewCourseUI->Visible) {
                        viewCourseUI->Hide();
                    } else {
                        viewCourseUI->Show();
                        viewCourseUI->SendToBack();
                        AcademicYears* curYear = yearList2;
                        int i = 0;
                        while (curYear) {
                            Semesters* curSem = curYear->semesters;
                            while (curSem) {
                                Courses* curCourse = curSem->courses;
                                while (curCourse) {
                                    i++;
                                    string st = to_string(i);
                                    ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(curCourse->courseID));
                                    lv->SubItems->Add(convertString(curCourse->courseName));
                                    lv->SubItems->Add(convertString(to_string(curCourse->credits)));
                                    lv->SubItems->Add(convertString(to_string(curCourse->numStudents) + "/" + to_string(curCourse->maxStudents)));
                                    lv->SubItems->Add(convertString(curCourse->day1 + " | " + getSession(curCourse->session1)));
                                    lv->SubItems->Add(convertString(curCourse->day2 + " | " + getSession(curCourse->session2)));
                                    lv->SubItems->Add(convertString(curCourse->room));
                                    lv->SubItems->Add(convertString(curCourse->lecturerName));
                                    viewCourseUI->Items->Add(lv);
                                    curCourse = curCourse->next;
                                }
                                curSem = curSem->next;
                            }
                            curYear = curYear->next;
                        }
                    }
                }

            private:
                System::Void viewCourseUI_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                }

            private:
                System::Void viewCourseUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewStudentList_Click(System::Object ^ sender, System::EventArgs ^ e) {
                    if (viewStudentUI->Visible) {
                        viewStudentUI->Hide();
                    } else {
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);

                        if (Class == L"" && Course == L"")
                            return;

                        viewStudentUI->Items->Clear();

                        viewStudentUI->Show();
                        viewStudentUI->SendToBack();
                        if (Class != L"") {
                            Students* student = studentList2;
                            int i = 0;
                            while (student) {
                                if (student->classID == convertToString(Class)) {
                                    i++;
                                    string st = to_string(i);
                                    ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(student->studentID));
                                    lv->SubItems->Add(convertString(student->account->lastname));
                                    lv->SubItems->Add(convertString(student->account->firstname));
                                    lv->SubItems->Add(convertString(student->account->socialID));
                                    if (toupper(student->account->gender) == 'F')
                                        lv->SubItems->Add(L"Female");
                                    else {
                                        if (toupper(student->account->gender) == 'M')
                                            lv->SubItems->Add(L"Male");
                                        else
                                            lv->SubItems->Add(L"<N/A>");
                                    }
                                    lv->SubItems->Add(convertString(student->account->doB.day + "/" + student->account->doB.month + "/" + student->account->doB.year));
                                    lv->SubItems->Add(convertString(student->classID));
                                    viewStudentUI->Items->Add(lv);
                                }
                                student = student->next;
                            }
                        } else {
                            AcademicYears* curYear = yearList2;
                            int i = 0;
                            while (curYear) {
                                Semesters* curSemester = curYear->semesters;
                                while (curSemester) {
                                    Courses* curCourse = curSemester->courses;
                                    while (curCourse) {
                                        if (curCourse->courseID == convertToString(Course)) {
                                            Students* student = curCourse->studentList;
                                            while (student) {
                                                i++;
                                                string st = to_string(i);
                                                ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                                lv->SubItems->Add(convertString(student->studentID));
                                                lv->SubItems->Add(convertString(student->account->lastname));
                                                lv->SubItems->Add(convertString(student->account->firstname));
                                                lv->SubItems->Add(convertString(student->account->socialID));
                                                if (toupper(student->account->gender) == 'F')
                                                    lv->SubItems->Add(L"Female");
                                                else {
                                                    if (toupper(student->account->gender) == 'M')
                                                        lv->SubItems->Add(L"Male");
                                                    else
                                                        lv->SubItems->Add(L"<N/A>");
                                                }
                                                lv->SubItems->Add(convertString(student->account->doB.day + "/" + student->account->doB.month + "/" + student->account->doB.year));
                                                lv->SubItems->Add(convertString(student->classID));
                                                viewStudentUI->Items->Add(lv);
                                                student = student->next;
                                            }
                                            return;
                                        }
                                        curCourse = curCourse->next;
                                    }
                                    curSemester = curSemester->next;
                                }
                                curYear = curYear->next;
                            }
                        }
                    }
                }

            private:
                System::Void viewScoreboard_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (viewCoSBUI->Visible || viewClSBUI->Visible) {
                        viewCoSBUI->Hide();
                        viewClSBUI->Hide();
                    } else {
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);
                        if (Class == L"" && Course == L"")
                            return;
                        if (Class != L"") {

                            Classes* classes = yearList2->classes;
                            while (classes && classes->classID != convertToString(Class))
                                classes = classes->next;

                            int i = 0;

                            viewClSBUI->Items->Clear();

                            viewClSBUI->Show();
                            viewClSBUI->SendToBack();

                            if (!classes)
                                return;

                            Students* student = classes->students;
                            while (student) {

                                double sum = 0, count = 0, allsum = 0, allcount = 0;
                                Scoreboards* scoreBoards = studentList2->findStudentByID(student->studentID)->scoreBoards;
                                while (scoreBoards) {
                                    //check if in the semester
                                    if (yearList2->semesters->courses->findCourseByID(scoreBoards->courseID)) {
                                        count++;
                                        sum += scoreBoards->totalScore;
                                    }
                                    allcount++;
                                    allsum += scoreBoards->totalScore;
                                    scoreBoards = scoreBoards->next;
                                }

                                scoreBoards = studentList2->findStudentByID(student->studentID)->scoreBoards;
                                int j = 0;
                                cout << student->account->lastname + " " + student->account->firstname << endl;
                                while (scoreBoards) {
                                    //check if in the semester
                                    cout << allcount << endl;
                                    ListViewItem ^ lv;
                                    //if (studentList2->findStudentByID(student->studentID)->enrolledCourse->findCourseByID(scoreBoards->courseID)) {
                                        if (j == (int)(allcount / 2)) {
                                            i++;
                                            string st = to_string(i);
                                            lv = gcnew ListViewItem(convertString(st), 0);
                                            lv->SubItems->Add(convertString(student->studentID));
                                            lv->SubItems->Add(convertString(student->account->lastname + " " + student->account->firstname));
                                        } else {
                                            lv = gcnew ListViewItem(L"", 0);
                                            lv->SubItems->Add(L"");
                                            lv->SubItems->Add(L"");
                                        }

                                        if (j == (int)(allcount / 2))
                                            lv->SubItems->Add(convertString(scoreBoards->courseID));
                                        else
                                            lv->SubItems->Add(L"");
                                        lv->SubItems->Add(convertString(formatDouble(scoreBoards->totalScore)));
                                        if (j == (int)(allcount / 2)) {
                                            if (count != 0)
                                                lv->SubItems->Add(convertString(formatDouble((double)(sum / count))));
                                            else
                                                lv->SubItems->Add(L"N/A");
                                            if (allcount != 0)
                                                lv->SubItems->Add(convertString(formatDouble((double)(allsum / allcount))));
                                            else
                                                lv->SubItems->Add(L"N/A");
                                        }
                                        viewClSBUI->Items->Add(lv);
                                        j++;
                                    //}
                                    scoreBoards = scoreBoards->next;
                                }
                                student = student->next;
                            }                            
                        } else {

                            viewCoSBUI->Items->Clear();

                            viewCoSBUI->Show();
                            viewCoSBUI->SendToBack();

                            AcademicYears* curYear = yearList2;
                            int i = 0;
                            while (curYear) {
                                Semesters* curSemester = curYear->semesters;
                                while (curSemester) {
                                    Courses* curCourse = curSemester->courses;
                                    while (curCourse) {
                                        if (curCourse->courseID == convertToString(Course)) {
                                            Students* student = curCourse->studentList;
                                            while (student) {
                                                i++;
                                                string st = to_string(i);
                                                ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                                lv->SubItems->Add(convertString(student->studentID));
                                                lv->SubItems->Add(convertString(student->account->lastname + " " + student->account->firstname));
                                                lv->SubItems->Add(convertString(student->classID));
                                                Scoreboards* SBstudent = student->scoreBoards;
                                                while (SBstudent && SBstudent->courseID != convertToString(Course)) {
                                                    SBstudent = SBstudent->next;
                                                }
                                                if (SBstudent) {
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->totalScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->finalScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->midtermScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->otherScore)));
                                                } else {
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");                                              
                                                }
                                                viewCoSBUI->Items->Add(lv);
                                                student = student->next;
                                            }
                                            return;
                                        }
                                        curCourse = curCourse->next;
                                    }
                                    curSemester = curSemester->next;
                                }
                                curYear = curYear->next;
                            }
                        }
                    }
                }

            private:
                System::Void viewClSBUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewCoSBUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewStudentUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewClassUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewClasses_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    viewClassUI->Items->Clear();
                    if (viewClassUI->Visible) {
                        viewClassUI->Hide();
                    } else {
                        viewClassUI->Show();
                        viewClassUI->SendToBack();
                        AcademicYears* curYear = yearList2;
                        int i = 0, cnt = 0;
                        while (curYear) {
                            cnt = 0;
                            i++;
                            string st = to_string(i);
                            Classes* curClass = curYear->classes;
                            while (curClass) {
                                cnt++;
                                curClass = curClass->next;
                            }

                            curClass = curYear->classes;
                            cnt /= 2;
                            while (curClass) {
                                ListViewItem ^ lv;
                                if (cnt == 0) {
                                    lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(curYear->getFullYear()));
                                } else {
                                    lv = gcnew ListViewItem(L"", 0);
                                    lv->SubItems->Add(L"");
                                }
                                lv->SubItems->Add(convertString(curClass->classID));
                                viewClassUI->Items->Add(lv);
                                cnt--;
                                curClass = curClass->next;
                            }

                            curYear = curYear->next;
                        }
                    }
                }


            private:
                System::Void updateCoursebtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (courseUpdateUI->Visible) {
                        if (curCourseUpdate)
                            if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                                    updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1))
                                || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                                System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                                if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                    return;
                                }
                            }
                        btDelCourse->Hide();
                        updateCoursePanel->Hide();
                        courseUpdateUI->Hide();
                    } else {
                        courseUpdateUI->Show();
                        courseUpdateUI->SendToBack();
                        listCourses->Items->Clear();
                        if (coursesToUpdate) coursesToUpdate->Clear();
                        coursesToUpdate = gcnew List<String ^>();
                        AcademicYears* curYear = yearList2;
                        if (curYear) {
                            Semesters* sem = curYear->semesters;
                            if (sem) {
                                Courses* curCourse = sem->courses;
                                cout << sem->semesterNo << endl;
                                while (curCourse) {
                                    coursesToUpdate->Add(convertString(curCourse->courseID));
                                    listCourses->Items->Add(convertString(curCourse->courseID));
                                    curCourse = curCourse->next;
                                }
                            }
                        }
                    }
                    //ListBox
                }

                private:
                    int getWeekdayIndex(string weekday) {
                        for (auto& c : weekday)
                            c = (char)toupper(c);
                        if (weekday == "MON")
                            return 0;
                        if (weekday == "TUE")
                            return 1;
                        if (weekday == "WED")
                            return 2;
                        if (weekday == "THU")
                            return 3;
                        if (weekday == "FRI")
                            return 4;
                        if (weekday == "SAT")
                            return 5;
                }

                private:
                    string indexToWeekday(int index)
                    {
                        switch (index) {
                        case 0:
                            return "MON";
                        case 1:
                            return "TUE";
                        case 2:
                            return "WED";
                        case 3:
                            return "THU";
                        case 4:
                            return "FRI";
                        case 5:
                            return "SAT";
                        }
                    }
            private:
                void writeDataToCourseUpdateUI(Courses* course) {
                    updateCourseName->Text = convertString(course->courseName);
                    updateCourseCre->Text = convertString(to_string(course->credits));
                    updateCourseMaxSt->Text = convertString(to_string(course->maxStudents));
                    updateCourseRoom->Text = convertString(course->room);
                    updateCourseRegisStart->Value = DateTime(stoi(course->startDate.year), stoi(course->startDate.month), stoi(course->startDate.day));
                    updateCourseRegisEnd->Value = DateTime(stoi(course->endDate.year), stoi(course->endDate.month), stoi(course->endDate.day));

                    updateCourseLecturer->Text = convertString(course->lecturerName);
                    updateCourseD1->Text = convertString(course->day1);
                    updateCourseD2->Text = convertString(course->day2);
                    updateCourseS1->Text = convertString(getSession(course->session1));
                    updateCourseS2->Text = convertString(getSession(course->session2));
                    updateCourseD1->SelectedIndex = getWeekdayIndex(course->day1);
                    updateCourseD2->SelectedIndex = getWeekdayIndex(course->day2);
                    updateCourseS1->SelectedIndex = course->session1[0] - '1';
                    updateCourseS2->SelectedIndex = course->session2[0] - '1';
                    
                    updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Regular);
                    updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Regular);
                    updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Regular);
                    updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Regular);
                    updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Regular);
                    updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Regular);
                    updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Regular);
                    updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Regular);
                    updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Regular);
                    updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Regular);
                    updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Regular);
                }

            private:
                System::Void listCourses_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (listCourses->SelectedItems->Count > 0) {
                        selectedIndex = listCourses->SelectedIndex;
                        curCourseUpdate = yearList2->semesters->courses->findCourseByID(convertToString(coursesToUpdate[selectedIndex]));
                        if (!curCourseUpdate) {
                            MessageBox::Show("Can't find course with ID: " + coursesToUpdate[selectedIndex], "Course Update Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);  
                            return;
                        }

                        writeDataToCourseUpdateUI(curCourseUpdate);
                        updateCoursePanel->Show();
                        btDelCourse->Show();
                    } else {
                        selectedIndex = -1;
                        btDelCourse->Hide();
                        updateCoursePanel->Hide();
                    }
                }

            private:
                System::Void updateCourseName_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseName->Text != convertString(curCourseUpdate->courseName)) {
                        updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Bold);
                    } else {
                        updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseCre_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) {
                        updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Bold);
                    } else {
                        updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseMaxSt_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) {
                        updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Bold);
                    } else {
                        updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRoom_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseRoom->Text != convertString(curCourseUpdate->room)) {
                        updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Bold);
                    } else {
                        updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseLecturer_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseLecturer->Text != convertString(curCourseUpdate->lecturerName)) {
                        updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Bold);
                    } else {
                        updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseD1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1)) {
                        updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Bold);
                    } else {
                        updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseS1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') {
                        updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Bold);
                    } else {
                        updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseD2_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) {
                        updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Bold);
                    } else {
                        updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseS2_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1') {
                        updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Bold);
                    } else {
                        updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRegisEnd_CloseUp(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day))) {
                        updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Bold);
                    } else {
                        updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRegisStart_CloseUp(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) {
                        updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Bold);
                    } else {
                        updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void btRevertChanges_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                        updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1)) || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
                            writeDataToCourseUpdateUI(curCourseUpdate);
                        }
                    } else {
                        MessageBox::Show("No changes made!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                    }
                }

            private:
                System::Void btnSave_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                            updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1))
                        || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                        curCourseUpdate->courseName = convertToString(updateCourseName->Text);
                        curCourseUpdate->credits = stoi(convertToString(updateCourseCre->Text));
                        curCourseUpdate->maxStudents = stoi(convertToString(updateCourseMaxSt->Text));
                        curCourseUpdate->room = convertToString(updateCourseRoom->Text);

                        curCourseUpdate->startDate.year = to_string(updateCourseRegisStart->Value.Year);
                        curCourseUpdate->startDate.month = to_string(updateCourseRegisStart->Value.Month);
                        curCourseUpdate->startDate.day = to_string(updateCourseRegisStart->Value.Day);
                        curCourseUpdate->endDate.year = to_string(updateCourseRegisEnd->Value.Year);
                        curCourseUpdate->endDate.month = to_string(updateCourseRegisEnd->Value.Month);
                        curCourseUpdate->endDate.day = to_string(updateCourseRegisEnd->Value.Day);

                        curCourseUpdate->lecturerName = convertToString(updateCourseLecturer->Text);
                        curCourseUpdate->day1 = indexToWeekday(updateCourseD1->SelectedIndex);
                        curCourseUpdate->day2 = indexToWeekday(updateCourseD2->SelectedIndex);
                        curCourseUpdate->session1 = updateCourseS1->SelectedIndex + '1';
                        curCourseUpdate->session2 = updateCourseS2->SelectedIndex + '1';

                        MessageBox::Show("Course Updated Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

                        writeDataToCourseUpdateUI(curCourseUpdate);
                    } else {
                        MessageBox::Show("No changes made!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                    }
                }

            private:
                System::Void btDelCourse_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    string courseID = yearList2->semesters->courses->findCourseByID(convertToString(coursesToUpdate[selectedIndex]))->courseID;
                    System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to delete course " + convertString(courseID) +  "?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                    if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
                        deleteCourseByID(yearList2->semesters->courses, courseID, studentList2);
                        MessageBox::Show("Course Deleted Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        curCourseUpdate = nullptr;
                        courseUpdateUI->Hide();
                        updateCoursePanel->Hide();
                        updateCoursebtn->PerformClick();
                    }
                    
                }

            private:
                System::Void btnAddClass_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (classInput->Text != "") {
                        if (btnAddClass->Text == L"Add class") {
                            treeViewClass->Nodes->Add(gcnew TreeNode(classInput->Text));
                            classIDList->Add(gcnew String(classInput->Text));
                            stdClassList->Add(gcnew List<studentClass ^>);
                            classInput->Clear();
                            classInput->Focus();
                        } else {
                            classIDList[classIDIndex] = classInput->Text;
                            treeViewClass->Nodes[classIDIndex]->Text = classInput->Text;
                            classInput->Clear();
                            btnAddClass->Text = L"Add class";
                        }
                    }
                    panelAddStudent->Hide();
                }

            private:
                System::Void newSchoolYear_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (panelSchoolYear->Visible) {
                        panelSchoolYear->Hide();
                        return;
                    } 

                    if (classIDList)
                        classIDList->Clear();
                    classIDList = gcnew List<String ^>();
                    if (stdClassList)
                        stdClassList->Clear();
                    stdClassList = gcnew List<List<studentClass^>^>();
                    panelSchoolYear->Show();
                    panelSchoolYear->SendToBack();
                }

            private:
                System::Void treeViewClass_NodeMouseClick(System::Object ^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs ^ e)
                {
                    if (e->Node->Parent == nullptr) {
                        classIDIndex = e->Node->Index;
                        classInput->Text = classIDList[e->Node->Index];
                        btnAddClass->Text = L"Change";

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;
                        btnAddStd->Text = L"Add";
                    } else {
                        studentIndex = e->Node->Index;
                        classIDIndex = e->Node->Parent->Index;

                        List<studentClass ^> ^ std = stdClassList[classIDIndex];
                        studentID->Text = std[studentIndex]->studentID;
                        fName->Text = std[e->Node->Index]->fName;
                        lName->Text = std[e->Node->Index]->lName;
                        socialID->Text = std[e->Node->Index]->socialID;
                        gender->SelectedIndex = std[e->Node->Index]->gender;
                        doB->Value = std[e->Node->Index]->date;

                        btnAddStd->Text = L"Save";
                    }
                    panelAddStudent->Show();
                    studentID->Focus();
                }

            private:
                System::Void btnAddStd_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (btnAddStd->Text == L"Add") {
                        studentClass ^ std = gcnew studentClass();
                        std->studentID = studentID->Text;
                        std->fName = fName->Text;
                        std->lName = lName->Text;
                        std->socialID = socialID->Text;
                        std->gender = gender->SelectedIndex;
                        std->date = doB->Value;
                        stdClassList[classIDIndex]->Add(std);
                        treeViewClass->Nodes[classIDIndex]->Nodes->Add(gcnew TreeNode(studentID->Text));

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;

                        studentID->Focus();
                    } else {
                        List<studentClass ^> ^ std = stdClassList[classIDIndex];
                        std[studentIndex]->studentID = studentID->Text;
                        std[studentIndex]->fName = fName->Text;
                        std[studentIndex]->lName = lName->Text;
                        std[studentIndex]->socialID = socialID->Text;
                        std[studentIndex]->gender = gender->SelectedIndex;
                        std[studentIndex]->date = doB->Value;

                        treeViewClass->Nodes[classIDIndex]->Nodes[studentIndex]->Text = studentID->Text;

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;
                        btnAddStd->Text = L"Add";

                        studentID->Focus();                    
                    }
                    btnAddClass->Text = L"Add class";
                }

            private:
                System::Void classInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddClass->PerformClick();
                    }
                }

            private:
                System::Void doB_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void studentID_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void fName_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void lName_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void socialID_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void gender_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void panelSchoolYear_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (btnAddClass->Text == L"Change") {
                        classInput->Clear();
                        btnAddClass->Text = L"Add class";
                        panelAddStudent->Hide();
                    }
                }

            private:
                System::Void btnFinish_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (startYear->Text == L"" || endYear->Text == L"") {
                        MessageBox::Show("Start Year and End Year required!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);  
                        return;
                    }

                    AcademicYears* newyear = new AcademicYears;
                    string s1 = convertToString(startYear->Text), s2 = convertToString(endYear->Text);
                    newyear->year = s1.substr(2, 2) + s2.substr(2, 2);
                    cout << newyear->year << endl;

                    Students* newstd;
                    int i = 0, cntstd = 0;
                    for each (List<studentClass ^> ^ stdList in stdClassList) {
                        Classes* newClass = new Classes;
                        newClass->classID = convertToString(classIDList[i]);

                        for each (studentClass ^ std in stdList) {
                            cntstd++;
                            cout << endl << cntstd;
                            newstd = new Students;

                            newstd->studentID = convertToString(std->studentID);
                            newstd->account = new Accounts;
                            newstd->account->firstname = convertToString(std->fName);
                            newstd->account->lastname = convertToString(std->lName);
                            newstd->account->socialID = convertToString(std->socialID);
                            cout << newstd->studentID << " ";
                            switch (std->gender) {
                                case 0: {
                                    newstd->account->gender = 'F';
                                    break;
                                }
                                case 1: {
                                    newstd->account->gender = 'M';
                                    break;
                                }
                                case 2:{
                                    newstd->account->gender = 'O';
                                    break;
                                }
                            }
                                cout << "a";
                            newstd->account->doB.day = to_string(std->date.Day);
                            newstd->account->doB.month = to_string(std->date.Month);
                            newstd->account->doB.year = to_string(std->date.Year);
                            newstd->account->uName = newstd->studentID;
                            newstd->account->pwd = "123456";
                            newstd->classID = newClass->classID;
                            cout << endl
                                 << newstd->account->doB.day << " " << newstd->account->doB.month << " " << newstd->account->doB.year;
                            //
                            Students* s = new Students;
                            s->studentID = newstd->studentID;
                            s->account = newstd->account;
                            s->classID = newstd->classID;
                            s->next = newClass->students;
                            newClass->students = s;
                            //
                            cout << "D";
                            newstd->next = studentList2;
                            studentList2 = newstd;
                        }
                        newClass->next = newyear->classes;
                        newyear->classes = newClass;

                        i++;
                    }
                    newyear->next = yearList2;
                    yearList2 = newyear;

                    MessageBox::Show("Succesfully imported " + cntstd + " student(s) and " + i + " class(es).", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);      
                    
                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";

                    if (classIDList)
                        classIDList->Clear();
                    if (stdClassList)
                        stdClassList->Clear();
                    treeViewClass->Nodes->Clear();
                    panelAddStudent->Hide();
                    panelSchoolYear->Hide();
                }

            private:
                System::Void btnFromFile_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    System::IO::Stream ^ myStream;
                    OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
                    openFileDialog1->Filter = "CSV files (*.csv)|*.csv";
                    int cntStd = 0;

                    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                        if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
                            String ^ strfileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
                            cout << convertToString(strfileName) << endl;

                            ifstream f;
                            f.open(convertToString(strfileName));
                            string trash = "231", studentID;
                            f >> studentID;
                            f.get();
                            getline(f, trash);
                            while (!f.eof()) {
                                cntStd++;
                                string studentid = "", no = "", fname = "", lname = "", socialid = "";
                                int day = 0, month = 0, year = 0;
                                string gender = "";
                                getline(f, no, ',');
                                getline(f, studentid, ',');
                                getline(f, fname, ',');
                                getline(f, lname, ',');
                                getline(f, socialid, ',');
                                getline(f, gender, ',');
                                f >> day;
                                f.get();
                                f >> month;
                                f.get();
                                f >> year;
                                f.get();
                                cout << day << " " << month << " " << year << endl;

                                studentClass ^ std = gcnew studentClass();
                                std->studentID = convertString(studentid);
                                std->fName = convertString(fname);
                                std->lName = convertString(lname);
                                if (gender == "F")
                                    std->gender = 0;
                                else {
                                    if (gender == "M")
                                        std->gender = 1;
                                    else
                                        std->gender = 2;
                                }
                                std->socialID = convertString(socialid);
                                std->date = DateTime(year, month, day);
                                stdClassList[classIDIndex]->Add(std);

                                treeViewClass->Nodes[classIDIndex]->Nodes->Add(gcnew TreeNode(std->studentID));
                            }
                            f.close();

                            MessageBox::Show("Succesfully imported " + cntStd + " students to Class " + classInput->Text, "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                            myStream->Close();
                        }
                    }
                }

            private:
                System::Void btnCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (studentID->Text == "") {
                    } else {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Are you sure you want to delete them all? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::No) {
                            return;
                        }
                    }
                    
                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";
                    panelAddStudent->Hide();
                }

            private:
                System::Void btnCancelAll_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (treeViewClass->GetNodeCount(true) != 0) {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Are you sure you want to delete them all? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::No) {
                            return;
                        }
                    }

                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";

                    if (classIDList)
                        classIDList->Clear();
                    if (stdClassList)
                        stdClassList->Clear();
                    treeViewClass->Nodes->Clear();
                    panelAddStudent->Hide();
                    panelSchoolYear->Hide();
                }

            private:
                System::Void newSemester_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (newSemesterUI->Visible) {
                        if (inputedCourseList->HasChildren || nsCourseID->Text != "" || nsCourseName->Text != "" || nsCredit->Text != "" || nsMaxStd->Text != "" || nsRoom->Text != "" || nsLecturerName->Text != "" || newSem->Text != "") {
                            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Discard them all?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                return;
                            }
                        }
                        newSemYear->Items->Clear();
                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";
                        newSemesterUI->Hide();
                    }
                    else {
                        newSemesterUI->Show();
                        if (inputedCourse)
                            inputedCourse->Clear();
                        inputedCourse = gcnew List<courseClass ^>();
                        AcademicYears* curYear = yearList2;
                        while (curYear) {
                            newSemYear->Items->Add(gcnew String(convertString(curYear->getFullYear())));
                            curYear = curYear->next;
                        }
                        newSem->Focus();
                    }
                }

            private:
                System::Void nsBtnAdd_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (nsBtnAdd->Text == L"Add") {
                        courseClass ^ course = gcnew courseClass();

                        course->courseID = nsCourseID->Text;
                        course->courseName = nsCourseName->Text;
                        course->credits = nsCredit->Text;
                        course->maxStd = nsMaxStd->Text;
                        course->room = nsRoom->Text;
                        course->lecturer = nsLecturerName->Text;
                        course->d1 = nsDay1->SelectedIndex;
                        course->s1 = nsSession1->SelectedIndex;
                        course->d2 = nsDay2->SelectedIndex;
                        course->s2 = nsSession2->SelectedIndex;
                        course->regisS = nsRegisStart->Value;
                        course->regisE = nsRegisEnd->Value;

                        inputedCourse->Add(course);
                        inputedCourseList->Items->Add(course->courseID);

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;

                        nsCourseID->Focus();
                    } else {
                        inputedCourse[selectedIndex]->courseID = nsCourseID->Text;
                        inputedCourse[selectedIndex]->courseName = nsCourseName->Text;
                        inputedCourse[selectedIndex]->credits = nsCredit->Text;
                        inputedCourse[selectedIndex]->maxStd = nsMaxStd->Text;
                        inputedCourse[selectedIndex]->room = nsRoom->Text;
                        inputedCourse[selectedIndex]->lecturer = nsLecturerName->Text;
                        inputedCourse[selectedIndex]->d1 = nsDay1->SelectedIndex;
                        inputedCourse[selectedIndex]->s1 = nsSession1->SelectedIndex;
                        inputedCourse[selectedIndex]->d2 = nsDay2->SelectedIndex;
                        inputedCourse[selectedIndex]->s2 = nsSession2->SelectedIndex;
                        inputedCourse[selectedIndex]->regisS = nsRegisStart->Value;
                        inputedCourse[selectedIndex]->regisE = nsRegisEnd->Value;

                        inputedCourseList->Items[selectedIndex] = inputedCourse[selectedIndex]->courseID;

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";

                        nsCourseName->Focus();
                    }
                }

            private:
                void writeDataToCourseInputUI(courseClass^ course) {
                    nsCourseID->Text = course->courseID;
                    nsCourseName->Text = course->courseName;
                    nsCredit->Text = course->credits;
                    nsMaxStd->Text = course->maxStd;
                    nsRoom->Text = course->room;
                    nsLecturerName->Text = course->lecturer;
                    nsDay1->SelectedIndex = course->d1;
                    nsSession1->SelectedIndex = course->s1;
                    nsDay2->SelectedIndex = course->d2;
                    nsSession2->SelectedIndex = course->s2;
                    nsRegisEnd->Value = course->regisE;
                    nsRegisStart->Value = course->regisS;
                }

            private:
                System::Void inputedCourseList_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (inputedCourseList->SelectedItems->Count > 0) {
                        selectedIndex = inputedCourseList->SelectedIndex;

                        writeDataToCourseInputUI(inputedCourse[selectedIndex]);

                        nsBtnAdd->Text = L"Change";
                        nsCourseID->Focus();
                    } else {
                        selectedIndex = -1;

                        nsBtnAdd->Text = L"Add";
                    }
                }

            private:
                System::Void nsBtnDone_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (newSem->Text == "") {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Enter the semester first!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    if (newSemYear->Text == "") {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Academic year that the semester belong to missing!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    AcademicYears* curYear = yearList2;
                    string inputedYear = convertToString(newSemYear->Text);
                    while (curYear && curYear->getFullYear() != inputedYear) {
                        curYear = curYear->next;
                    }
                    if (curYear) {
                        Semesters* sem = new Semesters;
                        sem->semesterNo = stoi(convertToString(newSem->Text));
                        sem->startDate.day = to_string(nsRegisStart->Value.Day);
                        sem->startDate.month = to_string(nsRegisStart->Value.Month);
                        sem->startDate.year = to_string(nsRegisStart->Value.Year);
                        sem->endDate.day = to_string(nsRegisEnd->Value.Day);
                        sem->endDate.month = to_string(nsRegisEnd->Value.Month);
                        sem->endDate.year = to_string(nsRegisEnd->Value.Year);
                        
                        for each (courseClass^ course in inputedCourse) {
                            Courses* nc = new Courses;
                            nc->courseID = convertToString(course->courseID);
                            nc->courseName = convertToString(course->courseName);
                            nc->credits = stoi(convertToString(course->credits));
                            nc->maxStudents = stoi(convertToString(course->maxStd));
                            nc->room = convertToString(course->room);

                            nc->startDate.year = to_string(course->regisS.Year);
                            nc->startDate.month = to_string(course->regisS.Month);
                            nc->startDate.day = to_string(course->regisS.Day);
                            nc->endDate.year = to_string(course->regisE.Year);
                            nc->endDate.month = to_string(course->regisE.Month);
                            nc->endDate.day = to_string(course->regisE.Day);

                            nc->lecturerName = convertToString(course->lecturer);
                            nc->day1 = indexToWeekday(course->d1);
                            nc->day2 = indexToWeekday(course->d2);
                            nc->session1 = course->s1 + '1';
                            nc->session2 = course->s2 + '1';

                            nc->next = sem->courses;
                            sem->courses = nc;
                        }
                        sem->next = curYear->semesters;
                        curYear->semesters = sem;
                        MessageBox::Show("Semester Added Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        newSemYear->Items->Clear();
                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";
                        newSemesterUI->Hide();
                    }
                }

            private:
                System::Void newSemesterUI_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (nsBtnAdd->Text == L"Change") {
                        if (inputedCourseList->HasChildren || nsCourseID->Text != "" || nsCourseName->Text != "" || nsCredit->Text != "" || nsMaxStd->Text != "" || nsRoom->Text != "" || nsLecturerName->Text != "" || newSem->Text != "") {
                            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Discard them all?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                return;
                            }
                        }

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";

                        nsCourseID->Focus();
                    }
                }

            private:
                System::Void nsBtnCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    newSemester->PerformClick();
                }
            };

    
}
