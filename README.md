# CIS25_Fall2026

Week #3 explanation:
included iostream library & namespace std (which allows for shortened cin and cout)
In main I first listed variable types and name information will be stored under.

Afterwards, I wanted to have a list of options to choose from and pricing for those items since it would make more sense.
One issue I had was orange juice not working due to the space.
Beyond simple cin and cout inputs the end involved me placing (amountPurchasing * cost) since the price would have to be multiplied by how many the user wanted (stored as amountPurchasing).

Week #4 Part 1 explanation:
I created a list of options where depending on which choice the user selects. Simple usage of if, else if and else statements.

Week#4 Part 2 explanation:
User enters three integers hence three usages of cin. I then use nestled if statements to check firstly how the first and second numbers compare.
Then I applied an nestled if to then compare the number to the third number.


Week #5 explanation:
I followed the header video instruction of creating a header file (Menu.h) as well as an implementation file (Menu.cpp). 
Naturally, #include "Menu.cpp" was placed on the top of both Menu.cpp and Week5Part1.cpp file.
The menu file contained the function definitions. Header contained the functions. The Week5 file had the main loop.
The main loop's job was to call a function based on what number was selected.

Week #6 explanation:
Strings & Classes was the theme of week 6 so the genesis of the code included a class. The class had two members and two properties. Members being name & quantity, Properties being save and load to file. In order to fufill instruction fstream and string library had to also be called in order to perform program. ofstream out and ifstream in is the format to write and read accordingly. Essentially, everything in the code that included a cout was meant to give a response to terminal to let the user know whether the program failed or succeeded to open the "items.txt" file. Inside of main "items.txt" is created/opened, Class Item is set to vehicle and I filled in the members of the class with the appropiate information. Then it was written to and read from accordingly.

Week #8 explanation:
In order to start the bank account I had to follow similar steps to assignment 6 since it was a class where deposits and withdrawals are stored as transactions as a seperate file. Since currency is being used which has decimal places, rather than use int, its between float and double. Double is more accurate than float so it used as the variable type for balance amount & cost. Creating a member for accountholder in the class is also possible to further personalization but not neccessary. First attribute is the deposite where balance is set to += amount meaning (new)balance = balance + amount. Afterwards the deposit is written to transaction.txt so when the file is opened the action is displayed. This is also similar to how purchase is setup except for two key differences. Firstly, since there is a possibility that the purchase may be higher than the balance if else is used to cover both options. Secondly, the parameter of string item is added so that what is being purchased is displayed to the user in the terminal as well as the transaction.txt file. Display balance is self-explanatory. saveTransaction creates and opens transaction.txt file and is set to append so that new information is added instead of overwriting changes.

Disclaimer: When writing the code I tried to remove s: before filename but it wouldn't disappear. Still unsure of what that means.
