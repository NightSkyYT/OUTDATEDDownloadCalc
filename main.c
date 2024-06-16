#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

int numSafe() {
    int ID;
    FILE *file;
    printf("\nID: ");
    scanf_s("%d", &ID);
    file = fopen("ID.json", "w");
    if (file == NULL) {
        printf("Error while opening File!\n");
        return 1;
    }
    fprintf(file, "{\n\t\"ID\": %d\n}\n", ID);
    fclose(file);
    printf("\nThe Test-ID  was saved!");
    system("cls");
    return 0;
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
    return 0;


}

int stop() {
    printf("\nEnter to close... ");
    while (_getch() != 13);
    return 0;
}
int oldstop(){
    int oldstop = 0;
    printf("\n1 + Enter to close...");
    scanf_s("%d",&oldstop);
}

int code(const char *filename) {
    FILE *file = fopen(filename, "r");
    int number;

    if (file == NULL) {
        printf("Error while opening file.\n");
        return -1;
    }

    fscanf_s(file, "%d", &number);

    fclose(file);

    return number;
}

int SpeedTestRepo (){
    int GoYN = 0;
    printf("\nDo you have Golang installed?\n1... Yes\n0...No\nInput: ");
    scanf_s("%d",&GoYN);
    if(GoYN == 1){
        system("go install github.com/ganeshdipdumbare/speedtest@latest");
        printf("\nRepository successfully installed!");

    }
    if(GoYN == 0){
        system("curl -sf https://gobinaries.com/ganeshdipdumbare/speedtest");
        printf("\nRepository successfully installed!");
    }
return 0;

}



int main() {
    system("color 5f");
    const char *filename = "file.txt";
    int number = code(filename);
    int code = 0;
    printf("Please enter your Code: ");
    scanf_s("%d", &code);
    if (number == code) {
        system("color 5f");
        loading();
        numSafe();
        int speedyn = 0;
        printf("\nDo you want to test your Internetspeed?\n1...Yes\n0...No\nInput: ");
        scanf_s("%d",&speedyn);
        if(speedyn == 1){
            int repoInstalled = 0;
            printf("\nHave you already installed the needed Repository?\n 0...Yes\n 1...No\nInput: ");
            scanf_s("%d",&repoInstalled);
            if(repoInstalled == 1){
                SpeedTestRepo();
            }

            system("cls");
            system("color 4f");
            printf("\nBefore you continue DO NOT CLICK Q TO QUIT THE TEST!");
            Sleep(100);
            system("speedtest");
            system("color 5f");
            printf("\nNow divide the Download Speed trough 10. This will be needed here!");
        }


        int MBorGB = 0;
        float NetSpeed = 0;
        float ProgramSize = 0;
        float timeReSec;
        float timeReMin;
        float timeReHour;

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



        }else if (MBorGB == 2) {
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



        }else if(MBorGB != 0 || MBorGB != 1){
            system("cls");
            printf("\nNot a valid command please try again!\n");
            main();

        }


    } else {
        printf("\nWrong Code please try again or contact Owner!\n");
        oldstop();
        system("cls");
        main();




    }


}