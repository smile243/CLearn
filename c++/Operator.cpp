#include <iostream>
struct chicken{
    float weight;
    float price;
    // chicken(float w,float p):weight(w),price(p){

    // }
    chicken(float weight,float price){
        this->weight=weight;
        //this的写法
        (*this).price=price;
    }
    /**
     * +和Add两种api可供选择
     */
    chicken operator+(const chicken& other) const
    {
        return Add(other);
    }

    chicken Add(const chicken& other) const
    {
        return chicken(weight+other.weight,price+other.price);
    }
    void print(){
        std::cout<<"weight:"<<weight<<" price:"<<price<<std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream,const chicken& other){
    stream<<other.weight<<","<<other.price;
    return stream;
}

int main(){
    chicken c1 = chicken(1.0f,2.0f);
    chicken c2 = chicken(1.0f,2.0f);
    chicken sum = c1+c2;
    sum.print();
    std::cout<<sum<<std::endl;
    return 0;
}