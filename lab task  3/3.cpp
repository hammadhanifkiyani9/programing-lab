/*

*Lab 1 :  - T1
* Name :Hammad Hanif Kiani  
* Roll No : 26-SET-11
* Date : 11-25-26
* Purpose : "Fix Bug  "
*/
#include <iostream>;
using namespace std;//BUG no 1 : ; missing after std
int main()
{ 
cout << "Welcome to the Lab!"<<endl;//BUG no 2 : ; missing after endl
cout << "Today we learn \"C++\"."<< endl;//BUG no 3 : ; Cout-C is case sensitive(correct is cout)and inside the comma
cout << "Files are in C:\\Lab01" << endl;//BUG NO 4:  to print backslash in output double backslash(\\)and.is inside the comma
cout << "Bye!"<<endl;//BUG NO 5: (")is missing after bye!
return 0;
}

