//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char color[20];
    enum TrafficLight light;

    scanf("%19s", color);

    if (strcmp(color, "RED") == 0) {
        light = RED;
    } else if (strcmp(color, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(color, "GREEN") == 0) {
        light = GREEN;
    } else {
        return 0;
    }
    switch (light) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}