#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

class Customers
{
public:
    std::string name, gender, address;
    int age, mobileNo, cusID;
    char all[999];

    void getDetails()
    {

        std::ofstream out("old-customers.txt", std::ios::app);
        {
            std::cout << "Enter Customer ID: ";
            std::cin >> cusID;
            std::cout << "Enter Name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter Mobile Number: ";
            std::cin >> mobileNo;
            std::cout << "Enter Address: ";
            std::cin >> address;
            std::cout << "Enter Gender: ";
            std::cin >> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress" << address << "\nGender: " << gender << std::endl;
        out.close();

        std::cout << "\nSAVED \nNOTE: We save your details record for future purposes\n"
                  << std::endl;
    }

    void showDetails()
    {
        std::ifstream in("old-customers.txt");
        {
            if (!in)
                std::cout << "File Error!" << std::endl;
            while (!(in.eof()))
            {
                in.getline(all, 999);
                std::cout << all << std::endl;
            }
            in.close();
        }
    }
};

class Cabs
{
public:
    int cabChoice, kilometers;
    float cabCost, lastCabCost;

    void cabDetails()
    {
        std::cout << "We collaborated with fastest, safest, and smartest cab services arround the country" << std::endl;
        std::cout << "------------------ABC Cabs------------------" << std::endl;
        std::cout << "1. Rent a Standard Cab - Rs.15/KM" << std::endl;
        std::cout << "2. Rent a Luxury Cab - Rs.25/KM" << std::endl;
        std::cout << "\nTo calculate the cost for your journey: " << std::endl;
        std::cout << "Enter which kind of cab you need: ";
        std::cin >> cabChoice;
        std::cout << "Enter Kilometers you have to travel: ";
        std::cin >> kilometers;

        int hireCab;
        switch (cabChoice)
        {
        case 1:
            cabCost = kilometers * 15;
            std::cout << "\nYour tour cost " << cabCost << " rupees for a standard cab" << std::endl;
            std::cout << "Press 1 to hire this cab: or";
            std::cout << "Press 2 to select another cab: ";
            std::cin >> hireCab;
            system("CLS");

            switch (hireCab)
            {
            case 1:
                lastCabCost = cabCost;
                std::cout << "\nYou have successfully hired a Standard Cab" << std::endl;
                std::cout << "Goto Menu and take the receipt" << endl;
                break;
            case 2:
                cabDetails();
                break;
            default:
                std::cout << "Invalid Input! Redirecting to previous menu \nPlease Wait " << std::endl;
                Sleep(999);
                system("CLS");
                cabDetails();
                break;
            }
            break;

        default:
            std::cout << "Invalid Input! Redirecting to Main menu \nPlease Wait " << std::endl;
            Sleep(1100);
            system("CLS");
            menu();
            break;
        }
        std::cout << "\nPress 1 to Redirect Main menu: " << std::endl;
        std::cin >> hireCab;
        system("CLS");
        if (hireCab == 1)
            menu();
        else
            menu();
    }
};

class Booking
{
public:
    int chooseHotel, choosePack;
    float hotelCost;

    void hotels()
    {
        std::string hotelNo[] = {"Avendra", "ChoiceYou", "ElephantBay"};
        for (int i = 0; i < 3; ++i)
        {
            std::cout << (i + 1) << ". Hotel " << hotelNo[i] << std::endl;
        }
        std::cout << "\nCurrently we collaborate with above hotels!" << std::endl;
        std::cout << "Press any key to go back or\nEnter number of the hotel you want to book: ";
        std::cin >> chooseHotel;

        system("CLS");
        switch (chooseHotel)
        {
        case 1:
            std::cout << "";
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    }
};

class Charges
{
};

int main()
{
    std::cout << "Hello World";
    return 0;
}