
//std
#include <iostream>

//eigen
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>

int main(int argc, char *argv[])
{
	Eigen::Matrix<double, 3, 1000> P_s;
	P_s.block<2,1000>(0,0) = Eigen::Matrix<double, 2, 1000>::Random();
	P_s.block<1,1000>(2,0) = Eigen::Matrix<double, 1, 1000>::Ones();

    return 0;
}
