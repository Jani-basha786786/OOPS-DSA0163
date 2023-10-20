#include<iostream>
using namespace std;
template < typename T >
	 T num(T x,T y)
	 {
 		if(x>y)
		 return y;
	    else
		 return x;
     }
template < typename T >   
    T num1(T x,T y)
    {
 	  return y=x*x;
    }
template < typename T >   
   T num2(T x,T y) 
    {
	  return y=x*x*x;
    }
   

int main()
{
    int x,y,min,max;
	cout<<"enter the values of x and y:";
	cin>>x>>y;
	min=num<int>(x,y);
	max=num<int>(x,y);
	cout<<"x is minimum number than y:"<< std::endl;
	cout<<"y is maximum number than x:"<< std::endl;
	
	{ 
	    float x,y;
		cout<<"enter the value of x:"<< std::endl;
		cin>>x;
		y=num1<float>(x,y);
		cout<<y;
	
	    {
		    int x,y;
			cout<<"enter the value of x:"<< std::endl;
		    cin>>x;
		    y=num2<int>(x,y);
		    cout<<y;
		    return 0;
	    }
	}
}

