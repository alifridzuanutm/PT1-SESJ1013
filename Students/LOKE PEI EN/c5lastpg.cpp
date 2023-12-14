#include <iostream>
using namespace std;

const int NUM_COUNTRIES = 5;
const int NUM_MEDALS = 3;

string countries[NUM_COUNTRIES]={"Country 1","Country 2","Country 3","Country 4"};
    int medals[4][3]={
        {129,257,590},
        {120,279,394},
        {115,290,123},
        {98,209,112},
    };
            
void firstFunction(){
	int total=0;
	for(int j=0;j<3;j++){
	total=total+medals[2][j];
}

cout<<"Total number of medals won by country 3:"<<total<<endl;
}

void secondFunction(){
	int smallest,largest;
	
	for(int i=0;i<4;i++)
	 for(int j=0;j<3;j++){
	if(medals[i][j]<smallest)
	smallest=medals[i][j];
	if(medals[i][j]>largest)
	largest=medals[i][j];
}
  cout<<"The largest value is:"<<largest<<endl;
    cout<<"The smallest value is:"<<smallest<<endl;
}

void thirdFunction(){
	int largest;
	for(int i=0;i<4;i++){
	if(medals[i][0]>largest)
	largest=medals[i][0];}
	cout<<"The highest number of gold medal won:"<<largest<<endl;
}

void fourthFunction(){
	int bronzetotal=0;
	for(int i=0;i<4;i++){
	bronzetotal=bronzetotal+medals[i][2];
	}
	cout<<"Total number of bronze medal win:"<<bronzetotal<<endl;
}

    
int main (){	
    cout << " \t \tGold\tSilver\tBronze" << endl;
      for(int i=0;i<4;i++){
           	cout << countries[i]<<"\t";
      for(int j=0;j<3;j++){
            cout <<medals[i][j] << "\t";
              }
              cout<<endl;     
    }
    firstFunction();
  
    secondFunction();
    
    thirdFunction();
    
    fourthFunction();
}


                


            

        
    
