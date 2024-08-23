#include <iostream>
#include "string.h"
using namespace std;


int main()
{
   string1 s1="hello";
   string1 s2=s1;
   string1 s3(s1);
cout << "s1=" << s1.get() <<"s2=" << s2.get() <<"s3=" <<s3.get();
}       