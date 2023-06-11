#include <iostream>
using namespace std;
void printArray(int array[7]){
cout<< "printing array elements:"<<endl;
for(int i=0;i<5;i++)
{
cout<< array[i]<<endl;

}
}
int main ()
{
int array1[7] ={39,43,7,23,98,65,54};
int array2[7] = {27,12,54,90,67,54,76};
printArray(array1); //passing array to function_not_supported
printArray(array2);
}


