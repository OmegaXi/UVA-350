#include<iostream>
#include<cstdlib>

using namespace std;

int arr[100000];

main()
{
	int z,i,m,l,c=1;
	while((cin>>z>>i>>m>>l)&&m)
	{
		z%=m;
		i%=m;
		l%=m;
		memset(arr,o,sizeof(arr));
		int count=0;
		l=(z*l+i)%m;
		while(!arr[l])
		{
			count++;
			arr[l]=1;
			l=(z*l+i)%m;
		}
	}
}