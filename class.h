#include<string>
#include<iostream>

Class person {
private:
  string name;
public:
	void setName(string newName)
	{
		name = newName;
	}
	
  void showName(ostream& outs)
  {
    outs << name << endl;
  }
};
