#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <conio.h>
using namespace std;

int main(){
	
	system("color a");
	string html;
	const char chars[10] = ":ph123456";
	bool typing = true;
	cout << "HTML Typer - \"stop\" per interrompere input";
	ofstream file("index.html");
	file << "<!DOCTYPE html>\n\n<html>\n";
	cout << "\n\nVuoi usare le impostazioni consigliate per i tag <head> </head>? (S / N) ";

	
	if (_getch() == 's')
	
	{
		string titolo;
		cout << "\n\nTitolo pagina? ";
		getline(cin, titolo);
		file << "\t<head>\n\t\t<title> " << titolo << " </title>\n\t\t";
		file << "<meta charset = \"UTF-8\">\n\t\t";
		file << "<meta name = \"viewport\" content = \"width = device-width, initial scale = 1\">\n\t\t";
		file << "<link rel = \"stylesheet\" type = \"text/css\" href = \"stylesheet.css\">\n\t";
		file << "</head>\n\t";
		file << "<body>";
	}
	
	else
	
		file << "\t<body>";
	

	cout << "\n\nScrivi nel documento. \"help\" per informazioni\n";
	
	while (typing == true)
	
	{
		html = "";
		cout << "\n";
		getline(cin, html);

		
		if (html == "stop")
		
			typing = false;
		
		else if (html == "help")
		
			cout << "\n\nSe cominci una linea con le seguenti tag, il testo HTML verrà automaticamente formattato:\n\n"
					"p: semplice paragrafo\nh1...h6: header";

		else if (html.find("p: ") != std::string::npos)
		
		{
			
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<p> " << html << " </p>";
		}
				
		else if (html.find("h1: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<h1> " << html << " </h1>";
		}
				
		else if (html.find("h2: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<h2> " << html << " </h2>";
		}
				
		else if (html.find("h3: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<h3> " << html << " </h3>";
		}
				
		else if (html.find("h4: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<h4> " << html << " </h4>";
		}
				
		else if (html.find("h5: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			}
			
			file << "\n\t\t<h5> " << html << " </h5>";
		}
				
		else if (html.find("h6: ") != std::string::npos)
		
		{
	
			for (unsigned int i = 0; i < 8; i++)
			
			{
				html.erase(remove(html.begin(), html.end(), chars[i]), html.end());
			} 
			
			file << "\n\t\t<h6> " << html << " </h6>";
		}
		
		else
		
			cout << "\nInserisci un tag (p:, h1:)";
		
	}
	
	file << "\n\t</body>\n";
	file << "</html>";
	file.close();
	cout << "\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
