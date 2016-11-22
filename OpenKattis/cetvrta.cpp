#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ReturnUniqueNum(vector<int> &p){
	sort(p.begin(), p.begin()+3);
	if(p.at(0) != p.at(1)){
		return p.at(0);
	}else{
		return p.at(2);
	}
}

int main(){
	int x[3] , y[3];
	for(int i=0;i<3;i++){
		cin>> x[i] >> y[i];
	}
	
	vector<int> vx(x, x+3);	
	vector<int> vy(y, y+3);
	cout<<ReturnUniqueNum(vx)<<" "<<ReturnUniqueNum(vy);
	
	cout<<endl;
	return 0;
}