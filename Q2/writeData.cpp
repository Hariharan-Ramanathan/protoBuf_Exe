#include<iostream>
#include<fstream>
#include<string>
#include "studentSchema.pb.h"

using namespace std;

void getDetails(Q2::student* s1, char semNum){
    cout<<"Enter Student name"<<endl;
    string name = "";
    getline(cin, name);
    s1->set_name(name);

    cout<<"Enter Roll Number"<<endl;
    int rollNum = 0;
    cin>>rollNum;
    cin.ignore(256, '\n');
    s1->set_rollnum(rollNum);

    cout<<"Enter class"<<endl;
    int classRoom = 0;
    cin>>classRoom;
    cin.ignore(256, '\n');
    s1->set_class_(classRoom);

    cout<<"Enter section"<<endl;
    string sec = "";
    getline(cin, sec);
    s1->set_sec(sec);

    while(1){
        Q2::student::guideBy* g1 = s1->add_guideby();
        cout<<"Enter parent/guardian (or leave empty)"<<endl;
        string gType = "";

        getline(cin, gType);
        
        if(gType.empty())
            break;
        
        if(gType == "parent"){
            g1->set_gtype(Q2::student::PARENT); 
            string p = "";
            cout<<"Enter father/mother (To get phone number)"<<endl;
            getline(cin, p);
            if(p == "father")
                g1->set_ptype(Q2::student::FATHER);
            else if(p == "mother")
                g1->set_ptype(Q2::student::MOTHER);
            else{
                cout<<"Taking Default Value"<<endl;
            }
        }
        else if(gType == "guardian")
            g1->set_gtype(Q2::student::GUARDIAN);
        else{
            cout<<"Taking Default Value"<<endl;
        }

        string phoneNumber = "";
        string gName = "";
        cout<<"Enter guide Name"<<endl;
        getline(cin, gName);
        g1->set_name(gName);
        cout<<"Enter Number"<<endl;
        getline(cin, phoneNumber);

        g1->set_number(phoneNumber);

    }

    int sub = 5;
    cout<<"Semester"<<semNum<<" Details:-"<<endl;
    Q2::student::semesterDetails* sem = s1->mutable_semesterdetails();
    sem->set_number(semNum - 48);
    while(sub>0){
        Q2::student::semesterDetails::Marks* m1 = sem->add_marks();
        string subName = "";
        cout<<"Enter subject Name"<<endl;
        getline(cin, subName);
        m1->set_subjectname(subName);

        int mark = 0;
        cout<<"Enter Mark"<<endl;
        cin>>mark;
        cin.ignore(256, '\n');
        m1->set_score(mark);

        sub--;
    }


}

int main(int argc ,char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc != 3){
        cout<<"Input should be ="<<argv[0] <<" S1 (or S2, S3, S4)"<<" Sem1.txt (or Sem2, ...Sem6)"<<endl;
        return -1;
    }
    Q2::allStudents allStudentsDetails;

    string fileName = argv[1];
    string file2Name = argv[2];
    string fileLocation = fileName +"/"+ file2Name;
    // cout<<fileLocation<<endl;
    fstream ofs(fileLocation, ios::out | ios::trunc | ios::binary);
    if(!ofs){
        cout<<"New File Created"<<endl;
    }
    char* temp = argv[1];

    getDetails(allStudentsDetails.add_allstudent(), temp[1]);

    if(!allStudentsDetails.SerializeToOstream(&ofs)){
        cout<<"Error writing file"<<endl;
        return -1;
    }

    cout<<"Successfully added"<<endl;

    return 0;
}