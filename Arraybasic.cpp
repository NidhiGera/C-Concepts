#include<iostream>
using namespace std;
int main()
{
 /*  int A[6];
      A[0]=12;
      A[1]=10;
      A[2]=8;
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
     printf("%d\n",A[2]);*/
     
    /*int A[10]={2,4,6,8,10,12,14};
    cout<<sizeof(A)<<endl;
    cout<<A[8]<<endl;
    printf("%d\n",A[9]);*/
    
    /*int A[10]={2,4};
    cout<<sizeof(A)<<endl;
    cout<<A[2]<<endl;
     printf("%d\n",A[3]);*/
     
     /*int A[10]={0};
     for(int i=0;i<10;i++)
     {
        cout<<A[i]<<endl;
     }*/
     
      int n;
      cout<<"Enter size of array";
      cin>>n;
      int A[n];
      A[0]=2;
      for(int x:A)
      {
      cout<<x<<endl;
      }
     

    return 0;
}
