class ParkingSystem {
public:
    vector<int> count;
    ParkingSystem(int big, int medium, int small) {
        count = {big, medium, small};
    }

    bool addCar(int carType) {
        return count[carType - 1]-- > 0;
    }
};

/* Explanation of Code:
    1. The constructor of the class ParkingSystem is called when the object is created.
    2. The constructor takes three integers as input and stores them in the count vector.
    3. The addCar function takes an integer as input and returns true if there is a parking space of the carType car, else it returns false.
    4. The addCar function returns true if there is a parking space of the carType car, else it returns false.
*/
