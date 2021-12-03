#include <iostream>
using namespace std;

class juntaclass{
	
	int i;
	int vet1[6];
	int vet2[6];
	int vet3[12];
	
	public:
	
	merge1(int vet1[6]);
	merge2(int vet2[6]);
	merge3(int vet3[12]);
};
		
		int juntaclass::merge1(int vet[6]){
			
		  for (i=0;i<6;i++){
	      cout<<"insira o valor "<< i+1 << " do primeiro array" <<endl;
	      cin>>vet1[i];
	}
    }
	
	int juntaclass::merge2(int vet[6]){
		
		for (i=0;i<6;i++){
		cout<<"insira o valor "<<i+1<<" do segundo array"<<endl;
		cin>>vet2[i];	
    }
	}
	
	int juntaclass::merge3(int vet[12]){
		
		for (i=0;i<6;i++){
			vet3[i] = vet1[i];
	
	}	
		for (i=0;i<12;i++){
			vet3[i] = vet2[i-6];
	}
	
	    for (i=0;i<12;i++){
	    	cout<<vet3[i]<<endl;
	}
	
	
	
}
	

	    
	 
    
        
		  
    
    
    
	      
	
	

        int main(){
        int vet1[6];
        int vet2[6];
        int vet3[12];
        juntaclass obj;
		obj.merge1(vet1);
		obj.merge2(vet2);	
		obj.merge3(vet3);
	
	
}



    
