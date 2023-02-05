// How does a polymorphism plays constructive role in application development?
// --> Polymorphism is the functionality that allows a function to have multiple forms so that we can use the same things in multiple places.
// Which type of polymorphism  is essential for the computation of distance among two cities from the specific location.
//  The unit of measurement are feet and inch also use standard unit if essential).
// Complie Time polymorphism i.e, Operator overloading is essential for the computation of distance among two cities from the specific location.
#include <iostream>
#include <math.h>
using namespace std;
class City1
{
    float x1, y1, z1;
    float x2, y2, z2;
    float total;

public:
    void getdata()
    {
        cout << "Enter the Starting location " << endl;
        cin >> x1 >> y1 >> z1;
        cout << "Enter the destination " << endl;
        cin >> x2 >> y2 >> z2;
    }
    friend class City2;
};
class City2
{
    float x1, y1, z1;
    float x2, y2, z2;
    float total;

public:
    void getdata()
    {
        cout << "Enter the Starting location " << endl;
        cin >> x1 >> y1 >> z1;
        cout << "Enter the destination " << endl;
        cin >> x2 >> y2 >> z2;
    }
    float operator >(City1 obj){
        total = sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
        obj.total = sqrt(pow((obj.x2-obj.x1),2)+pow((obj.y2-y1),2)+pow((obj.z2-obj.z1),2));
        float eachother =
        
        if(total > obj.total)
    }
};
