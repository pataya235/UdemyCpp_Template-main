#include <iostream>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

void greet_permission_level_if(PermissionLevel level)
{
    if (level == PermissionLevel::ADMIN)
    {
        std::cout << "Hello Admin" << std::endl;
    }
    else if (level == PermissionLevel::STUDENT)
    {
        std::cout << "Hello Student" << std::endl;
    }
    else if (level == PermissionLevel::INSTRUCTOR)
    {
        std::cout << "Hello Instructor" << std::endl;
    }
    else if (level == PermissionLevel::TUTOR)
    {
        std::cout << "Hello Tutor" << std::endl;
    }
    else
    {
        std::cout << "Unknown" << std::endl;
    }
}

void greet_permission_level_switch(PermissionLevel level)
{
    switch (level)
    {
    case PermissionLevel::ADMIN:
        std::cout << "Hello Admin" << std::endl;
        break;
    case PermissionLevel::STUDENT:
        std::cout << "Hello Student" << std::endl;
        break;
    case PermissionLevel::INSTRUCTOR:
        std::cout << "Hello Instructor" << std::endl;
        break;
    case PermissionLevel::TUTOR:
        std::cout << "Hello Tutor" << std::endl;
        break;
    default:
        std::cout << "Unknown" << std::endl;
        break;
    }
}

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    greet_permission_level_if(permission_level_jan);
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;
    greet_permission_level_switch(permission_level_peter);

    return 0;
}
