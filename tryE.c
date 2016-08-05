#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sum (int a, int b)
{
  return a+b;
}

typedef struct{
	int id;
	float price;
	char item[100][100];
}restaurant;

int main(int argc, char *argv[])
{
    FILE *fp = fopen("argv[0]","r");
    const char s =",";
    char *token,line[100];
    int i;
    restaurant rest[50];



    if(fp != NULL)
    {	
	for(i=0;i!=sizeof line;i++){
        	while(fgets(line, sizeof line, fp) != NULL)
        	{
        		token = strtok(line, s);
        		rest[i].id=atoi(token);
			
			token = strtok(NULL,s);
			rest[i].price=atof(token)
			
			forj=0;j<n;j++)
        		{   
				//copy the items list : 
      				printf("%s\t",token);
        			
        		}       
            		
        	}
	}

	
        fclose(fp);
    } else {
        perror("Please give a csv file!!!");
    }   
	return 0;
}
