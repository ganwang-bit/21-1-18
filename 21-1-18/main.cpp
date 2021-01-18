//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//inline int f(int a)
//{
//    return a*2;
//}
//int main()
//{
//    int a=10;
//    int b=f(a);
//    cout<<b<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int c;
//    cin>>c;
//    int arr[c];
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
////    const int i=10;
////    const int*p=&i;
//    int a=10;
//    const int*p=&a;
//    const char*s="hello world";
//    cout<<s<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A():i(10){}
//    virtual void f(){cout<<"A::A()"<<endl;};
//public:
//    int i;
//};
//class B:public A
//{
//private:
//    int j;
//public:
//    B():j(30){}
//    virtual void f(){cout<<"B.j="<<j<<endl;}
//    virtual void ff(){cout<<"B::B()"<<endl;}
//};
//int main()
//{
//    A a;
//    B b;
//    cout<<a.i<<" "<<b.i<<endl;
//    cout<<sizeof(a)<<" "<<sizeof(b)<<endl;
//    int*p=(int*)&a;
//    *p=20;
//    cout<<a.i<<endl;
//    cout<<p<<" "<<*p<<endl;
//    p=(int*)&b;
//    cout<<p<<" "<<*p<<endl;
//    p++;
//    *p=20;
//    b.f();
//    a=b;
//    A*p=&b;
//    p->f();
//    a=b;
//    a.f();
//    p=&a;
//    p->f();
//    return 0;
//}
