#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	int i,a,c,d,f,num=0,j,k;
	char b,e,g;
	for(i=0;i<4;i++)
	{
	   printf("-----------------------------\n");
	   printf("  Engineering Mathematics\n");
	   printf("   defferential equation\n");
	   printf("partial defferential equation\n");
	   printf("      Laplace transform\n");
	   printf("-----------------------------\n");
	}

    for(;;)
    {
        if(num==3)
        {
            printf("�K�X�s����~�T��\n");
            system("pause");
            return 0;
		}
		printf("�п�J�|�ӼƦr���K�X:");
        fflush(stdin);
		scanf("%d",&a);
        if(a==2024)
        {
            break;
        }
        if(a!=2024)
        {
            printf("�K�X���~");
			printf("%d��\n",num+1);
            num++;
		}
		
        
    }
	while(1)
	{
	    system("cls");
	
	    printf("-----------------------------\n");
	    printf("    a A .�e�X�����T����\n");
	    printf("    b B .��ܭ��k��\n");
	    printf("        c C .����\n");
	    printf("-----------------------------\n");
        fflush(stdin);
		scanf("%s",&c);
		switch(c)
		{
			case 'a':
			case 'A':
		 	   while(1)
				{
					system("cls");
				    printf("�п�J�@��'a'��'n'���r��:\n");	
				    fflush(stdin);
				    scanf("%c",&e);
					system("cls");
				    while(1)
					{
						if(e>='a'&&e<='n')
						{
							for(i=e;i>='a';i--)
							{
								for(j=i;j>='a'+1;j--)
								{
									printf(" ");
								}
								for(k=i;k<=e;k++)
								printf("%c",k);
								printf("\n");
							}
							system("pause"); 
							break;
					    }
		         		else
						printf("���~\n");
						system("pause"); 
				  	  	break;
				    }
				    break;
				}
				break;
			case 'b':
			case 'B':
				system("cls");
				while(1)
				{
					starts:
					system("cls");
					printf("�п�J�@��1��9�����:\n");	
					fflush(stdin);
					scanf("%d",&d);
					if(d>=1&&d<=9)
					{
						for(f=1;f<=d;f++)
						{
							for(b=1;b<=d;b++)
							{
							    printf("%d*%d=%2d ",f,b,f*b);
							}
							printf("\n");
						}
						system("pause"); 
					    break;
					}
					else
					{
						printf("���~\n");
						system("pause");
						goto starts;	
					}
					
				}
				break;
			case 'c':
			case 'C':
				system("cls");
				while(1)
				{
					start:
					system("cls");
					printf("Continue?(y/n),�O�_�n���s��J\n");	
					fflush(stdin);
					scanf("%c",&g);
					switch(g)
					{
						case 'Y':
						case 'y':
							system("pause");
							break;
						case 'N':
						case 'n':
							system("pause");
							return 0;
						default:
							printf("���~\n");
							system("pause");
							goto start;	
					}
					break;	
				} 
				break;
		}
	}
}

