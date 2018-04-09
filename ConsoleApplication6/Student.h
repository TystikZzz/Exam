struct Age
{
	int dd;
	int mm;
	int yy;
};

struct Subjects
{
	char name[15];
	int bal;
};

enum gender { male = 0, female = 1 };	

struct Student
{
	char name[15];
	char sname[15];
	char lname[15];
	gender gender;
	Age age; 
	Subjects subj[3];
	double avrg;

};

