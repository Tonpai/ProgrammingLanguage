/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using System;

interface Account {
    void deposit(int amount);
    bool withdraw(int amount);
}

class SavingAccount: Account {
    private int current;
    
    public SavingAccount(){
        this.current = 0;
    }
    
    void Account.deposit(int amount){
        this.current = this.current + amount;
    }
    
    bool Account.withdraw(int amount){
        if(this.current - amount < 0){
            return false;
        }else{
            this.current = this.current - amount;
            return true;
        }
    }
}

class HelloWorld {
  static void Main() {
    Account savingAccount = new SavingAccount();
	savingAccount.deposit(5000);
	savingAccount.withdraw(200);
  }
}