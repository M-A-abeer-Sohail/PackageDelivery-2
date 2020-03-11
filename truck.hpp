// struct Truck
// {
//     char driver[32];
//     int petrol;
//     int money;
//     int fullMileage;
//     int emptyMileage;
//     Box *box;

//     void load(int numBox)
//     {

//     }
//     void unload()
//     {

//     }

//     float cost()
//     {

//     }
// };

class Truck
{
private:
    char driver[32];
    int petrol;
    int money;
    int fullMileage;
    int emptyMileage;
    Box *boxArray;

public:
    void load(int numBox);
    void unload();
    float cost();
    void setBox(Box *a);
};