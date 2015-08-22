#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;             // usare switch case di piu, e anche getch()
          
int main(){
	
	char mappa[10][30] = {  "_____________________________",
                            "!#                          !",
    						"!                           !",
    						"!                           !",
    						"!                           !",
   							"!                           !",
    						"!                           !",
    						"!                           !",
    						"_____________________________"	};
    
	int x = 1, y = 1;						
    bool running = true;
    
	while (running == true)
	
	{
		system("cls");
		
		for(int i = 0; i < 10; i++)
		
		{
            cout << mappa[i] << "\n";
		}
		
		getch();
		
		if(GetAsyncKeyState(VK_DOWN)){
            int y2 = y+1;
            if(mappa[y2][x] == ' '){
                mappa[y][x] = ' ';
                y++;
                mappa[y][x] = '#';
            }
        }

        if(GetAsyncKeyState(VK_UP)){
            int y2 = y-1;
            if(mappa[y2][x] == ' '){
                mappa[y][x] = ' ';
                y--;
                mappa[y][x] = '#';
            }
        }

        if(GetAsyncKeyState(VK_RIGHT)){
            int x2 = x+1;
            if(mappa[y][x2] == ' '){
                mappa[y][x] = ' ';
                x++;
                mappa[y][x] = '#';
            }
        }

        if(GetAsyncKeyState(VK_LEFT)){
            int x2 = x-1;
            if(mappa[y][x2] == ' '){
                mappa[y][x] = ' ';
                x--;
                mappa[y][x] = '#';
            }
        }

        if(GetAsyncKeyState(VK_ESCAPE)){
            
            cout << "\n\ngaym overh";
			running = false;
        }
	}
	
	return EXIT_SUCCESS;
}
