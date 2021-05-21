Steps for installation of OpenMp was taken from the following article on the internet. You can directly refer the page 
https://www.geeksforgeeks.org/openmp-introduction-with-installation-guide/

1)LINUX INSTALLATION
  a) Check the gcc version of compiler as OpenMp is supported on GCC higher than 4.2.0
  b) To check the configuration of OpenMp features use the command echo |cpp -fopenmp -dM |grep-i open
  c) If it is not featured in the compiler configure/install it using the command
  d) sudo apt install libomp-dev
  e) Initialize the number of threads to be executed using the command
  f) export OMP_NUM_THREADS= (number of threads you wish to initialize);
 
 2) MAC INSTALLATION
  https://stackoverflow.com/questions/35134681/installing-openmp-on-mac-os-x-10-11
  
