#include <stdio.h>

void printSensorData(void *data, char type) {
    if (type == 'f') {
        float *temp = (float *)data;
        printf("Temperature: %.1f C\n", *temp);
    } else if (type == 'i') {
        int *motion = (int *)data;
        if (*motion == 1) {
            printf("Motion Detected\n");
        } else if (*motion == 0) {
            printf("No Motion\n");
        }
    } else if (type == 'c') {
        char *door = (char *)data;
        if (*door == 'O') {
            printf("Door Open\n");
        } else if (*door == 'C') {
            printf("Door Closed\n");
        }
    }
}

int main() {
    float temperature = 27.5;
    int motionStatus = 1;
    char doorStatus = 'C';

    printf("Smart Home Sensor Readings\n\n");

    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
}