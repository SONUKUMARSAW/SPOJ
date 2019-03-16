#include<iostream>            //Required Header Files.
using namespace std;

int check_Zeros(long int A);       //Function to Check trailing Zeros.

int main(){

    int T;cin>>T;                    //Number of Test Cases.
    long int N;
   
    while(T!=0){
      cin>>N;
      cout<<check_Zeros(N)<<"\n";
      T--;
    }
}
int check_Zeros(long int A)
{
  /*
  
         For any number N, N! = N*(N-1)*(N-2)...3*2*1

	 For any number N!,Z = (N/5)+(N/5^2)+(N/5^3)+......N/5^k

	 where k such that 5^k just less than N

  */

  long int sum=0;

  while(A!=0){
    sum=sum+A/5;
    A=A/5;
  }
  return sum;
}
