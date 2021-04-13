#include<iostream>
#include<fstream>
#include<chrono>
#include<memory>
#include "studentSchema.pb.h"

using namespace std;
using namespace google::protobuf;
using namespace ArenaExe;
using namespace std::chrono;

template <class T>
class smartPtr{
    T* ptr;
    public:
        explicit smartPtr(T* p = NULL){
            ptr = p;
        }
        ~smartPtr(){
            cout<<"Destroyed"<<endl;
            delete(ptr);
        }
        T* operator->(){
            return ptr;
        }
        T& operator* (){
            return *ptr;
        }
};

// Arena* createArena(int size, int total){
//     Arena* arena = (Arena*)malloc(size * total);
//     return arena;
// }

void listStudents(student* s1, Arena* studentArena){
    
        // Arena* guideByArena = createArena(sizeof(student::guideBy), s1->guide_by_size());

        cout<<"Name        : "<<s1->name()<<endl;
        cout<<"Roll Number : "<<s1->rollnum()<<endl;
        cout<<"Class       : "<<s1->class_()<< " "<<s1->sec()<<endl;
        int count = s1->guide_by_size();

        for(int j=0;j<count-1;j++){
            student::guideBy* g1 = Arena::CreateMessage<student::guideBy>(studentArena);
            *g1 = s1->guide_by(j);
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
        if(Arena::GetArena(&studentArena) == nullptr){
            cout<<"Arena Deleted"<<endl;
        }
}

int main(int argc, char* argv[]){

    fstream ifs(argv[1], ios::in | ios::binary);
    allStudents allstudentsdetails;
    allstudentsdetails.ParseFromIstream(&ifs);

    int studentSize = allstudentsdetails.all_student_size();

   Arena studentArena;

   for(int i=0;i<studentSize;i++){
    //    smartPtr<student>s1(Arena::CreateMessage<student>(&studentArena));
       student* s1 = Arena::CreateMessage<student>(&studentArena);
       *s1 = allstudentsdetails.all_student(i);
        listStudents(s1, &studentArena);
        cout<<"---------------------------------------------------------"<<endl;
   }

    return 0;
}