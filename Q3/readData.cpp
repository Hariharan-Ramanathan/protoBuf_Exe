#include<iostream>
#include<fstream>
#include<string>
#include "studentSchema.pb.h"

using namespace std;

void listStudents(Q1::allStudents& allStudentDetails){
    int n = allStudentDetails.all_student_size();
    for(int i=0;i<n;i++){
        const Q1::student& s1 = allStudentDetails.all_student(i);

//************ print all fields without knowning proto ******************
         int totalFields = s1.GetDescriptor()->field_count();



        cout<<"Total Number of Fields = "<<totalFields<<endl;
            string EachData = s1.DebugString();
            cout<<EachData<<endl;
    cout<<"======================================================"<<endl;

    }

//************ print Separate fields without knowning proto ******************

    for(int i=0;i<n;i++){
        const Q1::student& s1 = allStudentDetails.all_student(i);

         int totalFields = s1.GetDescriptor()->field_count();



        cout<<"Total Number of Fields = "<<totalFields<<endl;
        for(int j=0;j<totalFields;j++){
            const google::protobuf::FieldDescriptor* eachField = s1.GetDescriptor()->field(j);
            const string str = s1.GetReflection()->GetString(s1, eachField);
            cout<<str<<endl;
        }
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