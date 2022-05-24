#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int S,E,W;
    cin>>S>>E>>W;
    while(S<=E){
        int Far=(S-32)*5/9;
        cout<<S<<" "<<Far<<endl;
        S=S+W;
    }
    return 0;
    
  
}