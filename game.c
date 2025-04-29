//contributors
//GP

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

void jovannyFunction(void);

void room25game(void);

void room57G(void);

void user36Cafe(void);

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
                                puts("Entering Cafe 36! :)");
                                user36Cafe();
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
				puts("room42");
				jovannyFunction();
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

void user36Cafe(void)
{
        int choice;
        printf("Hello, traveller. Welcome to Cafe 36. What can I get you?\n");
        printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
        scanf("%d", &choice);
        while(choice != 99) //loop
        {
                switch(choice)
                {
                        case 1:
                        {
                                printf("You have chosen to see the menu\n");
                                char menu[45]; //won't check if actually on the menu
                                printf("Today's specials are eyeball basil soup, smoked trout, Cinnamon Roll Delight");
                                printf("\nHere is your menu.\n");
                                printf("\t\tMENU\n");
                                printf("Soups\t\t\tSandwiches/Salads\n");
                                printf("Goop Soup\t\tBeast Lettuce Tomato\n");
                                printf("Worm & Potato Soup\tDragons Horn\n");
                                printf("Soup of the day\t\tForaged Salad\n");
                                printf("\nDrinks\t\t\tDessert\n");
                                printf("Energy Brew\t\tMolten Lava Cake\n");
                                printf("Draught of living death\tWitches Sunday\n\n");

                                printf("What would you like? Please enter what you would like: ");
                                scanf("%s", menu);
                                printf("\nHere is your food. Enjoy! :)\n\n");
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");                                                               scanf("%d", &choice);
                                break;
                        }
			case 2:
                        {
                                int option;
                                printf("You have chosen to purchase potions\n");
                                printf("Enter 1 for an energy potion, 2 for sleeping draught, 3 for a poison so potent all you need is a single drop, and 4 for a healing potion: ");
                                scanf("%d", &option);
                                if(option == 1)
                                        printf("\nHere is your energy potion.\n");
                                if(option == 2)
                                        printf("\nHere is your sleeping draught.\n");
                                if(option == 3)
                                        printf("\nHere is your poison. Be careful with it, it's incredibly deadly. :)\n");
                                if(option == 4)
                                        printf("\nHere is your healing potion\n");
                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
 			case 3:
                        {
                                int number;
                                int quote;
                                printf("You have chosen a book quote\n");
                                printf("Please enter any random positive number: ");
                                scanf("%d", &quote);
                                switch(quote % 10)
                                {
                                        case 0:
                                                printf("\nNo matter how careful I am, eventually I'll make another misstep. I am weak. I am fragile. I am mortal. - The Cruel Prince, Holly Black\n");
                                                break;
                                        case 1:
                                                printf("\nOne never reaches home,' she said. 'But where paths that have an affinity for each other intersect, the whole world looks like home, for a time. - Demian, Hermann Hesse\n");
                                                break;
                                        case 2:
                                                printf("\nNot all who wander are lost. -The Riddle of Strider, J.R.R. Tolkien\n");
                                                break;
                                        case 3:
                                                printf("\nIn vain have I struggled. It will not do. My feelings will not be repressed. You must allow me to tell you how ardently I love and admire you. - Pride & Prejudice, Jane Austen\n");
                                                break;
					case 4:                                                                                                    
						printf("\nThere is no good word for the opposite of lonesome. One might be tempted to suggest togetherness or contentment, but the fact that these two other words bear definitions unrelated to each other perfectly displays why lonesome cannot be properly mirrored. It does not mean solitude, nor alone, nor lonely, although lonesome can contain all of those words in itself. Lonesome means a state of being apart. Of being other. Alone-some.” ― Blue Lily, Lily Blue, Maggie Stiefvater\n");
                                                break;                                                                                     
					case 5:                                                                                                    
						printf("\nThe more I read, the more I learn, the more I discover that I know nothing. - Frankenstein, Mary Shelley\n"); 
						break;
                                        case 6:
                                                printf("\nEven strength must bow down to wisdom sometimes. - Percy Jackson, Rick Riordan\n");
                                                break;
                                        case 7:
                                                printf("\nHope, it is the only thing stronger than fear. - The Hunger Games, Suzanne Collins\n");
                                                break;
                                        case 8:
                                                printf("\nI’m angry. I just don’t give in to it. Stuff happens all the time. What’d you call it? Outrageous. Outrageous stuff make you so mad you can just burn yourself up with it. You got to decide if the mad runs you, or you run the mad. - Body and Soul, Frank Conroy\n");
                                        case 9:
                                                printf("\nNowadays people know the price of everything and the value of nothing - The Picture of Dorian Gray, Oscar Wilde\n");                                                                               
 					default:                                                                                                   
						printf("\n Just keep swimming. - Dory\n"); //this one shouldn't work, i think
                                                break;                                                                             
				}                                                                  
                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;                                                                                     
			}
			case 4:
			{
                                int riddle;
                                printf("You have chosen a riddle\n");
                                printf("I am four times as old as my daughter. In 20 years' time I shall be twice as old as her. How old am I now?");
                                scanf("%d", &riddle);                                                                              
				if(riddle == 40)
                                        printf("Correct! I am forty and my daughter is ten. Good Job! :)\n");
                                else                                                                                                       
					printf("That is incorrect. Better luck next time.\n");

                                printf("\nEnter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
			case 5:
                        {
                                int randy;  //random
                                int reaction[] = {1,2,3}; //array
                                int choose;
                                printf("You have chosen to ask for a hug\n");
                        	randy = rand() % 5; // 0 - 4
                                choose = rand() % 2; // 0-2 in array

                                if(randy == reaction[choose])
                                        printf("You may have a hug :)\n");
                                if(randy < reaction[choose])
                                        printf("I'm sorry, I don't want to hug you...\n");
                                if(randy > reaction[choose])
                                        printf("Come here, sugar, you remind me of my grandkid!\n");
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);
                                break;
                        }
                        default:
                        {
                                printf("Enter 1 for the menu, 2 to purchase potions, 3 for a book quote, 4 for a riddle, 5 for a hug, and 99 to leave at any time:\n");
                                scanf("%d", &choice);

                        }

                }
        }
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

void jovannyFunction(void)
{
	printf("cscuser42\n");

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



