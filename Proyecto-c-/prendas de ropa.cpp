#include <iostream> 
using namespace std; 
int main (){   

 int compras, precio; 
 float descuento,total; 

    
 
    cout<<"ingrese el precio del producto: "; 
    cin>>precio; 
    
    cout<<"ingrese el numero de prendas  seleccionados: ";
    cin>>compras; 
 
    if (compras > 35) 
    {
        cout<<"usted tendra un descuento del 40%" << endl; 
        
        total = precio * compras; 
        
        descuento=total-(total*0.40); 
        
        cout<<"el total de su compra con descuento incluido es:"<<descuento<<endl; 
	}
	else if (compras > 25) 
    {
        cout<<"usted tendra un descuento del 25%"; 
        
        total = precio * compras; 
        
        descuento=total-(total*0.25); 
        
        cout<<"el total de su compra con descuento es: "<<descuento<<endl; 
    }
    else if (compras > 10 ) 
	{
        cout<<"usted tendra un descuento del 15%"; 
        
        total = precio * compras; 
        
        descuento=total-(total*0.15); 
        
        cout<<"el total de su compra con descuento es: "<<descuento<<endl; 
    }
    else 
    {
        cout<<"usted no tendra descuento"; 
        
        cout<<"el total de su compra sin descuento es: "<<precio<<endl; 
    }
 
    return 0;  
}
