#include <iostream>

#include <Eigen/Core>
#include <Eigen/Geometry>


int main()
{
    Eigen::Isometry3d T= Eigen::Isometry3d::Identity();

    Eigen::AngleAxisd rotation_vector ( 0, Eigen::Vector3d ( 0,0,1 ) ); 
    Eigen::Quaterniond q = Eigen::Quaterniond( rotation_vector );
    std::cout << q.coeffs() << std::endl;
    return 0;
}