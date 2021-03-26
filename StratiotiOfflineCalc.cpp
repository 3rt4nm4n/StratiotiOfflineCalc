
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <iostream>


using namespace std;
//fullscreen function
void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

int main(){	
	setlocale(LC_ALL,"turkish");
	fullscreen(); //initiates fullscreen. can exit full screen with Alt+Enter 

	int numberOfMembers, numberOfFighters;
	long long int Fdamage; 
	char type[70],name[50], answer;
	char price;
	MainMenu: 
	system("COLOR 0e");
	printf("\033[1;34m");
	printf("   _____ _             _   _       _   _     \n");
	printf("  / ____| |           | | (_)     | | (_)  \n");
	printf(" | (___ | |_ _ __ __ _| |_ _  ___ | |_ _   \n");
	printf("  \\___ \\| __| \'__/ _` | __| |/ _ \\| __| | \n");
	printf("  ____) | |_| | | (_| | |_| | (_) | |_| |  \n");
	printf(" |_____/ \\__|_|  \\__,_|\\__|_|\\___/ \\__|_|   \n");
	printf("  / ____|    | |          | |     | |            \n");
	printf(" | |     __ _| | ___ _   _| | __ _| |_ ___  _ __ \n");
	printf(" | |    / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n");
	printf(" | |___| (_| | | (__| |_| | | (_| | || (_) | |   \n");
	printf("  \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___\\|_|   \n");
	printf("\n");
	printf("Welcome to the Stratioti Calculator\nv0.3 By 3rt4nm4n.\n\n");
	printf("\033[0m");
	printf("\033[1;31m");
	printf("---> Write the name of the tool you want.. Like \"Per Member\", \"Max Work XP\" without quotation marks.. \n\n---> CTRL+C To EXIT\n\n");
	printf("\033[0m");
	printf("\033[01;33m");
	printf("What would you like to do?\n\n");
	printf("-War Payments-\n\n");
	printf("Per Member\n\nPer Damage\n\n\n");
	printf("-Daily Wages/Election Payments-\n\n");
	printf("Total Amount\n\n\n");
	printf("-Guides-\n\n");
	printf("Weapons\n\n");
	printf("Max Work XP\n\n");
	printf("Gold Medicine Index\n\n");

	printf("Your choice: ");
	
	gets(type);
	strlwr(type);
	system("CLS");
		
	if(strcmp(type, "per member")==0 || strcmp(type, "pd")==0)
	{
		Price:
		printf("Alright.\nWhat was the price per 1kk damage?\n");
		printf("a)9kkk\nb)10kkk\nc)11kkk\nd)12kkk\ne)Custom\n");
		scanf("%c",&price);
		int priceNum=0;
		if(price=='a')
		{
			priceNum=9000;
		}
		else if(price=='b')
		{
			priceNum=10000;
		}
		else if(price=='c')
		{
			priceNum=11000;
		}
		else if(price=='d')
		{
			priceNum=12000;
		}
		else if(price=='e')
		{
			long long int customPrice;
			printf("Enter the price per 1kk with 000's:");
			scanf("%lli",&customPrice);
			priceNum=customPrice/1000000;
			
		}
		else if(price!='a' && price!='b' && price!='c' && price!='d' && price!='e')
		{
			printf("You have made a mistake");
			goto Price;
		}
		printf("What was the total damage made by the party?\n");
		long long int totalDamage;
		long long int result=0;
		scanf("%lli",&totalDamage);
		printf("Total Payment to Be Received: \n");
		result=priceNum*totalDamage;
		printf("%lli\n",result);
		long long int amount;
		printf("How many members are there?\n");
		scanf("%d",&numberOfMembers);
		amount=result/numberOfMembers;
		printf("Amount Due=%lli", amount);
	}
	else if(strcmp(type, "per damage")==0 || strcmp(type, "pd")==0)
	{
		Price1:
		printf("Alright.\nWhat was the price per 1kk damage?\n");
		printf("a)9kkk\nb)10kkk\nc)11kkk\nd)12kkk\ne)Custom\n");
		scanf("%c",&price);
		int priceNum=0;
		if(price=='a')
		{
			priceNum=9000;
		}
		else if(price=='b')
		{
			priceNum=10000;
		}
		else if(price=='c')
		{
			priceNum=11000;
		}
		else if(price=='d')
		{
			priceNum=12000;
		}
		else if(price=='e')
		{
			long long int customPrice;
			printf("Enter the price per 1kk with 000's:");
			scanf("%lli",&customPrice);
			priceNum=customPrice/1000000;
		}
		else if(price!='a' && price!='b' && price!='c' && price!='d' && price!='e')
		{
			printf("You have made a mistake");
			goto Price1;
		}
		printf("What was the total damage made by the party?\n");
		long long int totalDamage;
		long long int result=0;
		scanf("%lli",&totalDamage);
		printf("Total Payment to Be Received: \n");
		result=priceNum*totalDamage;
		printf("%lli\n",result);
		printf("How many members are there?\n");
		scanf("%d",&numberOfMembers);
		printf("What is the number of fighters who fought in the war?\n");
		scanf("%d",&numberOfFighters);
		printf("In this case %d of members didn't join the war\n",numberOfMembers-numberOfFighters);
		Sleep(1);
		for(int i = 0;i<numberOfFighters;i++)
		{
			printf("\nName=");
			getchar();
			gets(name);
			printf("\nDamage=");
			scanf("%lli",&Fdamage);
			long long int amount1;
			amount1=priceNum*Fdamage;
			printf("\nAmount due for %s : %lli\n\n",name,amount1);
			printf("-------\n");
		}
		
	}
	else if(strcmp(type, "total amount")==0 || strcmp(type, "ta")==0)
	{
		int dw;
		printf("What is the daily wage/price per vote in kkk?\n");
		scanf("%d",&dw);
		printf("What is the number of green checked members?\n");
		scanf("%d",&numberOfMembers);
		long long int amount2;
		amount2=numberOfMembers*dw;
		printf("Total amount due required for daily wages is %llikkk\n",amount2);
	}
	else if(strcmp(type, "weapons")==0 || strcmp(type, "w")==0)
	{
		
			weapons:
			printf("\n    ___");
			printf("\n");
			printf(" __(   )====::");
			printf("\n");
			printf("/~~~~~~~~~\\");
			printf("\t\t\t\t");
			printf("TANKS ALPHA DAMAGE = 10");
			printf("\n");
			printf("\\O.O.O.O.O/");
			printf("\n\n");
			//-------------
			printf("  |\\    __");
			printf("\n");
			printf("..==========-");
			printf("\t\t\t\t");
			printf("FIGHTER AIRCRAFTS ALPHA DAMAGE = 75");
			printf("\n");
			printf("     ~~~");
			printf("\n\n");
			//-------------
			printf("   /\\  ");
			printf("\n");
			printf("  /  \\ ");
			printf("\n");
			printf("  |  | ");
			printf("\t\t\t\t\t");
			printf("BALISTIC MISSILES ALPHA DAMAGE = 900");
			printf("\n");
			printf("  |  | ");
			printf("\n");
			printf(" / == \\");
			printf("\n");
			printf(" |/**\\|");
			printf("\n\n");
			//-------------
			printf(" /\\");
			printf("\n");
			printf(" \\ \\");
			printf("\n");
			printf(" /--\\");
			printf("\t\t\t\t\t");
			printf("HEAVY BOMBERS ALPHA DAMAGE = 800");
			printf("\n");
			printf(" \\--/");
			printf("\n");
			printf(" / /");
			printf("\n");
			printf(" \\/");
			printf("\n\n");
			//-------------
			printf("     _~");
			printf("\n");
			printf("  _~ )_)_~");
			printf("\n");
			printf("  )_))_))_)");
			printf("\t\t\t\t");
			printf("BATTLESHIPS ALPHA DAMAGE = 2000");
			printf("\n");
			printf("  _!__!__!_");
			printf("\n");
			printf("  \\______t/");
			printf("\n");
			printf("~~~~~~~~~~~~~");
			printf("\n\n");
			//-------------
			printf("     |");
			printf("\t\t\t\t\t");
			printf("LASER DRONES ALPHA DAMAGE = 3000");
			printf("\n");
			printf("---o=V=o---");
			printf("\n");
			printf("\n\n");
			//-------------
			printf("  ,-,");
			printf("\n");	
			printf(" /.(  ____");
			printf("\t\t\t\t");
			printf("MOON TANKS ALPHA DAMAGE = 2000");
			printf("\n");	
			printf(" \\ {  |\"\"\"\\-=");
			printf("\n");	
			printf("  `-` (____)");
			printf("\n\n");
			//-------------
			printf("      --o-- ");
			printf("\n");
			printf("        I");
			printf("\n");
			printf("    ----I----");
			printf("\t\t\t\t");
			printf("SPACE STATIONS ALPHA DAMAGE = 5000");
			printf("\n");
			printf("	I");	
			printf("\n");	
			printf("       =I=");
			printf("\n\n");
		
	}
	else if(strcmp(type,"max work xp")==0 || strcmp(type, "mw")==0)
	{
		int el,we;
		printf("Enter your education level please = ");
		scanf("%d",&el);
		we=80000+el*200;
		printf("Your Limit For Work Experience Is %d\n\n",we);
	}
	else if(strcmp(type, "gold medicine index")==0 || strcmp(type, "gmi")==0)
	{
		printf("Medicine Index\tThe Amount of Energy That Naturally Fills in 10 mins\tTotal Time To Refill 300E Naturally\tGold Earning Daily\n");
		printf("1\t\t3E\t\t\t\t\t\t\t16hrs 40mins\t\t\t\t43 Gold\n");
		printf("2\t\t4E\t\t\t\t\t\t\t12hrs 30mins\t\t\t\t57 Gold\n");
		printf("3\t\t5E\t\t\t\t\t\t\t10hrs      \t\t\t\t72 Gold\n");
		printf("4\t\t6E\t\t\t\t\t\t\t8hrs 20mins\t\t\t\t86 Gold\n");
		printf("5\t\t7E\t\t\t\t\t\t\t7hrs 8mins\t\t\t\t100 Gold\n");
		printf("6\t\t8E\t\t\t\t\t\t\t6hrs 15mins\t\t\t\t115 Gold\n");
		printf("7\t\t9E\t\t\t\t\t\t\t5hrs 30mins\t\t\t\t129 Gold\n");
		printf("8\t\t10E\t\t\t\t\t\t\t5hrs      \t\t\t\t144 Gold\n");
		printf("9\t\t11E\t\t\t\t\t\t\t4hrs 30mins\t\t\t\t158 Gold\n");
		printf("10\t\t12E\t\t\t\t\t\t\t4hrs 10mins\t\t\t\t172 Gold\n");
		printf("11\t\t16E\t\t\t\t\t\t\t3hrs 7mins\t\t\t\t230 Gold\n");
	}
	else
	{
		goto MainMenu;
	}
	
	printf("\nAnything else?\nY\nN\n\n");
	scanf(" %c",&answer);
	if(answer=='Y' || answer=='y')
	{
		printf("Going back to main menu");
		Sleep(2);
		system("CLS");
		goto MainMenu;
	}
	printf("\033[0m");
	return 0;
}
