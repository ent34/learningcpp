#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	// Author: Erika Taylor
	// Date: August 3, 2022
	// Project Name: Single Mom Text Adventure
	/* Description: This is a choice-based text game where the user will make choices to get to a final ending. */

	cout << "Welcome to my text adventure!\n\n";

	cout << "It's called Single Mom Story! I wrote it myself for a Stereotypes in Crime Media class.\n";
	cout << "It may seem a little bias and cringe, so that's just a heads up. Let's hop right in! \n\n";

	int playagain = 1;

	while (playagain >= 1) { // Loops back through the story if the user wants to play again

		playagain = 0; // Changes variable so it will never go higher than 1

		cout << "You're a single black mom. You have two kids, a 10 year-old boy named Demarcus, and\n";
		cout << "a 5 year-old girl named Tiara. You just got laid off from your job two weeks ago and you\n";
		cout << "have five dollars to your name. You've been living paycheck to paycheck, so after you\n";
		cout << "had already paid rent, you had no money for food and other necessities.\n\n";

		cout << "You were looking for other work, but no one was responding back. You moved to the big\n";
		cout << "city all by yourself, so you had no one you could turn to. Your children had complained\n";
		cout << "multiple times about being hungry, and there was no food to eat in your home. They\n";
		cout << "were currently at school, so you had time to think about what you were going to do to\n";
		cout << "provide for them.\n\n";

		cout << "You grabbed your purse and went for a walk to clear your mind. As you were walking\n";
		cout << "down the cold Philly sidewalks, you noticed several homeless people begging for\n";
		cout << "change and food. A woman had a little one bundled up next to her. Your stomach\n";
		cout << "dropped. Would you have to live on the streets with your babies bundled up watching\n";
		cout << "you beg? You felt for her, so you gave her your last five.\n\n";

		cout << "You reached the corner where a convenience store resided. You smelled the cheap\n";
		cout << "food and went in. You were pretty hungry yourself. The owner of the store, an old black\n";
		cout << "man, caught you staring and asked if he could help you. Of course you couldn't buy\n";
		cout << "anything.\n\n";

		int choice;				 // Number for first choice
		int choiceattempts = 1;  // How many times incorrect input was entered to make a choice *choiceattempts*
		int choice2attempts = 1; // How many times incorrect input was entered to make a choice *choiceattempts*
		int choice3attempts = 1; // How many times incorrect input was entered to make a choice *choiceattempts*
		int choice4attempts = 1; // How many times incorrect input was entered to make a choice *choiceattempts*
		int choice5attempts = 1; // How many times incorrect input was entered to make a choice *choiceattempts*
		int playattempts = 1;    // How many times incorrect input was entered to play again *playattempts*
		char yesno;				 // Single letter for user to enter playing again

		while (choiceattempts >= 1) { // Loops back through this part if user enters incorrect input

			choiceattempts = 0;		  // Changing it so it won't ever go above 1

			cout << "1) Ask what they do with leftover food.\n";
			cout << "2) Decline and walk around the store.\n";

			cin >> choice;

			if (choice == 1) {

				cout << "'What do you do with leftovers?' you asked the man.\n";
				cout << "'We usually just throw them out, why?' He told you.\n";
				cout << "You explained a little about your situation and asked if you could come\n";
				cout << "right after closing for the food. He declined with the reasoning of store\n";
				cout << "policy and not wanting to play favorites, because others had asked the\n";
				cout << "same thing. You hung your head at that, of course you hadn't been the\n";
				cout << "first beggar to come here.\n\n";

				cout << "Well, that was a bust. You walked up and down the aisles of the store. Of course it\n";
				cout << "wasn't a grocery store, so there wasn't really produce or anything\n";
				cout << "like that, but there was milk, cereal, canned goods, and other\n";
				cout << "things that your kids loved to eat. You looked to the front of the\n";
				cout << "store to check if the owner was looking your way. He was\n";
				cout << "watching you intently. Of course he was, you kind of just told him\n";
				cout << "you were broke, so you'd only left him with the idea that you\n";
				cout << "weren't going to buy anything.\n\n";

				cout << "You went home and went to sleep with your worries.\n";
				cout << "The next day, you received a call about a job offer.\n";
				cout << "They said you could start the next day. You thanked\n";
				cout << "them profusely. You wouldn't have to worry about\n";
				cout << "losing your home or not being able to provide for\n";
				cout << "your kids.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					choice2attempts = 0;
					choice3attempts = 0;
					choice4attempts = 0;
					choice5attempts = 0;

					playattempts = 0;		// Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}

				}
			}
			else if (choice == 2) {

				cout << "You walked up and down the aisles of the store. Of course it wasn't a\n";
				cout << "grocery store, so there wasn't really produce or anything like that, but\n";
				cout << "there was milk, cereal, canned goods, and other things that your kids\n";
				cout << "loved to eat. You looked to the front of the store to check if the owner was\n";
				cout << "looking your way. He was reading some form of newspaper. Your purse\n";
				cout << "was pretty large. You were sure you'd be able to fit a fair amount of items\n";
				cout << "in there.\n\n";

			}
			else {

				cout << "Invalid Input.\n\n";
				choiceattempts++;

			}

		}

		while (choice2attempts >= 1) { // Loops back through this part if user enters incorrect input

			choice2attempts = 0;	   // Changing it so it won't ever go above 1

			int choice2;			   // Declaring variable for second choice

			cout << "1) Sneak a little bit of everything in your purse.\n";
			cout << "2) Stealing is wrong! Leave the store.\n";

			cin >> choice2;

			if (choice2 == 1) {

				cout << "What the heck? You were desperate and you needed to have something\n";
				cout << "for your kids to eat when they got home from school today. You stealthily\n";
				cout << "snuck a little bit of everything into your purse, a few cans of Chef\n";
				cout << "Boyaree, a half gallon of milk, some of those mini cereal boxes, a loaf of\n";
				cout << "bread, and peanut butter and jelly. You looked towards the front counter\n";
				cout << "again only to see that the owner had disappeared into the back of the\n";
				cout << "store. This was your chance! You carefully made your way out of the store.\n\n";

				cout << "Congrats! You stole successfully. When your children got home from\n";
				cout << "school, they had food waiting for them, and it made you happy to see\n";
				cout << "them happy. This food would last all of you for a week, but you hoped you\n";
				cout << "wouldn't have to steal again. You continued to apply for jobs and you\n";
				cout << "even got a few interviews. Alas, the next week came and you still had\n";
				cout << "nothing. The convenience store popped to the forefront of your mind, so you\n";
				cout << "went back.\n\n";

			}
			else if (choice2 == 2) {

				cout << "You went home and went to sleep with your worries.\n";
				cout << "The next day, you received a call about a job offer.\n";
				cout << "They said you could start the next day. You thanked\n";
				cout << "them profusely. You wouldn't have to worry about\n";
				cout << "losing your home or not being able to provide for\n";
				cout << "your kids.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					choice3attempts = 0;
					choice4attempts = 0;
					choice5attempts = 0;

					playattempts = 0; // Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}
				}

			}
			else {

				cout << "Invalid Input.\n\n";
				choice2attempts++;
			}

		}

		while (choice3attempts >= 1) {

			choice3attempts = 0;

			int choice3;

			cout << "1) Steal again?\n";
			cout << "2) I can't possibly do it again, the guilt's eating me up inside!\n";

			cin >> choice3;

			if (choice3 == 1) {

				cout << "You were feeling confident you could do it again. You went back to the\n";
				cout << "same convenience store and you even brought a bigger purse. You\n";
				cout << "noticed that a surveillance camera had been installed in the front of the\n";
				cout << "store, but you were sure if you stayed towards the back like last time and\n";
				cout << "blocked the camera's view with your body, you could do it. You took the\n";
				cout << "same things even adding in a few snacks and candy. The owner was yet\n";
				cout << "again nowhere to be seen. You walked out the same way as last time,\n";
				cout << "very carefully.\n\n";

				cout << "Wow, you got away with it a second time. The result was the same, your\n";
				cout << "kids were overjoyed at the food options. Again, the food would last for\n";
				cout << "about a week, and the thought of having to steal again really was eating\n";
				cout << "away at you. Would you end up becoming a common thief? You sure\n";
				cout << "hoped not. You felt pretty good about some of the interviews you'd had\n";
				cout << "and you never gave up hope. However, the next week rolled around and\n";
				cout << "your high hopes had been mushed into nothing. Your crushed hopes\n";
				cout << "found you at the same convenience store.\n\n";

			}
			else if (choice3 == 2) {

				cout << "You went home and went to sleep with your worries.\n";
				cout << "The next day, you received a call about a job offer.\n";
				cout << "They said you could start the next day. You thanked\n";
				cout << "them profusely. You wouldn't have to worry about\n";
				cout << "losing your home or not being able to provide for\n";
				cout << "your kids.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					choice4attempts = 0;
					choice5attempts = 0;

					playattempts = 0; // Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}
				}

			}
			else {

				cout << "Invalid Input.\n\n";
				choice3attempts++;

			}
		}

		while (choice4attempts >= 1) {

			choice4attempts = 0;

			int choice4;

			cout << "1) Steal again?\n";
			cout << "2) No! Two times is enough!\n";

			cin >> choice4;

			if (choice4 == 1) {

				cout << "You greeted the owner as you stepped into the store. You were feeling\n";
				cout << "bold today even with the added surveillance camera at the back of the\n";
				cout << "store. You began packing the same items into your bag, but then you\n";
				cout << "heard the owner shout at you. He was headed your way, so you did the\n";
				cout << "only thing you could think of at the time.\n\n";

				cout << "You dashed down another aisle and made your way out of the store. You\n";
				cout << "thought you were going to make it, but a cop car in front of the store told\n";
				cout << "you otherwise. The white cop yelled commands. The usual stuff, get on\n";
				cout << "the ground, put your hands where we can see them, and all that noise.\n\n";

			}
			else if (choice4 == 2) {

				cout << "You went home and went to sleep with your worries.\n";
				cout << "The next day, you received a call about a job offer.\n";
				cout << "They said you could start the next day. You thanked\n";
				cout << "them profusely. You wouldn't have to worry about\n";
				cout << "losing your home or not being able to provide for\n";
				cout << "your kids.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					choice5attempts = 0;

					playattempts = 0; // Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}

				}
			}
			else {

				cout << "Invalid Input.\n\n";
				choice4attempts++;

			}

		}

		while (choice5attempts >= 1) {

			choice5attempts = 0;

			int choice5;

			cout << "1) Resist! You couldn't go to jail!\n";
			cout << "2) Cooperate, you knew you shouldn't have been stealing in the first place.\n";

			cin >> choice5;

			if (choice5 == 1) {

				cout << "You weren't doing anything he said, so the cop grabbed you, and you\n";
				cout << "tried your best to struggle against him. You screamed, punched, kicked,\n";
				cout << "and you weren't doing the large man any harm, but you were, in the simplest\n";
				cout << "terms, pissing him off. So guess what?\n\n";

				cout << "He shot you.\n\n";

				cout << "You crumpled to the ground. Your head was pounding and your body was running\n";
				cout << "cold. You regretted your choices. What about your babies? How would they react\n";
				cout << "to you not greeting them at the door like you had been doing those past few weeks?\n";
				cout << "What was going to happen to them? How would they survive without you? All these\n";
				cout << "thoughts and so many more ran through your mind as your life faded away.\n\n";

				cout << "You died.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					playattempts = 0; // Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}
				}
			}
			else if (choice5 == 2) {

				cout << "You weren't doing anything he said, so the cop grabbed you. To his\n";
				cout << "surprise, you dropped your bag full of stolen goods and apologized.\n";
				cout << "Miraculously, you weren't arrested on the spot, but you had a set court date\n\n";

				cout << "You couldn't afford a lawyer, but you also didn't necessarily trust the court\n";
				cout << "to appoint you one. None of them cared if you had kids or if you were only\n";
				cout << "stealing to feed them, so you decided you would plead your own case.\n\n";

				cout << "On the set court date, you arrived on time, and made your case. You had\n";
				cout << "decided on a trial by judge, and you tried your hardest to appeal to the\n";
				cout << "man's emotions. He didn't necessarily seem to care. It didn't seem like he\n";
				cout << "had even been listening all that much before declaring you guilty and\n";
				cout << "sentencing you to 2 years\n\n";

				cout << "Yup, 2 years in jail. You hadn't even stolen enough to get over 3 months\n";
				cout << "in jail. After hearing this, you could only think about where to send your\n";
				cout << "kids. You didn't want to give up custody to their father and his new wife\n";
				cout << "back home in the country, but you supposed you had no other choice\n\n";

				cout << "So, you went to jail. And what a miserable 2 years it was. It was always cold,\n";
				cout << "the food was awful, your ex wouldn't let you talk to your kids, the guards treated\n";
				cout << "you like dirt, and you hated using the bathroom in front of your leering cellmate,\n";
				cout << "a white woman who killed her husband. She'd only gotten 5 years for such a severe\n";
				cout << "crime, yet here you were waiting out the 2 years she had left that matched your own.\n";
				cout << "Life was really unfair. However, the time there really made you reflect on past\n";
				cout << "decisions. Your mom sent you books and you were able to read a lot and be a little productive.\n\n";

				cout << "The two years passed by painfully slow, but you made it. Your babies were glad\n";
				cout << "to see you, even if they couldn't stay with you, you were at least allowed to\n";
				cout << "visit. You ended up moving back to the country and living with your parents.\n\n";

				cout << "You tried working, but you had a criminal record now, and most employers automatically\n";
				cout << "ranked you as a hard no. Would it always be like this? Who knows? Would you ever be\n";
				cout << "stealing again? Absolutely not.\n\n";

				cout << "The End.\n\n";

				while (playattempts >= 1) { // Loop for playing again 

					playattempts = 0; // Changes variable so it will never go higher than 1

					cout << "Play again? Y/N: ";
					cin >> yesno;

					if (yesno == 'Y' || yesno == 'y') {

						playagain++;

					}
					else if (yesno == 'N' || yesno == 'n') {

						cout << "Cool. Come back again if you ever want to see the different endings!\n";

					}
					else {

						cout << "Invalid Input.\n\n";
						playattempts++; // *playattempts*
					}

				}

			}
			else {

				cout << "Invalid Input\n\n";
				choice5attempts++;
			}
		}
		
	}

}