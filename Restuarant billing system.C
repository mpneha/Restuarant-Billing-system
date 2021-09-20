#include<stdio.h>
#include<ctype.h>
float bfast();
float lunch();
float m_m();
float dinner();
float exit_scr();
int num;
float price1=0,price2=0,price3=0,price4=0,price;
float total_a,total_b,total_c,total1,total2,total3;
char choice;
int again;
	void main()
	{
	clrscr();
	price=m_m();
	printf("\nthe bill is %f",price);
	exit_scr();
	}
	float m_m()
	{
	char choice;
	printf("   Welcome to Food track Restaurant    \n");
	printf("    +==============+    \n\n");
	printf("&&please select the meal that you would like to purchase.&&\n\n");
	printf("\t\t  [A] Breakfaat\n");
	printf("\t\t  [B] Lunch\n");
	printf("\t\t  [C] Dinner\n");
	printf("\t\t  [D] Exit\n");
	printf("ENTER YOUR CHOICE HERE:");
	scanf("%c",&choice);
			switch(toupper(choice))
			{
			case'A':
			price1=bfast();
			break;
			case'B':
			price2=lunch();
			break;
			case'C':
			price3=dinner();
			break;
			default:
			goto exit;

			}
			exit:
			price4+=price1+price2+price3;
			return(price4);
			}
				float bfast()
				{
				int choice=0;
				int quantity=0;
				int again=0;
				fflush(stdin);
				printf("   welcome to Food track restaurant.   \n");
				printf("   +==================+  \n\n");
				printf("    $ breakfast menu $\n\n");
				printf(" &&please select the food you would like to purchase.&& \n\n");
				printf("\t\t [1]toast-Rs 30.00\n");
				printf("\t\t [2]egg muffin-Rs50.50\n");
				printf("\t\t [3]nasi lemak-Rs40.00\n");
				printf("Enter your choice here:");
				scanf("%d",&choice);
				{
				if(choice==1)
				{
				printf("Enter quantity:");
				scanf("%d",&quantity);
				total1=30.00*quantity;
				printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total1);
					printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
						scanf("%d",&again);
						if(again==1)
						bfast();
						else if(again==2)
						m_m();
						else

							{
							printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
							exit_scr();
							}
							}
							else
								if(choice==2)
								{
								printf("Enter quantity:");
								scanf("%d",&quantity);
								total1=50.50*quantity;
								printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total1);
								printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
								scanf("%d",&again);
								system("cls");
								if(again==1)
								bfast();
								else if (again==2)
								m_m();
								else

								{
								printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
								exit_scr();
								}
								}
								else
								if(choice==3)
								{
								printf("Enter quantity:");
								scanf("%d",&quantity);
								total1=40.00*quantity;
								printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total1);
								printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
								scanf("%d",&again);
								if(again==1)
								{
								bfast();
								}
								else
								if(again==2)
								{
								m_m();
								}
								else

								{
								printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
								exit_scr();
								}
								}
								else

								{
								fflush(stdin);
								system("cls");
								printf("\n\n\t\t Invalid choice Entered\n\n");
								bfast();
								}
								}
								total_a+=total1;
								return(total_a);
								}
									float lunch()
									{
									int choice;
									int quantity;
									int again;
									printf("   Welcome to Food track Restaurant.   \n");
									printf("   +===================+   \n\n");
									printf("  $Lunch menu $\n\n");
									printf("&&Please select the food that you would like to purchasr.&&\n\n");
									printf("\t\t[1]Fried rice-Rs45.00\n");
									printf("\t\t[2]Mee goreng-Rs50.00\n");
									printf("\t\t[3]Fish head curry with rice-Rs70.00\n");
									printf("Enter your choice here:");
									scanf("%d",&choice);
									{
									if(choice==1)
									{
									printf("Enter quantity:");
									scanf("%d",&quantity);
									total2=45.00*quantity;
									printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total2);
									{
									printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
									scanf("%d",&again);
									if(again==1)
									lunch();
									else
									if(again==2)
									m_m();
									else

									{
									printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
									exit_scr();
									}
									}
									}
									else
									if(choice==2)
									{
									printf("Enter quantity:");
									scanf("%d",&quantity);
									total2=50.00*quantity;
									printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total2);
									{
									printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
									scanf("%d",&again);
									if(again==1)
									lunch();
									else
									if(again==2)
									m_m();
									else

									{
									printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
									exit_scr();
									}
									}
									}
									else
									if(choice==3)
									{
									printf("Enter quantity:");
									scanf("%d",&quantity);
									total2=70.00*quantity;
									printf("Your total amount is Rs%.2f,Please pay at the counter\n\n\n",total2);
									{
									printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
									scanf("%d",&again);
									if(again==1)
									lunch();
									else
									if(again==2)
									m_m();
									else

									{
									printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
									exit_scr();
									}
									}
									}
									else

									{
									fflush(stdin);
									system("cls");
									printf("\n\n\t\t Invalid Choice Entered\n\n");
									lunch();
									}
									}
									total_b+=total2;
									return(total_b);
									}
										float dinner()
										{
										int choice;
										int quantity;
										int again;
										printf("     Welcome to Food track Restaurant.    \n");
										printf("    +=============================+\n\n");
										printf("       $ Dinner Menu $\n\n");
										printf("&&Please select the food that you would like to purchase.&&\n\n");
										printf("\t\t [1]Chicken Chop-Rs65.50\n");
										printf("\t\t [2]Spagetti-Rs55.50\n");
										printf("\t\t [3]Chicken Burger-Rs30.00\n");
										printf("Enter your choice here:");
										scanf("%d",&choice);
										{
										if(choice==1)
										{
										printf("Enter quantity:");
										scanf("%d",&quantity);
										total3=65.50*quantity;
										printf("Your total amount is Rs%.2f,pleasepay at the counter\n:",total3);
										{
										printf("\nWould you like to buy anything else?\n[1]Yes,[2]No:");
										scanf("%d",&again);
										if(again==1)
										dinner();
										else
										if(again==2)
										m_m();
										else

										{
										printf("\n\n\tSorry invalid decision entered\n\n\n");
										exit_scr();
										}
										}
										}
										else
										if(choice==2)
										{
										printf("Enter quantity:");
										scanf("%d",&quantity);
										total3=55.50*quantity;
										printf("Your total amount is Rs%.2f,please pay at the counter \n",total3);
										{
										printf("\nwould you like to buy anything else?[1]Yes,[2]No:");
										scanf("%d",&again);
										if(again==1)
										dinner();
										else
										if(again==2)
										m_m();
										else

										{
										printf("\n\n\tStory invalid decesion entered\n\n\n");
										exit_scr();
										}
										}
										}
										else
										if(choice==3)
										{
										printf("Enter quantity:");
										scanf("%d",&quantity);
										total3=30.00*quantity;
										printf("\nYour total amount is Rs%.2f,please pay at the countern\n\n\n",total3);
										{
										printf("\nWould you like to buy anything else?[1]Yes,[2]No:");
										scanf("%d",&again);
										if(again==1)
										dinner();
										else if(again==2)

										m_m();
										else

										{
										printf("\n\n\tStory invalid decesion entered\n\n\n");
										exit_scr();
										}
										}
										}
										else

										{
										fflush(stdin);
										system("cls");
										printf("\n\n\t Invalid choice entered\n\n");
										dinner();
										}
										}
										total_c+=total3;
										return(total_c);
										}
											float exit_scr()
											{
											printf("\n     Thank you very much \n");
											printf("     +===========================+    \n\n");
											printf("       &&Please come again &&\n\n");
											return 0;
											}























