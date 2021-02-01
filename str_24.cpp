#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n=str.size();
	    
	    int count1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(str[i]!='1')
	            {
	                count1++;
	            }
	        }
	        else
	        {
	            if(str[i]!='0')
	            {
	                count1++;
	            }
	        }
	        
	    }
	    
	    int count2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(str[i]!='0')
	            {
	                count2++;
	            }
	        }
	        else
	        {
	            if(str[i]!='1')
	            {
	                count2++;
	            }
	        }
	        
	    }
	    cout<<min(count1,count2)<<endl;
	}
	return 0;
}
