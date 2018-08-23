//problem:- to print all possible subsets of an given array

#include<iostream>
using namespace std;

void bin(int n , char A[],int B[]){

    if(n<1){
         cout<<"{";
        for(int i=0;i<4;i++){

            if(A[i]=='1'){
                cout<<B[i]<<",";
            }
        }
          cout<<"}";
        cout<<"\n";
    }
    else{
        A[n-1] = '0';
        bin(n-1,A,B);
        A[n-1]='1';
        bin(n-1,A,B);
    }
}

int main(int argc, char const *argv[])
{  int B[4] = {1,2,3,4};
    char A[5];
    A[4]='\0';
    bin(4,A,B);
    return 0;
}