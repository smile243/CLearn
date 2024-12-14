#include "log.cpp"

int main(){
    int i=0;
    bool condition = true ; 
    for(;condition;){
        Log("hello world");
        i++;
        if(!(i<5)){
            condition = false;
        }
    }
    
}