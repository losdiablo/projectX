#include  <bits/stdc++.h>
using namespace std;
string questions [30][5]=
	{
		{"1. The value 132.54 can represented using which data type?",  "A )double",  "B )void",  "C )int",  "D )boolean"},
		{"2. Which of the following is an abstract data type?",  "A )int"  ,"B )double"  ,"C )string"  ,"D )class"},
		{"3. Which of the following literal integer constants are hexadecimal?",  "A )0x1a",  "B )024",  "C )01100100",  "D )hex01100100"},
		{"4. What is the range of the unsigned char type?",  "A )-127 to 128  ","B )0 to 128 ", "C )0 to 254 ", "D )0 to 255"},
		{"5. Which of the following cannot be friend?",  "A )Function ","B )Class ", "C )Object ", "D )perator function"},
		{"6. cout is a/an __________ .?",  "A )perator ", "B )unction",  "C )bject ", "D )acro"},
		{"7. Which of the following statements is correct?",  "A )ase class pointer cannot point to derived class." ,  "B )erived class pointer cannot point to base class. " , "C )ointer to derived class cannot be created." , "D )ointer to base class cannot be created."},
		{"8. Which of the following does not come under integer literals?",  "A )octal",  "B )binary",  "C )decimal",  "D )hexadecimal"},
		{"9. What is the value of the literal 101?", "A )a"  ,"B )c  ","C )B  ","D )A"},
		{"10. Which of the following is not a type of constructor?", "A )Copy constructor " ,"B )Friend constructor"  ,"C )Default constructor " ,"D )Parameterized constructor"},
		{"1. Which is used to check the error in the block?","A )try  ","B )throw  ","C )catch  ","D )none of the above"},
		{"2. Which of the following statements is NOT valid about operator overloading?","A )Only existing operators can be overloaded.  ","B )Overloaded operator must have at least one operand of its class type.  ","C )The overloaded operators follow the syntax rules of the original operator.  ","D )None of the above"},
		{"3. What is meant by multiple inheritance?","A )Deriving a base class from derived class  ","B )Deriving a derived class from base class  ","C )Deriving a derived class from more than one base class  ","D )None of the above"},
		{"4. What is the validity of template parameters?","A )inside that block only  ","B )inside the class  ","C )whole program  ","D )any of the above mentioned"},
		{"5. Which operator is used to declare the destructor?","A )#  ","B )$  ","C )~  ","D )@"},
		{"6. What is meant by template parameter?","A )It can be used to pass a type as argument  ","B )It can be used to evaluate a type.  ","C )It can of no return type  ","D )None of the above"},
		{"7. Which header file is used to declare the complex number?","A )complexnum  ","B )complex  ","C )complexnumber  ","D )none of the above"},
		{"8. Which of the following operator can’t be overloaded?","A )::  ","B )+  ","C )-  ","D )[]"},
		{"9. Where does the exception are handled?","A )inside the program  ","B )outside the regular code  ","C )both a & b  ","D )none of the above"},
		{"10. Operator overloading means?","A )making c++ operator works with objects  ","B )giving new meaning to existing operator  ","C )making new operator  ","D )both a & b"},
		{"1. Which is used to do the dereferencing?","A )pointer without asterix  ","B )value without asterix  ","C )pointer with asterix  ","D )value with asterix"},
		{"2. The Object is not declared for which class?","A )parent  ","B )base  ","C )abstract  ","D )derived"},
		{"3. Which of the following correctly declares an array?","A )int array[10];  ","B )int array;  ","C )array{10};  ","D )array array[10];"},
		{"4. The constructor without parameter is called?","A )method Constructor  ","B )default Constructor  ","C )operator Constructor  ","D )function Constructor"},
		{"5. Which of the following is user defined data type?","A )public  ","B )private  ","C )class  ","D )both A and B"},
		{"6. A __________ is a special method used to initialize the instance variable of a class.","A )member function  ","B )destructor  ","C )constructor  ","D )structure"},
		{"7. Which of the following accesses the seventh element stored in array?","A )array[6]  ","B )array[7]  ","C )array(7)  ","D )array(6)"},
		{"8. A constructor that accepts __________ parameters is called the default constructor","A )one  ","B )two  ","C )no  ","D )three"},
		{"9. What features make C++ so powerful?","A )Easy implementation  ","B )Code reusability  ","C )Easy memory management  ","D )All the above"},
		{"10. The goal of operator overloading is __________.","A )To help the user of a class  ","B )To help the developer of a class  ","C )To help define friend function  ","D )None of the above"}
	};
char correctAnswers[30]={'c','b','a','c','b','c','d','a','d','d','a','d','c','a','c','a','b','a','b','d','c','c','a','b','c','c','a','c','d','a'};
char inputedAnswers[10]={'0','0','0','0','0','0','0','0','0','0'};
bool ifAnswered[10];
int result=0;
int orderOfQuestions=0;	
void cleanConsole();
void declareType(char versionTypeFromM);
void nextQuestion(int number);
void options();
void previousQestion();
void answerQuestion();
void skipQuiestion();
void checkerAndResult();
void lastPart();
string PresentDateTime();
int main()
	{
	srand(time(0));
	char versionType='A' + rand()%3;
	declareType(versionType);
	cout<<PresentDateTime()<<endl			
		<<"Version "<<versionType<<endl<<endl
		<<"enter your personal information and u got 10 minutes "<<endl<<endl;
	string eName,eEmail;
	cout<<"enter your name:";
	getline(cin,eName);
	cout<<endl;
	cout<<"enter your email:";
	getline(cin,eEmail);
	cout<<endl;
	cleanConsole();
	nextQuestion(orderOfQuestions);
	return 0;
	}
char versionType;	
void declareType(char versionTypeFromM)
		{
		versionType=versionTypeFromM;
		if (versionType=='A')
			{
			orderOfQuestions=0;
			}
		else if (versionType=='B')
			{
			orderOfQuestions=10;
			}
		else
			{
			orderOfQuestions=20;	
			}	
		}	
//i dont know what this means just googled and copied to shot date and time 		
string PresentDateTime()
	{
    time_t tt;
    struct tm *st;
    time(&tt);
    st = localtime(&tt);
    return asctime(st);
	}
	//copied from stakoverflow
void cleanConsole()
	{
	// cout << "\x1B[2J\x1B[H";
	// getch();
	// clrscr();
	#if defined _WIN32
	    system("cls");
	    //clrscr(); // including header file : conio.h
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	    system("clear");
	    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences
	#elif defined (__APPLE__)
	    system("clear");
	#endif
	}
void nextQuestion(int number)
	{
	for (int i = 0; i < 5; ++i)
		{
		cout<<questions[number][i];
		cout<<endl;	
		}
	if (ifAnswered[orderOfQuestions]==true)
		{
		cout<<endl<<"ur answer:"<<inputedAnswers[orderOfQuestions]<<endl;	
		}	
	options();		
	}
void options()
	{
	cout<<endl<<endl;	
	short int option;
	cout<<"chose option:"<<endl<<"1 )answer"<<endl
						 <<"2 )return to the previous question"<<endl
						 <<"3 )skip this questio"<<endl
						 <<"enter one of the option's number: "	;
	cin>>option;
	cout<<endl;
	if (option==1)
		{	
		answerQuestion();	
		}
	else if (option==2 && orderOfQuestions%10 != 0)
		{
		previousQestion();	
		}
	else if (option==3)
		{
		skipQuiestion();	
		}
	else
		{
		cleanConsole();	
		cout<<"there is no such option u donut !"<<endl<<"again";
		options();	
		}	
	}
void previousQestion()
	{
	cleanConsole();
	orderOfQuestions-=1;
	nextQuestion(orderOfQuestions);
	cleanConsole();
	}
void answerQuestion()
	{
	cleanConsole();
	char answer;
	cout<<"enter your answer:";
	cin>>answer;
	inputedAnswers[orderOfQuestions]=tolower(answer);
	ifAnswered[orderOfQuestions]=true;
	orderOfQuestions+=1;
	cleanConsole();
	if(orderOfQuestions%10==0)
		{
		lastPart();
		}
	else
		{
		nextQuestion(orderOfQuestions);
		}	
	}
void skipQuiestion()
	{
	cleanConsole();	
	inputedAnswers[orderOfQuestions]='0';
	ifAnswered[orderOfQuestions]=false;
	orderOfQuestions+=1;
	if(orderOfQuestions%10==0)
		{
		lastPart();
		}
	else
		{
		nextQuestion(orderOfQuestions);
		}	

	}
void checkerAndResult()
	{
	for (int i = orderOfQuestions; i < orderOfQuestions+10; ++i)
		{
		short  int j=0; 
		if (inputedAnswers[j]==correctAnswers[i])
			{
			result+=1;
			}
			j+=1;
		}
	cleanConsole();	
	cout<<endl<<"here is ur results:"<<result;		
	}
void lastPart()
	{
	cleanConsole();	
	cout<<"okay u've come at the end here are ur options"<<endl<<"1 )submit"<<endl
														       <<"2)edit specific task"<<endl
									      					   <<"3)return to the previous question"<<endl
						 									   <<"enter one of the option's number: ";
	short int option;					 									   
	cin>>option;
	if (option==1)
		{
		checkerAndResult();
		}
	else if (option==2)
		{
		cleanConsole();	
		cout<<"enter task's number:";
		cin>>option;
		nextQuestion(option-1);
		}
	else if (option==3)
		{
		previousQestion();	
		}
	else
		{
		cleanConsole();	
		cout<<"there is no such option u donut !"<<endl<<"again";
		lastPart();	
		}		
	}
