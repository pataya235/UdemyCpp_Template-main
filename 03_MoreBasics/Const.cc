#include <iostream>
//const float not necessarily defined while compiling
//constexpr defined while compiling
constexpr int DEFAULT_VEHICLE_ID = -1;
constexpr int NUM_VEHICLES = 3;

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

void print_vehicle_data(const Vehicle &vehicle) //const&: read-only (<=> const * const)
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

int main()
{
    Vehicle v1 = {1, 100.0f, Lane::CENTER_LANE};
    Vehicle v2 = {2, 90.0f, Lane::RIGHT_LANE};
    Vehicle v3 = {3, 130.0f, Lane::LEFT_LANE};

    Vehicle vehicles_in_scene[NUM_VEHICLES] = {v1, v2, v3};
    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles_in_scene[i]);
    }

    return 0;
}
