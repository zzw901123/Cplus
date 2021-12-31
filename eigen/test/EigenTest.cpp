
// #include <iostream>  
// #include <Eigen/SVD>  
// #include <Eigen/Dense>    

// //using Eigen::MatrixXf;    
// using namespace Eigen;    
// using namespace Eigen::internal;    
// using namespace Eigen::Architecture;    

// int main()  
// {  
//     Matrix3f A;  
//     A(0,0)=1,A(0,1)=0,A(0,2)=1;  
//     A(1,0)=0,A(1,1)=1,A(1,2)=1;  
//     A(2,0)=0,A(2,1)=0,A(2,2)=0;  
//     JacobiSVD<Eigen::MatrixXf> svd(A, ComputeThinU | ComputeThinV );  
//     Matrix3f V = svd.matrixV(), U = svd.matrixU();  
//     Matrix3f  S = U.inverse() * A * V.transpose().inverse(); // S = U^-1 * A * VT * -1  
//     std::cout<<"A :\n"<<A<<std::endl;  
//     std::cout<<"U :\n"<<U<<std::endl;  
//     std::cout<<"S :\n"<<S<<std::endl;  
//     std::cout<<"V :\n"<<V<<std::endl;  
//     std::cout<<"U*UT"<<U*U.transpose()<<std::endl;
//     std::cout<<"U * S * VT :\n"<<U * S * V.transpose()<<std::endl;  
//     return 0;  
// }

// #include <iostream>
// #include <Eigen/Dense>

// using Eigen::MatrixXd;

// int main()
// {
//     MatrixXd m(2,2);
//     m(0,0) = 3;
//     m(1,0) = 2.5;
//     m(0,1) = -1;
//     m(1,1) = m(1,0) + m(0,1);
//     std::cout << m << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>
 
// using namespace Eigen;
// using namespace std;
 
// int main()
// {
//   MatrixXd m = MatrixXd::Random(3,3);
//   m = (m + MatrixXd::Constant(3,3,1.2)) * 50;
//   cout << "m =" << endl << m << endl;
//   VectorXd v(3);
//   v << 1, 2, 3;
//   cout << "m * v =" << endl << m * v << endl;
// }

// #include <iostream>
// #include <Eigen/Dense>
 
// using namespace Eigen;
// using namespace std;
 
// int main()
// {
//   Matrix3d m = Matrix3d::Random();
//   cout << m << endl;
//   m = (m + Matrix3d::Constant(1.2)) * 50;
//   cout << "m =" << endl << m << endl;
//   Vector3d v(1,2,3);
  
//   cout << "m * v =" << endl << m * v << endl;
// }

// #include <iostream>
// #include <Eigen/Dense>

// using namespace Eigen;

// int main()
// {
//     VectorXd m(3);
//     m(0) = 0.1;
//     m(1) = 0.3;
//     std::cout << m << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>

// using namespace Eigen;

// int main()
// {
//     MatrixXf a(10,15);
//     VectorXf b(30);
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>

// using namespace Eigen;

// int main()
// {
//     // Vector2i a(1, 2);                      // A column vector containing the elements {1, 2}
//     // Matrix<int, 5, 1> b{1, 2, 3, 4, 5};   // A row-vector containing the elements {1, 2, 3, 4, 5}
//     // Matrix<int, 1, 5> c = {1, 2, 3, 4, 5}; // A column vector containing the elements {1, 2, 3, 4, 5}
//     // Vector2d a(5.0, 6.0);
//     // Vector3d b(5.0, 6.0, 7.0);
//     // Vector4d c(5.0, 6.0, 7.0, 8.0);

//     // MatrixXi a {      // construct a 2x2 matrix
//     //   {1, 2},     // first row
//     //   {3, 4}      // second row
//     // };
//     // Matrix<double, 2, 3> b {
//     //     {2, 3, 4},
//     //     {5, 6, 7},
//     // };

//     VectorXd a {1.5, 2.5, 3.5};             // A column-vector with 3 coefficients
//     RowVectorXd b {1.0, 2.0, 3.0, 4.0};

//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     //std::cout << c << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>
 
// using namespace Eigen;
 
// int main()
// {
//   MatrixXd m(2,5);
//   m.resize(4,3);
//   std::cout << "The matrix m is of size "
//             << m.rows() << "x" << m.cols() << std::endl;
//   std::cout << "It has " << m.size() << " coefficients" << std::endl;
//   VectorXd v(2);
//   v.resize(5);
//   std::cout << "The vector v is of size " << v.size() << std::endl;
//   std::cout << "As a matrix, v is of size "
//             << v.rows() << "x" << v.cols() << std::endl;
// }

// #include <iostream>
// #include <Eigen/Dense>
 
// using namespace Eigen;
 
// int main()
// {
//   Matrix4d m;
//   m.resize(3,3); // no operation
//   std::cout << "The matrix m is of size "
//             << m.rows() << "x" << m.cols() << std::endl;
// }

// #include <iostream>
// #include <Eigen/Dense>

// using namespace Eigen;
// using namespace std;

// int main()
// {
//     MatrixXf a = MatrixXf::Random(2,2);
//     cout << "Here is the matrix a\n" << a << endl;
//     cout << "Here is the matrix a^T\n" << a.transpose() << endl;
//     cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
//     cout << "Here is the matrix a^*\n" << a.adjoint() << endl;


//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>
// using namespace Eigen;
// using namespace std;
// int main()
// {
//   Vector3d v(1,2,3);
//   Vector3d w(0,1,2);
//   cout << "Dot product: " << v.dot(w) << endl;
//   double dp = v.adjoint()*w; // automatic conversion of the inner product to a scalar
//   cout << "Dot product via a matrix product: " << dp << endl;
//   cout << "Cross product:\n" << v.cross(w) << endl;
// }

//
// Created by fuhong on 20-7-14.
//


// #include <Eigen/Dense>
// #include <iostream>

// using namespace std;

// int main() {
//     Eigen::MatrixXf m(4, 4);
//     // 初始化m矩阵
//     for (int i = 0; i < 4; ++i) {
//         for (int j = 0; j < 4; ++j) {
//             m(i, j) = j + 1 + i * 4;
//         }
//     }
//     cout << "m: " << endl << m << endl;
//     cout << "Block in the middle" << endl;
//     cout << m.block<2, 2>(1, 1) << endl << endl;      // m.block<i,j> (a,b) 表示从第(a+1)行(b+1)列开始,截图i行,j列
//     for (int i = 1; i <= 3; ++i) {
//         cout << "Block of size " << i << "x" << i << endl;
//         cout << m.block(0, 0, i, i) << endl << endl;  //m.block(a,b,i,j) 表示从第(a+1)行(b+1)列开始,截图i行,j列
//     }
// }

//
// Created by fuhong on 20-7-14.
//


// #include <Eigen/Dense>
// #include <iostream>

// using namespace std;

// int main() {
//     Eigen::MatrixXf m(4, 4);
//     // 数组初始化
//     for (int i = 0; i < 4; ++i) {
//         for (int j = 0; j < 4; ++j) {
//             m(i, j) = j + 1 + i * 4;
//         }
//     }
//     cout << "Here is the matrix m:" << endl << m << endl;
//     cout << "2nd Row: " << m.row(1) << endl;
//     m.col(2) += 3 * m.col(0);
//     cout << "After adding 3 times the first column into the third column, the matrix m is:\n";
//     cout << m << endl;
// }

//
// Created by fuhong on 20-7-14.
//

// #include <Eigen/Dense>
// #include <iostream>

// using namespace std;
// using namespace Eigen;

// int main() {
//     VectorXf v(2);
//     MatrixXf m(2, 2), n(2, 2);

//     v << -1, 2;

//     m << 1, -2, -3, 4;
//     cout << "v.squaredNorm() = " << v.squaredNorm() << endl;
//     cout << "v.norm() = " << v.norm() << endl;
//     cout << "v.lpNorm<1>() = " << v.lpNorm<1>() << endl;
//     cout << "v.lpNorm<Infinity>() = " << v.lpNorm<Infinity>() << endl;
//     cout << endl;
//     cout << "m.squaredNorm() = " << m.squaredNorm() << endl;
//     cout << "m.norm() = " << m.norm() << endl;
//     cout << "m.lpNorm<1>() = " << m.lpNorm<1>() << endl;
//     cout << "m.lpNorm<Infinity>() = " << m.lpNorm<Infinity>() << endl;
// }

// Created by 开机烫手 on 2018/4/8.
#include <iostream>
#include <Eigen/Dense>
#include <cmath>
#include <Eigen/Geometry>
#include <Eigen/Core>
 
using namespace std;
using namespace Eigen;
 
// int main() {
 
//     // 旋转矩阵直接用Matrix3d即可
//     Matrix3d rotation_matrix;
//     rotation_matrix.setIdentity();
//     // 旋转向量 由旋转轴和旋转角度组成
//     AngleAxisd rotation_vector(M_PI / 4, Vector3d(0, 0, 1));
//     cout.precision(3);
//     cout << "rotation vector: Angle is: " << rotation_vector.angle() * (180 / M_PI)
//          << "  Axis is: " << rotation_vector.axis().transpose() << endl;
//     //cout << "rotation_vector =\n" << rotation_vector << endl;
//     cout << "rotation matrix =\n" << rotation_vector.matrix() << endl;
//     rotation_matrix = rotation_vector.toRotationMatrix();
//     cout << "rotation_matrix =\n" << rotation_matrix << endl;
//     // 下面v是待旋转的向量，或者认为空间中的一个刚体的位置
//     Vector3d v(1, 0, 0);
//     Vector3d v_rotated = rotation_vector * v;
//     cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl;
//     v_rotated = rotation_matrix * v;
//     cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl;
 
//     // 欧拉角 按ZYX的顺序 由旋转矩阵直接转换成欧拉角
//     Vector3d euler_angles = rotation_matrix.eulerAngles(2, 1, 0);
//     cout << "yaw pitch roll = " << euler_angles.transpose() * (180 / M_PI) << endl;
 
//     // 变换矩阵  4x4的
//     Isometry3d T = Eigen::Isometry3d::Identity();
//     T.rotate(rotation_vector);
//     //    T.rotate(rotation_matrix);    // 这样写也行，相当于由旋转矩阵构造变换矩阵
//     // 设置平移向量
//     T.pretranslate(Eigen::Vector3d(0, 0, 3));
//     cout << "Transform matrix = \n" << T.matrix() << endl;
 
//     // 用变换矩阵进行坐标变换
//     Vector3d v_transformed = T * v;
//     cout << "v transformed = " << v_transformed.transpose() << endl;
 
//     // 由旋转向量构造四元数
//     Quaterniond q = Eigen::Quaterniond(rotation_vector);
//     cout << "quaternion = \n" << q.coeffs() << endl;
//     // 由旋转矩阵构造四元数
//     q = Eigen::Quaterniond(rotation_matrix);
//     cout << "quaternion = \n" << q.coeffs() << endl;
//     v_rotated = q * v;
//     cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl;
 
//     return 0;
// }

int main()
{
    MatrixXcf a = MatrixXcf::Random(2,2);
    cout << "Here is the matrix a\n" << a << endl;
    cout << "Here is the matrix a^T\n" << a.transpose() << endl;
    cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
    cout << "Here is the matrix a^*\n" << a.adjoint() << endl;

    MatrixXf b = MatrixXf::Random(2,2);
    cout << "Here is the matrix a\n" << b << endl;
    cout << "Here is the matrix a^T\n" << b.transpose() << endl;
    cout << "Here is the conjugate of a\n" << b.conjugate() << endl;
    cout << "Here is the matrix a^*\n" << b.adjoint() << endl;

//     // 旋转向量 由旋转轴和旋转角度组成
    AngleAxisd rotation_vector(M_PI / 4, Vector3d(0, 0, 1));

        // 由旋转向量构造四元数
    Quaterniond q = Eigen::Quaterniond(rotation_vector);
    cout << "quaternion = \n" << q.coeffs() << endl;
    cout << "conjugate = \n" << q.conjugate().matrix()  << endl;

    return 0;
}

