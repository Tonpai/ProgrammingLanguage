/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
interface Account {
    void deposit(int amount);
    boolean withdraw(int amount);
}

class SavingAccount implements Account {
    private int current;
    
    SavingAccount(){
        this.current = 0;
    }
    
    @Override
    public void deposit(int amount){
        this.current = this.current + amount;
    }
    
    @Override
    public boolean withdraw(int amount){
        if(this.current - amount < 0){
            return false;
        }else{
            this.current = this.current - amount;
            return true;
        }
    }
}

public class Main
{
	public static void main(String[] args) {
		Account savingAccount = new SavingAccount();
		savingAccount.deposit(5000);
		savingAccount.withdraw(200);
	}
}
