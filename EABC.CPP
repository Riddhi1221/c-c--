#include<iostream.h>
#include<conio.h>
class First {
public:
int a, b;
void myFun1() {
a = 10;
b = 20;
}
};
class Second: public First {
public:
int sum;
void myFun2() {
sum = a + b;
}
};
class Third: public Second {
public:
int per;
void myFun3() {
per = sum / 2;
 cout<<"Per = "<<per;
}
};
int main() {
Third t;
t.myFun1();
t.myFun2();
 return 0;
}