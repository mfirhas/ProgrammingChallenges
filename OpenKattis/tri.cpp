#include <bits/stdc++.h>

using namespace std;

string CompleteEquation(int *x, int *y, int *z){
	string equation = "";
	stringstream ss;
	if( (*x) * (*y) == (*z) ){ //Left one;
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"*"+str_y+"="+str_z;
	} else if( (*x) / (*y) == (*z) ){
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"/"+str_y+"="+str_z;
	} else if( (*x) + (*y) == (*z) ){
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"+"+str_y+"="+str_z;
	} else if( (*x) - (*y) == (*z) ){
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"-"+str_y+"="+str_z;
	} else if( (*y) * (*z) == (*x) ){ //Right one
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"="+str_y+"*"+str_z;
	} else if( (*y) / (*z) == (*x) ){
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"="+str_y+"/"+str_z;
	} else if( (*y) + (*z) == (*x) ){
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"="+str_y+"+"+str_z;
	} else{
		string str_x = static_cast<ostringstream*>(&(ostringstream() << *x))->str();
		string str_y = static_cast<ostringstream*>(&(ostringstream() << *y))->str();
		string str_z = static_cast<ostringstream*>(&(ostringstream() << *z))->str();
		equation += str_x+"="+str_y+"-"+str_z;
	}
	return equation;
}

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	string out = CompleteEquation(&x,&y,&z);
	cout << out << endl;

	return 0;
}
