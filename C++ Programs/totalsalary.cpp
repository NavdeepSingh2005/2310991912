#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int basic;
    cin>>basic;
    char Grad;
    cin>>Grad;
    int allow;
    switch(Grad){
            case('A'):
                allow=1700;
                break;
            case('B'):
                allow=1500;
                break;
            default:
                allow=1300;
                break;
                
    }
    float salary=basic+0.2*basic+0.5*basic+allow-0.11*basic;
    int ans=lround(salary);
    cout<<ans<<endl;
    return 0;
    
	
}