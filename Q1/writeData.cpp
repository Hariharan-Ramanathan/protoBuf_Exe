#include<iostream>
#include<string>
#include<fstream>
#include "studentSchema.pb.h"

using namespace std;

void getDetails(Q1::student* s1){
    // cout<<"working"<<endl;
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
        Q1::student::guideBy* g1 = s1->add_guide_by();
        cout<<"Enter parent/guardian (or leave empty)"<<endl;
        string gType = "";

        getline(cin, gType);
        
        if(gType.empty())
            break;
        
        if(gType == "parent"){
            g1->set_gtype(Q1::student::PARENT); 
            string p = "";
            cout<<"Enter father/mother (To get phone number)"<<endl;
            getline(cin, p);
            if(p == "father")
                g1->set_ptype(Q1::student::FATHER);
            else if(p == "mother")
                g1->set_ptype(Q1::student::MOTHER);
            else{
                cout<<"Taking Default Value"<<endl;
            }
        }
        else if(gType == "guardian")
            g1->set_gtype(Q1::student::GUARDIAN);
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

}

int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc != 2){
        cout<<"Input should be := "<<argv[0]<<" filename.txt"<<endl;
        return -1;
    }
    
    Q1::allStudents allStudentsDetails;

    fstream check(argv[1], ios::in | ios::ate | ios:: out | ios::binary);
    if(!check){
        cout<<"File not found, Created New File"<<endl;
    }
    getDetails(allStudentsDetails.add_all_student());

    fstream ofs(argv[1], ios::in | ios::ate | ios::out | ios::binary);
    if(!allStudentsDetails.SerializeToOstream(&ofs)){
        cout<<"Error writing file"<<endl;
        return -1;
    };

    google::protobuf::ShutdownProtobufLibrary();
}