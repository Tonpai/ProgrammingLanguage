from abc import ABC, abstractmethod

class Account(ABC):
    @abstractmethod
    def deposit(self, amount):
        pass
    
    @abstractmethod
    def withdraw(self, amount):
        pass

class SavingAccount(Account):
    def __init__(self):
        self.current = 0
        
    def deposit(self,amount):
        self.current = self.current + amount
    
    def withdraw(self, amount):
        if(self.current - amount < 0):
            return False
        else:
            self.current = self.current - amount
            return True

def main():
    saving_account = SavingAccount()
    saving_account.deposit(5000)
    saving_account.withdraw(200)

if __name__ == '__main__':
    main()
        