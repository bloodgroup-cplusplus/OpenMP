#include<iostream>
#include<omp.h>
int main()
{
	#pragma omp parallel
	{
		int id=omp_get_thread_num();
		std::cout<<id<<std::endl;
		std::cout<<"hello"<<" i am a hello statement from the thread having id = " << id<<std::endl;
		std::cout<<"bye-bye"<<std::endl;
	}
	return 0;
}
//while compiling compile using the command 
//g++ -fopenmp programname.cpp
//./a.out
