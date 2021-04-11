#include<iostream>
#include<fstream>
#include<chrono>
#include "studentSchema.pb.h"

using namespace std;
using namespace google::protobuf;
using namespace ArenaExe;
using namespace std::chrono;

Arena* createArena(int size, int total){
    Arena* arena = (Arena*)malloc(size * total);
    return arena;
}

void listStudents(allStudents& allStudentsDetails, Arena* studentArena){

    auto start = high_resolution_clock::now();

    int studentSize = allStudentsDetails.all_student_size();

    for(int i=0;i<studentSize;i++){

        const student* s1 = new(&studentArena[i]) student(allStudentsDetails.all_student(i));
        Arena* guideByArena = createArena(sizeof(student::guideBy), s1->guide_by_size());

        cout<<"Name        : "<<s1->name()<<endl;
        cout<<"Roll Number : "<<s1->rollnum()<<endl;
        cout<<"Class       : "<<s1->class_()<< " "<<s1->sec()<<endl;
        int count = s1->guide_by_size();
        for(int j=0;j<count-1;j++){
            const student::guideBy* g1 = new(&guideByArena[j]) student::guideBy(s1->guide_by(j));
            if(g1->gtype() == student::PARENT){
                cout<<"| \n ----->Guided By Parent"<<endl;
                if(g1->ptype() == student::FATHER){
                    cout<<"------>Father Name :";
                }
                else{
                    cout<<"------>Mother Name :";

                }
                cout<<g1->name()<<endl;
            }
            else if(g1->gtype() == student::GUARDIAN){
                cout<<"| \n ----->Guided By Guardian"<<endl;
                cout<<"----->Guardian Name :"<<g1->name()<<endl;
            }

                cout<<"----->Phone Number :"<<g1->number()<<endl;
            
        }
    cout<<"======================================================"<<endl;

    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);
    cout<<"Duration with arena= "<<duration.count()<<"microSeconds"<<endl;
}

int main(int argc, char* argv[]){

    fstream ifs(argv[1], ios::in | ios::binary);
    allStudents allstudentsdetails;
    allstudentsdetails.ParseFromIstream(&ifs);

    int studentSize = allstudentsdetails.all_student_size();

    Arena* studentArena = createArena(sizeof(student), studentSize);

    listStudents(allstudentsdetails, studentArena);



    return 0;
}