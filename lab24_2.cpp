#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code here
	line_up.push_back("Tony");
	line_up.push_back("Narutu");
	line_up.push_back("Sanji");
	
	line_up.pop_front(); // Alice enters
	line_up.pop_front(); // Bob enters
	
	loc = find(line_up.begin(), line_up.end(), "Luffy");
	line_up.insert(++loc, "Narutu");
	line_up.push_front("Prayath");
	line_up.push_back("Nami");
	
	loc = find(line_up.begin(), line_up.end(), "Bob");
	line_up.erase(loc); // Bob leaves
	
	line_up.pop_front(); // Prayath enters
	line_up.pop_front(); // Narutu enters
	line_up.pop_front(); // Sanji enters
	
	printList(line_up);
		
	return 0;
}
