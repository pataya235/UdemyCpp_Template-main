#include <iostream>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
};

void greet_permission_level(PermissionLevel level)
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
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;

    UserData user_jan = {"Jan", 132397859, permission_level_jan};
    greet_permission_level(user_jan.permission_level);

    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.id = 129764924;
    user_peter.permission_level = permission_level_peter;
    greet_permission_level(user_peter.permission_level);

    return 0;
}
