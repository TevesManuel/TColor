#include <iostream>
#include <TColor.hpp>
#include <string>

using namespace TEVES;

TColor x;

int main()
{
    std::cout << x.tf_red().tb_blue().tc_underline() << "DEMO TColor" << x.tc_release() << std::endl;
    
    std::cout << x.tf_red() << "TColor " << x.tf_white() << "is many " << x.tf_green() << "potent " << x.tf_white();
    std::cout << "because this has been " << x.tf_pink() << "written in C" << x.tf_white();
    std::cout << " and have binding to " << x.tf_blue() << "C++ " << x.tf_white();
    std::cout << ".With TColor you can make every apps have color.";
    std::cout << x.tc_release() << std::endl;

    return 0;
}