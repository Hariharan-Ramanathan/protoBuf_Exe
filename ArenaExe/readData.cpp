#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cstdlib>
#include<chrono>
#include "studentSchema.pb.h"

using namespace std;
using namespace std::chrono;
using namespace google::protobuf;
using namespace ArenaExe;

void listStudents(allStudents& allStudentDetails){
    int n = allStudentDetails.all_student_size();
    cout<<"Total "<<sizeof(allStudentDetails)<<endl;

    Arena arena;

}

int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if(argc != 2){
        cout<<"Input should be ="<<argv[0]<<"filename.txt"<<endl;
        return -1;
    }

    Arena* arena = (Arena*)malloc(sizeof(student)*10);

    student* s1 = new(&arena[0]) student;
    s1->set_name("Hari");

    cout<<(*arena).SpaceUsed()<<endl;

    // cout<<arena->SpaceUsed()<<endl;

    // Arena arena;
    // cout<<"Initial size "<<arena.SpaceUsed()<<endl;
    // cout<<"trivial "<<is_trivial<int>::value<<endl;
    // static int* allStudentsDetails =  Arena::CreateArray<int>(&arena, 20);
    // cout<<"Size after create message"<<arena.SpaceUsed()<<endl;
    // cout<<"--------------"<<endl;

    // fstream ifs(argv[1], ios::in | ios::binary);
    // vector<student>s1(5);
    // allStudents allStudentDetails;

    // auto start = high_resolution_clock::now();

    // allStudentDetails.ParseFromIstream(&ifs);
    // for(int i=0;i<allStudentDetails.all_student_size();i++){
    //     s1[i] = allStudentDetails.all_student(i);
    // }

    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout<<"Duration with vector = "<<duration.count()<<endl;


    // fstream ifs1(argv[1], ios::in | ios::binary);

    // auto start1 = high_resolution_clock::now();

    // allStudentDetails.ParseFromIstream(&ifs1);
    // for(int i=0;i<allStudentDetails.all_student_size();i++){
    //     student s1 = allStudentDetails.all_student(i);
    //     cout<<&s1<<endl;
    // }

    // auto stop1 = high_resolution_clock::now();
    // auto duration1 = duration_cast<microseconds>(stop1 - start1);
    // cout<<"Duration with new= "<<duration1.count()<<endl;
    
    // static ArenaExe::student *Arena::CreateArray<student>(&arena, 20);
   
    // allStudentsDetails = Arena::CreateMessage<allStudents>(&arena);
    // cout<<"Size after create message"<<arena.SpaceUsed()<<endl;
    // allStudentsDetails = Arena::CreateMessage<allStudents>(&arena);

    // cout<<"Size after create message"<<arena.SpaceUsed()<<endl;
    // // arena.CreateArray<Q1::allStudents>(&arena, 20);

    // fstream ifs(argv[1], ios::in | ios::binary);
    // if(!ifs){
    //     cout<<"File not Found"<<endl;
    //     return -1;
    // }
    // if(!allStudentsDetails->ParseFromIstream(&ifs)){
    //     cout<<"Error parsing File"<<endl;
    //     return -1;
    // }
    // int n = allStudentsDetails->all_student_size();
    // cout<<n<<endl;
    // cout<<allStudentsDetails<<endl;
    // allStudents* allStudentsDetails2 = new (&(arena+ allStudentsDetails)) allStudents;
    // allStudents* allStudentsDetails3 = new (&arena) allStudents;

    // cout<<allStudentsDetails2->all_student_size()<<endl;
    // cout<<allStudentsDetails2<<endl;
    // cout<<allStudentsDetails3<<endl;
    // cout<<arena.SpaceUsed()<<endl;


    // vector<Q1::student> studentVector(allStudentsDetails.all_student_size()+1);

    // for(int i=0;i<n;i++){
    //     Q1::student s1 = allStudentsDetails.all_student(i);
    //     studentVector.push_back(s1);
    // }
    

    // for(int i=0;i<n;i++){
    //     Q1::student s1 = allStudentsDetails.all_student(i);
    //     Q1::student s2 = studentVector.at(i);
    //     cout<<"Name ="<<s2.name()<<endl;

    //     cout<<"Name from old method ="<<s1.name()<<endl;

    // }


    // listStudents(allStudentsDetails);

    // google::protobuf::ShutdownProtobufLibrary();

    return 0;
}