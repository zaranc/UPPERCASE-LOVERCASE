#include<stdio.h>


main()
{
	char name[] = "AKASH";
	int i;
	
	if (name[0]>='a'  &&  name[1]<='z')
	{
		name[0] = name[0] -32;
		printf("%c",name[0]);
	}
	else if(name[0]>='A'  &&  name[1]<='Z')
	{
		printf("%c",name[0]);
	}
	
	for(i=1; i<5; i++)
	{
		if(name[i]>='A' && name[i]<='Z')
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}
