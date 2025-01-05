#include <iostream>
class Entity{
    public:
    float X,Y;
    void Move(float xa,float ya){
        X+=xa;
        Y+=ya;
    }
};
//继承
class Player :public Entity
{
    public:
        const char* Name;
    void PrintName(){
        std::cout<<Name<<std::endl;
    }

};
int main(){
    std::cout<<sizeof(Entity)<<std::endl;
    std::cout<<sizeof(Player)<<std::endl;
    Player player;
    player.Move(5,5);
}