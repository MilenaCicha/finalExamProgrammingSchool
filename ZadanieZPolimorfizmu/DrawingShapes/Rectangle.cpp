
#include "Rectangle.h"

void DrawingShapes::Rectangle::draw(unsigned num)const{
    for(int i = 0; i < num; ++i){
        std::cout<<"* * * *\n";
        std::cout<<"*     *\n";
        std::cout<<"* * * *\n";
    }
}