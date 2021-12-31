#include <iostream>
#include "Eigen/Dense"

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXf m(4,4);
    m<< 1,2,3,4,
        5,6,7,8,
        9,10,11,12,
        13,14,15,16;
    //cout<<"Block in the middle"<<endl;
    cout << m << endl << endl;
    cout<<m.block<3,3>(0,0).eulerAngles(2,1,0)<<endl<<endl;
    // for(int i = 1;i <= 3;++i)
    // {
    //     cout<<"Block of size "<<i<<"x"<<i<<endl;
    //     cout<<m.block(0,0,i,i)<<endl<<endl;
    // }
}
