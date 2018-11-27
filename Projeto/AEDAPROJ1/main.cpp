#include "Company.h"

void printHeader(){
  cout<< "***************************************************************"<< endl;
  cout<< "**************** CODE DATABASE VERSION CONTROL ****************"<< endl;
  cout<< "***************************************************************"<< endl << endl;
}

string getCompanyName(){
  string companyName;
  cout<< "What's the name of your company? ";
  cin>> companyName;
  return companyName;
}

unsigned int printMenuAndGetChoice(){
  unsigned int choice;
  cout << "MENU:"<<endl;
  cout << "1. Add user"<<endl;
  cout << "2. Remove user"<<endl;
  cout << "3. Total amount of salaries"<<endl;
  cout << "4. List of salaries"<<endl;
  cout << "0. EXIT"<<endl;
  cout << "Choose a number: "<<endl;
  cin >> choice;

  if(!cin.good() || choice>4 || choice<0 ){
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Choice out of range or not a number" <<endl;
    printMenuAndGetChoice();
  }
  return choice;
}

void adduser(Company* company)
{
    string name, email, date, position;
  cout<<"Name? " <<endl;
  cin>> name;
  cout<<"Email? " <<endl;
  cin>> email;
  cout<<"Date of birth? " <<endl;
  cin>> date;
  cout<<"Position? " <<endl;
  cin>> position;

  switch(position){
    case(manager):
      Manager* manager = new Manager(name, date, email);
      company->addUser(manager);
      break;
    case(junior):
      Junior* junior = new Junior(name, date, email);
      company->addUser(junior);
      break;
    case(senior):
      double basesalary;
      int nif;
      cout<<"Base salary? " <<endl;
      cin>> basesalary;
      cout<<"NIF? " <<endl;
      cin>> nif;
      Senior* senior = new Senior(name, date, email, basesalary, nif);
      company->addUser(senior);
      break;
  }

}

int remUser(Company* company){
  string user;
  cout<<"Name? " <<endl;
  cin>> user;
  return(company->removeUser(user));

}

void menu(Company* company){
  unsigned int choice = 1;
  while(choice !=0){
  choice=printMenuAndGetChoice();
  switch(choice){
    case(0):
      break;
    case(1):
      adduser(company);
      break;
    case(2):
      remUser(company);
      break;
    case(3):
      cout << company->getTotalValue() << endl;
      break;
    case(4):
      for(size_t i = 0; i< company->getSalaries().size(); i++)
        cout << company->getSalaries().at(i)<< endl;
      break;
    case(5):
      for(size_t i = 0; i< company->getCurrentProjects().size(); i++)
        cout << company->getCurrentProjects().at(i)->getName()<< endl;
      break;


  }
}
}


int main()
{
  string companyName;
  printHeader();
  companyName = getCompanyName();
  Company* company = new Company(companyName);
  menu(company);
  return 0;

}
