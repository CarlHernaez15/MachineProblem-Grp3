// Machine Problem 2

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
    
int main()
{

    float sideA, sideB, sideC;
    double HalfPeri, Peri, Area, Apothem, Circ, InAngles, angleA, angleB, angleC;
    const double pi = 3.1415926535;
    
    // Sides of the Triangle
    // Side A
    cout << "How long is side A?: ";
	cin >> sideA;
    
    // Side B
    cout << "How long is side B?: ";
	cin >> sideB;
	 
    // Side C
    cout << "How long is the side C?: ";
	cin >> sideC;
    
    
    //Computation for the angles of the triangle
    	angleA = ((acos((pow(sideC,2) + pow(sideA,2) - pow(sideB,2))/(2*sideC*sideA))*180)/pi);
    	angleB = ((acos((pow(sideB,2) + pow(sideC,2) - pow(sideA,2))/(2*sideB*sideC))*180)/pi);
    	angleC = ((acos((pow(sideA,2) + pow(sideB,2) - pow(sideC,2))/(2*sideC*sideB))*180)/pi);
    
	//Interior Angles
	InAngles = angleA + angleB + angleC;
	cout << "Interior angles: " << InAngles << endl;
	
	
	// Sides of a Triangle (Equilateral, Isosceles or Scalene)
	
	// All sides are equal
    if(sideA == sideB && sideB == sideC)
    {
      cout << "\nThis is an equilateral triangle." << endl;
    }
    
    // 2 sides are equal
    else if (sideA == sideB || sideA == sideC || sideB == sideC)   
    {
      cout << "\nThis is an isosceles triangle." << endl;
    }
    
     // No equal sides
    else         
    {
      cout << "\nThis is a scalene triangle." << endl;  
    }
   
   //Perimeter
   Peri = (sideA + sideB + sideC);
   cout << "Perimeter of the triangle: " << Peri << endl;
   
   // Area
   HalfPeri = ((sideA + sideB + sideC)/2);
   Area = (sqrt(HalfPeri * (HalfPeri - sideA) * (HalfPeri - sideB) * (HalfPeri - sideC)));
   
   cout << "Area of the triangle: " << Area << endl;
   

   // Angles of a triangle (Acute, Right, or Obtuse)
    if(sideA+sideB > sideC && sideB+sideC > sideA && sideC+sideA > sideB)
      {
      	// Acute triangle
        if (sideA>0 && sideA<90 && sideB>0 && sideB<90 && sideC>0 && sideC<90)
          {
            cout<<"\nIt is an acute triangle." << endl;
          }
          
        // Obtuse triangle  
        else if (sideA>90 && sideB>90 && sideC>90)
          { 
            cout<<"\nIt is an obtuse triangle." << endl;
          }
          
        // Right triangle  
        else if(sideA*sideA+sideB*sideB == sideC*sideC && sideB*sideB+sideC*sideC == sideA*sideA && sideC*sideC+sideA*sideA == sideB*sideB)
          {
            cout<<"\nIt is a right triangle." << endl;
          }
          
        else 
           cout <<"\nGiven sides did not form any kind of triangle." << endl;
      }    
      
      
    // The Apothem
	  Apothem = ((2*Area)/Peri);
	  
	  cout << "The apothem is: " << Apothem << endl;
		
	// The circumcenter
		Circ = (sideA*sideB*sideC) / sqrt((sideA+sideB+sideC) * (sideA+sideB-sideC) * (sideB+sideC-sideA) * (sideC+sideA-sideB));
	
		cout << "The circumcenter is: " << Circ << endl;
		
	_getch();
    return 0;
}
