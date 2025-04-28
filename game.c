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

void user36room(void);

void amoralesRoom9(void);

void room30game(void);

void joshRoom4(void);

void room59game(void);

void room22RandomTime(void);


void userRoom50(void);
void userRoom50Ending1Path(int choices[], int index);
void userRoom50Ending2Path(int choices[], int index);
void userRoom50Ending3Path(int choices[], int index);
void userRoom50Stats(int choices[]);


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
				int choice;
				int choicesMade[6];
				int index = 0;
				puts("room50");
				userRoom50();

				printf("There lies before you a dimly lit room...\n");
				printf("At the center there is a small round table with a candle and open book on top.\n");
				printf("You also notice two bookshelves at opposite sides of the room with a fireplace against the wall at its center.\n");
				printf("There is also a mysterious black figure near one of the bookshelves...What do you do?\n\n");

				printf("1: Standby\n2: Approach the table\n3: Approach the mysterious person\n4: Walk past the table to the fireplace\n5: Reach for the exit\n\n");
				printf("Select your choice by indicating the number value: ");

				scanf("%d", &choice);
				choicesMade[index] = choice;
				index += 1;

				if (choice == 1)
				{
					printf("\nYou eerily stand still in the room, and the fireplace suddenly stops lighting the room. You can only see the light of the candle.\n");
					printf("As you approach the table, a cat leaps on top, toppling the candle to the floor!\n\n");
					printf("1: Pick up the candle\n2: Pet the cat\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou pick up the candle and place it back on the table, but the book and cat have disappeared!\n");
						printf("You wander through the room with your candle close, and manage to light the fireplace again.\n");
						printf("As you do, the room lights up again.\n\n1: Head back to the table\n2: Head over to the exit\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou head back to the table but no longer see the book there, you now see something else...\nIt is a blank piece of paper ");
							printf("with an ink and pen beside it. The pen begins to write on its own on the paper with a golden ink.\n\n1: Go over to what is being written");
							printf("\n2: Interrupt the process\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou go over and see that the words 'You can be forgiven' are being written.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou rush towards the pen and try to stop it writing, but it continues on when you are suddenly blinded by a bright light.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{

							printf("\nYou head over to the exit door but notice that it vanishes before you before you even get a chance to reach the doorknob.\n");
							printf("Suddenly you hear laughter all around you, of a deep and ominous tone.\n You try to cover your ears as you can't handle its volume");
							printf(" and screeching tone.\n\n 1: Run to the wall\n2: Scream back\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou begin to scream back at the emptiness of the room with your eyes closed. You then open your eyes and...");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou run towards the wall and hit your head against it, knocking you out temporarily.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nEven though it is dark, the glimmer from the candle allows you to see the cat and pet it.\n");
						printf("The cat starts to glow and walks over to one of the bookshelves\n\n");
						printf("1: Go over to the bookshelf\n2: Wait\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou walk over to the bookshelf and pick up a book from it, that still has a glow to it from the cat.\n");
							printf("You open the book and read the following: 'The Lamb was slain'. You scratch your head and close the book. The glowing cat has also disappeared.");
							printf("Suddenly, the room lights up again and you wonder what this all leads to.\n\n1: Go to the exit\n2: Open the book again\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou head over to the exit, but your vision begins to blur along the way.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou open the book again and the book now says 'They bow before the Lamb'.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou decide to wait and see if anything happens...and the cat ceases to glow.\nThe light of the candle is all that is left.");
							printf(" You can't seem to see anything else around you.\nSo, you decide to place your hand on the wall and scan through the room for a door.\n");
							printf("Doing so enables you to find two doors in particular. Using your candle you see the first door labeled 'Exit' and ");
							printf("\nthe second door labeled 'Beginning'.\n\n1: 'Exit'\n2: 'Beginning'\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head to the door 'Exit', but this takes you along a long corridor into another room.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head to the door 'Beginning', and this takes you to a small room with a pedastal displaying a cartoonish heart.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
					}
				}
				else if (choice == 2)
				{
					printf("\nYou walk towards the table and notice the book has an unreadable script...\n");
					printf("However you are able to distinguish these words: 'There is one truth'\nYou suddenly hear something scratch the wall!\n");
					printf("\n1: Turn to the source of the sound\n2: Hide under the table\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou fearlessly turn to the source of the sound and walk up to the source.\n");
						printf("Suddenly, a large shadowy figure leaps on top of you and pins you to the ground!\n");
						printf("Quickly choose how to fend back!\n\n1: Reach for the flashlight\n2: Reach for the sword\n");
						printf("\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou reach for a flashlight that was hidden under the table and turn it on as fast as you can.\n");
							printf("As you shine your flashlight, the figure burns up and vanishes from your sight. You then shine your light on the wall.\n");
							printf("You see this writing 'Let light shine out of darkness' written with a dark black substance resembling that of the figure.\n");
							printf("\n1: Use your flashlight to scan the room for more writing\n2: Use your flashlight to look for the exit door\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou use your flashlight to find more writing but don't find anymore. This leaves you a little disappointed.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou use your flashlight to find the exit door and locate it. When you turn the doorknob it seems like nothing happened.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}	
						else
						{
							printf("\nYou reach for a sword that was unknown to you and swing it with fury at the figure.\nBut you notice that this sword completely phases through.\n");
							printf("It is ineffective against the figure. The figure envelops you with its darkness, you seem hopeless.\n\n1: Cry out for help\n2: Accept your fate.\n");
							printf("\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = index;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou cry out for help and out of nowhere, the figure is gone.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to accept your fate and close your eyes as the darkness encloses your whole body.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou hide under the table and hear the scratching come closer and closer to where you are at.\n");
						printf("The sounds starts to surround you and you feel an large object on top of the table.\n\n");
						printf("1: Overturn the table with your back\n2: Stay completely still\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou use your back as a leverage to make the figure back off. You hear a sharp hiss as the figure is thrown to the other side of the room\n");
							printf("You are now face to face with the shadowy figure.\n\n1: Fight\n2: Run\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou choose to fight, and lunge yourself with all your might toward the figure.\n");
								printf("As soon as you are about to make contact, the figure vanishes.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou choose to run away in circles since you were foreign to the exit door's location.\n");
								printf("After running a couple of laps you realize the figure is gone and stop running.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou stay completely still under the table. It seems like the large object also stopped moving.\n\n1: Check above\n2: Wait longer");
							printf("\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to wait longer and eventually you get out of the shelter of the table.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou check above and, yes, the figure is in fact gone. You wonder where it went to.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}	
					}

				}
				else if (choice == 3)
				{
					printf("\nYou decided to approach the mysterious person and as you get close to him, he turns around and his face shine so bright\n");
					printf("You instinctively look away, but when you try to look back, he is gone. You then notice that the room has completely changed!\n");
					printf("The room is just a bright luminescent white with many pieces of parchment with writings on them.\n\n");
					printf("1: Examine through the writings\n2: Attempt to find the exit door\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou look through the writings one by one and they seem to be prophecies of some kind regarding a king who would liberate his people\n");
						printf("You wonder who that person could be and keep reading that this very king will suffer and die cruely for his people\n");
						printf("As you continue reading you see this repeating pattern said in different ways. You don't really mind it and eventually you fall asleep.\n");
						printf("After some time you wake up and see that everything is back to normal.\n\n1: Head for the exit \n2: Search for more writings\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou head for the exit when the mysterious person shows up again! But this time he says 'Peace be with you'.\n");
							printf("As he says that you fall to your kness and head on the ground. After some time, you notice that he has left again.\n");
							printf("You get up and wonder who this person is.\n\n1: Recollect at the fireplace \n2: Head for the exit \n\nSelect your choice:  ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou recollect your thoughts at the fireplace and enter into a mindless craze of deciphering the meaning of all of this.\n");
								printf("If only you knew more...\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit with an impression of who that person was.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou attempt to search for more writings as you saw previously on the walls, and find one more writing.\n");
							printf("This writing says 'He is risen' and that is all. You suddenly see a bright light that is glowing in the midst of the room\n");
							printf("\n1: Follow the glowing light\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to following the glowing light, but it goes through the walls meaning that you can't follow pursuit.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to head over to the exit, but as you approach it, the door vanishes.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou try to find an exit door, but as you brush your hand against the walls no doorknob is present\n");
						printf("nor is there a latch or hidden door you can push as much as you try. After some attempts you give up\n");
						printf("You start to wonder who was that person that blinded you in the first place.\nYou then hear a latch open up, and from it a stream\n");
						printf("of fresh spring water pours down into a shaft that opened simultaneously\n\n1: Drink from the water\n2: Look into the shaft\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nWith your hands you grab some water and drink from it. It is the most refreshing water you have ever tasted.\n");
							printf("You wish you take some with you, but alas you can't.\n\n1: Grab one last handful of water\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou grab one more handful of water and find yourself refreshed and satisfied.\n");
								printf("You hear an echo of someone saying 'My water satisfies the soul'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit with the easing noise of the stream in your ears.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{	printf("\nYou decide to ignore the water and look into the shaft and to your surprise, you see nothing but just the stream flowing downward.\n");
							printf("\n1: Drink from the water\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to drink a little bit of water and hear the echo of someone saying 'Come taste and see'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit, still wondering if that water tasted good.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}
				else if (choice == 4)
				{
					printf("\nYou walk past the table and go towards the fireplace and stare into it quite closely.\n");
					printf("You notice there is a paper burning with the writing 'It is finished'.\n");
					printf("\n1: Try to reach for the paper\n2: Turn back to the rest of the room\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;

					if (choice == 1)
					{
						printf("\nYou try to reach for the paper and quickly snatch it out of the fire, although your hand does burn in the process\n");
						printf("As you examine the paper, it begins to restore itself back to its original state\n Interestingly enough there is no additional writing\n");
						printf("\n1: Put it back in the fire\n2: Save it in your pocket\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou place the paper back into the fire and you notice that the fireplace begins to illuminate the room even further.\n");
							printf("But you notice that it starts to get out of control. The fire begins to grow and grow. You are not sure what to do.");
							printf("\n1: See what you can find to extinguish the fire\n2: Quickly find the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;
							
							if (choice == 1)
							{
								printf("\nYou try to find what you can to extinguish the fire but realize there is only fuel for the fire.\n");
								printf("The flames begin to enclose you all around in the room. But out of nowhere all the flames extinguish.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou quickly find the exit, but the door is locked! The flames begin to enclose you all around in the room.\n");
								printf("But out of nowhere all the flames extinguish.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou save the piece of paper in your pocket to think about it later.\n\n1: Go to the table\n2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over to the table and realize the piece of paper you saved in your pocket is gone and is now the paper at the table.\n");
								printf("You choose to pick it up again and save it somewhere more secure.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit but stumble upon a curious flashlight that was on the path, so you get back up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						
					}
					else
					{
						printf("\nYou decide to not grab the paper and turn around to the room. It has not changed much, but the mysterious person is gone\n");
						printf("But before you there is a piece a paper, similar to the one in the fire and it is blank.\n\n1: Grab the paper\n2: Head to the table\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou grab this particular piece of paper that says 'I am Who I am' and conserve it in your pocket.\n\n1: Head over to the table\n");
							printf("2: Head for the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over for the exit, but as you touch the doorhandle, the door disentigrates exposing the wall behind it.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit but stumble upon a curious flashlight that was on the path, so you get back up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou decide to head over to the table but it is empty now, so it seems like the candle and book were taken away.\n");
							printf("So, now you are just left wondering where to head next.\n\n1: Go back to the fireplace\n2: Head over the exit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou head over to the fireplace, but notice that the paper that was on the table is on the floor. You lean down to conserve it.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
							else
							{
								printf("\nYou head over to the exit without worring too much about those pieces of paper.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}
				else
				{
					printf("\nYou run past the table and fireplace, and make it to the door. You notice that a sign above says '(John 3:16)'\n");
					printf("You then try to reach for the doorknob but once you turn it, it is locked! So you turn around but the room\n");
					printf("has completely changed! It is as if you were outside, as you see a bright light as the sun, a river running through\n");
					printf(",you even hear birds chirping\n\n1: Lie down on your back and relax\n2: Try to touch the walls\n\nSelect your choice: ");
					scanf("%d", &choice);
					choicesMade[index] = choice;
					index += 1;
					

					if (choice == 1)
					{
						printf("\nYou decide to take a break from the long day you have had before coming to this place.\nA nice breeze in the air fills you with peace\n");
						printf("You wish that there were some sort of nice cold drink to take a sip as well. You then hear some glass make contact with the table\n");
						printf("\n1: See what that is about\n2: Close your eyes\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou see what that sound was about and notice a nice glass of lemonade on small wooden stool.\n You take a sip and you are");
							printf("refreshed from the desire you once had.\n\n1: Ask if anyone is there\n2: Finish your drink\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou ask if anyone is there and you hear someone say 'I have attended to you this whole time'\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou finish your drink and decide it is time to leave, when a clear exit door appears before you.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou close your eyes and eventually fall asleep for a while. It is actually nighttime when you end up waking up.\n");
							printf("You see that a drink was placed on the wooden stool.\n\n1: Take a sip from the drink\n2: Sleep for another bit\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to take a sip from the drink and end up drinking all of it. A clear exit door then appears before you.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
							else
							{
								printf("\nYou sleep around for another bit and wake up.\n");
								userRoom50Ending2Path(choicesMade, index);
							}
						}
					}
					else
					{
						printf("\nYou try to touch the walls but it seems like there is no boundary, so you try to see how far you can walk\n");
						printf("The more you walk though, the more you get worried of losing track of where the original room was\n");
						printf("You decide to walk back from the direction you came from originally\n\n1: Lie down on your back\n2: Meditate\n\nSelect your choice: ");
						scanf("%d", &choice);
						choicesMade[index] = choice;
						index += 1;

						if (choice == 1)
						{
							printf("\nYou lie down on your back after you tried searching and fall fast asleep. You start to have a dream...\n");
							printf("In this dream, you find yourself in a lush pasture with many flocks of sheep. You can't fathom on what to do.\n");
							printf("\n1: Try to herd the sheep\n2: Explore the environment around you\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou try to herd the sheep but they all seem to go their own way. You then hear a loud and sharp whistle.\n");
								printf("The sheep all of the sudden start to line up horizontally. You then see the shepherd of the flock appear.\n");
								printf("The shepherd says 'My sheep hear my voice'.\nYou awake from your dream suddenly.\n");
								userRoom50Ending1Path(choicesMade, index);
								
							}
							else
							{
								printf("\nYou decide to explore the environment around and walk across the vast pasture.\n");
								printf("However, you notice that at some point you reach a boundary due to some high moutains, ones that you can't cross.\n");
								printf("You wake up and find a clear exit door that appeared at some point.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
						else
						{
							printf("\nYou meditate in the tranquility that surrounds you, thinking about how all these things have come to pass.\n");
							printf("You certainly know that something or someone has been doing these things. But now you think about what else is to come.\n");
							printf("At the thought of this, you wish you could stay longer.\n\n1: Stay longer\n2: Rise\n\nSelect your choice: ");
							scanf("%d", &choice);
							choicesMade[index] = choice;
							index += 1;

							if (choice == 1)
							{
								printf("\nYou decide to stay a little longer and meditate further. Once you open your eyes, you notice the room is back to normal.\n");
								userRoom50Ending1Path(choicesMade, index);
							}
							else
							{
								printf("\nYou decide to get up and after some scoping, you see a clear exit door.\n");
								userRoom50Ending3Path(choicesMade, index);
							}
						}
					}
				}

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
	printf("Entering Room 50...\n\n");
}

void userRoom50Ending1Path(int choices[], int index)
{
	int choice;

	printf("A secret passage opens within the room, and so you decide to walk in it.\nAs you move foward, the passage closes, but many torches light up a long hallway.\n");
	printf("At the end of the hallway you see a door. As you advance a wall blocks you from advancing further.\nIt seems like you need to pass some trials. On the wall, the following phrase is written:\n");
	printf("Learned or Not Learned. There are two buttons indicating the two choices.\n\n1: Learned\n2: Not Learned\n\nSelect your choice: ");
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;
	
	if (choice == 1)
	{
		printf("\nYou hear a loud voice, saying 'Very well' and the wall slowly is lifted up allowing to advance a little further. Another wall falls down with the following phrase:\n");
		printf("Change or Never Change. There are two buttons indicating the two choices.\n\n1: Change\n2: Never Change\n\nSelect your choice: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou once again hear a loud voice saying 'You may proceed', and the wall is lifted up allowing you to exit through the door.\n");
		}
		else
		{
			printf("\nYou once again hear a loud voice saying 'I never do', and the wall is lifted up allowing you to exit through the door.\n");
		}
	}
	else
	{
		printf("\nAfter pressing the button, the wall rises slowly, allowing you to proceed. Suddenly, another wall blocks your path. This wall contains the phrase:\n");
		printf("Accept or Reject. There are two buttons indicating the two choices.\n\n1: Accept\n2: Reject\n\nSelect your choice: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou feel an intense sensation over your body for a brief moment and the wall slowly rises up, allowing you to exit through the door.\n");
		}
		else
		{
			printf("\nThe wall slowly rises up, allowing you to exit through the door\n");
		}
	}

	printf("\nYou exit the room with the idea that there is something far greater to this world than it may seem...\n\n");
	printf("ENDING 1: Enlightened\n");
	userRoom50Stats(choices);
}

void userRoom50Ending2Path(int choices[], int index)
{
	int choice;
	int door1 = (rand() % 100) + 1;
	int door2 = (rand() % 100) + 1;
	int door3 = (rand() % 100) + 1;
	int door4 = (rand() % 100) + 1;

	printf("\nSuddenly the room is now full of different doors, but you do not know which one to choose. You notice that a select few number of door have numbers.\n");
	printf("\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door1, door2);
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;	

	if (choice == 1)
	{
		printf("\nYou open door %d and notice that it leads to a large pit you would not dare go into. Better skip this one!\n", door1);
		printf("You try to open a different door this time.\n\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door3, door4);
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou open door %d and it leads you to a completely different room\n", door3);
		}
		else
		{
			printf("\nYou open door %d and see a key on the ground. You grab the key and proceed to open the door at the end of the hallway.\n", door4);
		}
	}
	else
	{
		printf("\nYou open door %d and see a very long corridor with an enourmous monster approaching your direction. You slam the door shut.\n", door2);
		printf("You would rather try your chances at another door.\n\n1: Choose door %d\n2: Choose door %d\n\nSelect your choice: ", door3, door4);
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nYou open door %d and it directly leads to a completely differen room.\n", door3);
		}
		else
		{
			printf("\nYou open door %d and see a set of stairs to take which you unwillingly take. But this leads you to a completely different room.\n", door4);
		}
	}

	printf("\nYou exit the room with confusion. It seems that there was something more...\n\n");
	printf("ENDING 2: Unknown\n");
	userRoom50Stats(choices);
}

void userRoom50Ending3Path(int choices[], int index)
{
	int choice;

	printf("\nYou are ready to move on in your long journey for the exit is clear. What will lie ahead or is this the end?\n");
	printf("What do you hope for next in this journey?\n\n1: Peace\n2: Turmoil\n\nSelect your choice: ");
	scanf("%d", &choice);
	choices[index] = choice;
	index += 1;

	if (choice == 1)
	{
		printf("\nAs you hope for a peaceful future journey there are two images that come to your mind.\n");
		printf("The first one is of a luscious spring where a cool mist brushes over your face.\n");
		printf("The second is of a trail in the midst of a forest lit by fireflies with a cozy cabin at the end.\n");
		printf("\n1: Spring\n2: Forest Trail\n\nWhich appeals most?: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;
		
		if (choice == 1)
		{
			printf("\nThinking of the spring, brings a sensation of thirst in longing to drink of that water forever.\n");
		}
		else
		{
			printf("\nThinking of the trail and the cabin, brings a sensation of hunger in longing to eat well-prepared banquets from the fresh resources.\n");
		}
	}
	else
	{
		printf("\nAs you think about the challenges you look foward to you think of how you would tackle them.\n");
		printf("You could potentially tackle them with strategy or instinct.\n\n1: Strategy\n2: Instinct\n\nWhich appeals most?: ");
		scanf("%d", &choice);
		choices[index] = choice;
		index += 1;

		if (choice == 1)
		{
			printf("\nThinking about strategies overwhelms you a little, perhaps there is a faster way to end this journey.\n");
		}
		else
		{
			printf("\nThinking about using your instincts reminds you of their shortcomings at times.\n");
		}
	}

	printf("\nYou exit the room with a sense of calm and peace...\n\n");
	printf("ENDING 3: Peaceful\n");
	userRoom50Stats(choices);
}

void userRoom50Stats(int choices[])
{
	printf("\nThese the choices you made: [");

	for (int i = 0; i < 6; i++)
	{
		if (i == 5)
		{
			printf("%d]\n", choices[i]);
		}
		else
		{
			printf("%d, ", choices[i]);
		}
	}

	printf("You exit the room after all, but your journey has just begun.\n\n");
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



