#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
    struct Rectangle
    {
        int length;
        int breadth;
    };
    int main()
    {
        /* Rectangle r={10,5};
         cout<<r.length<<endl;
         cout<<r.breadth<<endl;
         Rectangle *p=&r;
         cout<<p->length<<endl;
         cout<<p->breadth<<endl;*/
         
         Rectangle *p;
         p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
         p->length=15;
         p->breadth=10;
        printf("%d\n", p->length);//p-> is used to access the member of the rectangle through pointer 
        printf("%d\n", p->breadth);
        return 0;
    }
