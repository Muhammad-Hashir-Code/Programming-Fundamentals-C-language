#include<stdio.h>
#include<string.h>
int main()
{
	char crop_type[10];
	int rain_status,moisture_level;
	printf("Enter Crop Type : ");
	scanf("%s",crop_type);
	printf("Enter Rain Status : ");
	scanf("%d",&rain_status);
	printf("Enter Moisture Level : ");
	scanf("%d",&moisture_level);
	if ((strcmp(crop_type,"wheat")==0) && moisture_level<=30 && rain_status>=24)
	{
		printf("Irrigation Required");
	}
	if ((strcmp(crop_type,"rice")==0) && moisture_level<=25 && rain_status>=24)
	{
		printf("Irrigation Required");
	}
	if ((strcmp(crop_type,"corn")==0) && moisture_level<=40 )
	{
		printf("Irrigation Required");
	}
	else
	{
		printf("No Irrigation Required");
	}
	
	return 0;
}
