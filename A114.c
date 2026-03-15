#include <stdio.h>

int main() {
    int totalUsers, staffUsers, nonTeaching, studentUsers;

    printf("Enter Total Users: ");
    scanf("%d", &totalUsers);

    printf("Enter Staff Users: ");
    scanf("%d", &staffUsers);

    nonTeaching = staffUsers / 3;

    studentUsers = totalUsers - (staffUsers + nonTeaching);

    printf("Student Users: %d\n", studentUsers);

    return 0;
}
