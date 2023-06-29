#include<iostream>
using namespace std;
void permutation(string s,string ans){
	if(s.length()==0){		//Base case
		cout<<ans<<endl;		//printing combination
		return;
	}
	
	for(int i=0;i<s.length();i++){					//LOGIC
		char c=s[i];
		string ros = s.substr(0,i) + s.substr(i+1);
		permutation(ros,ans+c);
	}
}

int main(){
	string l;
	cout<<"Enter The Letters:";
	cin>>l;
	cout<<"possible combination:"<<endl;
	permutation(l," ");						//function call
	return 0;
}
