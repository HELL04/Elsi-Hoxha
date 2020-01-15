#include <iostream>
#include <cmath>
#include <windows.h>
#include<fstream>
using namespace std;

float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z,aa,bb,cc,dd,ee,ff;
string zz;

int main()

{

do{

	system("color 0a");
cout<<"Pershendetje! Kjo eshte nje makine llogaritese e avancuar ku bejne pjese edhe formula dhe teorema te ndryshme matematikore dhe fizike. Mesim te mbare!"<<endl;
cout<<""<<endl;
	cout<<"[1] Mbledhje"<<endl;
	cout<<"[2] Zbritje"<<endl;
	cout<<"[3] Shumezim"<<endl;
	cout<<"[4] Pjesetim"<<endl;
	cout<<"[5] Rrenja katrore"<<endl;
	cout<<"[6] Fuqia"<<endl;
	cout<<"[7] Teorema e Pitagores"<<endl;
	cout<<"[8] Formula e Heronit"<<endl;
	cout<<"[9] Sinus dhe Cosinus"<<endl;

	
	
	


cout<<""<<endl;
cout<<"/////////////////////////////////////"<<endl;
cout<<""<<endl;
	cout<<"Zgjidh nje numer : ";
	cin>>a;
	cout<<""<<endl;
	cout<<"========================================="<<endl;
	cout<<""<<endl;
	system("cls");
	 
	if (a==1){
	cout<<"Shkruaj numrat qe do te mbledhesh : ";
	cin>>b;
	cin>>c;
	d=b+c;
	cout<<"shuma eshte : "<<d<<endl;}


	else if(a==2)
	{ cout<<"Shkruaj numrat qe do te zbresesh : ";
	cin>>e;
	cin>>f;
	g=e-f;
	cout<<"Diferenca eshte :"<<g<<endl;}
	
	
		else if(a==3){
		cout<<"Shkruaj numrat qe do te shumezosh : ";
	cin>>h;
	cin>>i;
	j=h*i;
	cout<<"Prodhimi eshte : "<<j<<endl;}
	
			else  if(a==4){
			 cout<<"Shkruaj numrat qe do pjesetosh : ";
			cin>>k;
			cin>>l;
			m=k/l;
				cout<<"Heresi eshte : "<<m<<endl;}
					
					else if(a==5){
						cout<<"Vendos numrin te cilit do ti gjesh rrenjen katrore : ";
						cin>>n;
						o=sqrt(n);
							cout<<"Rrenja katrore e numrit qe zgjodhe eshte : "<<o;
					}
					
						else if(a==6){
							cout<<"Vendos eksponentin : ";
							cin>>p;
							cout<<"vendos fuqine : ";
							cin>>y;
							q=pow(p,y);
							cout<<"Fuqia e ketij numri eshte : "<<q;
								
						}
						
							else if(a==7){
								cout<<"Vendos gjatesite e 2 kateteve : ";
								cin>>r;
								cin>>s;
							t=sqrt((r*r)+(s*s));
							cout<<"Hipotenuza eshte : "<<t<<endl;}
							
						
								else if(a==8){
									cout<<"Vendos gjatesite e tre brinjeve : ";
									cin>>u;
									cin>>v;
									cin>>x;
									
									aa=(u+v+x)/2;
									z=sqrt((aa*(aa-u))*(aa*(aa-v))*(aa*(aa-x)));
										cout<<"Rezultati eshte : "<<z<<endl;
									}
									
									else if ( a == 9){
											cout<<"Fusni masen e kendit : "<<endl;
											cin>>bb;

											cout<<"Cosinusi i "<<bb<<" eshte : "<<cos(bb)<<endl;
											cout<<" "<<endl;
											cout<<"Sinusi i "<<bb<<" eshte : "<<sin(bb)<<endl;
									}
									
									
									
							
									cout<<""<<endl;
									cout<<"-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-"<<endl;
									cout<<""<<endl;
									
									
									cout << "deshironi ta provoni perseri? [y/n] : ";
									cin >> zz;
									system("cls");
			cout << "LOADING...";
			Sleep (500);
			cout << "...................................................";
			
			cout << "" << endl;
			system("cls");
}
while (zz=="y");


}
		
	 

