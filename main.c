#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>


int numSafe() {
    int ID;
    FILE *file;
    printf("\nID: ");
    scanf_s("%d", &ID);
    file = fopen("testnum.json", "w");
    if (file == NULL) {
        printf("Error while opening File!\n");
        return 1;
    }
    fprintf(file, "{\n\t\"ID\": %d\n}\n", ID);
    fclose(file);
    printf("\nThe Test-ID  was saved!");
    system("cls");
}

int loading() {

    printf("\nLoading");
    Sleep(500);
    system("cls");
    printf("\nLoading.");
    Sleep(500);
    system("cls");
    printf("\nLoading..");
    Sleep(500);
    system("cls");
    printf("\nLoading...");
    Sleep(500);
    system("cls");
    printf("\nLoading");
    Sleep(500);
    system("cls");
    printf("\nLoading.");
    Sleep(500);
    system("cls");
    printf("\nLoading..");
    Sleep(500);
    system("cls");


}

int stop() {

    int stop = 0;
    printf("\n1 + Enter to close... ");
    scanf_s("%d", &stop);

}

int code(const char *filename) {
    FILE *file = fopen(filename, "r");
    int number;

    if (file == NULL) {
        printf("Error while opening file.\n");
        return -1;
    }

    fscanf(file, "%d", &number);

    fclose(file);

    return number;
}



int main(void) {
    system("color 3f");
    const char *filename = "file.txt";
    int number = code(filename);
    int code = 0;
    printf("Please enter your Code: ");
    scanf_s("%d", &code);
    if (number == code) {
        system("color 3f");
        loading();
        numSafe();
        int speedyn = 0;
        printf("\nDo you want to test your Internetspeed?\n1...Yes\n0...No\nInput: ");
        scanf("%d",&speedyn);
        if(speedyn == 1){
            printf("\nBefore you continue DO NOT CLICK Q TO QUIT THE TEST!");
            Sleep(100);
            system("speedtest");
            system("color 3f");
            printf("\nNow divide the Download Speed trough 10. This will be needed here!");
        }


        int MBorGB = 0;
        float NetSpeed = 0;
        float ProgramSize = 0;
        float timeReSec = 0;
        float timeReMin = 0;
        float timeReHour = 0;

        Sleep(100);
        printf("\nIs your Program Download in MB or in GB");
        Sleep(100);
        printf("\nEnter 1 for MB");
        Sleep(100);
        printf("\nEnter 2 for GB");
        Sleep(100);
        printf("\nInput: ");
        Sleep(100);
        scanf_s("%d", &MBorGB);
        if (MBorGB == 1) {
            Sleep(100);

            printf("\nInternet Speed in MB/s: ");

            scanf_s("%f", &NetSpeed);
            Sleep(100);
            printf("Program Size in MB: ");

            scanf_s("%f", &ProgramSize);
            timeReSec = ProgramSize / NetSpeed;
            timeReMin = (ProgramSize / NetSpeed) / 60;
            timeReHour = ((ProgramSize / NetSpeed) / 60) / 60;
            Sleep(500);

            printf("\nTime Remaining in Seconds: %f", timeReSec);
            Sleep(150);
            printf("\nTime Remaining in Minutes: %f", timeReMin);
            Sleep(150);
            printf("\nTime Remaining in Hours: %f", timeReHour);
            Sleep(150);
            time_t now;
            now = time(0);
            printf("\n%s\n", ctime(&now));
            stop();
        }
        if (MBorGB == 2) {
            Sleep(100);
            printf("\nInternet Speed in MB/s: ");
            scanf_s("%f", &NetSpeed);
            Sleep(100);
            printf("Program Size in GB: ");
            scanf_s("%f", &ProgramSize);
            timeReSec = (ProgramSize * 1000) / NetSpeed;
            timeReMin = ((ProgramSize * 1000) / NetSpeed) / 60;
            timeReHour = (((ProgramSize * 1000) / NetSpeed) / 60) / 60;
            Sleep(500);
            printf("\nTime Remaining in Seconds: %f", timeReSec);
            Sleep(150);
            printf("\nTime Remaining in Minutes: %f", timeReMin);
            Sleep(150);
            printf("\nTime Remaining in Hours: %f", timeReHour);
            Sleep(150);
            time_t now;
            now = time(0);
            printf("\n%s\n", ctime(&now));
            stop();
        }

    } else {
        printf("\nWrong Code please try again or contact Owner!\n");
        stop();

    }

}