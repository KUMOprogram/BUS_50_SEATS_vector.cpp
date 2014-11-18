#include <iostream>
#include <vector>
#include <stdbool.h>
#include <stdlib.h>
using namespace std;
int main()
{
system("color f1");
              
          vector <int> bus;
          vector <int> test_bus;
          vector <int> busup;
          vector <int> busdown;
			    int stat,pokemons;
			
          cout<<"Afethria!!!"<<endl;

          for (stat=0; stat<4; ++stat)
        	{
				        cout<<"Epibates : "<<bus.size()<<endl;

			         	_Bool flagstat1=0;
                _Bool flagstat2=0;
			        	while (!flagstat1)
                {
                         
                    if (bus.size()==0)
                    {
                                    cout<<"To lewforeio einai keno!"<<endl;
                                    flagstat1=1;
                                    busdown.push_back(0);
                    }else{
                                    cout<<"Posoi epibates 8a kateboun? ";
                                    cin>>pokemons;
                                    if ((pokemons>50) || (pokemons<0) || (pokemons>bus.size()))
                                    {
                                                cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                                    }else{
                                                flagstat1=1;
												busdown.push_back(pokemons);
                                    }
                         }      
                }
                    
                while (!flagstat2)
                {
                        cout<<"Posoi epibates 8a aneboun? ";
                        cin>>pokemons;

                        test_bus.resize(bus.size()+pokemons-busdown[stat]);
                        
                        if ((pokemons>50) || (pokemons<0))
                        {
                                cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                        }else if (test_bus.size()>50){
								                cout<<"MEGISTOS ARI8MOS EPIBATWN 50. DWSE PALI"<<endl;
                        }else{
                         		flagstat2=1;
                         		busup.push_back(pokemons);
                        }
                }
                bus.resize(bus.size()+busup[stat]-busdown[stat]);
                   
                cout<<"------------------------------------------"<<endl;
            }
              
      cout<<"Teleutaia stash katebhkan "<<bus.size()<<" epibates"<<endl;
			busup.push_back(0);
			busdown.push_back(bus.size());

			system("pause");
			system("cls");
			  
			for (stat=0; stat<5; ++stat)
			{
				cout<<"STASH "<<stat+1<<" ---> KATEBHKAN "<<busdown[stat]<<" kai ANEBHKAN "<<busup[stat]<<" epibates."<<endl;
			}

system("pause");
}
