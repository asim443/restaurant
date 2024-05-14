#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
const double pricefastfood[] = { 12.15,5.2,4.3 };              //prices of fast food
const double pricedesifood[] = { 14.37,15.12,17.19 };          //prices of desi food
const double pricechinesefood[] = { 12.1,11.5,12.7 };          //prices of chinese food
const double pricesoup[] = { 7.4,4.5,6.47 };                  //prices of soups
const double pricedrinks[] = { 1.5,2.6,1.4,3.2,2.9 };         //prices of drinks
const double priceseafood[] = { 12.13,15.1,21.7 };            //prices of sea food
void bill();													// prototype of bill function
int chif();														// prototype of chinese function
int fastf();													// prototype of fast food function.
int entryfastfood, entrydesifood,entrydrinks,entryseafood,entrydesertfood, entrychinesefood,entrysoup = 0;    // for locking the functions
bool checkerp, checkerb, onevalue, checkers = false;			//variable sused for fast food.
string fastfood[3];
string chinesefood[3];
string seafood[3];
string drink[5];
string coke,fanta,sprite,nestlejuice,freshlime;           
int quantitypizza, quantityburger, quantityshawarma = 0;    // for finding the quantity of fast foods.
int *quantitycoke, *quantityfanta, *quantitysprite, *quantityfreshlime, *quantitynestlejuice = 0;
int *quantitycuttlefish, *quantityshrimp, *quantitykrill=0;
int platesrice, springquantity, gravyquantity;        //for desi food
bool checkercbl, checkercb, checkermb = false;     // for desi food.
bool checkercr, checkercg, checkersr = false;		// for chinese food
bool checkercoke, checkersprite, checkerfanta, checkerfreshlime, checkernestlejuice = false;  //drinks
bool checkercuttlefish, checkershrimp,checkerkrill = false;     //sea food
ofstream fole;
//fole.open("asim.txt");
struct deseert
{
	string des[3];
	bool checkercake = 0;
	bool checkericecream = 0;
	bool checkerpastry = false;
	int quantitycake=0;
	int quantityicecream=0;
	int quantitypastry=0;
	const double pricedeserts[3] = { 12.1,4.6,2.8 };

}st1;
struct sop
{
	string suop[3];
	bool checkerspecialsoup = 0;
	bool checkervegetablesoup = 0;
	bool checkermushroomsoup = false;
	int quantityspecialsoup = 0;
	int quantityvegetablesoup = 0;
	int quantitymushroomsoup = 0;
	
	const double pricesoup[3] = { 7.4,4.5,6.47 };
}st2;
int  fastf()
{
	if (entryfastfood == 0)
	{
		int lockpizza = 0;
		int lockburger = 0;
		int lockshawarma = 0;
		entryfastfood = 1;
		int ff;
		string item, item1, item2;
		int quantity = 0;
		int quantity1 = 0;
		int quantity2 = 0;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order pizza:: " << endl;
			cout << "enter 2 for order burger::" << endl;
			cout << "enter 3 for order shawarma:: " << endl;
			cout << "enter 4 for exit from fast food menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockpizza == 0)
				{
					lockpizza = 1;
					int subp;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for Pepperoni pizza" << endl;
					cout << "Press 2 for Veggie pizza" << endl;
					cout << "Press 3 for Grilled Chicken pizza" << endl;
					cout << "**********************************************" << endl;
					cin >> subp;
					if (subp == 1)
					{
						fastfood[0] = "Pepporoni Pizza";
						checkerp = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "Pepporoni pizza is added to your order!" << endl;
					}
					else if (subp == 2)
					{
						fastfood[0] = "Veggie pizza";
						checkerp = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "veggie pizza is added to your order!" << endl;
					}
					else if (subp == 3)
					{
						fastfood[0] = "Grilled chicken pizza";
						checkerp = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "grilled chicken pizza is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockpizza = 0;
						continue;
					}
				}
				else
				{
					cout << "Pizza is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockburger == 0)
				{
					lockburger = 1;
					int subb = 0;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for classic burger" << endl;
					cout << "Press 2 for Chicken burger" << endl;
					cout << "Press 3 for cheese burger" << endl;
					cout << "**********************************************" << endl;
					cin >> subb;
					if (subb == 1)
					{
						fastfood[1] = "Classic burger";
						checkerb = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "classic burger is added to your order!" << endl;
					}
					else if (subb == 2)
					{
						fastfood[1] = "Chicken burger";
						checkerb = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "chicken burger is added to your order!" << endl;
					}
					else if (subb == 3)
					{
						fastfood[1] = "Cheese burger";
						checkerb = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "cheese burger is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockburger = 0;
						continue;
					}
				}
				else
				{
					cout << "burger is locked!" << endl;
				}
			}
			else if (ff == 3)
			{

				if (lockshawarma == 0)
				{
					lockshawarma = 1;
					int subs = 0;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for classic shawarma" << endl;
					cout << "Press 2 for Beef shawarma" << endl;
					cout << "Press 3 for Veggie shawarma" << endl;
					cout << "**********************************************" << endl;
					cin >> subs;
					if (subs == 1)
					{
						fastfood[2] = "Classic shawarma";
						checkers = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "classic shawarma is added to your order!" << endl;
					}
					else if (subs == 2)
					{
						fastfood[2] = "Beef shawarma";
						checkers = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "beef shawarma is added to your order!" << endl;
					}
					else if (subs == 3)
					{
						fastfood[2] = "Veggie shawarma";
						checkers = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "veggie shawarma is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockshawarma = 0;
						continue;
					}
				}
				else
				{
					cout << "shawarma is locked!";
				}
			}

			else if (ff == 4)
			{
				if (checkerp == true)
				{
					quantitypizza = quantity;
				}
				if (checkerb == true)
				{
					quantityburger = quantity1;
				}
				if (checkers == true)
				{
					quantityshawarma = quantity2;
				}
				return 0;
			}
			else if (onevalue == true && ff == 5)
			{
				if (checkerp == true)
				{
					quantitypizza = quantity;
				}
				if (checkerb == true)
				{
					quantityburger = quantity1;
				}
				if (checkers == true)
				{
					quantityshawarma = quantity2;
				}
				bill();
				return 0;
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 4);
	}
	else
	{
		cout << "you can't enter in the fast food menu. It is locked" << endl;
	}
	return 0;
}
int desif()
{
	int ff;
	string item, item1, item2;
	if (entrydesifood == 0)
	{

		entrydesifood = 1;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "Press 1 for chicken boneless::" << endl;
			cout << "Press 2 for chicken with bone::" << endl;
			cout << "Press 3 for mutton boneless" << endl;
			cout << "Press 4 for exit from desi food" << endl;
			if (onevalue)
			{
				cout << "Press 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (checkercbl == false)
				{
					checkercbl = true;
					onevalue = true;
					cout << "chicken boneless is added to your order!" << endl;
				}
				else
				{
					cout << "chicken boneless is locked!" << endl;
				}

			}
			else if (ff == 2)
			{
				if (checkercb == false)
				{
					checkercb = true;
					onevalue = true;
					cout << "chicken with bone is added to your order!\n";
				}
				else
				{
					cout << "chicken with bone is locked" << endl;
					break;
					//continue;
				}
				
			}
			else if (ff == 3)
			{
				if (checkermb == false)
				{
					checkermb = true;
					onevalue = true;
					cout << "mutton boneless is added to your order!" << endl;
				}
				else
				{
					cout << "mutton boneless is locked!" << endl;
					continue;
				}
				
			}
			else if (ff == 4)
			{
				return 0;
			}
			else if (onevalue == true && ff == 5)
			{
				if (ff == 5)
				{
					bill();
				}
			}
			else
			{
				cout << "Please! enter the value from menu!";
			}
		} while (ff != 4);
	}
	else
	{
		cout << "you can't enter in the desi food menu. It is locked" << endl;
	}
	return 0;
}
int chif()
{
	int ff;
	int quantity44 = 0;
	int  quantity4 = 0;
	int quantity5 = 0;
	string item, item1, item2;
	if (entrychinesefood == 0)
	{
		int lockrice = 0;
		int lockspring = 0;
		int lockgravy = 0;
		entrychinesefood = 1;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order Chinese rice :: " << endl;
			cout << "enter 2 for order spring rolls::" << endl;
			cout << "enter 3 for order chinese gravy:: " << endl;
			cout << "enter 4 for exit from chinese food menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockrice == 0)
				{
					lockrice = 1;
					int subp;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for Malee's Special rice" << endl;
					cout << "Press 2 for Chicken Fried rice" << endl;
					cout << "Press 3 for Chicken Masala rice" << endl;
					cout << "**********************************************" << endl;
					cin >> subp;
					if (subp == 1)
					{
						chinesefood[0] = "Malee's Special rice";
						checkercr = true;
						onevalue = true;
						cout << "enter plates::";
						cin >> quantity44;
						while (quantity44 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity44;
						}
						cout << "Malee's special rice is added to your order!" << endl;
					}
					else if (subp == 2)
					{
						chinesefood[0] = "Chicken Fried rice";
						checkercr = true;
						onevalue = true;
						cout << "enter plates::";
						cin >> quantity44;
						while (quantity44 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity44;
						}
						cout << "chicken fried rice is added to your order!" << endl;
					}
					else if (subp == 3)
					{
						chinesefood[0] = "Chicken Masala rice";
						checkercr = true;
						onevalue = true;
						cout << "enter plates::";
						cin >> quantity44;
						while (quantity44 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity44;
						}
						cout << "chicken masala rice is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockrice = 0;
						continue;
					}
				}
				else
				{
					cout << "Chinese rice is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockspring == 0)
				{
					lockspring = 1;
					chinesefood[1] = "Spring rolls";
					checkersr = true;
					onevalue = true;
					cout << "enter quantity::" << endl;
					cin >> springquantity;
					while (springquantity <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> springquantity;
					}
					cout << "spring rolls are added to your order!" << endl;
				}
				else
				{
					cout << "spring rolls are locked!" << endl;
				}
			}
			else if (ff == 3)
			{

				if (lockgravy == 0)
				{
					lockgravy = 1;
					int subs = 0;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for Malee's Special Gravy" << endl;
					cout << "Press 2 for Chicken black pepper" << endl;
					cout << "Press 3 for chicken almond" << endl;
					cout << "**********************************************" << endl;
					cin >> subs;
					if (subs == 1)
					{
						chinesefood[2] = "Malee's Special Gravy";
						checkercg = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity5;
						while (quantity5 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity5;
						}
						cout << "Malee's special gravy is added to your order!" << endl;
					}
					else if (subs == 2)
					{
						chinesefood[2] = "Chicken black pepper";
						checkercg = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity5;
						while (quantity5 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity5;
						}
						cout << "chicken black pepper is added to your order!" << endl;
					}
					else if (subs == 3)
					{
						chinesefood[2] = "Chicken Almond";
						checkercg = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity5;
						while (quantity5 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity5;
						}
						cout << "chicken almond is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockgravy = 0;
						continue;
					}

				}
				else
				{
					cout << "Chicken gravy  is locked!";
				}
			}

			else if (ff == 4)
			{
				if (checkercr == true)
				{
					platesrice = quantity44;
				}
				if (checkercg == true)
				{
					gravyquantity = quantity5;
				}
				return 0;
			}
			else if (onevalue == true && ff == 5)
			{
				if (ff == 5)
				{
					if (checkercr == true)
					{
						platesrice = quantity44;
					}
					if (checkercg == true)
					{
						gravyquantity = quantity5;
					}
					bill();
					return 0;
				}
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 4);
	}
	else
	{
		cout << "You can't enter in the chinese menu!" << endl;
	}
	return 0;
}
int soup()
{
	if (entrysoup == 0)
	{
		int lockspecialsoup = 0;
		int lockvegetablesoup = 0;
		int lockmushroomsoup = 0;
		entrysoup = 1;
		int ff;
		string item, item1, item2;
		int quantity = 0;
		int quantity1 = 0;
		int quantity2 = 0;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order Malee's special soup:: " << endl;
			cout << "enter 2 for order vegetable soup::" << endl;
			cout << "enter 3 for order mushroom soup:: " << endl;
			cout << "enter 4 for exit from soup menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockspecialsoup == 0)
				{
					lockspecialsoup = 1;
					st2.suop[0] = "Malee's Special soup";
					st2.checkerspecialsoup = true;
					onevalue = true;
					cout << "enter plates::";
					cin >> quantity;
					while (quantity <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity;
					}
					cout << "Malee's special soup is added to your order!" << endl;
				}
				else
				{
					cout << "Malee's special soup is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockvegetablesoup == 0)
				{
					lockvegetablesoup = 1;
					st2.suop[1] = "Vegetable soup";
					st2.checkervegetablesoup = true;
					onevalue = true;
					cout << "enter plates::";
					cin >> quantity1;
					while (quantity1<= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity1;
					}
					cout << "vegetable soup is added to your order!" << endl;
				}
				else
				{
					cout << "vegetable soup is locked!" << endl;
				}
			}
			else if (ff == 3)
			{
				if (lockmushroomsoup == 0)
				{
					lockmushroomsoup = 1;
					st2.suop[2] = "Mushroom soup";
					st2.checkermushroomsoup = true;
					onevalue = true;
					cout << "enter plates::";
					cin >> quantity2;
					while (quantity2 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity2;
					}
					cout << "Mushroom soup is added to your order!" << endl;
				}
				else
				{
					cout << "Mushroom soup is locked!";
				}
			}

			else if (ff == 4)
			{
				if (st2.checkerspecialsoup == true)
				{
					st2.quantityspecialsoup = quantity;
				}
				if (st2.checkervegetablesoup == true)
				{
					st2.quantityvegetablesoup = quantity1;
				}
				if (st2.checkermushroomsoup == true)
				{
					st2.quantitymushroomsoup = quantity2;
				}
				return 0;
			}
			else if (onevalue == true && ff == 5)
			{
				if (st2.checkerspecialsoup == true)
				{
					st2.quantityspecialsoup = quantity;
				}
				if (st2.checkervegetablesoup == true)
				{
					st2.quantityvegetablesoup = quantity1;
				}
				if (st2.checkermushroomsoup == true)
				{
					st2.quantitymushroomsoup = quantity2;
				}
				bill();
				return 0;
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 4);
	}
	else
	{
		cout << "you can't enter in the soup menu. It is locked" << endl;
	}
	return 0;
}
int deserts()
{
	if (entrydesertfood == 0)
	{
		int lockcake = 0;
		int lockicecream = 0;
		int lockpastry = 0;
		entrydesertfood = 1;
		int ff;
		string item, item1, item2;
		int quantity = 0;
		int quantity1 = 0;
		int quantity2 = 0;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order cake:: " << endl;
			cout << "enter 2 for order icecream::" << endl;
			cout << "enter 3 for order pastry:: " << endl;
			cout << "enter 4 for exit from desert food menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockcake == 0)
				{
					lockcake = 1;
					int subp;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for one pound cake" << endl;
					cout << "Press 2 for two pound cake" << endl;
					cout << "Press 3 for candidates cake" << endl;
					cout << "**********************************************" << endl;
					cin >> subp;
					if (subp == 1)
					{
						item = "one pound cake";
						st1.checkercake = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "One pound cake is added to your order!" << endl;
					}
					else if (subp == 2)
					{
						item = "two pound cake";
						st1.checkercake = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "two pound cake is added to your order!" << endl;
					}
					else if (subp == 3)
					{
						item = "Candidates cake";
						st1.checkercake = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity;
						while (quantity <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity;
						}
						cout << "Candidates cake is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockcake = 0;
						continue;
					}
				}
				else
				{
					cout << "Cake is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockicecream == 0)
				{
					lockicecream = 1;
					int subb = 0;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for Special icecream" << endl;
					cout << "Press 2 for Plain icecream" << endl;
					cout << "Press 3 for choclate icecream" << endl;
					cout << "**********************************************" << endl;
					cin >> subb;
					if (subb == 1)
					{
						item1 = "Special icecream";
						st1.checkericecream = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "Special icecream is added to your order!" << endl;
					}
					else if (subb == 2)
					{
						item1 = "Plain icecream";
						st1.checkericecream = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "Plain icecream is added to your order!" << endl;
					}
					else if (subb == 3)
					{
						item1 = "Vanilla icecream";
						st1.checkericecream = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity1;
						while (quantity1 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity1;
						}
						cout << "Vanilla icecream is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockicecream = 0;
						continue;
					}
				}
				else
				{
					cout << "Icecream  is locked!" << endl;
				}
			}
			else if (ff == 3)
			{

				if (lockpastry == 0)
				{
					lockpastry = 1;
					int subs = 0;
					cout << endl << "**********************************************" << endl;
					cout << "Press 1 for Puff pastry" << endl;
					cout << "Press 2 for Filo pastry" << endl;
					cout << "Press 3 for Hot water crust pastry" << endl;
					cout << "**********************************************" << endl;
					cin >> subs;
					if (subs == 1)
					{
						item2 = "Puff pastry";
						st1.checkerpastry = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "Puff pastry is added to your order!" << endl;
					}
					else if (subs == 2)
					{
						item2 = "Filo pastry";
						st1.checkerpastry = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "Filo pastry is added to your order!" << endl;
					}
					else if (subs == 3)
					{
						item2 = "Hot water crust pastry";
						st1.checkerpastry = true;
						onevalue = true;
						cout << "enter quantity::";
						cin >> quantity2;
						while (quantity2 <= 0)
						{
							cout << "You can't enter the quantity in zero or in minus!" << endl;
							cout << "Input again!";
							cin >> quantity2;
						}
						cout << "Hot water crust pastry is added to your order!" << endl;
					}
					else
					{
						cout << "Please! Enter the value from menu.";
						lockpastry = 0;
						continue;
					}
				}
				else
				{
					cout << "Pastry is locked!";
				}
			}

			else if (ff == 4)
			{
				if (st1.checkercake == true)
				{
					st1.des[0] = item;
					st1.quantitycake = quantity;
				}
				if (st1.checkericecream == true)
				{
					st1.des[1] = item1;
					st1.quantityicecream = quantity1;
				}
				if (st1.checkerpastry == true)
				{
					st1.des[2] = item2;
					st1.quantitypastry = quantity2;
				}
				return 0;
			}
			else if (onevalue == true && ff == 5)
			{
				if (st1.checkercake == true)
				{
					st1.des[0] = item;
					st1.quantitycake = quantity;
				}
				if (st1.checkericecream == true)
				{
					st1.des[1] = item1;
					st1.quantityicecream = quantity1;
				}
				if (st1.checkerpastry == true)
				{
					st1.des[2] = item2;
					st1.quantitypastry = quantity2;
				}
				bill();
				return 0;
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 4);
	}
	else
	{
		cout << "you can't enter in the desets food menu. It is locked" << endl;
	}
	return 0;
}
int quantity = 0;
int quantity1 = 0;
int quantity2 = 0;
int quantity3 = 0;
int quantity4 = 0;
int drinks()
{
	int lockcokecan = 0;
	int lockspritecan = 0;
	int lockfantacan = 0;
	int lockfreshlime = 0;
	int locknestlejuice = 0;
	if (entrydrinks== 0)
	{
		
		entrydrinks = 1;
		int ff;
		string item, item1, item2,item3,item4;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order coke can:: " << endl;
			cout << "enter 2 for order sprite can::" << endl;
			cout << "enter 3 for order fanta can:: " << endl;
			cout << "enter 4 for order fresh lime::" << endl;
			cout << "enter 5 for nestle juice::" << endl;
			cout << "enter 6 for exit from drinks menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 7 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockcokecan == 0)
				{
					lockcokecan = 1;
					drink[0] = "Coke can";
					item = "Coke can";
					checkercoke = true;
					onevalue = true;
					cout << "enter quantity::";
					cin >> quantity;
					while (quantity <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity;
					}
					cout <<"Coke can is added to your order!" << endl;
				}
				else
				{
					cout << "Coke can is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockspritecan== 0)
				{
					lockspritecan = 1;
					item1 = "Sprite can";
					checkersprite = true;
					onevalue = true;
					cout << "enter quantity::";
					cin >> quantity1;
					while (quantity1 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity1;
					}
					cout << "Sprite can is added to your order!" << endl;
				}
				else
				{
					cout << "Sprite can is locked!" << endl;
				}
			}
			else if (ff == 3)
			{

				if ( lockfantacan== 0)
				{
					lockfantacan= 1;
					item2 = "fanta can";
					checkerfanta = true;
					onevalue = true;
					cout << "enter quantity::";
					cin >> quantity2;

					while (quantity2 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity2;
					}
					cout << "fanta can is added to your order!" << endl;
				}
				else
				{
					cout << "fanta can is locked!";
				}
			}
			else if (ff == 4)
			{
				if (lockfreshlime == 0)
				{
					lockfreshlime = 1;
					item3 = "fresh lime";
					checkerfreshlime = true;
					onevalue = true;
					cout << "enter quantity::";
					cin >> quantity3;
					while (quantity3 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity3;
					}
					cout << "fresh lime is added to your order!" << endl;
				}
				else
				{
					cout << "fresh lime  is locked!" << endl;
				}
			}
			else if (ff == 5)
			{
				if (locknestlejuice == 0)
				{
					locknestlejuice = 1;
					item4 = "nestle juice";
					checkernestlejuice = true;
					onevalue = true;
					cout << "enter quantity::";
					cin >> quantity4;
					while (quantity4 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity4;
					}
					cout << "nestle juice is added to your order!" << endl;
				}
				else
				{
					cout << "nestle juice is locked!" << endl;
				}
			}

			else if (ff == 6)
			{
				if (checkercoke == true)
				{
					coke= item;
					quantitycoke = &quantity;
				}
				if (checkersprite== true)
				{
					sprite= item1;
					quantitysprite = &quantity1;
				}
				if (checkerfanta == true)
				{
					fanta = item2;
					quantityfanta = &quantity2;
				}
				if (checkerfreshlime == true)
				{
					freshlime = item3;
					quantityfreshlime = &quantity3;
				}
				if (checkernestlejuice == true)
				{
					nestlejuice = item4;
					quantitynestlejuice = &quantity4;
				}
				return 0;
			}
			else if (onevalue == true && ff == 7)
			{
				if(checkercoke == true)
				{
					coke = item;
					quantitycoke = &quantity;
				}
				if (checkersprite == true)
				{
					sprite = item1;
					quantitysprite = &quantity1;
				}
				if (checkerfanta == true)
				{
					fanta = item2;
					quantityfanta = &quantity2;
				}
				if (checkerfreshlime == true)
				{
					freshlime = item3;
					quantityfreshlime = &quantity3;
				}
				if (checkernestlejuice == true)
				{
					nestlejuice = item4;
					quantitynestlejuice = &quantity4;
				}
				bill();
				return 0;
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 6);
	}
	else
	{
		cout << "you can't enter in the drinks menu. It is locked" << endl;
	}
	return 0;
}
int squantity = 0;
int squantity1 = 0;
int squantity2 = 0;
int seaf()
{
	if (entryseafood == 0)
	{
		
		int lockcuttlefish = 0;
		int lockshrimp= 0;
		int lockkrill = 0;
		entryseafood = 1;
		int ff;
		string item, item1, item2;
		do
		{
			cout << endl << "**********************************************" << endl;
			cout << "enter 1 for order cuttlefish:: " << endl;
			cout << "enter 2 for order shrimp::" << endl;
			cout << "enter 3 for order krill:: " << endl;
			cout << "enter 4 for exit from sea  food menu:: " << endl;
			if (onevalue)
			{
				cout << "enter 5 for bill::" << endl;
			}
			cout << "**********************************************" << endl;
			cin >> ff;
			if (ff == 1)
			{
				if (lockcuttlefish== 0)
				{
					lockcuttlefish = 1;
					seafood[0] = "Cuttle fish";
					checkercuttlefish = true;
					onevalue = true;
					cout << "enter plates::";
					cin >> squantity;
					while (quantity <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity;
					}
					cout << "Cuttle fish is added to your order!" << endl;
				}
				else
				{
					cout << "Cuttle fish is locked!" << endl;
				}
			}
			else if (ff == 2)
			{

				if (lockshrimp == 0)
				{
					lockshrimp = 1;
					seafood[1] = "Shrimp";
					checkershrimp = true;
					onevalue = true;
					cout << "enter plates::";
					cin >> squantity1;
					while (quantity1 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity1;
					}
					cout << "Shrimp is added to your order!" << endl;
				}
				else
				{
					cout << "Shrimp is locked!" << endl;
				}
			}
			else if (ff == 3)
			{

				if (lockkrill == 0)
				{
					lockkrill = 1;
					seafood[2] = "Krill";
					checkerkrill= true;
					onevalue = true;
					cout << "enter plates::";
					cin >> squantity2;
					while (quantity2 <= 0)
					{
						cout << "You can't enter the quantity in zero or in minus!" << endl;
						cout << "Input again!";
						cin >> quantity2;
					}
					cout << "Krill is added to your order!" << endl;
				}
				else
				{
					cout << "Krill is locked!";
				}
			}

			else if (ff == 4)
			{
				if (checkercuttlefish== true)
				{
					 quantitycuttlefish= &squantity;
				}
				if (checkershrimp == true)
				{
					quantityshrimp = &squantity1;
				}
				if (checkerkrill == true)
				{
					quantitykrill = &squantity2;
				}
			}
			else if (onevalue == true && ff == 5)
			{
				if (checkercuttlefish == true)
				{
					quantitycuttlefish = &squantity;
				}
				if (checkershrimp == true)
				{
					quantityshrimp = &squantity1;
				}
				if (checkerkrill == true)
				{
					quantitykrill = &squantity2;
				}
				bill();
				return 0;
			}
			else
			{
				cout << "Please enter value from menu!" << endl;
				continue;
			}

		} while (ff != 4);
	}
	else
	{
		cout << "you can't enter in the sea food menu. It is locked" << endl;
	}
	return 0;
}
void bill()
{
	fole.open("asim.txt");
	fole << "Name" << setw(30) << "Quantity" << setw(20) << "Price" << endl;
	double totalprice = 0;
	cout << endl << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Item"<<setw(30)<<"Quantity" << setw(20)<< "Price" << endl;
	if (checkerp == true)
	{
		cout << fastfood[0]<<setw(30-fastfood[0].length()) << quantitypizza << setw(24) << quantitypizza * pricefastfood[0] << endl;
		fole << fastfood[0] << setw(30 - fastfood[0].length()) << quantitypizza << setw(24) << quantitypizza * pricefastfood[0] << endl;
		totalprice += quantitypizza * pricefastfood[0];
	}
	if (checkerb == true)
	{
		fole<< fastfood[1] << setw(30 - fastfood[1].length()) << quantityburger << setw(24) << quantityburger * pricefastfood[1] << endl;
		cout << fastfood[1]<<setw(30-fastfood[1].length()) << quantityburger << setw(24) << quantityburger * pricefastfood[1] << endl;
		totalprice += quantityburger * pricefastfood[1];
	}
	if (checkers == true)
	{
		fole<< fastfood[2] << setw(30 - fastfood[2].length()) << quantityshawarma << setw(24) << quantityshawarma * pricefastfood[2] << endl;
		cout << fastfood[2]<< setw(30-fastfood[2].length()) << quantityshawarma << setw(24) << quantityshawarma * pricefastfood[2] << endl;
		totalprice += quantityshawarma * pricefastfood[2];
	}
	if (checkercbl == true)
	{
		fole<< "chickenboneless" << setw(30 - strlen("chickenboneless")) << "1" << setw(24) << pricedesifood[0] << endl;
		cout << "chickenboneless" <<setw(30-strlen("chickenboneless")) << "1" << setw(24) << pricedesifood[0] << endl;
		totalprice += pricedesifood[0];
	}
	if (checkercb == true)
	{
		fole<< "chickenbone" << setw(30 - strlen("chickenbone")) << "1" << setw(24) << pricedesifood[1] << endl;
		cout << "chickenbone" <<setw(30-strlen("chickenbone")) << "1" << setw(24) << pricedesifood[1] << endl;
		totalprice += pricedesifood[1];
	}
	if (checkermb == true)
	{
		fole<< "muttonboneless" << setw(30 - strlen("muttonboneless")) << "1" << setw(24) << pricedesifood[2] << endl;
		cout << "muttonboneless" <<setw(30-strlen("muttonboneless")) <<"1" << setw(24) << pricedesifood[2] << endl;
		totalprice += pricedesifood[2];
	}
	if (checkercr == true)
	{
		fole<< chinesefood[0] << setw(30 - chinesefood[0].length()) << platesrice << setw(24) << platesrice * pricechinesefood[0] << endl;
		cout << chinesefood[0]<<setw(30-chinesefood[0].length()) << platesrice << setw(24) << platesrice * pricechinesefood[0] << endl;
		totalprice += platesrice * pricechinesefood[0];
	}
	if (checkersr == true)
	{
		fole<< chinesefood[1] << setw(30 - chinesefood[1].length()) << springquantity << setw(24) << pricechinesefood[1] << endl;
		cout << chinesefood[1] <<setw(30-chinesefood[1].length()) << springquantity<< setw(24) << pricechinesefood[1] << endl;
		totalprice += pricechinesefood[1];
	}
	if (checkercg == true)
	{
		fole<< chinesefood[2] << setw(30 - chinesefood[2].length()) << gravyquantity << setw(24) << gravyquantity * pricechinesefood[2] << endl;
		cout << chinesefood[2] <<setw(30-chinesefood[2].length()) << gravyquantity << setw(24) << gravyquantity * pricechinesefood[2] << endl;
		totalprice += gravyquantity * pricechinesefood[2];
	}
	if (st2.checkerspecialsoup == true)
	{
		fole<< st2.suop[0] << setw(30 - st2.suop[0].length()) << st2.quantityspecialsoup << setw(24) << st2.quantityspecialsoup * pricesoup[0] << endl;
		cout << st2.suop[0]<<setw(30-st2.suop[0].length()) << st2.quantityspecialsoup << setw(24) << st2.quantityspecialsoup * pricesoup[0] << endl;
		totalprice += st2.quantityspecialsoup * pricesoup[0];
	}
	if (st2.checkervegetablesoup == true)
	{
		fole<< st2.suop[1] << setw(30 - st2.suop[1].length()) << st2.quantityvegetablesoup << setw(24) << st2.quantityvegetablesoup * pricesoup[1] << endl;
		cout << st2.suop[1] <<setw(30-st2.suop[1].length()) << st2.quantityvegetablesoup << setw(24) << st2.quantityvegetablesoup * pricesoup[1] << endl;
		totalprice += st2.quantityvegetablesoup * pricesoup[1];
	}
	if (st2.checkermushroomsoup == true)
	{
		fole<< st2.suop[2] << setw(30 - st2.suop[2].length()) << st2.quantitymushroomsoup << setw(24) << st2.quantitymushroomsoup * pricesoup[2] << endl;
		cout << st2.suop[2]<<setw(30-st2.suop[2].length()) << st2.quantitymushroomsoup << setw(24) << st2.quantitymushroomsoup * pricesoup[2] << endl;
		totalprice += st2.quantitymushroomsoup * pricesoup[2];
	}
	if (st1.checkercake == true)
	{
		fole<< st1.des[0] << setw(30 - st1.des[0].length()) << st1.quantitycake << setw(24) << st1.quantitycake * st1.pricedeserts[0] << endl;
		cout << st1.des[0] << setw(30 - st1.des[0].length()) << st1.quantitycake << setw(24) << st1.quantitycake * st1.pricedeserts[0] << endl;
		totalprice += st1.quantitycake * st1.pricedeserts[0];
	}
	if (st1.checkericecream == true)
	{
		fole<< st1.des[1] << setw(30 - st1.des[1].length()) << st1.quantityicecream << setw(24) << st1.quantityicecream * st1.pricedeserts[1] << endl;
		cout << st1.des[1] << setw(30 - st1.des[1].length()) << st1.quantityicecream << setw(24) << st1.quantityicecream * st1.pricedeserts[1] << endl;
		totalprice += st1.quantityicecream * st1.pricedeserts[1];
	}
	if (st1.checkerpastry == true)
	{
		fole<< st1.des[2] << setw(30 - st1.des[2].length()) << st1.quantitypastry << setw(24) << st1.quantitypastry * st1.pricedeserts[2] << endl;
		cout << st1.des[2] << setw(30 - st1.des[2].length()) << st1.quantitypastry << setw(24) << st1.quantitypastry * st1.pricedeserts[2] << endl;
		totalprice += st1.quantitypastry * st1.pricedeserts[2];
	}
	if (checkercoke == true)
	{
		fole<< coke << setw(30 - coke.length()) << *quantitycoke << setw(24) << (*quantitycoke) * pricedrinks[0] << endl;
		cout << coke << setw(30 - coke.length()) << *quantitycoke << setw(24) << (*quantitycoke) * pricedrinks[0]<<endl;
		totalprice += (*quantitycoke) * pricedrinks[0];
	}
	if (checkersprite == true)
	{
		fole<< sprite << setw(30 - sprite.length()) << *quantitysprite << setw(24) << (*quantitysprite) * pricedrinks[1] << endl;
		cout << sprite << setw(30 - sprite.length()) << *quantitysprite << setw(24) << (*quantitysprite) * pricedrinks[1] << endl;
		totalprice += (*quantitysprite) * pricedrinks[1];
	}
	if (checkerfanta == true)
	{
		fole<< fanta << setw(30 - fanta.length()) << *quantityfanta << setw(24) << (*quantityfanta) * pricedrinks[2] << endl;
		cout << fanta << setw(30 - fanta.length()) << *quantityfanta << setw(24) << (*quantityfanta) * pricedrinks[2] << endl;
		totalprice += (*quantityfanta) * pricedrinks[2];
	}
	if (checkerfreshlime == true)
	{
		fole<< freshlime << setw(30 - freshlime.length()) << *quantityfreshlime << setw(24) << (*quantityfreshlime) * pricedrinks[3] << endl;
		cout << freshlime << setw(30 - freshlime.length()) << *quantityfreshlime << setw(24) << (*quantityfreshlime) * pricedrinks[3] << endl;
		totalprice += (*quantityfreshlime) * pricedrinks[3];
	}
	if (checkernestlejuice == true)
	{
		fole<< nestlejuice << setw(30 - nestlejuice.length()) << *quantitynestlejuice << setw(24) << (*quantitynestlejuice) * pricedrinks[4] << endl;
		cout << nestlejuice << setw(30 - nestlejuice.length()) << *quantitynestlejuice << setw(24) << (*quantitynestlejuice) * pricedrinks[4] << endl;
		totalprice += (*quantitynestlejuice) * pricedrinks[4];
	}
	if (checkercuttlefish == true)
	{
		fole<< seafood[0] << setw(30 - seafood[0].length()) << *quantitycuttlefish << setw(24) << (*quantitycuttlefish) * priceseafood[0] << endl;
		cout << seafood[0]<< setw(30 - seafood[0].length()) << *quantitycuttlefish << setw(24) << (*quantitycuttlefish) * priceseafood[0] << endl;
		totalprice += (*quantitycuttlefish) * priceseafood[0];
	}
	if (checkershrimp == true)
	{
		fole<< seafood[1] << setw(30 - seafood[1].length()) << *quantityshrimp << setw(24) << (*quantityshrimp) * priceseafood[1] << endl;
		cout << seafood[1]<< setw(30 - seafood[1].length()) << *quantityshrimp << setw(24) <<(*quantityshrimp) * priceseafood[1] << endl;
		totalprice += (*quantityshrimp) * priceseafood[1];
	}
	if (checkerkrill == true)
	{
		fole<< seafood[2] << setw(30 - seafood[2].length()) << *quantitykrill << setw(24) << (*quantitykrill) * priceseafood[2] << endl;
		cout << seafood[2]<< setw(30 - seafood[2].length()) << *quantitykrill << setw(24) << (*quantitykrill) * priceseafood[2] << endl;
		totalprice += (*quantitykrill) * priceseafood[2];
	}
	cout << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Total Price is " << totalprice << "$" << endl;
	cout << "Thankyou for order! " << endl;
	fole.close();
	exit(0);
}
int main()
{
	
	int retr=0;
	int tester;
	do
	{
		cout << endl << "**********************************************" << endl;
		cout << "enter 1 for fast food::  " << endl;
		cout << "enter 2 for desi food::  " << endl;
		cout << "enter 3 for chinease food::  " << endl;
		cout << "enter 4 for sea food::  " << endl;
		cout << "enter 5 for soup::  " << endl;
		cout << "enter 6 for drinks::  " << endl;
		cout << "enter 7 for deserts::  " << endl;

		if (onevalue)
		{
			cout << "enter 8 for bill::" << endl;
		}
		cout << "**********************************************" << endl;
		cin >> tester;
		if (tester == 1)
		{
			fastf();       
		}
		else if (tester == 2)
		{
			desif();
		}
		else if (tester == 3)
		{
			chif();
		}
		else if (tester == 4)
		{
			seaf();                         //from pointers.
		}
		else if(tester==5)
		{
			soup();                    //from structures.
		}
		else if (tester == 6)
		{
			drinks();                      //from pointers
		}
		else if(tester==7)
		{
			deserts();                     //from structues.
		}
		else if (tester == 8)
		{
			bill();
			return 0;
		}
		else
		{
			cout << "Please! Enter value from menu!" << endl;
		}
	} 
	while (tester != 8);
}
