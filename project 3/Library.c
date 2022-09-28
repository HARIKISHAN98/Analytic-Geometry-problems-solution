//function definition 

//problem 1
double find_angle(double a1,double b1,double a2,double b2)
{
    float m1 = -a1/b1; // here m1 is slope 1
    float m2 = -a2/b2; // here m2 is slope 2

    double num = ( m1 - m2 )/(1 + (m1*m2));
    
    double angle = atan(num);
      return angle; 
}

//problem 2 
double find_distance(double lat1,double lat2,double lon1,double lon2)
{
 double p = 0.0174603175;         //math.PI/180
 int radius = 6371;   //radius of Earth to calculate distance in KM
 double a = sin(((lat2 - lat1)*p)/2) * sin(((lat2 - lat1)*p)/2) + cos(lat1*p) * cos(lat2*p) * sin(((lon2-lon1)*p)/2) * sin(((lon2-lon1)*p)/2);
 double angle = 2 * atan2(sqrt(a),sqrt(1-a));
//  double distance = angle * radius;
 return angle * radius;

//p contains the value of (pi/180) , multiply by p of latitude and longitude 
//to convert the value from degree to radian 
//formula of harversine for calculate distance between two points is :
//d = R * C , where R is radius , and c is angle  
//c = 2 ⋅ atan2( √a, √(1−a) )
//a = sin²(Δφ/2) + cos φ1 ⋅ cos φ2 ⋅ sin²(Δλ/2);
//
}

//problem 3

double find_area(double x1,double x2,double x3,double y1,double y2 ,double y3)
{

 double area =  {x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) }; // formula
 
 if(area < 0)
 area = -area; 

 return area/2;

}










