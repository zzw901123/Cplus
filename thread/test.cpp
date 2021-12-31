// #include <iostream>   
// #include <boost/thread.hpp> 
   
// void run()  
// {    
//     for (int i = 0; i < 10; ++i)    
//     {    
//         std::cout << i << std::endl;    
//     }    
// }    
  
  
    
// int main(int argc, char* argv[])    
// {    
//     boost::thread theard1(&run);    
//     boost::thread theard2(&run);    
//     boost::thread theard3(&run);   
//     theard1.join();    
//     theard2.join();    
//     theard3.join();   
//     return 0;    
// }   

#include <boost/thread/thread.hpp>    
#include <boost/thread/recursive_mutex.hpp>  
#include <iostream>    
  
boost::recursive_mutex io_mutex;    
   
void run()  
{    
    for (int i = 0; i < 10; ++i)    
    {    
        boost::recursive_mutex::scoped_lock  lock(io_mutex);  
        std::cout << i << std::endl;    
    }    
}    
  
  
    
int main(int argc, char* argv[])    
{    
    boost::thread theard1(&run);    
    boost::thread theard2(&run);    
    boost::thread theard3(&run);   
    theard1.join();    
    theard2.join();    
    theard3.join();   
    return 0;    
}  