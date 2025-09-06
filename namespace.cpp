#include <iostream>


namespace primero{

    int x=1;
}

namespace segundo{
    int x=2;

}

int main(){

    int x=0;
    
    std::cout<<"X = "<<primero::x<<std::endl;
    std::cout<<"X = "<<x<<std::endl;
    std::cout<<"X = "<<segundo::x<<std::endl;
     
    

    
    return 0;
    


}