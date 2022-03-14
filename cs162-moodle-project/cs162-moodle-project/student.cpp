#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"

void inpStudents(Students* &stu_head){
    string tmp;
    cin >> tmp;
    Students* stu_cur;
    while (tmp!=""){
        if (stu_head == nullptr){
            stu_head = new Students;
            stu_cur = stu_head;
        }
        else{
            stu_cur->next = new Students;
            stu_cur = stu_cur->next;
        }
        stu_cur->studentID = tmp;
        cin>>stu_cur->account->uName;
        cin>>stu_cur->account->pwd;
        cin>>stu_cur->account->role;
        cin>>stu_cur->account->socialID;
        getline(cin,stu_cur->account->lastname,'\n');
        getline(cin,stu_cur->account->firstname,'\n');
        cin >> stu_cur->account->gender;
        //input date
        //cin>>stu_cur->account->doB->day>> stu_cur->account->doB->month >> stu_cur->account->doB->year;
        //scoreboards
        getline(cin,stu_cur->scoreboards->courseName, '\n');
        cin>> stu_cur->scoreboards->courseID;
        cin>> stu_cur->scoreboards->midtermScore >> stu_cur->scoreboards->finalScore>> stu_cur->scoreboards->labScore >> stu_cur->scoreboards->bonusScore;
        //schedule 

        /*
        stu_cur->schedule = new string*[6];
        for (int i=0; i<6; i++){
            stu_cur->schedule[i] = new string [4];
            for (int j=0; j<4; j++){
                stu_cur->schedule[i][j] = "";
            }
        }
        */

        //checkin course
        cin>> stu_cur->checkincourse->courseID;
        cin>> stu_cur->checkincourse->room;
        cin>> stu_cur->checkincourse->startTime;
        cin>> stu_cur->checkincourse->endTime;
        cin>> stu_cur->checkincourse->startDate.day >> stu_cur->checkincourse->startDate.month>> stu_cur->checkincourse->startDate.year;
        cin>> stu_cur->checkincourse->endDate.day >> stu_cur->checkincourse->endDate.month>> stu_cur->checkincourse->endDate.year;
    }
}
