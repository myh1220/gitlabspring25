//contributors
//GP
//Jovanny Gonzalez
//Joel Castro


//Ryan A

//Yoonhong Min

// Jessenia Hernandez Mora


//




#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here
void dairasBrain(void);

void jovannyFunction(int jovannyNum);

void room25game(void);

void room57G(void);

void user36room(void);

void amoralesRoom9(void);

void room30game(void);

void joshRoom4(void);

void room59game(void);

void room22RandomTime(void);


void userRoom50(void);



void room12game(void);

void room31(void);




void room39game(void);


void stevenFirst(void);
void room53game(void);


void room6game(void);
void FarStarTrader(void);


void room15game(void);
void room17(void);


void room8game(void);

void room29game(void);
void room28game(void);
void AzizHaouchineFn(void);



void room16game(void);

void jessiesFunRoom(void);

void vicCompRoom(void);



void brentTestRoom(void);

void omarsUniqueFn(void);
void HubertRoom(void);

void ryanRoom38(void);



void kobesRoom(void);

void angelasRoom26(void);


void cameronDOOMFn(void);

void lab13nanup(void);


void Function23fbabonjo(void);

void cscuser1(void);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
				cscuser1();
			}
			case 2:
			{
				puts("room2");
				dairasBrain();
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				joshRoom4();
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				room6game();
				break;
			}
			case 7:
			{
				puts("room7");
				cameronDOOMFn();
				break;
			}
			case 8:
			{
				puts("room8");
				room8game();
				break;
			}
			case 9:
			{
				puts("room9");
				amoralesRoom9();
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				FarStarTrader();
				break;
			}
			case 12:
			{
				puts("room12");
				room12game();
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				puts("room15");
				room15game();
				break;
			}
			case 16:
			{
				puts("room16");
				room16game();
				break;
			}
			case 17:
			{
				puts("room17");
				room17();
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				room22RandomTime();
				break;
			}
			case 23:
			{
				puts("room23");
				Function23fbabonjo();
				break;
			}
			case 24:
			{
				puts("room24");
				kobesRoom();
				break;
			}
			case 25:
			{
				puts("room25");
				room25game();
				break;
			}
			case 26:
			{
				puts("room26");
				angelasRoom26();
				break;
			}
			case 27:
			{
				puts("room27");
				lab13nanup();
				break;
			}
			case 28:
			{
				puts("room28");
				room28game();
				break;
			}
			case 29:
			{
				puts("room29");
				room29game();
				break;
			}
			case 30:
			{
				puts("room30");
				room30game();
				break;
			}
			case 31:
			{
				puts("room31");
				room31();
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				user36room();
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				ryanRoom38();
				break;
			}
			case 39:
			{
				puts("room39");
				room39game();
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			
			                        case 42:
                        {

                                int room42Choice=0;
                                int room42Fruit=3;

				puts("room42");
                                printf("You have entered room 42.\n");
                                printf("Stranger: HELLO THERE! I'm sorry to ask you of this but my son is upset at the moment.\n");
                                printf("(As it approaches, It seems to be a talking bear with a basket. seems tired...)\n");
                                printf("Bear: A bird has stolen fruit from my boy. I've come to gather some fruit for him in a basket.\n");
                                printf("Bear: Can you bring it back to him for me? I need to rest my eyes.\n");
                                printf("(Enter the number 1 for yes. 2 is no.)\n");
                                scanf("%d",&room42Choice);
                                if(room42Choice==1)
                                {
                                        room42Choice=0;
                                        printf("%s: Sure I can!\n",name);
                                        printf("Bear: Thanks a ton!\n");
                                        printf("(You are given a basket with fruit)\n");
                                        printf("(You currently have %d fruit)\n", room42Fruit);
					room42Choice=0;
					printf("(You are going towards bear child.)\n");
					printf("(There are two paths, which will you take?)\n");
					printf("(Option 1: Bridge, Option 2: Around Bridge)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;
						printf("(You've gone to the bridge. You discover a troll.)\n");
						printf("Troll: I won't let you cross my bridge unless you pay a fee!(1 fruit)\n");
						printf("(Option 1: Pay, Option 2:Go around)\n");
						printf("Enter Option:");
						scanf("%d",&room42Choice);
					}

					if(room42Choice==1)
					{
						room42Fruit=2;
                                                printf("(You payed the fee. -1 fruit.)\n");
						printf("(You currently have %d fruit)\n", room42Fruit);
						printf("%s: That greedy troll.\n",name);
					}

					if(room42Choice==2)
					{

                                                printf("%s: I am going around.\n",name);
						printf("(You walk and walk and eventually arrive at a tree where you try to rest)\n");
						printf("Stranger:Buddy!\n(You look around and see a squirrel.)\n");
						printf("Squirrel:If you can climb this tree, I'll give you 2 fruit!\n");
						printf("Option 1:yes, Option 2:no.)\n");
						printf("Enter Option:");
                                                scanf("%d",&room42Choice);

						if(room42Choice==1)
						{

							room42Choice=0;





							printf("%s: I'll climb your tree.\n",name);
                                                        printf("(You are given a random number. Based on that number, you will climb or fail)\n");
							int jovannyRandomNum=1+(rand()%11);
							if(jovannyRandomNum<=4)
							{
								printf("Squirrel: You sure are strong! Here's your fruit!\n");
								printf("(+2 fruit)\n");
								room42Fruit+=2;
								printf("(You currently have %d fruit)\n", room42Fruit);

							}
							else
							{
								printf("Squirrel: You're gonna fall!\n");
								printf("(You fell on your basket, you lost 1 fruit)\n");
                                                                room42Fruit-=1;
                                                                printf("(You currently have %d fruit)\n", room42Fruit);
							}

						}
						if(room42Choice==2)
						{
                                                        printf("%s: I won't climb this tree, I'm going forward.\n",name);
						}

					}

					room42Choice=0;
					printf("(At this point in time, you are exhausted.)\n");
					printf("(You come across a strange man.)\n");
					printf("(seems to be a Wizard based on the clothes)\n");
                                        printf("Wizard: Hello traveler, I can take you to your destination in exchange of 1 fruit, do you accept?\n");


					printf("Option 1:yes, Option 2:no.)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;
						printf("Wizard:Wise Choice!\n");
                                                room42Fruit-=1;
                                                printf("(You currently have %d fruit)\n", room42Fruit);
					}

					if(room42Choice==2)
					{
						room42Choice=0;
						printf("%s: I don't prefer to. I'm going to keep on walking!\n",name);
                                                printf("(You are now nearing the bear and by sheer luck you spot a bird's nest!)\n");
                                                printf("(Inside, although much was consumed, you managed to recover two fruit.)\n");
						room42Fruit+=2;

					}
				}

				printf("(Finally you arrive to child bear.)\n");
                                printf("(Let's see how you did. We are passing the fruit basket)\n");
				printf("(You currently have %d fruit)\n", room42Fruit);
				jovannyFunction(room42Fruit);






                                if(room42Choice==2)
                                {
                                        printf("%s: I wish I could but I gotta go! I forgot something somewhere else...\n",name);
                                }


                                break;
                        }


			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				HubertRoom();
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				jessiesFunRoom();
				break;
			}
			case 48:
			{
				puts("room48");
				AzizHaouchineFn();
				break;
			}
			case 49:
			{
				puts("room49");
				vicCompRoom();
				break;
			}
			case 50:
			{
				puts("room50");
				userRoom50();
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				room53game();
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}

			case 59:
			{
				puts("room59");
				room59game();
				break;
			}


			case 57:
			{
				puts("room57");
				room57G();
				break;
			}


			case 58:
			{
				puts("room58");
				stevenFirst();
				break;
			}


			case 61:
			{
				puts("room61");
				omarsUniqueFn();
				break;
			}



			case 62:
			{
				puts("room62");
				brentTestRoom();
				break;
			}

			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here
void joshRoom4(void)
{
	printf("cscuser4 \n");
}


void dairasBrain(void)
{
	printf("cscuser2\n");
}
void room12game(void)
{
	printf("cscuser12 :)\n");
}

void room30game(void)
{
	printf("cscuser30\n");
}

void cameronDOOMFn(void)
{
	printf("cscuser7/ Cameron");
}

void room59game(void)
{
	printf("%s\n", "cscuser59");
}



void kobesRoom(void)
{
	printf("CSCUSER24\n");
}

void room57G(void) 
{
	printf("\ncscuser57 ");
}

void user36room(void)
{
        printf("cscuser36\n");
}

void stevenFirst(void)
{
	printf("Steven >_< \n");
}

void amoralesRoom9(void)
{
	printf("cscuser9: anthony morales\n");
}

void room22RandomTime(void)
{
	printf("\nRyan - Room 22\n\n");
}

void userRoom50(void)
{
	printf("cscuser50\n");
}

void room31(void)
{
	printf("Yoonhong Min ");
}

void room39game(void)
{
	printf("Jess\n");

}
void HubertRoom(void)
{
	printf("Hubert: hnguyen296 \n");
}

void room25game(void)
{
	printf("Joel - cscuser25\n");
}

void jovannyFunction(int jovannyNum)
{
	//Unique Feature is here.
	//I am making an Array which can hold multiple strings, emotions
	//[Max number of strings],[Max length of each individual string]
	//joName is just a single string;
	//based on how well you did, you recieve an emotion as a score.
	char jovannyArray[7][11] = {"sad", "satisfied", "happy"};
	char joName[30] = "null";

        printf("Emotions are infectious.\n");
        printf("How well you did is based on the fruit retrieved.\n");

	if(jovannyNum<3)
	{                                        	        
		printf("You and child bear are feeling %s...\n", jovannyArray[0]);
	}

	if(jovannyNum<6&&jovannyNum>3)
	{
                printf("You and child bear are feeling %s.\n", jovannyArray[1]);
	}
	if(jovannyNum>=6)
	{
                printf("You and child bear are feeling %s!\n", jovannyArray[2]);
	}
	        
                printf("You have completed room42! Returning...\n");
}

void room53game(void)
{
	printf("cscuser53\n");
}

void room6game(void)
{
	printf("cscuser6\n");
}


void room8game(void)
{
	printf("cscuser8 \n");
}


void room29game(void)
{
	printf("cscuser29\n");
}
void room15game(void)
{
	printf("cscuser15 \n");

}

void FarStarTrader(void)
{
	printf("cscuser11\n");
}

void omarsUniqueFn(void)
{
	printf("Omar");
}
void AzizHaouchineFn(void)
{
	printf("Aziz\n");
}

void Function23fbabonjo(void)
{
	printf("Episode 23: Fatoma Babonjo ");
}
void room17(void)
{
	puts("cscuser17");
}

void vicCompRoom(void)
{
        printf("cscuser49");
}

void room16game(void)
{
	printf("cscuser16\n");
}


void ryanRoom38(void)
{
	printf("Ryan cscuser38\n");
}



void brentTestRoom(void)
{
	printf("Brent's Room \n");
}

void angelasRoom26(void)
{
	printf("cscuser26\n");

}

void room1game(void) 
{
	printf("cscuser1\n");
}



void room28game(void)
{
	printf("Cscuser28:did not compile and test his code before he made a pull request or he would have seen he did not define his function using a function prototype. This adds extra work for everyone else.");
}

void jessiesFunRoom(void)
{
        printf("cscuser47");
}

void lab13nanup(void)
{
	printf("nanu");

}



