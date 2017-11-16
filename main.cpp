/**
 *  File: main.cpp
 *  Email: mezaa145534@student.vvc.edu
 *  Developer: Alexander Meza
 *  Description: Write a program that prints out a bank statement. The program
 *  input is a sequence of transactions. Each transaction has the form:
 *  day   amount   description
 *  For example,
 *  15 -224 Check 2140
 *  16 1200 ATM deposit
 *  Your program should read in the descriptions and then print out a statement
 *  listing all deposits, withdrawals, and the daily balance for each day. You
 *  should then compute the interest earned by the account. Use both the
 *  minimum daily balance and the average daily balance methods for computing
 *  interest and print out both values. Use an interest rate of 0.5 percent per
 *  month, and assume the month has 30 days. You may assume that the input data
 *  are sorted by the date. You may also assume the first entry is of the form:
 *  1 1143.24 Initial Balance
 *
*/
#include<iostream>
#include<string>
#include<vector>


class Transaction
{
public:
    Transaction();
    void read_input(); //reads input regarding: day  amount  description
    int get_day(); //
    double get_amount();
    void print() const;
private:
    int day; //first entry: 1
    double amount; //first entry: 1143.24
    std::string description; //first entry: initial balance
};

const int MAX_DAY = 30;

Transaction::Transaction()
{
    day = 0;
    amount = 0.9;
}

void Transaction::read_input()
{
    std::cin >> day;
    std::cin >> amount;
    std::getline(std::cin,description);
    std::string remainder;
    std::getline(std::cin,remainder);
}

void Transaction::print() const
{
    std::cout << "day: " << day << std::endl;
    std::cout << "amount: " << amount << std::endl;
    std::cout << "description: " << description << std::endl;
}

int Transaction::get_day()
{
    day = 1;
    for(day;day<MAX_DAY+1;day++)
    {
    }        
}

double Transaction::get_amount()
{

}

void print_transactions(const std::vector<Transaction> t)
{
    

}


class Statement
{
public:
    Statement();
    void read_input(); //outer loop, calls other read function
    double compute_balances(); //summing balances
    void print();
    double get_avg_daily_balance(); //
    double get_min_daily_balance();
private:
    std::vector<Transaction> transaction;
    std::vector<double> daily_balances; //use for avg & min daily balances
};

Statement::Statement()
{
}

void Statement::read_input()
{
    
}

//iterate a for loop; add up a total of the balance.
double Statement::compute_balances()
{
    //variable for counter
   int counter = 0;
   for(int i=0;i<counter;i++) 
   {
   }
}

void Statement::print()
{
}

double Statement::get_avg_daily_balance()
{
   double avg_balance;


}

double Statement::get_min_daily_balance() 
{
    int i = 0;
    double lowest = 0.0;
    for(i;i<daily_balances.size()-1;i++)
    {
        lowest = daily_balances[i];
        if(daily_balances[i]<lowest)
            lowest = daily_balances[i];
    }
  
}



int main()
{
   std::vector<Transaction> transaction;
   bool more = true;
   while(more)
   {
        Transaction t;
        t.read_input();
        transaction.push_back(t);
        std::cout << "Enter another (Y/N):";
        std::string response;
        std::cin.ignore();
        std::cin >> response;
        if(response != "y" || response != "Y")
            more = false;
   }
    print_transactions(transaction);

    return 0;
}
