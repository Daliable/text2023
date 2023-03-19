#include<stdio.h>
typedef struct employer{
	char no[20];
	char name[20];
	char department[20];
}em;
void input(em *p,int *n)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("请输入第%d个员工数据\n",i);
		scanf("%s%s%s",(*p).no
		,(*p).name,(*p).department);
		p++;
	}
}

void WriteDataToFile(em *p,int n)
{
	FILE *fp=fopen("D:\employer.text.txt","w");
		int i;
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%s %s %s\n",p->no,p->name,p->department);
		n++;
	}
	fclose(fp);
}
/*void ReadDataFromFile(em[],int *pn)
{
	FILE *fp=fopen("c:\\employer.txt","r");
	if(fp!=NULL)
	{
		while(feof(fp)==0)
		{
			fscanf(fp,"%S %S %S\n",em[*pn].no,em[*pn].name,em[*pn].department);
			(*pn)++;
			printf("%S %S %S\n",em[*pn].no,em[*pn].name,em[*pn].department)
		}
	}
}*/


int main(void)
{
	struct employer em[5];
	int n = 0;
	input(em,&n);
	WriteDataToFile(em,n);
//	ReadDataFromFile(em,&n);
	
	
	
}
 
