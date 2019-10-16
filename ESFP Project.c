#include "stdio.h"
#include "string.h"
struct Director
{
	int directorID, directorContact, directorCharges;
	char directorName[25];
}temp;
struct Company
{
	int companyID, companyContact, companyEstdYear;
	char companyName[25];
};
struct Advertisement
{
	int adID, propsUsed, adExpense, adWatching, adDuration, adActorCount;
	char adShootPlace[25];
};
int main()
{
	struct Director objectDir[5];
	struct Company objectCom[5];
	struct Advertisement objectAd[5];
	int i, j, k, l, choice;
	for (i=0; i<5; i++)
	{
		printf("\nDirector #%d\n",i+1);
		printf("Enter Director Name: ");
		scanf(" %[^\n]%*c", &objectDir[i].directorName);
		printf("Enter Director ID: ");
		scanf("%d", &objectDir[i].directorID);
		printf("Enter Director Contact: ");
		scanf("%d", &objectDir[i].directorContact);
		printf("Enter Director Charges: ");
		scanf("%d", &objectDir[i].directorCharges);
	}
	for (j=0; j<5; j++)
	{
		printf("\nCompany #%d\n",j+1);
		printf("Enter Company Name: ");
		scanf("  %[^\n]*c", &objectCom[j].companyName);
		printf("Enter Company ID: ");
		scanf("%d", &objectCom[j].companyID);
		printf("Enter Company Contact: ");
		scanf("%d", &objectCom[j].companyContact);
		printf("Enter Company Establishment Year: ");
		scanf("%d", &objectCom[j].companyEstdYear);
	}
	for (k=0; k<5; k++)
	{
		printf("\nAd #%d\n",k+1);
		printf("Enter Advertisement ID: ");
		scanf(" %d", &objectAd[k].adID);
		printf("Enter no. of props used: ");
		scanf(" %d", &objectAd[k].propsUsed);
		printf("Enter expense of advertisement: ");
		scanf(" %d", &objectAd[k].adExpense);
		printf("Enter no. of times ad was played: ");
		scanf(" %d", &objectAd[k].adWatching);
		printf("Enter duration of ad: ");
		scanf(" %d", &objectAd[k].adDuration);
		printf("Enter place of shooting: ");
		scanf(" %[^\n]*c", &objectAd[k].adShootPlace);
		printf("Enter no. of actors: ");
		scanf(" %d", &objectAd[k].adActorCount);
	}
	printf("\nChoose from below advertisement details:\n\n1. Emotional (ID 100)\n2. Humorous(ID 101)\n3. Musical(ID 102)\n4. Educational(ID 103)");
	enterAgain: printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	if (choice == 1)
	{
		for (i=0; i<5; i++)
		{
			for (j=0; j<5; j++)
			{
				if (objectDir[i].directorID == 100 && objectCom[j].companyID == 100)
				{
					printf("\nDirector details:\n");
					printf("Director ID: %d\n", objectDir[i].directorID);
					printf("Director Name: %s\n", objectDir[i].directorName);
					printf("Director Contact: %d\n", objectDir[i].directorContact);
					printf("Director Charges: %d\n", objectDir[i].directorCharges);
					printf("\nCompany details:\n");
					printf("Company ID: %d\n", objectCom[j].companyID);
					printf("Company Name: %s\n", objectCom[j].companyName);
					printf("Company Contact: %d\n", objectCom[j].companyContact);
					printf("Company Establishment Year: %d\n", objectCom[j].companyEstdYear);
				}
			}
		}
	}
	else if (choice == 2)
	{
		for (i=0; i<5; i++)
		{
			for (j=0; j<5; j++)
			{
				if (objectDir[i].directorID == 101 && objectCom[j].companyID == 101)
				{
					printf("\nDirector details:\n\n");
					printf("Director ID: %d\n", objectDir[i].directorID);
					printf("Director Name: %s\n", objectDir[i].directorName);
					printf("Director Contact: %d\n", objectDir[i].directorContact);
					printf("Director Charges: %d\n", objectDir[i].directorCharges);
					printf("\nCompany details:\n\n");
					printf("Company ID: %d\n", objectCom[j].companyID);
					printf("Company Name: %s\n", objectCom[j].companyName);
					printf("Company Contact: %d\n", objectCom[j].companyContact);
					printf("Company Establishment Year: %d\n", objectCom[j].companyEstdYear);
				}
			}
		}
	}
	else if (choice == 3)
	{
		for (i=0; i<5; i++)
		{
			for (j=0; j<5; j++)
			{
				if (objectDir[i].directorID == 102 && objectCom[j].companyID == 102)
				{
					printf("\nDirector details:\n\n");
					printf("Director ID: %d\n", objectDir[i].directorID);
					printf("Director Name: %s\n", objectDir[i].directorName);
					printf("Director Contact: %d\n", objectDir[i].directorContact);
					printf("Director Charges: %d\n", objectDir[i].directorCharges);
					printf("\nCompany details:\n\n");
					printf("Company ID: %d\n", objectCom[j].companyID);
					printf("Company Name: %s\n", objectCom[j].companyName);
					printf("Company Contact: %d\n", objectCom[j].companyContact);
					printf("Company Establishment Year: %d\n", objectCom[j].companyEstdYear);
				}
			}
		}
	}
	else if (choice == 4)
	{
		for (i=0; i<5; i++)
		{
			for (j=0; j<5; j++)
			{
				if (objectDir[i].directorID == 103 && objectCom[j].companyID == 103)
				{
					printf("\nDirector details:\n\n");
					printf("Director ID: %d\n", objectDir[i].directorID);
					printf("Director Name: %s\n", objectDir[i].directorName);
					printf("Director Contact: %d\n", objectDir[i].directorContact);
					printf("Director Charges: %d\n", objectDir[i].directorCharges);
					printf("\nCompany details:\n\n");
					printf("Company ID: %d\n", objectCom[j].companyID);
					printf("Company Name: %s\n", objectCom[j].companyName);
					printf("Company Contact: %d\n", objectCom[j].companyContact);
					printf("Company Establishment Year: %d\n", objectCom[j].companyEstdYear);
				}
			}
		}
	}
	else
	{
		printf("Invalid choice.\n");
		goto enterAgain;
	}
	char Name[25];
	for (l=0; l<3; l++)
	{
		printf("\nEnter your name: ");
		scanf(" %[^\n]*c", &Name);
		if (strcmp(Name, "Mit") == 0)
		{
			printf("Welcome Mit!\n");
			printf("\nPart I\n");
			for (i=0; i<5; i++)
			{
				if (objectAd[i].adID == 100 || objectAd[i].adID == 101)
				{
					printf("Advertisement ID: %d\n", objectAd[i].adID);
					printf("No. of props used: %d\n", objectAd[i].propsUsed);
					printf("Expense of advertisement: %d\n", objectAd[i].adExpense);
					printf("No. of times ad was played: %d\n", objectAd[i].adWatching);
					printf("Duration of ad: %d\n", objectAd[i].adDuration);
					printf("Place of shooting: %s\n", &objectAd[i].adShootPlace);
					printf("No. of actors: %d\n", objectAd[i].adActorCount);
				}
			}
			printf("\nPart II\n");
			for (j=0; j<5; j++)
			{
				if (objectAd[j].adWatching > 5 && objectAd[j].adDuration < 40)
				{
					printf("Advertisement ID: %d\n", objectAd[j].adID);
					printf("No. of props used: %d\n", objectAd[j].propsUsed);
					printf("Expense of advertisement: %d\n", objectAd[j].adExpense);
					printf("No. of times ad was played: %d\n", objectAd[j].adWatching);
					printf("Duration of ad: %d\n", objectAd[j].adDuration);
					printf("Place of shooting: %s\n", objectAd[j].adShootPlace);
					printf("No. of actors: %d\n", objectAd[j].adActorCount);
				}
			}
			printf("\nPart III\n");
			for (k=0; k<5; k++)
			{
				if (strcmp(objectDir[k].directorName,"Mr Mohan")==0)
				{
					if (strcmp(objectAd[k].adShootPlace,"Mumbai Film Studio")==0)
					{
						printf("Advertisement ID: %d\n", objectAd[k].adID);
						printf("No. of props used: %d\n", objectAd[k].propsUsed);
						printf("Expense of advertisement: %d\n", objectAd[k].adExpense);
						printf("No. of times ad was played: %d\n", objectAd[k].adWatching);
						printf("Duration of ad: %d\n", objectAd[k].adDuration);
						printf("Place of shooting: %s\n", &objectAd[k].adShootPlace);
						printf("No. of actors: %d\n", objectAd[k].adActorCount);
					}
				}
			}
		}
		if (strcmp(Name, "Rushil") == 0)
		{
			printf("Welcome Rushil!\n");
			printf("\nPart I\n");
			for (i=0; i<5; i++)
			{
				for (j=0; j<5; j++)
				{
					if (strcmp(objectDir[i].directorName,"Mr Shetty")==0)
					{
						if (objectAd[j].adID == 103)
						{
							printf("Advertisement ID: %d\n", objectAd[j].adID);
							printf("No. of props used: %d\n", objectAd[j].propsUsed);
							printf("Expense of advertisement: %d\n", objectAd[j].adExpense);
							printf("No. of times ad was played: %d\n", objectAd[j].adWatching);
							printf("Duration of ad: %d\n", objectAd[j].adDuration);
							printf("Place of shooting: %s\n", &objectAd[j].adShootPlace);
							printf("No. of actors: %d\n", objectAd[j].adActorCount);
						}
					}
				}
			}
			printf("\nPart II\n");
			for (i=0; i<5; i++)
			{
				for (j=0; j<5; j++)
				{
					if (strcmp(objectDir[i].directorName,"Mr Johar")==0)
					{
						if (objectAd[j].adID == 102)
						{
							printf("Advertisement ID: %d\n", objectAd[j].adID);
							printf("No. of props used: %d\n", objectAd[j].propsUsed);
							printf("Expense of advertisement: %d\n", objectAd[j].adExpense);
							printf("No. of times ad was played: %d\n", objectAd[j].adWatching);
							printf("Duration of ad: %d\n", objectAd[j].adDuration);
							printf("Place of shooting: %s\n", objectAd[j].adShootPlace);
							printf("No. of actors: %d\n", objectAd[j].adActorCount);
						}
					}
				}
			}
		}
		if (strcmp(Name, "Vidhan") == 0)
		{
			printf("Welcome Vidhan!\n");
			printf("\nPart I\n");
			for (i=0; i<5; i++)
			{
				if (objectAd[i].adDuration > 50)
				{
					if (objectAd[i].adActorCount > 3 && objectAd[i].adActorCount < 7)
					{
						printf("Advertisement ID: %d\n", objectAd[i].adID);
						printf("No. of props used: %d\n", objectAd[i].propsUsed);
						printf("Expense of advertisement: %d\n", objectAd[i].adExpense);
						printf("No. of times ad was played: %d\n", objectAd[i].adWatching);
						printf("Duration of ad: %d\n", objectAd[i].adDuration);
						printf("Place of shooting: %s\n", objectAd[i].adShootPlace);
						printf("No. of actors: %d\n", objectAd[i].adActorCount);
					}
				}
			}
			printf("\nPart II\n");
			for (i=0; i<5; i++)
			{
				for (j=i+1; j<5; j++)
				{
					if (strcmp(objectDir[i].directorName,objectDir[j].directorName)>0)
					{
						temp = objectDir[i];
						objectDir[i] = objectDir[j];
						objectDir[j] = temp;
					}
				}
			}
			for (i=0; i<5; i++)
			{
				for (j=0; j<5; j++)
				{
					if (objectDir[j].directorID == objectAd[j].adID)
                        printf("\nDirector Name: %s\n\n", objectDir[i].directorName);
				}
			}
		}
	}
	printf("\nThank you for using Advertisement Management System.\n");
}
