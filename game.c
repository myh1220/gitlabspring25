//contributors
//GP
//Joel Castro
//Ryan A
//Yoonhong Min
// Jessenia Hernandez Mora
//Gerard McCallion

// Nanu Panchamurthy

//Jesse Navarro


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
//room 17
void room17(void);
void checkInventory17(char *arr[]);
int whatToDo17(char location[], bool tableSeen, bool tableChecked, bool windowSeen);
int coinToss17(void);
//end room 17
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
	bool hasKey = false;
	bool keyFound = false;
	bool lookedOutWindow = false;
	bool hasSeenShip = false;
	bool superPower = false;

	char *bedroomEvents[] = {"Rummaging through your drawers, you find some of your old childhood toys.", "You look through your closet, and find a cool hat. You put it on.", "You look under your bed and a rat runs out at you!", "You find an old photo of yourself... standing outside this very house, but you don't remember this."};
	char *kitchenEvents[] = {"You open the fridge and find a bowl of moldy yogurt.", "Rummaging the kitchen drawers, you find some spoons and forks.", "You open the oven and find a cooked turkey. It looks delicious!", "You search the cupboards. Just empty glasses and plates."};
	char *basementEvents[] = {"You find a dusty box filled with some of your old clothes.", "You search some boxes, and find some family photo albums. They look normal enough...", "There's a mysterious hole in the wall, just big enough to put your hand through. You reach in and find... a crumpled piece of paper. You open it up and it reads: 'leave now'", "You search through some cabinets and drawers. You only find random junk."};

	int outcome = rand() % 2;
	int keyChance = rand() % 3;
	int chance;
	int choice;
	int subChoice;
	int foodChoice;
	int event;

	printf("\nThe door creaks open and you step into what looks like your house.\n");
	puts("The door shuts abruptly behind you.");
	puts("Everything is very familiar to you. The semlls, your living room, and even some family pictures sitting on the coffee table. You are home.");
	puts("You sigh in relief until you look out the window and realize, your house is floating in outer space.");
	puts("You think to yourself: this can't be real.");
	puts("There must be a way out of this... but how?");

	while(true)
	{
		printf("\nWhat will you do?\n");
		puts("1. Look out the window");
		puts("2. Open the front door");
		puts("3. Search the house");
		puts("4. Sit on the couch and wait");
		puts("5. Open the back door");
		puts("6. (Exit to main menu)");
		scanf("%d", &choice);

		bool keepSearching = true;

		switch(choice) 
		{
			case 1:
				if(!hasSeenShip)
				{
					printf("\nYou look out the window next to the front door and spot a small space craft heading your way.\n");
					puts("1. Signal it");
					puts("2. Hide");
					puts("3. Wave");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						if(outcome)
						{
							lookedOutWindow = true;
							puts("The ship flashes back a friendly signal, approaches the house, and then slowly descends behind the house.");	
						}
						else
						{
							puts("The ship turns away abruptly. Maybe you scared them off...");
						}
					}
					else if(subChoice == 2) 
					{	
						puts("You hide for a couple minutes. When you look back out the window, the space craft is gone.");
					}
					else if(subChoice == 3)
					{
						if(outcome)
						{
							puts("You wave. The ship sees you and approaches the house. Before you know it, they fire at the house and you jump for cover.");
							puts("You hide behind the couch and after a while the shooting dies down and you hear the ship fly off.");
							puts("You get up and look around. The house is in the same condition as if nothing happened. Did you just imagine all of that?");
							puts("Well at least you're okay.");
						}
						else
						{
							puts("You wave. The ship sees you and flies off.");
						}
					}
					else
					{
						puts("You hesitated for too long. The opportunity has passed.");
					}
					
					hasSeenShip = true;
				}
				else
				{
					printf("\nYou look out the window again and see nothing but darkness... what else could be out there?\n");
				}

				break;
			case 2:
				if(hasKey)
				{
					puts("\nYou approach the door and insert the key into the lock. It clicks open! You swing the door open, and see a dark hallway.");
					puts("This doesn't make any sense... aren't we in outer space?\n");
					puts("What will you do?");
					puts("1. Walk through");
					puts("2. Turn back");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						puts("You walk through. You keep walking for a couple minutes until you can barely see the light seeping from the door behind you...\n");
						puts("What do you do?");
						puts("1. Keep going");
						puts("2. Turn back");

						scanf("%d", &subChoice);

						printf("\n");

						if(subChoice == 1)
						{
							puts("You continue walking for a couple more minutes until...\n");
							return;
						}
						else
						{
							puts("You turn back and return to the entrance of the house.");
						}
					}

					else
					{
						break;
					}
				}
				else
				{
					puts("\nYou approach the door and attempt to open it. It's locked tight, but there's a keyhole. Maybe there's a key somewhere in the house?");
				}

				break;

			case 3:
				while(keepSearching)
				{
					printf("\nYou want to search the house.. where should you go?\n");
					puts("1. Your bedroom");
					puts("2. The kitchen");
					puts("3. The basement");
					scanf("%d", &subChoice);
					printf("\n");

					if(subChoice == 1)
					{
						event = rand() % 4;
						puts("You search your bedroom...");
						if(keyChance == 0 && !keyFound)
						{
							puts("You look behind your bed, you find a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(bedroomEvents[event]);
							puts("Nothing else here.");
						}
							
						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");
						scanf("%d", &subChoice);

						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else if(subChoice == 2)
					{
						event = rand() % 4;
						puts("You search the kitchen...");
						if(keyChance == 1 && !keyFound)
						{
							puts("You look under the kitchen table, and you find something taped there; it's a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(kitchenEvents[event]);
							puts("Nothing else here.");
						}
						
						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");
							
						scanf("%d", &subChoice);
						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else if(subChoice == 3)
					{
						event = rand() % 4;
						puts("You search the basement...");
						if(keyChance == 2 && !keyFound)
						{
							puts("You search some filing cabinets. There's one folder with something in it; a rusty key! But what does it open?");
							hasKey = true;
							keyFound = true;
						}
						else
						{
							puts(basementEvents[event]);
							puts("Nothing else here.");
						}

						printf("\nWould you like to keep searching?\n");
						puts("1. Keep searching");
						puts("2. Stop searching");

						scanf("%d", &subChoice);
						if(subChoice == 1)
						{
							puts("You head back.");
						}
						else
						{
							keepSearching = false;
						}
						
					}
					else
					{
						break;
					}
				
				}
				
				break;

			case 4:
				printf("\nYou choose to sit and wait. Who knows, maybe something will happen...\n");
				chance = rand() % 100;
			
				if(chance == 0 && !hasKey) {
					puts("*clink* - something just fell from the ceiling and landed in your lap: a key!");
					keyFound = true;
					hasKey = true;
				}
				else
				{
					puts("Some time passes and nothing happens. The couch is not very comfortable, you feel more tired.");
					
					printf("\nWhat next?\n");
					puts("1. Watch TV");
					puts("2. Get something to eat");
					puts("3. Take a nap");
					puts("4. Something else");
					scanf("%d", &subChoice);

					if(subChoice == 1)
					{
						puts("You turn the TV on and there's nothing but static.");
						puts("You watch the static for a while before getting bored.");
					}
					else if(subChoice == 2)
					{
						printf("\nYou go to the kitchen and find a couple of options:\n");
						puts("1. Turkey");
						puts("2. Spoiled yogurt");
						puts("3. Glowing water");
						puts("4. Nothing sounds good");
						scanf("%d", &foodChoice);
						printf("\n");

						if(foodChoice == 1)
						{
							puts("You eat the turkey. That was delicious. You feel much more energized.");
						}
						else if(foodChoice == 2)
						{
							puts("You eat the spoiled yogurt. Maybe you shouldn't have done that... You feel queasy.");
						}
						else if(foodChoice == 3)
						{
							superPower = true;
							puts("You drink the water. You feel fine, but somethings different...");
						}
						else
						{
							break;
						}
					}
					else if(subChoice == 3)
					{
						puts("You take a quick nap. Hopefully nothing bad happnens while you're asleep...");
						puts("You wake up after a while and feel well-rested. Everything seems to be okay.");
					}
					else
					{
						break;
					}

				}

				break;

			case 5:
				printf("\nYou approach the back of the house and attempt to open the door.\n");

				if(lookedOutWindow && hasKey)
				{
					puts("You insert the key and the door clicks open.");
					puts("You step out to find the space craft with it's hatch open...");
					puts("Maybe this is your chance to escape.\n");
					
					puts("Will you enter the space craft or head back into the house?");
					puts("1. Enter the space craft");
					puts("2. Head back into the house");

					scanf("%d", &subChoice);

					printf("\n");

					if(subChoice == 1)
					{
						puts("You approach the open hatch and walk up the stairs. It's pitch black and you feel a cold chill coming from inside.");
						puts("Just as you take your first step inside a bright light flashes you and...\n");
						return;
					}
					else
					{
						puts("You don't want to risk anything. You turn and go back inside the house.");
						break;
					}
				}
				else if(hasKey)
				{
					puts("You insert the key, but it doesn't budge. Maybe this key opens a different door.");
				}
				else
				{
					puts("The door is locked. Maybe there's a key lying somewhere around the house.");
				}

				break;

			case 6:
				puts("Leaving room 30...\n");
				return;

			default:
				printf("\nInvalid choice. Try again.\n");
				break;
		}

	}

	return;

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
	int decision = 0;
	int cry = 0;
	char location[] = "downstairs";
	char *inventory[5] = {"Lighter", "Lucky Coin", NULL, NULL, NULL};
	char *table[5] = {NULL, "Tie Pin", "Map", NULL, NULL};
	bool escape = false;
	bool tableSeen = false;
	bool tableChecked = false;
	bool windowSeen = false;
	printf("Room 17!!\n");
	printf("A rash decision, as the door slams shut you realize that there is no handle on this side.\n");
	printf("A flight of stairs rises behind you, with a dim light emanating from the room above.\n");
	printf("You need to take stock, get your bearings, and get out of here!\n");	
	printf("What will you do?");
	while(!escape){
		whatToDo17(location, tableSeen, tableChecked, windowSeen);
		scanf("%d",&decision);
		switch(decision)
			{
			case 1:		//Cry for help
				if(cry == 0)
				{
					printf("\nYou yell out, but the only response is the sound of running water.");	
				}
				else if(cry == 1)
				{
					printf("\nYou believe you heard something, but it was only an echo. Hope is fading.");
				}
				else
				{
					printf("\nEnough of your whining already, noone is coming to help.");	
				}
				cry +=1;			
				break;
			case 2:		//Examine Room
				if(strcmp(location, "downstairs") == 0)
				{
					printf("There's a bucket in the corner, lets hope we are not here long enough to have to use that!\n");
					tableSeen = true;
					printf("A small table sits on the corner with a number of items");

				}
				else if(strcmp(location, "upstairs") == 0)
				{
					printf("The room is no bigger than the one you just left, but the air is fresher. There is a small\n");
					printf("a small window in the far wall, an escape route perhaps?\n");
					windowSeen = true;
				}
				break;
			case 3: 
				if(strcmp(location, "downstairs") == 0)
				{
					strcpy(location, "upstairs");
				}
				else if(strcmp(location, "upstairs") == 0)
				{
					strcpy(location, "downstairs");
				}			
				break;
			case 4:
				if(((strcmp(location, "downstairs") == 0) && !tableSeen) || ((strcmp(location, "upstairs") == 0) && !windowSeen))
				{
					if(coinToss17() == 0)
					{
						printf("Heads, thats not going to help.\n");
					}					
					else
					{
						printf("Tails, never fails");
					}
				}
				else if((strcmp(location, "upstairs") == 0) && windowSeen)
				{
					printf("Its a tight fit, but you made it out.  As you scale down the pipe you think to yourself,\n");
					printf("What good are these items going to do me now?\n");
					printf("Then you realize, you are right back where you started...\n\n");
					escape = true;
				}
                               	else if(((strcmp(location, "downstairs") == 0) && tableSeen) && tableChecked)
                                {
                                        printf("You take the items!\n");
                                        for(int i = 0; i < 5; i++)
					{
						if(inventory[i] == NULL)
						{
						for(int j = 0; j < 5; j++)
						{
							if((table[j] != NULL) && (inventory[i] == NULL))
							{
								inventory[i] = table[j];
								table[j] = NULL;
							}
						}
						}                        
	                                }
				}
				else if((strcmp(location, "downstairs") == 0) && tableSeen)
				{
					printf("On the table sits:\n");
					checkInventory17(table);
					tableChecked = true;
				}
				break;
			case 5:
				printf("You have: \n");
				checkInventory17(inventory);
				break;
			}
	}	

}
void checkInventory17(char *arr[])
{	
	for(int i = 0; i < 5; i++)
        {
                if(arr[i] != NULL)
                {
                        printf("%s\n", arr[i]);
                }
        }
}
int whatToDo17(char location[], bool tableSeen, bool tableChecked, bool windowSeen)
{
        printf("\n\nYou need to decide what to do:\n");
        printf("1: Cry for help!!\n");
        printf("2: Examine room\n");
        printf("3: Go ");
	if((strcmp(location, "upstairs") == 0) && windowSeen)
        {
                printf("downstairs\n");
                printf("4: Escape through window!!\n");
        }
	else if(strcmp(location, "upstairs") == 0)
	{
		printf("downstairs\n");
		printf("4: Toss Lucky Coin\n");
	}
	else if((strcmp(location, "downstairs") == 0) && tableSeen && tableChecked)
        {
                printf("upstairs\n");
                printf("4: Take items\n");
        }
	else if((strcmp(location, "downstairs") == 0) && tableSeen)
	{
		printf("upstairs\n");
		printf("4: Examine Table\n");
	}
	else
	{
		printf("upstairs\n");
		printf("4: Toss Lucky Coin\n");
	}
	printf("5: Check inventory\n");
}
int coinToss17(void)
{
	int random = (rand() % (11));
	return random%2;
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


// --- Room 27 Implementation START ---
void lab13nanup(void)
{
    	// Room-specific variables
    	int choice = 0;
    	int attempts = 0; // Loop counter for door attempts
    	bool escaped = false;
    	char observations[5][100]; // Array requirement
    	int observation_count = 0;

    	// --- Items/States for Pattern Matching ---
    	bool has_key = false;
    	bool has_scalpel = false;
    	bool found_box = false; // Track if the box has been found
    	// -----------------------------------------

    	printf("\nYou step into Room 27. The air is heavy with the smell of antiseptic and decay.\n");
    	printf("It looks like an old, abandoned operating theatre. Stains mark the floor and walls.\n");
    	printf("A single light bulb flickers erratically overhead. The main door behind you is bolted shut from this side.\n");
    	sleep(2);

    	// Main loop for Room 27
    	while (!escaped)
	{
        	printf("\nWhat do you do?\n");
        	printf("1. Examine the rusty medical tray.\n");
        	printf("2. Try opening the heavy, bolted door.\n");
        	printf("3. Look under the dilapidated bed.\n");
        	printf("4. Inspect the flickering light fixture.\n");
        	printf("5. Listen closely at the walls.\n");
        	
		// Add choice 6 if the box has been discovered
        	if (found_box) {
         	   	printf("6. Examine the small metal box with etchings.\n");
        }

        printf("9. Give up and return to the main hall.\n"); // Option to return
        printf("Your choice: ");

        // Input validation
        if (scanf("%d", &choice) != 1)
	{
             	printf("Invalid input. Please enter a number.\n");
             	while (getchar() != '\n'); // Clear the input buffer
             	continue; // Ask for choice again
        }

        // --- Random Scare Event Logic ---
        int scare_chance = rand() % 5;
        if (scare_chance == 0)
	{
            	int scare_type = rand() % 3; // Random number requirement
            	printf("\nSuddenly...\n");
            	sleep(1);
            
	    	if (scare_type == 0) 
		{
                	printf("...A sudden chill runs down your spine as a disembodied whisper seems to echo your name...\n");
            	}
		else if (scare_type == 1) 
		{
                	printf("...The lights flicker violently, casting long, dancing shadows. You thought you saw something move in the corner...\n");
            	}
		else 
		{
                	printf("...A metallic clang! It sounded like something heavy was dropped just outside the door...\n");
            	}
             	sleep(1);
        }
        // --- End Random Scare Event Logic ---


        // Handle player choices
        switch (choice)
	{
        	case 1:
                	printf("\nYou cautiously approach the tray. It's covered in dried blood and strange instruments.\n");
                	sleep(1);
                	
			if (!found_box)
			{
                    		printf("Amidst the grime, you find a small, cold metal box covered in strange etchings.\n");
                    		found_box = true;
                    
				if (observation_count < 5) strcpy(observations[observation_count++], "Found a strange metal box on the tray.");
                    		sleep(1);
                	}

                	if (!has_scalpel && (rand() % 2 == 0))
			{
                     		printf("You also spot a dull, rusty scalpel partially hidden under a cloth.\n");
                     		has_scalpel = true;
                      		
				if (observation_count < 5) strcpy(observations[observation_count++], "Found a rusty scalpel.");
                     		sleep(1);
                	}

                	if (!has_key && (rand() % 3 == 0))
			{
                    		printf("Tucked away near the box, you find a small, tarnished brass key!\n");
                    		has_key = true;
                    		if (observation_count < 5) strcpy(observations[observation_count++], "Found a brass key on the medical tray.");
                	} 
			else if (!has_key) 
			{
                    		printf("You search thoroughly but find no key this time.\n");
                	}

                	if (!has_key && !has_scalpel && found_box)
			{
                    		printf("Besides the box, it's just dust, rust, and the unsettling feeling of being watched.\n");
                	}	
                	
			if (observation_count < 5) strcpy(observations[observation_count++], "Examined the creepy medical tray.");
                	sleep(1);
                	
			break; // Exit case 1
            
		case 2: // Door logic
                	printf("\nYou examine the heavy door. It's thick wood reinforced with metal bands, and bolted securely.\n");
                
			// Loop requirement
                	for (attempts = 0; attempts < 3; attempts++)
			{
                    		printf("You heave against the door... (Attempt %d)\n", attempts + 1);
                    		sleep(1);
                    	
				if (has_key)
				{
                         		printf("You notice a small keyhole near the bolts. You try the brass key...\n");
                         		sleep(1);
                         
					printf("CLICK! The bolts retract with a rusty groan! The door creaks open!\n");
                         		printf("You stumble out, back into the main hall, heart pounding.\n");
                         		
					escaped = true; // Set flag to exit the room's while loop
                         		break; // Exit the for loop
                    		}
				else
				{
                         		printf("It doesn't budge. It's firmly locked or blocked.\n");
                         		if (attempts < 2) printf("Maybe try again?\n"); else printf("Trying the door seems futile without a key.\n");
                    		}
                	}
                
			if (!escaped && !has_key)
			{
                     		if (observation_count < 5)
				{
                         		strcpy(observations[observation_count++], "Tried the bolted door multiple times. It's locked tight.");
                    		}
                	}
                 
			attempts = 0; // Reset attempts count
                	break; // Exit case 2
            	
		case 3: // Bed logic
                	printf("\nYou get on your hands and knees, peering into the darkness under the bed.\n");
                	sleep(1);
                	
			if (rand() % 2 == 0) 
			{
                    		printf("Something skitters away into the shadows! You couldn't see what it was.\n");
                     		
				if (observation_count < 5) 
				{
                         		strcpy(observations[observation_count++], "Something moved under the bed.");
                    		}
                	} 
			else 
			{
                    		printf("It's filthy down here. Just dust bunnies the size of rats and an old bedpan.\n");
                     		
				if (observation_count < 5)
				{
                         		strcpy(observations[observation_count++], "Looked under the bed. Found nothing useful.");
                    		}
                	}
                	
			break; // Exit case 3
			       
            	case 4: // Light fixture logic
                	printf("\nYou stare up at the light bulb swinging gently, buzzing and flickering.\n");
                	sleep(1);
			
                	printf("Sometimes the light seems almost too bright, other times it nearly goes out.\n");
                	printf("It casts unsettling shadows around the room.\n");
                 	
			if (observation_count < 5) 
			{
                     		strcpy(observations[observation_count++], "Inspected the flickering light. It's unnerving.");
                 	}
                	
			break; // Exit case 4
            
		case 5: // Listen at walls logic
                	printf("\nYou press your ear against the cold, damp wall, straining to hear...\n");
                	sleep(2);
                
			int sound = rand() % 5;
                
			if (sound == 0)
			{
                    		printf("...silence. Just the sound of your own breathing and the dripping water outside.\n");
                	}
			else if (sound == 1) 
			{
                    		printf("...a faint scratching sound, like fingernails on stone, from deep within the wall.\n");
                	}
			else if (sound == 2) 
			{
                    		printf("...a low, guttural moan that quickly fades.\n");
                	} 
			else if (sound == 3) 
			{
                    		printf("...a rhythmic, wet dripping sound from somewhere inside the wall.\n");
                	}
                 	else 
			{
                     		printf("...nothing but the buzzing of the light and your own heartbeat.\n");
                	}
                 
			if (observation_count < 5)
			{
                     		strcpy(observations[observation_count++], "Listened at the walls. Heard strange sounds (or nothing).");
                 	}
                	
			break; // Exit case 5

            	// --- Pattern Matching Case ---
		case 6:
                	if (found_box) 
			{
                    		printf("\nYou examine the strange metal box. It's cold, seamless, and covered in swirling etchings.\n");
                    		sleep(1);

                    		// Pattern matching logic start
                    		// This simulates checking the 'pattern' of items the player possesses.
                    
				if (has_key && has_scalpel)
				{
                        		// Pattern 1: Has both key and scalpel
                        		printf("As you hold the key near the box, the etchings glow faintly.\n");
                        		sleep(1);
                        
					printf("On impulse, you trace one of the glowing lines with the tip of the rusty scalpel...\n");
                        		sleep(1);
                        
					printf("CLICK! A hidden seam appears and the box lid springs open!\n");
                        		printf("Inside, you find a single, dried human finger pointing accusingly.\n"); // Creepy reward
                         
					if (observation_count < 5) strcpy(observations[observation_count++], "Opened the metal box using the key and scalpel! Found a finger.");
                    		}
				else if (has_key && !has_scalpel) 
				{
                        		// Pattern 2: Has key only
                        		printf("You try the brass key on the box. It doesn't fit any visible lock.\n");
                         		printf("However, when the key touches the metal, the etchings pulse with a faint, cold light for a moment.\n");
                         		
					if (observation_count < 5) strcpy(observations[observation_count++], "Touched the key to the box. Etchings glowed.");
                    		}
				else if (!has_key && has_scalpel) 
				{
                         		// Pattern 3: Has scalpel only
                         		printf("You scrape at the box with the rusty scalpel, trying to find a way in.\n");
                         		sleep(1);

                         		printf("The scalpel blade snaps, showering sparks! The box remains sealed.\n");
                         		has_scalpel = false; // Item breaks/is lost
                         	
					if (observation_count < 5) strcpy(observations[observation_count++], "Tried to pry the box with the scalpel; the scalpel broke.");
                    		}
				else
				{
                         		// Pattern 4: Has neither key nor scalpel (Default)
                         		printf("The box is cold and unresponsive. The strange etchings seem to shift slightly when you're not looking directly at them.\n");
                          		if (observation_count < 5) strcpy(observations[observation_count++], "Examined the metal box. Couldn't interact further.");
                    		}
                     		// Pattern matching logic end

                	} 
			
                	break;
            	// --- End Pattern Matching Case ---
		
		case 9:
			printf("\nYou decide this room is too much and cautiously unbolt the door from this side, heading back to the main hall.\n");
                 	escaped = true; // Set flag to exit the room's while loop
                 	break;
            
	    	default:
                // Handle invalid choices
                	if (choice == 6 && !found_box) 
			{
                     		printf("You haven't found anything to interact with like that yet.\n");
                	}
			else
			{
                     		printf("That's not a valid action in this creepy place! Focus!\n");
               		}
                	break;
    		}
        	sleep(1);
    	} // End while(!escaped) loop for Room 27

    	// Display observations collected before leaving
    	if (observation_count > 0) 
    	{
        	printf("\n--- Your Notes from Room 27 ---\n");
        
		for (int i = 0; i < observation_count; i++) 
			{
            			printf("- %s\n", observations[i]);
        		}
        
		printf("-------------------------------\n");
    	}

    	printf("Leaving Room 27...\n");
    // Execution returns to the main loop in main()
}
// --- Room 27 Implementation END ---
