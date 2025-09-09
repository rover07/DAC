#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    static int count;
	char* fname; char* lname; char* mobile; char* email; char* id;
  public:
  	Account();
  	Account(char* fname,char* lname,char* mobile,char* email);
  	void setFname(char* fname);
  	void setLname(char* lname);
  	void setMobile(char* mobile);
  	void setEmail(char* email);
  	const char* getFname();
  	const char* getLname();
  	const char* getMobile();
  	const char* getEmail();
  	
  	char *generateId(char *fname, char *lname);
  	const char *getId();
  	virtual void display();
  	virtual ~Account();
  	
};

#endif
