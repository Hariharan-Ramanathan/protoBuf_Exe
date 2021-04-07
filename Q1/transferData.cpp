#include<iostream>
#include<fstream>
#include<string>
#include "studentSchema.pb.h"

using namespace std;

int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    if(argc !=3){
        cout<<"Input should be= "<<argv[0]<<" sourceFile.txt" <<" destinationFile.txt"<<endl;
        return -1;
    }

    Q1::allStudents allStudentsDetails;

    fstream ifs(argv[1], ios::in | ios::binary);
    if(!ifs){
        cout<<"Source file not Found"<<endl;
        return -1;
    }

    if(!allStudentsDetails.ParseFromIstream(&ifs)){
        cout<<"Error parsing file"<<endl;
        return -1;
    }

    fstream ofs(argv[2], ios::in | ios::binary);
    if(!ofs){
        cout<<"File not found.\nCreated New File"<<endl;
    }
    fstream of(argv[2], ios::out | ios::binary);
    if(!allStudentsDetails.SerializeToOstream(&of)){
        cout<<"Error writing to output file"<<endl;
        return -1;
    }

    cout<<"Data Successfully Transfered"<<endl;

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}
