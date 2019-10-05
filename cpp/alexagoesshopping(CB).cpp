#include<iostream>

using namespace std;

int main(){
   int i,j,n,q,count=0,A,k;
   cin>>n;
   int a[100000];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
    cin>>q;



     for(i=0;i<q;i++)
   {
   cin>>A>>k;//A or k ko yaha pe input lena h
   count=0;//count ko hr nai value k liye 0 krna h
       for(j=0;j<n;j++)
       {


            if(A%a[j]==0)
                {
                    count++;
                }
       }
        if (count >=k)//greater than equal to hoga
        {
            cout<<"Yes"<<endl;;
        }
        else
        {cout<<"No"<<endl;}
        count=0;
   }
}





