#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argc == 3){
		char a1[100];
		char a2[100];
		strcpy(a2,argv[2]);
        strcpy(a1,argv[1]);
		FILE *fp;
		int str=0,word=0;
		char ch;
		if((fp=fopen(a2,"r"))==NULL)
		{
			printf("û�м�⵽�ļ�\n");
			return 0;
		}
		ch=fgetc(fp); 	
		
		char t = ch;
		while(ch!=EOF)
		{		
			if((ch==' ' || ch==',' || ch=='\n')&&(t!=' ' && t!=',' && t!='\n'))
			{
				word++;
			}
			str++;
			t=ch;
			ch=fgetc(fp);
		}
		if(t!=' ' && t!= ',' && t!='\n')
			word++;
		if(a1[1]=='c'){
			printf("�ַ���:%d\n",str);
		}else if(a1[1]=='w'){
			printf("������:%d\n",word);
		}else{
			printf("�������\n"); 
		} 
		fclose(fp);
		}
	else{
		printf("��������������\n");
	}
	return 0;
}
