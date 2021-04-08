#include<iostream>
#include<fstream>
#include<string>
#include "studentSchema.pb.h"

using namespace std;

void listStudents(Q1::allStudents& allStudentDetails){
    int n = allStudentDetails.all_student_size();
    for(int i=0;i<n;i++){
        const Q1::student& s1 = allStudentDetails.all_student(i);


//************ access fields without knowning proto ******************

        int totalFields = s1.GetDescriptor()->field_count();

        for(int i=0;i<totalFields;i++){
        //     string s = s1.GetDescriptor()->field(i)->DebugString();
        //     cout<<s<<endl;

        //     string str = "";
        //     google::protobuf::TextFormat::PrintToString(s1, &str);
        //     cout<<str<<endl;
        
        //     string s = s1.GetDescriptor()->FindFieldByNumber(i)->DebugString();
        //     cout<<s<<endl;

        const google::protobuf::FieldDescriptor* fielddescriptor = s1.GetDescriptor()->field(i);
        cout<<fielddescriptor->full_name()<<endl;

        }



    //     cout<<"Name        : "<<s1.name()<<endl;
    //     cout<<"Roll Number : "<<s1.rollnum()<<endl;
    //     cout<<"Class       : "<<s1.class_()<< " "<<s1.sec()<<endl;
    //     int count = s1.guide_by_size();
    //     for(int j=0;j<count-1;j++){
    //         const Q1::student::guideBy& g1 = s1.guide_by(j);
    //         if(g1.gtype() == Q1::student::PARENT){
    //             cout<<"| \n ----->Guided By Parent"<<endl;
    //             if(g1.ptype() == Q1::student::FATHER){
    //                 cout<<"------>Father Name :";
    //             }
    //             else{
    //                 cout<<"------>Mother Name :";

    //             }
    //             cout<<g1.name()<<endl;
    //         }
    //         else if(g1.gtype() == Q1::student::GUARDIAN){
    //             cout<<"| \n ----->Guided By Guardian"<<endl;
    //             cout<<"----->Guardian Name :"<<g1.name()<<endl;
    //         }

    //             cout<<"----->Phone Number :"<<g1.number()<<endl;
            
    //     }
    cout<<"======================================================"<<endl;

    }
}

int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc != 2){
        cout<<"Input should be ="<<argv[0]<<"filename.txt"<<endl;
        return -1;
    }

    Q1::allStudents allStudentsDetails;

    fstream ifs(argv[1], ios::in | ios::binary);
    if(!ifs){
        cout<<"File not Found"<<endl;
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