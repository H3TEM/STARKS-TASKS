#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time Difference(struct Time start, struct Time stop) {
    struct Time difference;

    int startInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int stopInSeconds = stop.hours * 3600 + stop.minutes * 60 + stop.seconds;
    int differenceInSeconds = stopInSeconds - startInSeconds;

    difference.hours = differenceInSeconds / 3600;
    difference.minutes = (differenceInSeconds % 3600) / 60;
    difference.seconds = differenceInSeconds % 60;

    return difference;
}

int main() {
    struct Time startTime, stopTime;
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter stop time (hours minutes seconds): ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    struct Time timeDifference = Difference(startTime, stopTime);
    printf("\nTime Difference: %d:%d:%d\n",timeDifference.hours,timeDifference.minutes,timeDifference.seconds);

    return 0;
}

// used ChatGPT to help
