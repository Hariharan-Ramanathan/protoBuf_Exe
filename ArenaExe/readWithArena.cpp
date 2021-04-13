#include<iostream>
#include<fstream>
#include<chrono>
#include<memory>
#include "studentSchema.pb.h"

using namespace std;
using namespace google::protobuf;
using namespace ArenaExe;
using namespace std::chrono;

// template <class T>
// class smartPtr{
//     T* ptr;
//     public:
//         explicit smartPtr(T* p = NULL){
//             ptr = p;
//         }
//         ~smartPtr(){
//             cout<<"Destroyed"<<endl;
//             delete(ptr);
//         }
//         T* operator->(){
//             return ptr;
//         }
//         T& operator* (){
//             return *ptr;
//         }
// };

Arena* createArena(int size, int total){
    Arena* arena = (Arena*)malloc(size * total);
    return arena;
}

void listStudents(student* s1){
    
        Arena* guideByArena = createArena(sizeof(student::guideBy), s1->guide_by_size());

        cout<<"Name        : "<<s1->name()<<endl;
        cout<<"Roll Number : "<<s1->rollnum()<<endl;
        cout<<"Class       : "<<s1->class_()<< " "<<s1->sec()<<endl;
        int count = s1->guide_by_size();
        for(int j=0;j<count-1;j++){
            const student::guideBy* g1 = new(&guideByArena[j]) student::guideBy(s1->guide_by(j));
            cout<<"Guide Address "<<g1<<endl;
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
}

int main(int argc, char* argv[]){

    fstream ifs(argv[1], ios::in | ios::binary);
    allStudents allstudentsdetails;
    allstudentsdetails.ParseFromIstream(&ifs);

    int studentSize = allstudentsdetails.all_student_size();

   
//----------------------------------------------------------------------------------


    // cout<<"->"<<&studentArena[0]<<" "<<&studentArena[1]<<" "<<&studentArena[2]<<" "<<&studentArena[3]<<endl;
    auto start1 = high_resolution_clock::now();
    unique_ptr<Arena[]> studentArena(createArena(sizeof(student), studentSize));
    
    for(int i=0;i<studentSize;i++){
        student* s1 = new(&studentArena[i]) student(allstudentsdetails.all_student(i));
        // cout<<"allocated space = "<<s1<<endl;
        listStudents(s1);
        cout<<"======================================================"<<endl;
    }
    auto end1 = high_resolution_clock::now();

    auto duration1 = duration_cast<microseconds>(end1 - start1);
    cout<<"Duration with arena= "<<duration1.count()<<"microSeconds"<<endl;
    
//----------------------------------------------------------------------------------
     auto start = high_resolution_clock::now();
    
    for(int i=0;i<studentSize;i++){
        student s2 = allstudentsdetails.all_student(i);
        listStudents(&s2);
        cout<<"======================================================"<<endl;
    }
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);
    cout<<"Duration without arena= "<<duration.count()<<"microSeconds"<<endl;
        

    return 0;
}