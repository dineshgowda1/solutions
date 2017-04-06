#include<iostream>
#include<cstring>
using namespace std;

int equal(string str1,string str2)
{
	int i=0;
	int k=str1.length();
	int l=str2.length();
	while(i<k || i<l)
	{
	int d=str1[i];
	int s=str2[i];
	if(s>d)
	{
		cout<<str1<<"is the winner"<<endl;
		break;
		
	}
	else
	{
		cout<<str2<<"is the winner"<<endl;
		break;
	}
	i++;
	
	
}

}
int cal(string str)
{
		
int j;	
int k=str.length(),i=0;
int s=str.length();
while(i<s)
{
	int y=str[i];
	for(j=i+1;j<s;j++)
	{
		int z=str[j];
		if((z-y)==0)
		{
			k--;
		}
	}
	i++;	
}
	
return k;
}
int main ()
{
	int k;
	cin>>k;
	while(k!=0)
	{
	
  string str1,str2;
  
  cin>>str1;
  cin>>str2; 

  if(cal(str1)>cal(str2))
  {
  	cout<<str1<<"is the winner"<<endl;
  	
  }
  else if(cal(str1)<cal(str2))
  {
  	cout<<str2<<"is the winner"<<endl;
  }
  else
  {
  	equal(str1,str2);
  }
  
k--;
	
}
	return 0;
	
}
