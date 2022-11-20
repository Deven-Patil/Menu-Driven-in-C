// Menu Driven

#include <stdio.h>
#include<conio.h>
void main()
{
	int op,fno,sno,tno,i,temp,s1,s2,s3,s4,s5;
	float num1,num2;
	char ch;
	clrscr();
	do
	{
		clrscr();
		Mainmenu :
		printf("\n**************************Main Menu*******************************");
		printf("\n\n 1.Printing Diffrent Message");
		printf("\n 2.Arithmatic Opration");
		printf("\n 3.If Else Operation");
		printf("\n 4.Loops Operation");
		printf("\n 5.Exit");

		printf("\n\n\tEnter Your Choice = ");
		scanf("%d",&op);
		switch (op)
		{
			case 1:
			do
			{
				clrscr();
				printf("\n====================Printing Menu====================");
				printf("\n 1.Printing Time table");
				printf("\n 2.Printing Your Marksheet ");
				printf("\n 3.Return To Main Menu");
				printf("\n 4.Exit");
				printf("\n\tEnter Your Choice = ");
				scanf("%d",&op);
				switch(op)
				{
					case 1:
							clrscr();
							printf("                              Department of Applied Science & Humanities                       ");
							printf("\n===================================================================================================");
							printf("\nName :- Patil Deven Kailas");
							printf("\nR.C.Patel Institute Of Technology");
							printf("\nClass :- F.Y.B.Tech");
							printf("\n----------------------------------TIMETABLE-------------------------------");
							printf("\nSr.NO\tTIME\t\tMON\tTUE\tWED\tTHUR\tFRI\tSAT");
							printf("\n\n1\t9:30 to 10:30\tPhy\tMath\tMech\tMech\tChem\tChem");
							printf("\n2\t10:30 to 11:30\tMech\tMath\tMath\tMech\tBeee\tPhy");
							printf("\n----------------------------------Lunch Break------------------------------");
							printf("\n3\t12:15 to 1:15\tChem\tChem\tMath\tMech\tEng\tBeee");
							printf("\n4\t1:15 to 2:15\tBeee\tBeee\tMech\tMath\tMath\tPhy");
							printf("\n---------------------------------Short Break-----------------------------");
							printf("\n5\t2:30 to 3:30\tEng\tPhy\tWS\tBeee\tBeee\tMech");
							printf("\n6\t3:30 to 4:30\tEng\tPhy\tWS\tMech \tMath \tMech");
							printf("\n====================================================================================================");
							break;
					case 2:
							clrscr();
							printf("\n\tEnter Mathematics Marks = ");
							scanf("%d",&s1);
							printf("\tEnter Physics Marks = ");
							scanf("%d",&s2);
							printf("\tEnter Chemistry Marks = ");
							scanf("%d",&s3);
							printf("\tEnter CP Marks = ");
							scanf("%d",&s4);
							printf("\tEnter ECS Marks = ");
							scanf("%d",&s5);
							clrscr();
							printf("\n\n\t\t\tR.C. PATEL INSTITUTE OF TECHNOLOGY, SHIRPUR");
							printf("\n=================================================================================");
							printf("\n\t\t\t\tExamination Report-ODD 2021");
							printf("\t\n-------------------------------------------------------------------------------");
							printf("\n\tS.No\tCOURSE TITLE\t\tMax Marks\tMarks Obt\tGrade");
							printf("\n\t1\tMathematics\t\t100\t\t%d\t\t",s1);
							if(s1>90)
								printf("O+");
								else if(s1>80)
										printf("O");
										else if(s1>70)
												printf("A+");
												else if(s1>60)
														printf("A");
														else if(s1>50)
																printf("B");
																else
																	printf("C");
							printf("\n\t2\tPhysics\t\t\t100\t\t%d\t\t",s2);
							if(s2>90)
								printf("O+");
								else if(s2>80)
										printf("O");
										else if(s2>70)
												printf("A+");
												else if(s2>60)
														printf("A");
														else if(s2>50)
																printf("B");
																else
																	printf("C");
							printf("\n\t3\tChemistry\t\t100\t\t%d\t\t",s3);
							if(s3>90)
								printf("O+");
								else if(s3>80)
										printf("O");
										else if(s3>70)
												printf("A+");
												else if(s3>60)
														printf("A");
														else if(s3>50)
																printf("B");
																else
																	printf("C");
							printf("\n\t4\tCP\t\t\t100\t\t%d\t\t",s4);
							if(s4>90)
								printf("O+");
								else if(s4>80)
										printf("O");
										else if(s4>70)
												printf("A+");
												else if(s4>60)
														printf("A");
														else if(s4>50)
																printf("B");
																else
																	printf("C");
							printf("\n\t5\tECS\t\t\t100\t\t%d\t\t",s5);
							if(s5>90)
								printf("O+");
								else if(s5>80)
										printf("O");
										else if(s5>70)
												printf("A+");
												else if(s5>60)
														printf("A");
														else if(s5>50)
																printf("B");
																else
																	printf("C");
							printf("\n--------------------------------------------------------------------------------");
							tno=(s1+s2+s3+s4+s5)/5;
							printf("\n\n\t\tTOTAL MARKS OBTAINED :- %d",s1+s2+s3+s4+s5);
							if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
								printf("\n\n\t\tResult :- PASS");
							else
								printf("\n\n\t\tResult :- FAIL");
							if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
							{
								if(tno>=75)
								printf("\n\n\t\tPassed with Distinction");
								else if(tno>=60)
									printf("\n\n\t\tPassed with First Class");
									else if(55>=tno)
									printf("\n\n\t\tPassed with Second Class");
										else if(40>=tno)
										printf("\n\n\t\tPass Class");
										else
											printf("\n\n\t\tSorry you are Failed");
							}
							break;
					case 3:
						       clrscr();
						       goto Mainmenu;
					case 4:
							exit(0);
					default :
						       printf("Enter The Valid Choice");
						    break;
					}
						printf("\nDo you Want to Continue Printing Message  Menu (y/n) = ");
						scanf(" %c",&ch);
				}               while(ch=='y' || ch=='Y');
					break;
			case 2:
				do
				{
					clrscr();
					Arithmenu:
					printf("\n***********************Arithmatic Menu******************************");
					printf("\n 1.Addition");
					printf("\n 2.Subtraction");
					printf("\n 3.Multiplication");
					printf("\n 4.Division");
					printf("\n 5.Return to Main Menu");
					printf("\n 6.Exit");
					printf("\n\tEnter Your Choice = ");
					scanf("%d",&op);
					switch(op)
					{
						case 1:
						clrscr();
						printf("\n 1.Addition Of Two Integer");
						printf("\n 2.Addition Of Two Float");
						printf("\n 3.Return To Arithmatic Menu");
						printf("\n 4.Return To Main Menu");
						printf("\n 5.Exit");
						printf("\n\t Enter Your Choice = ");
						scanf("%d",&op);
						switch(op)
						{
							case 1:
								clrscr();
								printf("\nEnter First Number =");
								scanf("%d",&fno);
								printf("\nEnter Second Number =");
								scanf("%d",&sno);
								printf("\n Addition is = %d",fno+sno);
								break;
							case 2:
								clrscr();
								printf("\nEnter First Number =");
								scanf("%f",&num1);
								printf("\nEnter Second Number =");
								scanf("%f",&num2);
								printf("\n Addition is = %.2f",num1+num2);
								break;
							case 3:
							       clrscr();
							       goto Arithmenu;
							case 4:
							       clrscr();
							       goto Mainmenu;
							case 5:
								exit(0);
							default:
								printf("Enter The Valid Choice....");
								break;
						}
						break;
						case 2:
							clrscr();
							printf("\n 1.Subtraction Of Two Integer");
							printf("\n 2.Subtraction Of Two Float");
							printf("\n 3.Return To Arithmatic Menu");
							printf("\n 4.Return To Main Menu");
							printf("\n 5.Exit");
							printf("\n\t Enter Your Choice = ");
							scanf("%d",&op);
							switch(op)
							{
							case 1:
								clrscr();
								printf("\nEnter First Number =");
								scanf("%d",&fno);
								printf("\nEnter Second Number =");
								scanf("%d",&sno);
								printf("\n Subtraction is = %d",fno-sno);
								break;
							case 2:
								clrscr();
								printf("\nEnter First Number =");
								scanf("%f",&num1);
								printf("\nEnter Second Number =");
								scanf("%f",&num2);
								printf("\n Subtration is = %.2f",num1-num2);
								break;
							case 3:
								clrscr();
								goto Arithmenu;
							case 4:
								clrscr();
								goto Mainmenu;
							case 5:
								exit(0);
							default:
								printf("Enter The Valid Choice....");
								break;
							}
							break;
						case 3:
							clrscr();
							printf("\n 1.Multiplication Of Two Integer");
							printf("\n 2.Multiplication Of Two Float");
							printf("\n 3.Return To Arithmatic Menu");
							printf("\n 4.Return To Main Menu");
							printf("\n 5.Exit");
							printf("\n\t Enter Your Choice = ");
							scanf("%d",&op);
							switch(op)
							{
								case 1:
									clrscr();
									printf("\nEnter First Number =");
									scanf("%d",&fno);
									printf("\nEnter Second Number =");
									scanf("%d",&sno);
									printf("\n Multiplication is = %d",fno*sno);
									break;
								case 2:
									clrscr();
									printf("\nEnter First Number =");
									scanf("%f",&num1);
									printf("\nEnter Second Number =");
									scanf("%f",&num2);
									printf("\n Multiplication is = %.2f",num1*num2);
									break;
								case 3:
									clrscr();
									goto Arithmenu;
								case 4:
									clrscr();
									goto Mainmenu;
								case 5:
									exit(0);
								default:
									printf("Enter The Valid Choice....");
									break;
							}
							break;
						case 4:
							clrscr();
							printf("\n 1.Division Of Two Integer");
							printf("\n 2.Division Of Two Float");
							printf("\n 3.Return To Arithmatic Menu");
							printf("\n 4.Return To Main Menu");
							printf("\n 5.Exit");
							printf("\n\t Enter Your Choice = ");
							scanf("%d",&op);
							switch(op)
							{
								case 1:
									clrscr();
									printf("\nEnter First Number =");
									scanf("%d",&fno);
									printf("\nEnter Second Number =");
									scanf("%d",&sno);
									printf("\n Division is = %d",fno/sno);
									break;
								case 2:
									clrscr();
									printf("\nEnter First Number =");
									scanf("%f",&num1);
									printf("\nEnter Second Number =");
									scanf("%f",&num2);
									printf("\n Division is = %.2f",num1/num2);
									break;
								case 3:
									clrscr();
									goto Arithmenu;
								case 4:
									clrscr();
									goto Mainmenu;
								case 5:
									exit(0);
								default:
									printf("Enter The Valid Choice....");
									break;
								}
								break;
							case 5:
								clrscr();
								goto Mainmenu;
							case 6:
								exit(0);

							default:
								printf("\nEnter The Valid Choice...");
						}
						printf("\nDo you want continue Arithmatic menu(y/n) = ");
						scanf(" %c",&ch);
				}       	while(ch=='y'|| ch=='Y');
						break;
			case 3:
					do
					{
						clrscr();
						printf("\n**********************If-Else Menu***************************");
						printf("\n 1.To check Greatest of Two integer");
						printf("\n 2.To Check Greatest of Three Integer");
						printf("\n 3.TO Check Given Number is Even or Odd");
						printf("\n 4.To Check Given Character");
						printf("\n 5.To Check Vowel Or Consonant");
						printf("\n 6.To Check Leap Year Or Not");
						printf("\n 7.Return To Main Menu");
						printf("\n 8.Exit");
						printf("\n\tEnter Your Choice = ");
						scanf("%d",&op);
						switch(op)
						{
							case 1:
								clrscr();
								printf("\n====================Greatest Of Two Integer======================");
								printf("\nEnter First Number = ");
								scanf("%d",&fno);
								printf("\nEnter Second Number = ");
								scanf("%d",&sno);
								if(fno==sno)
									printf("\nBoth Numbers Are Equal");
								else
								{
									if(fno>sno)
									printf("The Greatest Number is %d",fno);
									else
										printf("The Greatest Number is %d",sno);
								}
								getch();
								break;
							case 2:
								clrscr();
								printf("\n====================Greatest Of Three Integer======================");
								printf("\nEnter First Number = ");
								scanf("%d",&fno);
								printf("\nEnter Second Number = ");
								scanf("%d",&sno);
								printf("\nEnter Third Number = ");
								scanf("%d",&tno);
								if(fno==sno && sno==tno)
									printf("\nGiven Numbers Are Equal");
								else
								{
									if(fno>sno && fno>tno)
										printf("The Greatest Number is %d",fno);
									else if(sno>fno && sno>tno)
										printf("The Greatest Number is %d",sno);
										else
											printf("The Greatest Number is %d",tno);
								}
								getch();
								break;
							case 3:
								clrscr();
								printf("\n====================Even Or Odd======================");
								printf("\nEnter Any Number = ");
								scanf("%d",&fno);
								if(fno%2==0)
									printf("\n\tGiven Number is Even ");
								else
									printf("\n\tGiven Number is Odd ");
								getch();
								break;
							case 4:
								clrscr();
								printf("\n====================To Check Character=====================");
								printf("\nEnter Any Character = ");
								scanf(" %c",&ch);
								if(ch>=65 && ch<=90)
									printf("\nGiven Character is Uppercase Alphabet");
								else if(ch>=97 && ch<=122)
									printf("\nGiven Character is Lowercase Alphabet");
									else if(ch>=48 && ch<=57)
										printf("\nGiven Character is Digit ");
										else
											printf("\nGiven Character is  Special Character");
								getch();
								break;
							case 5:
								clrscr();
								printf("\n====================To Check Vowel Or Consonant=====================");
								printf("\nEnter Any Character = ");
								scanf(" %c",&ch);
								if((ch>=97 && ch<=122) || (ch>=97 && ch<=122))
								{
									if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u'||ch=='A'|| ch=='E' || ch=='O' || ch=='I'|| ch=='U' )
										printf("\nGiven Character is Vowel");
									else
										printf("\nGiven Character is Consonant");
								}
								else
									printf("\nGiven Character is Not Alphabet");
								getch();
								break;
							case 6:
								clrscr();
								printf("\n====================To Check Leap Year Or Not=====================");
								printf("\nEnter Any Year = ");
								scanf(" %d",&fno);
								if((fno%4==0 && fno%100!=0) || fno%400==0)
									printf("\nGiven Year is  Leap Year");
								else
									printf("\nGiven Year is Not Leap Year");
								getch();
								break;
							case 7:
								clrscr();
								goto Mainmenu;
							case 8:
								exit(0);
							default:
								printf("\nEnter The Valid Choice...");
							}
							printf("\nDo you want continue If-Else menu(y/n) = ");
							scanf(" %c",&ch);
						}  while(ch=='y'||ch=='Y');
						break;
					case 4:
						do
						{
							clrscr();
							printf("\n***********************Loops Menu***********************");
							printf("\n 1.Print Table Of Given Number");
							printf("\n 2.Factorail Of Given Number ");
							printf("\n 3.To Check the Number If Prime or Not");
							printf("\n 4.Printing Prime Number in Given Range");
							printf("\n 5.Printing  Armstrong Number in Given Range");
							printf("\n 6.Printing Fibonaccci Series in Given Range");
							printf("\n 7.Printing Palindrom in Given Range");
							printf("\n 8.Number Raise to Power");
							printf("\n 9.Return To Main Menu");
							printf("\n 10.Exit");
							printf("\n\tEnter Your Choice = ");
							scanf("%d",&op);
							switch(op)
							{
								case 1:
									clrscr();
									i=1;
									printf("\n================== Table Of Given Number======================");
									printf("\n Enter Number For Printing Table = ");
									scanf("%d",&fno);
									printf("\n\t The Table OF %d ",fno);
									while(i<=10)
									{
										printf("\n\t %d x %d = %d",fno,i,fno*i);
										i=i+1;
									}
									getch();
									break;
								case 2:
									clrscr();
									temp=1;
									printf("\n================== Factorial Of Given Number======================");
									printf("\n Enter Number For it's Factorial = ");
									scanf("%d",&fno);
									i=fno;
									while(fno>=1)
									{
										temp=temp*fno;
										fno=fno-1;
									}
									printf("\n\t The Facorial of %d = %d",i,temp);
									getch();
									break;
								case 3:
								       clrscr();
								       printf("\n=================Prime Number============");
								       printf("\nEnter Any Number = ");
								       scanf("%d",&fno);
								       i=1;
								       temp=0;
								       while(i<=fno)
								       {
										if(fno%i==0)
										temp=temp+1;
								       i=i+1;
								       }
								       if(temp==2)
										printf("It's a Prime Number");
								       else
										printf("It's Not a Prime Number");
								case 4:
									clrscr();
									printf("\n================Prime Number============");
									printf("\nEnter starting number = ");
									scanf("%d",&fno);
									printf("Enter Ending number = ");
									scanf("%d",&sno);
									while(fno<=sno)
									{
										i=1,temp=0;
										while(i<=fno)
										{
											if(fno%i==0)
											temp=temp+1;
											i=i+1;
										}
										if(temp==2)
										printf("\t%d",fno);
										fno=fno+1;
									}
									getch();
									break;
								case 5:
									clrscr();
									printf("\n================ Armstrong Number ===============");
									printf("\nEnter starting number = ");
									scanf("%d",&fno);
									printf("Enter Ending number = ");
									scanf("%d",&sno);
									while(fno<=sno)
									{
										temp=fno,i=0,tno=0;
										while(temp>0)
										{
											i=temp%10;
											temp=temp/10;
											tno=tno+i*i*i;
										}
										if(tno==fno)
											printf("\t%d",fno);
									fno=fno+1;
									}
									getch();
									break;
								case 6:
									clrscr();
									i=1,sno=0,tno=1;
									printf("\n================ Fibonacci Series ===================");
									printf("\nEnter How Many term do You Want = ");
									scanf("%d",&fno);
									printf("\nFibonacci Series = ");
									while(i<=fno)
									{
										printf("\t%d",sno);
										temp=sno+tno;
										tno=sno;
										sno=temp;
										i=i+1;
									}
									getch();
									break;
								case 7:
									clrscr();
									printf("\n================ Palindrome Number ===============");
									printf("\nEnter starting number = ");
									scanf("%d",&fno);
									printf("Enter Ending number = ");
									scanf("%d",&sno);
									while(fno<=sno)
									{
										temp=fno,tno=0;
										while(temp>0)
										{
											i=temp%10;
											temp=temp/10;
											tno=tno*10+i;
										}
										if(fno==tno)
											printf("\t%d",fno);

									fno=fno+1;
									}
									getch();
									break;
								case 8:
									clrscr();
									temp=1;
									printf("\n================Number Raise to Power============");
									printf("\nEnter Any number = ");
									scanf("%d",&fno);
									printf("Enter The Power = ");
									scanf("%d",&sno);
									while(sno>=1)
									{
										temp=temp*fno;
										sno=sno-1;
									}
									printf("Answer is = %d",temp);
									getch();
									break;
								case 9:
									clrscr();
									goto Mainmenu;
								case 10:
									exit(0);
								default:
									printf("\nEnter The Valid Choice...");
								}
								printf("\nDo you want continue Loops menu(y/n) = ");
								scanf(" %c",&ch);
							}       while(ch=='y'|| ch=='Y');
							break;
					case 5:
						exit(0);
					default :
						printf("\nEnter The Valid Choice....");
			}
					printf("\n Do you want to continue Main Menu (y/n) = ");
					scanf(" %c",&ch);
	}           while (ch=='y' || ch=='Y');
    exit (0);
}

