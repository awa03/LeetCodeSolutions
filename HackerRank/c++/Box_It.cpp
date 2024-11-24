#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box {
public:
// The class should have the following functions : 

// Constructors: 
Box(){
    length = 0;
    breadth = 0;
    height = 0;
}
Box(int l,int b,int h){
   length = l;
   breadth = b;
   height = h;
}
Box(Box& b){
   length = b.length;
   breadth = b.breadth;
   height = b.height; 
}

// int getLength(); // Return box's length
int getLength(){
    return length;
}
int getBreadth () {
    return breadth;
} // Return box's breadth
int getHeight () {
    return height;
}
long long CalculateVolume(){
    return (long long)length * breadth * height;
} // Return the volume of the box

bool operator<(const Box& other) const { 
    if (length < other.length) return true;
    if (length == other.length && breadth < other.breadth) return true;
    if (length == other.length && breadth == other.breadth && height < other.height) return true;
    return false;
}


//Overload operator << as specified
friend ostream& operator<<(ostream& out, Box& B){
    out << B.length << " " << B.breadth << " " << B.height;
    return out;
}

private:
    int length, breadth, height;

};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
