#include<iostream>
#include<string>
using namespace std;
string mixText(string a , string b){
    string o,E ;
	
	int i,t;

	t = a.size();
	i = 0;
	if (a.size()==b.size()){
		while (i<t)
		{
			o =  o+a[i]+b[i];
			i++;
			
			
		}
			return o;
		
			
		
    }
    return "E";

}

  
    



	





int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
