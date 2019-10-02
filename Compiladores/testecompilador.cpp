#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(int argc, char **argv){
	
	string line, aux, lin, xi;
	
	vector<string> c;
	vector<string> d;
		
	ifstream arqv2("keywords.txt");
	
	if (arqv2.is_open()){
		
		while(! arqv2.eof() ){
			
			getline(arqv2, lin);
			
			for(int i = 0; i < lin.length(); i++){
				
				if(lin[i] == '/'){
					if(lin[i+1] == '/'){
						for(int j = 0; j < lin.length(); j++){
							if(lin[j] != '\n'){
								xi[j] = lin[j];
							}
						}
					}
				}
				
				if(lin[i] == ';'){ 
					d.push_back(aux); 
					aux.erase();
				}
				
				if(lin[i] == ' '){ 
					
					if(aux.size() == 0){	
						aux.erase();
					}
					
					else if(aux.size() != 0){
						d.push_back(aux); 
						aux.erase();
					}
				}
				
				else{ 
					if(lin[i] != ';'){ 
						aux.push_back(lin.at(i));
					}
				}
			}
		}
		for(int i = 0; i < d.size(); i++){
				cout << d[i] << endl;
			}
		arqv2.close();
	}
		
	ifstream arqv("arquivo.txt");
	
	if (arqv.is_open()){
		
		while(! arqv.eof() ){
			
			getline(arqv, line);
			
			for(int i = 0; i < line.length(); i++){
				
				//cout << line[i];
				
				if(line[i] == ';'){ 
					c[i].push_back(aux); 
					//aux.erase();
				}
				
				if(line[i] == ' '){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
					
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
				else{ 
					if(line[i] != ';'){ 
						aux.push_back(line.at(i));
					}
				}
			}
			
			for(int i = 0; i < c.size(); i++){
				cout << c[i] << endl;
				
			}
		}
		arqv.close();
	}
	
	else cout << "Impossivel abrir arquivo";
	
	return 0;
}
