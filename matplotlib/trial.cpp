#include "matplotlibcpp.h"
#include <iostream>
#include <Eigen/Dense>
namespace plt=matplotlibcpp;
int main()
{
    plt::plot({1,2,3,4},"*");
    plt::show();

    Py_Finalize();
    return(0);
}