#include <iostream>
using namespace std;
void input(int*, int*)
int main ()
{
setlocale(LC_ALL, "rus");
int num1, num2;
input(&num1, &num2);
cout<<"„исла: "<<num1<<"; "<<num2<<endl;
cout<<"—умма введЄнных чисел: "<<num1+num2<<endl;
return 0;
}
void input(int *a, int *b)
{
    cout<<"¬ведите первое число ";
    cin>>*a;
    cout<<"¬ведите второе число ";
    cin>>*b;
    }
