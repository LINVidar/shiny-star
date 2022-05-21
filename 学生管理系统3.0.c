#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<windows.h>
#define LEN sizeof(struct student)
#define HEADER1 "|===================================ѧ������γ���Ϣ================================================|\n"
#define HEADER2 "|------------|--------|--------|--------------|--------------|---------------------|-------------|-------------|---------|\n"
#define HEADER3 "|    ѧ��    |  ����  |  ����  |   ��ϵ�绰   |      סַ    |      ��������       |  ���Գɼ�   |  ƽʱ�ֳɼ� |   �ܷ�  |\n"
#define HEADER4 "|------------|--------|--------|--------------|--------------|---------------------|-------------|-------------|---------|\n"
#define FORMAT "|%-12d|%-8s|%-8s|%-8s   |%-8s  |%-8s |%-13.1f|%-13.1f|%-13.1f|\n"
#define DATA stu[i].num,stu[i].name,stu[i].ages,stu[i].phoneNum,stu[i].ip,stu[i].eMail,stu[i].result1,stu[i].result2,stu[i].sum 
/******************����ѧ���ɼ��ṹ��******************/
struct student
{
	int num;			/*ѧ��*/
	char name[15];		/*����*/
	char ages[10];		/*����*/
	char phoneNum[20];	    /*��ϵ�绰*/
	char ip[20];		/*סַ*/
	char eMail[20];		/*��������*/
	float result1;		/*���Գɼ�*/
	float result2;		/*ƽʱ�ֳɼ�*/
	float sum;		    /*�ܷ�*/
};
struct student stu[50];		/*����ȫ�ֽṹ������*/
/******************������������******************/
void input();				/*¼��ѧ���ɼ���Ϣ*/
void show();				/*��ʾѧ��������Ϣ*/
void order();				/*���ܷ�����*/
void order1();              /*�����Գɼ�����*/
void order2();              /*��ƽʱ������*/
void del();				/*ɾ��ѧ���ɼ���Ϣ*/
void del1();
void del2();
void del3();
void modify();				/*�޸�ѧ���ɼ���Ϣ*/
void modify1();
void modify3();
void menu();				/*�������˵�*/
void menuPlus();
void menuDel();
void menumodify();
void menuorder();
void insert();				/*����ѧ����Ϣ*/
void total();				/*����������*/
void search();				/*����ѧ����Ϣ*/;
void search1();
void search2();
void search3();

/******************�Զ��庯��ʵ�ֲ˵�����******************/
void menu()
{
              system("cls");
	printf("\t\t\t=======================ѧ����Ϣ����ϵͳ==========================\n");
	printf("\t\t\t|                                                               |\n");
	printf("\t\t\t|                        0. �˳�ϵͳ                            |\n");
	printf("\t\t\t|                        1. ������Ϣ                            |\n");
	printf("\t\t\t|                        2. ������Ϣ                            |\n");
	printf("\t\t\t|                        3. ɾ����Ϣ                            |\n");
	printf("\t\t\t|                        4. �޸���Ϣ                            |\n");
	printf("\t\t\t|                        5. ������Ϣ                            |\n");
	printf("\t\t\t|                        6. ��¼����                            |\n");
	printf("\t\t\t|                        7. ��¼����                            |\n");
	printf("\t\t\t|                        8. ��ʾ��¼                            |\n");
	printf("\t\t\t=================================================================\n");
	printf("\t\t\t\t\t���������Ĳ���(0-8):");
}
void menuPlus()
{

              system("cls");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$ѧ����Ϣ��ѯϵͳ$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t$                                                               $\n");
	printf("\t\t\t$                        0. ѧ�Ų�ѯ                            $\n");
	printf("\t\t\t$                        1. ������ѯ                            $\n");
	printf("\t\t\t$                        2. �����ѯ                            $\n");
	printf("\t\t\t$                        3. �绰��ѯ                            $\n");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t���������Ĳ���(0-3):");	
}
void menuDel()
{

              system("cls");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$ѧ����Ϣ��ѯϵͳ$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t$                                                               $\n");
	printf("\t\t\t$                        0. ����ѧ��ɾ��                        $\n");
	printf("\t\t\t$                        1. ��������ɾ��                        $\n");
	printf("\t\t\t$                        2. ��������ɾ��                        $\n");
	printf("\t\t\t$                        3. ���յ绰ɾ��                        $\n");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t���������Ĳ���(0-3):");	
}
void menumodify()
{
	          system("cls");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$ѧ����Ϣ��ѯϵͳ$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t$                                                               $\n");
	printf("\t\t\t$                        0. ����ѧ�Ų�ѯ�޸�                    $\n");
	printf("\t\t\t$                        1. ����������ѯ�޸�                    $\n");
	printf("\t\t\t$                        2. ���յ绰��ѯ�޸�                    $\n"); 
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t���������Ĳ���(0-2):");
}
void menuorder()
{
	          system("cls");
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$ѧ����Ϣ��ѯϵͳ$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t$                                                               $\n");
	printf("\t\t\t$                        0. �����ܳɼ�����                      $\n");
	printf("\t\t\t$                        1. ���տ��Գɼ�����                    $\n");
	printf("\t\t\t$                        2. ����ƽʱ�ֳɼ�����                  $\n"); 
	printf("\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("\t\t\t\t\t���������Ĳ���(0-2):");
}
/******************¼��ѧ����Ϣ******************/
void input()
{
	int i,m=0;						/*����m��ʾ��¼������*/
	char ch[2];  
	FILE *fp;	/*�����ļ�ָ��*/
	if((fp=fopen("stuData.txt","a+"))==NULL)	                            /*��ָ���ļ�*/
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m] ,LEN,1,fp)==1)
			m++;				/*ͳ�Ƶ�ǰ��¼����*/
	}
	fclose(fp);
	if(m==0)
		printf("û������!\n");
	else
	{
		system("cls");
		show();					/*����show��������ʾԭ����Ϣ*/
	}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m;i++)
	{
		fwrite(&stu[i] ,LEN,1,fp);			/*��ָ���Ĵ����ļ�д����Ϣ*/
	}

	printf("��ȷ��(y/n):");
	scanf("%s",ch);
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)                /*�ж��Ƿ�Ҫ¼������Ϣ*/
	        {
	        printf("ѧ��:");
	       scanf("%d",&stu[m].num);			/*����ѧ��ѧ��*/
	       for(i=0;i<m;i++)
	              if(stu[i].num==stu[m].num)
                            {
		         printf("��ѧ���Ѵ��ڣ�");
		         getch();
			          fclose(fp);
			          return;
			}
		/*���ѧ�ſ��ã������������������*/
		printf("����:");
		scanf("%s",stu[m].name);			    /*����ѧ������*/
		printf("����:");
		scanf("%s",&stu[m].ages);		        /*��������*/
		printf("��ϵ�绰:");
		scanf("%s",&stu[m].phoneNum);		        /*������ϵ�绰*/
		printf("סַ:");
		scanf("%s",&stu[m].ip);			        /*����סַ*/
		printf("��������:");
		scanf("%s",&stu[m].eMail);			    /*�����������*/
		printf("���Գɼ�:");
		scanf("%f",&stu[m].result1);		    /*���뿼�Գɼ�*/
		printf("ƽʱ�ֳɼ�:");
		scanf("%f",&stu[m].result2);		    /*����ƽʱ�ֳɼ�*/
		stu[m].sum=stu[m].result1*0.7+stu[m].result2*0.3;	/*������ܳɼ�*/
		if(fwrite(&stu[m],LEN,1,fp)!=1)	/*����¼�����Ϣд��ָ���Ĵ����ļ�*/
		{
			printf("����ʧ��!");
			getch();
		}
		else
		{
			printf("%s �ѱ���!\n",stu[m].name);
			m++;
		}
		printf("�Ƿ����?(y/n):");			/*ѯ���Ƿ����*/
		scanf("%s",ch);
	}
	fclose(fp);
	printf("�����ɹ�!\n");
}
/******************�Զ�����Һ���******************/
void search()
{
	FILE *fp;
	int snum,i,m=0;
	char ch[2];
	if((fp=fopen("stuData.txt","rb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		return;
	}
	printf("��������Ҫ���ҵ�ѧ��ѧ��:");
	scanf("%d",&snum);
	for(i=0;i<m;i++)
		if(snum==stu[i].num)		               /*���������ѧ���Ƿ��ڼ�¼��*/
		{
			printf("ѧ���������ҵ���ȷ����ʾ?(y/n)");
			scanf("%s",ch);
			if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0) 
			{
				printf("\n");
	            printf(HEADER1);
	            printf(HEADER2);
	            printf(HEADER3);
				printf(FORMAT,DATA);				/*�����ҳ��Ľ����ָ����ʽ���*/
				printf(HEADER4);
				break;
			}
		}
	if(i==m)
		printf("����ʧ��!\n");			/*δ�ҵ�Ҫ���ҵ���Ϣ*/
}
void search1()
{
	FILE *fp;
	char sname[15];
    int i,m=0;
	char ch[2];
	if((fp=fopen("stuData.txt","rb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		return;
	}
          printf("��������Ҫ���ҵ�ѧ������:");
	scanf("%s",sname);
	for(i=0;i<m;i++)
		if(strcmp(stu[i].name, sname) == 0)		               /*��������������Ƿ��ڼ�¼��*/
		{
			printf("ѧ���������ҵ���ȷ����ʾ?(y/n)");
			scanf("%s",ch);
			if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0) 
			{
				printf("\n");
	            printf(HEADER1);
	            printf(HEADER2);
	            printf(HEADER3);
				printf(FORMAT,DATA);				/*�����ҳ��Ľ����ָ����ʽ���*/
				printf(HEADER4);
				break;
			}
		}
	if(i==m)
		printf("����ʧ��!\n");			/*δ�ҵ�Ҫ���ҵ���Ϣ*/
}
void search2()
{
	FILE *fp;
	char seMail[20];
    int i,m=0;
	char ch[2];
	if((fp=fopen("stuData.txt","rb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		return;
	}
          printf("��������Ҫ���ҵ�ѧ������:");
	scanf("%s",seMail);
	for(i=0;i<m;i++)
		if(strcmp(stu[i].eMail, seMail) == 0)		               /*��������������Ƿ��ڼ�¼��*/
		{
			printf("ѧ���������ҵ���ȷ����ʾ?(y/n)");
			scanf("%s",ch);
			if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0) 
			{
				printf("\n");
	            printf(HEADER1);
	            printf(HEADER2);
	            printf(HEADER3);
				printf(FORMAT,DATA);				/*�����ҳ��Ľ����ָ����ʽ���*/
				printf(HEADER4);
				break;
			}
		}
	if(i==m)
		printf("����ʧ��!\n");			/*δ�ҵ�Ҫ���ҵ���Ϣ*/
}
void search3()
{
	FILE *fp;
	char sphoneNum[20];
    int i,m=0;
	char ch[2];
	if((fp=fopen("stuData.txt","rb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		return;
	}
          printf("��������Ҫ���ҵ�ѧ���绰:");
	scanf("%s",sphoneNum);
	for(i=0;i<m;i++)
		if(strcmp(stu[i].phoneNum, sphoneNum) == 0)		               /*��������ĵ绰�Ƿ��ڼ�¼��*/
		{
			printf("ѧ���������ҵ���ȷ����ʾ?(y/n)");
			scanf("%s",ch);
			if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0) 
			{
				printf("\n");
	            printf(HEADER1);
	            printf(HEADER2);
	            printf(HEADER3);
				printf(FORMAT,DATA);				/*�����ҳ��Ľ����ָ����ʽ���*/
				printf(HEADER4);
				break;
			}
		}
	if(i==m)
		printf("����ʧ��!\n");			/*δ�ҵ�Ҫ���ҵ���Ϣ*/
}
/******************�Զ���ɾ������******************/
void del()
{
        FILE *fp;
        int snum,i,j,m=0;
        char ch[2];
        if((fp=fopen("stuData.txt","r+"))==NULL)
        {
	printf("���ļ�ʧ��\n");return;
        }
        while( !feof(fp) )  
	if(fread(&stu[m],LEN,1,fp)==1) 
	       m++;
               fclose(fp);
               if(m==0) 
	{
	printf("�ļ��޼�¼!\n");
	return;
        }
       show();						/*��ʾ��������*/
       printf("��������Ҫɾ����ѧ��ѧ��:");
       scanf("%d",&snum);	
       for(i=0;i<m;i++)
       {
             if(snum==stu[i].num)				/*���ҵ������ѧ��*/
             {    
	printf("�������ҵ����Ƿ�ȷ��ɾ��?(y/n)");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)	                /*�ж��Ƿ�Ҫ����ɾ��*/
	{	
	         for(j=i;j<m;j++)
		 stu[j]=stu[j+1];		                              /*����¼�����Ƶ�ǰ���λ��*/
		m--;						         /*��¼���ܸ�����1*/
		if((fp=fopen("stuData.txt","wb"))==NULL)
		{ 
			printf("���ļ�ʧ��\n");
			return;
		}
	  for(j=0;j<m;j++)/*�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���*/
			if(fwrite(&stu[j] ,LEN,1,fp)!=1)
			{ 
			          printf("�Բ��𣬱���ʧ��!\n");
			          getch();			                        /*������ͣ*/
			}
			fclose(fp);
			printf("ɾ���ɹ�!\n");
			return;
		}
		else			                   /*�û�������ַ�����y��Y����ʾȡ��ɾ��*/
		{
		printf("ȡ��ɾ��!\n");
		return;
	      }
	}
         } 
printf("û���ҵ�Ҫɾ������Ϣ��\n");
}
void del1()
{
        FILE *fp;
        char sname[15];
        int i,j,m=0;
        char ch[2];
        if((fp=fopen("stuData.txt","r+"))==NULL)
        {
	printf("���ļ�ʧ��\n");return;
        }
        while( !feof(fp) )  
	if(fread(&stu[m],LEN,1,fp)==1) 
	       m++;
               fclose(fp);
               if(m==0) 
	{
	printf("�ļ��޼�¼!\n");
	return;
        }
       show();						/*��ʾ��������*/
       printf("��������Ҫɾ����ѧ������:");
       scanf("%s",sname);	
       for(i=0;i<m;i++)
		if(strcmp(stu[i].name, sname) == 0)				/*���ҵ����������*/
             {    
	printf("�������ҵ����Ƿ�ȷ��ɾ��?(y/n)");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)	                /*�ж��Ƿ�Ҫ����ɾ��*/
	{	
	         for(j=i;j<m;j++)
		 stu[j]=stu[j+1];		                              /*����¼�����Ƶ�ǰ���λ��*/
		m--;						         /*��¼���ܸ�����1*/
		if((fp=fopen("stuData.txt","wb"))==NULL)
		{ 
			printf("���ļ�ʧ��\n");
			return;
		}
	  for(j=0;j<m;j++)/*�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���*/
			if(fwrite(&stu[j] ,LEN,1,fp)!=1)
			{ 
			          printf("�Բ��𣬱���ʧ��!\n");
			          getch();			                        /*������ͣ*/
			}
			fclose(fp);
			printf("ɾ���ɹ�!\n");
			return;
		}
		else			                   /*�û�������ַ�����y��Y����ʾȡ��ɾ��*/
		{
		printf("ȡ��ɾ��!\n");
		return;
	      }
	} 
printf("û���ҵ�Ҫɾ������Ϣ��\n");
}
void del2()
{
        FILE *fp;
        char sphoneNum[20];
        int i,j,m=0;
        char ch[2];
        if((fp=fopen("stuData.txt","r+"))==NULL)
        {
	printf("���ļ�ʧ��\n");return;
        }
        while( !feof(fp) )  
	if(fread(&stu[m],LEN,1,fp)==1) 
	       m++;
               fclose(fp);
               if(m==0) 
	{
	printf("�ļ��޼�¼!\n");
	return;
        }
       show();						/*��ʾ��������*/
       printf("��������Ҫɾ����ѧ���绰:");
       scanf("%s",sphoneNum);	
       for(i=0;i<m;i++)
		if(strcmp(stu[i].phoneNum, sphoneNum) == 0)				/*���ҵ�����ĵ绰*/
             {    
	printf("�������ҵ����Ƿ�ȷ��ɾ��?(y/n)");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)	                /*�ж��Ƿ�Ҫ����ɾ��*/
	{	
	         for(j=i;j<m;j++)
		 stu[j]=stu[j+1];		                              /*����¼�����Ƶ�ǰ���λ��*/
		m--;						         /*��¼���ܸ�����1*/
		if((fp=fopen("stuData.txt","wb"))==NULL)
		{ 
			printf("���ļ�ʧ��\n");
			return;
		}
	  for(j=0;j<m;j++)/*�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���*/
			if(fwrite(&stu[j] ,LEN,1,fp)!=1)
			{ 
			          printf("�Բ��𣬱���ʧ��!\n");
			          getch();			                        /*������ͣ*/
			}
			fclose(fp);
			printf("ɾ���ɹ�!\n");
			return;
		}
		else			                   /*�û�������ַ�����y��Y����ʾȡ��ɾ��*/
		{
		printf("ȡ��ɾ��!\n");
		return;
	      }
	} 
printf("û���ҵ�Ҫɾ������Ϣ��\n");
}
void del3()
{
        FILE *fp;
        char seMail[20];
        int i,j,m=0;
        char ch[2];
        if((fp=fopen("stuData.txt","r+"))==NULL)
        {
	printf("���ļ�ʧ��\n");return;
        }
        while( !feof(fp) )  
	if(fread(&stu[m],LEN,1,fp)==1) 
	       m++;
               fclose(fp);
               if(m==0) 
	{
	printf("�ļ��޼�¼!\n");
	return;
        }
       show();						/*��ʾ��������*/
       printf("��������Ҫɾ����ѧ������:");
       scanf("%s",seMail);	
       for(i=0;i<m;i++)
		if(strcmp(stu[i].eMail, seMail) == 0)				/*���ҵ����������*/
             {    
	printf("�������ҵ����Ƿ�ȷ��ɾ��?(y/n)");
	scanf("%s",ch);
	if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)	                /*�ж��Ƿ�Ҫ����ɾ��*/
	{	
	         for(j=i;j<m;j++)
		 stu[j]=stu[j+1];		                              /*����¼�����Ƶ�ǰ���λ��*/
		m--;						         /*��¼���ܸ�����1*/
		if((fp=fopen("stuData.txt","wb"))==NULL)
		{ 
			printf("���ļ�ʧ��\n");
			return;
		}
	  for(j=0;j<m;j++)/*�����ĺ�ļ�¼����д��ָ���Ĵ����ļ���*/
			if(fwrite(&stu[j] ,LEN,1,fp)!=1)
			{ 
			          printf("�Բ��𣬱���ʧ��!\n");
			          getch();			                        /*������ͣ*/
			}
			fclose(fp);
			printf("ɾ���ɹ�!\n");
			return;
		}
		else			                   /*�û�������ַ�����y��Y����ʾȡ��ɾ��*/
		{
		printf("ȡ��ɾ��!\n");
		return;
	      }
	} 
printf("û���ҵ�Ҫɾ������Ϣ��\n");
}

/******************�Զ����޸ĺ���******************/
void modify()
{ 
	FILE *fp;
	int i,j,m=0,snum;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		fclose(fp);
		return;
	}
	show();
	printf("��������Ҫ�޸ĵ�ѧ����ѧ��\n");
	printf("ѧ����:");
	scanf("%d",&snum);
	for(i=0;i<m;i++)
	{
		if(snum==stu[i].num)			/*������¼���Ƿ���Ҫ�޸ĵ���Ϣ*/
		{
			printf("ѧ���������ҵ������޸�!\n");			
	printf("����:");
	scanf("%s",stu[i+1].name);
	printf("����:");
	scanf("%s",&stu[m].ages);
	printf("��ϵ�绰:");
	scanf("%s",&stu[m].phoneNum);
	printf("סַ:");
	scanf("%s",&stu[m].ip);
    printf("��������:");
	scanf("%s",&stu[m].eMail);
	printf("���Գɼ�:");
	scanf("%f",&stu[m].result1);
	printf("ƽʱ�ֳɼ�:");
	scanf("%f",&stu[m].result2);
	stu[i+1].sum=stu[i+1].result1*0.7+stu[i+1].result2*0.3;
			printf("modify successful!");
			if((fp=fopen("stuData.txt","wb"))==NULL)
			{ 
				printf("���ļ�ʧ��\n");
				return;
			}
			for(j=0;j<m;j++)		/*�����޸ĵ���Ϣд��ָ���Ĵ����ļ���*/
				if(fwrite(&stu[j] ,LEN,1,fp)!=1)
				{ 
					printf("����ʧ��!");
					getch(); 
				}
			fclose(fp);
			return ;
		}	 
	}
	printf("û���ҵ�ƥ����Ϣ��\n");
}
void modify1()
{ 
	FILE *fp;
	int i,j,m=0;
    char sname[15];
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		fclose(fp);
		return;
	}
	show();
	printf("��������Ҫ�޸ĵ�ѧ��������\n");
	printf("������:");
	scanf("%s",sname);
	for(i=0;i<m;i++)
	{
		if(strcmp(stu[i].name, sname) == 0)			/*������¼���Ƿ���Ҫ�޸ĵ���Ϣ*/
		{
			printf("ѧ���������ҵ������޸�!\n");			
	printf("����:");
	scanf("%s",stu[i+1].name);
	printf("����:");
	scanf("%s",&stu[m].ages);
	printf("��ϵ�绰:");
	scanf("%s",&stu[m].phoneNum);
	printf("סַ:");
	scanf("%s",&stu[m].ip);
    printf("��������:");
	scanf("%s",&stu[m].eMail);
	printf("���Գɼ�:");
	scanf("%f",&stu[m].result1);
	printf("ƽʱ�ֳɼ�:");
	scanf("%f",&stu[m].result2);
	stu[i+1].sum=stu[i+1].result1*0.7+stu[i+1].result2*0.3;
			printf("modify successful!");
			if((fp=fopen("stuData.txt","wb"))==NULL)
			{ 
				printf("���ļ�ʧ��\n");
				return;
			}
			for(j=0;j<m;j++)		/*�����޸ĵ���Ϣд��ָ���Ĵ����ļ���*/
				if(fwrite(&stu[j] ,LEN,1,fp)!=1)
				{ 
					printf("����ʧ��!");
					getch(); 
				}
			fclose(fp);
			return ;
		}	 
	}
	printf("û���ҵ�ƥ����Ϣ��\n");
}
void modify3()
{ 
	FILE *fp;
	int i,j,m=0;
          char sphoneNum[20];
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;
	if(m==0) 
	{
		printf("�ļ��޼�¼!\n");
		fclose(fp);
		return;
	}
	show();
	printf("��������Ҫ�޸ĵ�ѧ���ĵ绰\n");
	printf("�绰��:");
	scanf("%s",sphoneNum);
	for(i=0;i<m;i++)
	{
		if(strcmp(stu[i].phoneNum, sphoneNum) == 0)			/*������¼���Ƿ���Ҫ�޸ĵ���Ϣ*/
		{
			printf("ѧ���������ҵ������޸�!\n");			
	printf("����:");
	scanf("%s",stu[i+1].name);
	printf("����:");
	scanf("%s",&stu[m].ages);
	printf("��ϵ�绰:");
	scanf("%s",&stu[m].phoneNum);
	printf("סַ:");
	scanf("%s",&stu[m].ip);
    printf("��������:");
	scanf("%s",&stu[m].eMail);
	printf("���Գɼ�:");
	scanf("%f",&stu[m].result1);
	printf("ƽʱ�ֳɼ�:");
	scanf("%f",&stu[m].result2);
	stu[i+1].sum=stu[i+1].result1*0.7+stu[i+1].result2*0.3;
			printf("modify successful!");
			if((fp=fopen("stuData.txt","wb"))==NULL)
			{ 
				printf("���ļ�ʧ��\n");
				return;
			}
			for(j=0;j<m;j++)		/*�����޸ĵ���Ϣд��ָ���Ĵ����ļ���*/
				if(fwrite(&stu[j] ,LEN,1,fp)!=1)
				{ 
					printf("����ʧ��!");
					getch(); 
				}
			fclose(fp);
			return ;
		}	 
	}
	printf("û���ҵ�ƥ����Ϣ��\n");
}
/******************�Զ�����뺯��******************/
void insert()
{ 
	FILE *fp;
	int i,j,k,m=0,snum;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) m++;
	if(m==0) 
	{
		printf("û������!\n");
		fclose(fp);
		return;
	}
	printf("���������ݲ����λ�ã�\n");
	scanf("%d",&snum);				/*����Ҫ�����λ��*/
	for(i=0;i<m;i++)
		if(snum==stu[i].num)
			break;
	for(j=m-1;j>i;j--)
		stu[j+1]=stu[j];				/*�����һ����¼��ʼ�������һλ*/
	printf("�����������������Ϣ.\n");
	printf("ѧ��:");	
	scanf("%d",&stu[i+1].num);
	for(k=0;k<m;k++)
		if(stu[k].num==stu[m].num)
		{
			printf("��ѧ���Ѵ��ڣ�");
			getch();
			fclose(fp);
			return;
		}
	printf("����:");
	scanf("%s",stu[i+1].name);
	printf("����:");
	scanf("%s",&stu[m].ages);
	printf("��ϵ�绰:");
	scanf("%s",&stu[m].phoneNum);
	printf("סַ:");
	scanf("%s",&stu[m].ip);
    printf("��������:");
	scanf("%s",&stu[m].eMail);
	printf("���Գɼ�:");
	scanf("%f",&stu[m].result1);
	printf("ƽʱ�ֳɼ�:");
	scanf("%f",&stu[m].result2);
	stu[i+1].sum=stu[i+1].result1*0.7+stu[i+1].result2*0.3;
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	for(k=0;k<=m;k++)
		if(fwrite(&stu[k] ,LEN,1,fp)!=1)		/*���޸ĺ�ļ�¼д������ļ���*/
		{ 
			printf("����ʧ��!"); 
			getch(); 
			return;
		}
	printf("�������ݳɹ�!");
	getch();
	fclose(fp);
}
/******************�Զ���������******************/
void order()
{ 
	FILE *fp;
	struct student t;
	int i=0,j=0,m=0;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��!\n");
		return;
	}
	while(!feof(fp)) 
		if(fread(&stu[m] ,LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�޼�¼!\n");
		return;
	}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)	/*˫��ѭ��ʵ�ֳɼ��Ƚϲ�����*/
			if(stu[i].sum<stu[j].sum)
			{ 
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;
			}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m;i++)		/*�������ź������������д��ָ���Ĵ����ļ���*/
		if(fwrite(&stu[i] ,LEN,1,fp)!=1)
		{ 
			printf("%s ����ʧ��!\n"); 
			getch();
		}
	fclose(fp);
	printf("�����ɹ�\n");
}
void order1()
{ 
	FILE *fp;
	struct student t;
	int i=0,j=0,m=0;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��!\n");
		return;
	}
	while(!feof(fp)) 
		if(fread(&stu[m] ,LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�޼�¼!\n");
		return;
	}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)	/*˫��ѭ��ʵ�ֳɼ��Ƚϲ�����*/
			if(stu[i].result1<stu[j].result1)
			{ 
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;
			}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m;i++)		/*�������ź������������д��ָ���Ĵ����ļ���*/
		if(fwrite(&stu[i] ,LEN,1,fp)!=1)
		{ 
			printf("%s ����ʧ��!\n"); 
			getch();
		}
	fclose(fp);
	printf("�����ɹ�\n");
}
void order2()
{ 
	FILE *fp;
	struct student t;
	int i=0,j=0,m=0;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��!\n");
		return;
	}
	while(!feof(fp)) 
		if(fread(&stu[m] ,LEN,1,fp)==1) 
			m++;
	fclose(fp);
	if(m==0) 
	{
		printf("�޼�¼!\n");
		return;
	}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)	/*˫��ѭ��ʵ�ֳɼ��Ƚϲ�����*/
			if(stu[i].result2<stu[j].result2)
			{ 
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;
			}
	if((fp=fopen("stuData.txt","wb"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	for(i=0;i<m;i++)		/*�������ź������������д��ָ���Ĵ����ļ���*/
		if(fwrite(&stu[i] ,LEN,1,fp)!=1)
		{ 
			printf("%s ����ʧ��!\n"); 
			getch();
		}
	fclose(fp);
	printf("�����ɹ�\n");
}
/******************��ʾѧ��������******************/
void total()
{ 
	FILE *fp;
	int m=0;
	if((fp=fopen("stuData.txt","r+"))==NULL)
	{ 
		printf("���ļ�ʧ��\n");
		return;
	}
	while(!feof(fp))  
		if(fread(&stu[m],LEN,1,fp)==1) 
			m++;			/*ͳ�Ƽ�¼������ѧ������*/
	if(m==0)
	{
		printf("�ļ��޼�¼!\n");
		fclose(fp);
		return;
	}
	printf("ѧ������Ϊ %d λ!\n",m);		/*��ͳ�Ƶĸ������*/
		fclose(fp);
}
/******************��ʾѧ����Ϣ******************/
void show()
{ 
	FILE *fp;
	int i,m=0;
	fp=fopen("stuData.txt","rb");
	while(!feof(fp))
	{
		if(fread(&stu[m] ,LEN,1,fp)==1) 
			m++;
	}  
	fclose(fp);
	printf("\n");
	printf(HEADER1);
	printf(HEADER2);
	printf(HEADER3);
	for(i=0;i<m;i++)
	{ 
		printf(FORMAT,DATA);		/*��ѧ����Ϣ��ָ����ʽ��ӡ*/
	}
	printf(HEADER4);
}

/******************������******************/
int main()
{ 
		int n,i,ch,x;
		char pr[20],word;
		while(1)
	{
		printf("\n\n");
		printf("\t\t===========================================\n");
		printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("\t\t@                                        @\n");
		printf("\t\t@         �� ѧ����Ϣ����ϵͳ ��         @\n");
		printf("\t\t@                                        @\n");
		printf("\t\t@         �����ˣ�       �����          @\n");
		printf("\t\t@                                        @\n");
		printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("\t\t===========================================\n");
		printf("\t\t ������ϵͳ���룺");
		i=0;
		while((word=getch())!='\r') 
		{
            if(word=='\b' && i>0) 
			{
                printf("\b \b");                 /*'\b'�������һ���ո�' '���滻�����һ���ַ�*/
                --i;
            }
            else if(word!='\b') 
			{
                pr[i++]=word;
                printf("*");
            }
		}
        pr[i]='\0';
		if(strcmp(pr,"2003010627")==0)
		{
			printf("\n\t\t ��������ȷ!��\n");
			Sleep(500);
			system("CLS");
			break;
		}
		else
		{
			printf("\n\t\t ����������!��\n");
			printf("\n\t\t ����2�����������������...");
			Sleep(1000);
			printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b1�����������������...");
			Sleep(1000);
			system("CLS");
		}
	}
	menu();
	scanf("%d",&n);				/*����ѡ���ܵı��*/
	while(n)
	{ 
		switch(n)
		{ 
		case 0: exit(0);				/*�˳�����*/
		case 1: input();break;		/*¼���¼���ܺ�������*/
		case 2: menuPlus();
		        scanf("%d",&x);
		        if(x==0)
		        {
		        	search();
		        }
		        else if(x==1)
		        {
		        	search1();
		        }
		        else if(x==2)
		        {
		        	search2();
		        }
		        else if(x==3)
		        {
		        	search3();
		        }
		        break;		/*���Ҽ�¼���ܺ�������*/
		case 3: menuDel();
		        scanf("%d",&x);
		        if(x==0)
		        {
		        	del();
		        }
		        else if(x==1)
		        {
		        	del1();
		        }
		        else if(x==2)
		        {
		        	del3();
		        }
		        else if(x==3)
		        {
		        	del2();
		        }
		        break;			/*ɾ����¼���ܺ�������*/
		case 4:menumodify(); 
		       scanf("%d",&x);
		        if(x==0)
		        {
		        	modify();
		        }
		        else if(x==1)
		        {
		        	modify1();
		        }
		        else if(x==2)
		        {
		        	modify3();
		        }
		        break;		/*�޸ļ�¼���ܺ�������*/
		case 5: insert();break;		/*�����¼���ܺ�������*/
		case 6: menuorder();
		        scanf("%d",&x);
		        if(x==0)
		        {
		        	order();
		        }
		        else if(x==1)
		        {
		        	order1();
		        }
		        else if(x==2)
		        {
		        	order2();
		        }
		        break;		                 /*��¼�����ܺ�������*/
		case 7: total();break;		               /*����ͳ�ƹ��ܺ�������*/
		case 8: show();break;		               /*���м�¼��ʾ���ܺ�������*/
		default:printf("������������������:");break;
		}
	getch();
	menu();						 /*�˵�����ѭ����ʾ*/
	scanf("%d",&n);
	}
	return 0;
}