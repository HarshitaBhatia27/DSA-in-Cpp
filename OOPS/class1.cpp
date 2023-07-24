#include<iostream>
#include<cstring>
using namespace std;
class hero
{   
    
    int health;

    public:
    char level;
    char *name;
    static int TimetoComplete;
    //constructor
    hero()
    {
        cout<<"Constructor called"<<endl;
        name = new char[100]; //dynamic array allocation
    }

    //Parametrised constructor
    hero(int health, char level)
    {
        this->health=health;
        this->level=level;
    }

    // copy constructor
    hero(hero&  temp){
        cout<<"Copy constructor called"<<endl;
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;          //deep copy
        this->health=temp.health;
        this->level=temp.level;
    }
    void print()
    {
        cout<<"[ Level: "<<level<<" , ";
        cout<<"Heath: "<<health<<" , ";
        cout<<"Name: "<<this->name<<" ] ";
        cout<<endl;
    }

//getter and setter to access private memebers of a class
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char l)
    {
        level=l;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    //static function
    static int random()
    {
        return TimetoComplete;
    }

    //destructor
    ~hero()
    { 
        cout<<"Destructor called"<<endl;
    }
};
//initialise static member
int hero:: TimetoComplete=5;

int main()
{
    //static allocation
    // hero ramesh;
    // ramesh.setHealth(78);
    // ramesh.level='A';
    // cout<<"Health is:"<<ramesh.getHealth()<<endl;
    // cout<<"Level is: "<<ramesh.level<<endl;
    
    hero ram;
    // ram.setHealth(20);
    // ram.setLevel('C');

    // hero ramesh(ram); //copy constructor
    // ramesh.print();

    //dynamic
    hero *b= new hero;
    // b->setHealth(50);
    // b->setLevel('B');
    // cout<<"Health is:"<<b->getHealth()<<endl;
    // cout<<"Level is: "<<(*b).level<<endl;

//     hero hero1;
//     hero1.setHealth(12);
//     hero1.setLevel('B');
//     char name[] = "Ramesh";
//     hero1.setName(name);
//     hero1.print();

//    //------default copy constructor----
//     hero hero2(hero1);
//     hero2.print();
//     hero1.name[0]='S';
//     hero1.print();
    
//     //hero2.print(); //changes applied to hero1 are also applied in hero2 in case of shallow copy
   
//    hero1=hero2;  //copy assignment operator
//    hero1.print(); 
   
   cout<<hero::TimetoComplete<<endl;  //no need to create object to access it
   cout<<hero::random()<<endl;
   delete b;   //manual ddestructor call for dynamic allocated objects

    return 0;
}