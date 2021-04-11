#include<iostream>
#include<string>
#include<fstream>
#include<type_traits>
#include "studentSchema.pb.h"

using namespace std;

int main(int argc, char* argv[]){
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // google::protobuf::Arena arena;

    // // Q1::allStudents* allStudentsDetails = google::protobuf::Arena::CreateMessage<Q1::allStudents>(&arena);

    // google::protobuf::Arena::CreateArray<int>(&arena,sizeof(int)*20);
    
    // cout<<arena.SpaceUsed()<<endl;
    
    vector<char> arena_block(10 * 1024);
    google::protobuf::ArenaOptions options;
    options.initial_block = &arena_block[0];
    options.initial_block_size = arena_block.size();
    google::protobuf::Arena arena(options);

    Q1::student* allStudents = google::protobuf::Arena::CreateMessage<Q1::student>(&arena);

    

    google::protobuf::ShutdownProtobufLibrary();
}