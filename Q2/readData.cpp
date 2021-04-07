#include<iostream>
#include<fstream>
#include<string>
#include "studentSchema.pb.h"

using namespace std;

void listStudents(Q2::allStudents& allStudentDetails){
    int n = allStudentDetails.allstudent_size();
    for(int i=0;i<n;i++){
        const Q2::student& s1 = allStudentDetails.allstudent(i);
        cout<<"Name        : "<<s1.name()<<endl;
        cout<<"Roll Number : "<<s1.rollnum()<<endl;
        cout<<"Class       : "<<s1.class_()<< " "<<s1.sec()<<endl;
        int count = s1.guideby_size();
        for(int j=0;j<count-1;j++){
            const Q2::student::guideBy& g1 = s1.guideby(j);
            if(g1.gtype() == Q2::student::PARENT){
                cout<<"| \n ----->Guided By Parent"<<endl;
                if(g1.ptype() == Q2::student::FATHER){
                    cout<<"------>Father Name :";
                }
                else{
                    cout<<"------>Mother Name :";

                }
                cout<<g1.name()<<endl;
            }
            else if(g1.gtype() == Q2::student::GUARDIAN){
                cout<<"| \n ----->Guided By Guardian"<<endl;
                cout<<"----->Guardian Name :"<<g1.name()<<endl;
            }

                cout<<"----->Phone Number :"<<g1.number()<<endl;
        }    
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Semester Details:"<<endl;

    const Q2::student::semesterDetails& sem = s1.semesterdetails();

    cout<<"  Semester "<<sem.number()<<endl;
    int s = sem.marks_size();
    cout<<"  Marks :"<<endl;
    for(int k=0;k<s;k++){
        const Q2::student::semesterDetails::Marks& allMarks = sem.marks(k);
        cout<<"    "<<allMarks.subjectname() << " = ";
        cout<<allMarks.score() <<endl;
    }
    cout<<"======================================================"<<endl;

    }

}


int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    if(argc != 3){
        cout<<"Input should be ="<<argv[0] <<" S1 (or S2, S3, S4)"<<" Sem1.txt (or Sem2, ...Sem6)"<<endl;
        return -1;
    }
    Q2::allStudents allStudentsDetails;

    string fileName = argv[1];
    string file2Name = argv[2];
    string fileLocation = fileName +"/"+ file2Name;

    fstream ifs(fileLocation, ios::in | ios::binary);
    if(!ifs){
        cout<<"No such file found"<<endl;
        return -1;
    }

    if(!allStudentsDetails.ParseFromIstream(&ifs)){
        cout<<"Error parsing File"<<endl;
        return -1;
    }

    listStudents(allStudentsDetails);

    google::protobuf::ShutdownProtobufLibrary();
    
    return 0;
}