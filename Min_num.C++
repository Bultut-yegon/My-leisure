#include <iostream>
using namespace std;
void printMax(int array[6])
{
int max = array[0];
for(int j=0;j<6;j++)
{
if(max<array[j])
max=array[j];
}
}
int main()
{
int array1[6]={23,65,865,467,988,54};
int array2[6]={78,35,76,8457,846,234};
printMax(array1);
printMax(array2);

}
