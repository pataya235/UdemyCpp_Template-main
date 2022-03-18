#include <iostream>

enum class Lane : char
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane; //enum because defined number of states
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity (kph): " << vehicle.velocity << std::endl;
    switch (vehicle.lane)
    {
    case Lane::CENTER_LANE:
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    case Lane::RIGHT_LANE:
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    case Lane::LEFT_LANE:
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    default:
        break;
    }
}

void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Velocity (kph): " << vehicle->velocity << std::endl;
    switch (vehicle->lane)
    {
    case Lane::CENTER_LANE:
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    case Lane::RIGHT_LANE:
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    case Lane::LEFT_LANE:
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    default:
        break;
    }
}

int main()
{
    //Designated struct initialiser list
    Vehicle v1 = {.id = 1, .velocity = 100.0f, .lane = Lane::CENTER_LANE}; //f makes it float, not double
    print_vehicle_data(v1);
    print_vehicle_data_pointer(&v1); //giving adress of v1 to expected pointer
    return 0;
}
