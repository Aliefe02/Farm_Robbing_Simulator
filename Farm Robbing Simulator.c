#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
dog = 1 -> dog is sleeping
dog = 0 -> dog is dead
dog = -1 -> dog is alive

*/

int main()
{


    char choice[128];

    printf("Welcome to Farm Robbing Simulator!\n\nIn this simulator you will try to sneak into a farm and steal 10.000$.\n\n");
    printf("Please type the exact word you see, otherwise you will face error.\n\n");

    sleep(5);

    printf("Lets begin!\n\n");

    sleep(2);

    while(1)
    {
        int dog = -1,
        knife = 0,
        car_key = 0,
        money = 0,
        bleeding = 0,
        injury = 0;

        printf("You go for a walk on a beautiful day. You come across a farm.\n\n");
        sleep(4);
        printf("'This farm is huge, I'm sure the owner has a lot of money stored in his house' you say to yourself and decide to loot it.\n\n");
        sleep(5);
        printf("You enter the farm.\n\n");
        sleep(1);
        checkpoint1:
        printf("Where do you go -> a) house or b) barn\n\n");
        scanf("%s",&choice);
        if(strcmp(choice,"a")==0)
        {
            printf("\nYou enter the house. You see the owner is holding a gun.\n\n");
            sleep(2);
            checkpoint2:
            printf("Do you -> a) attack or b) run\n\n");
            scanf("%s", &choice);
            if(strcmp(choice,"a")==0)
            {
                printf("\nYou attack the owner.\n");
                sleep(2);
                printf("The owner shot you.\n");
                sleep(2);
                printf("You are dead.\n");
                sleep(2);
                printf("FAILED!\n");
                sleep(2);
                checkpoint3:
                printf("\nWhat do you want to do -> retry or leave\n\n");
                scanf("%s",&choice);
                if(strcmp(choice,"retry")==0)
                    continue;
                else if(strcmp(choice,"leave")==0)
                    break;
                goto checkpoint3;

            }

            else if(strcmp(choice,"b")==0)
            {
                printf("You try to run.\n");
                sleep(2);
                printf("There is a dog waiting for you at the door.\n");
                sleep(2);
                printf("Dog kills you.\n");
                sleep(2);
                printf("FAILED!\n");
                printf("\nWhat do you want to do -> retry or leave\n\n");
                scanf("%s",&choice);
                if(strcmp(choice,"retry")==0)
                    continue;
                else if(strcmp(choice,"leave")==0)
                    break;
                goto checkpoint3;

            }
            goto checkpoint2;
        }

        else if(strcmp(choice,"b")==0)
        {
            printf("\nYou enter the barn.\n");
            sleep(2);
            printf("You find a knife in the barn.\n");
            knife = 1;
            sleep(2);
            checkpoint6:
            printf("What do you do -> a) enter the house or b) keep searching\n\n");
            scanf("%s",&choice);
            if(strcmp(choice,"b")==0)
            {
                printf("\nYou check rest of the place.\n");
                sleep(2);
                printf("You found a dog drinking water.\n");
                sleep(2);
                checkpoint4:
                printf("what do you do -> a) put the dog to sleep, b) kill dog with knife or c) leave dog and enter house\n\n");
                scanf("%s",&choice);
                if(strcmp(choice,"a")==0)
                {
                    printf("You sneak up to the dog.\n");
                    sleep(2);
                    printf("You put the dog to sleep but it fought back.\n");
                    dog = 1;
                    sleep(2);
                    printf("You are bleeding.\n");
                    bleeding = 1;
                    sleep(2);
                    goto enterhouse;
                }
                else if(strcmp(choice,"b")==0)
                {
                    printf("You sneak up to the dog.\n");
                    sleep(2);
                    printf("You stab it with your knife.\n");
                    knife = 0;
                    sleep(2);
                    printf("Dog is dead.\n");
                    dog = 0;
                    goto enterhouse;
                }
                else if(strcmp(choice,"c")==0)
                    goto enterhouse;

                goto  checkpoint4;

            }
            else if(strcmp(choice,"a")==0)
            {
                enterhouse:
                printf("You enter the house\n");
                sleep(2);
                printf("You see the owner holding a gun at you.\n");
                sleep(2);
                checkpoint5:
                printf("What do you do -> a) attack with knife, b) hide upstairs or c) run\n\n");
                scanf("%s",&choice);
                if(strcmp(choice,"a")==0 && knife!=1)
                {
                    printf("You don't have a knife.\n");
                    sleep(2);
                    printf("The owner shot you.\n");
                    sleep(2);
                    printf("You are dead.\n");
                    sleep(2);
                    printf("FAILED!\n");
                    printf("\nWhat do you want to do -> retry or leave\n\n");
                    scanf("%s",&choice);
                    if(strcmp(choice,"retry")==0)
                    continue;
                    else if(strcmp(choice,"leave")==0)
                        break;
                    goto checkpoint3;
                }
                else if(strcmp(choice,"a")==0 && knife==1)
                {
                    printf("You attack him with your knife.\n");
                    sleep(2);
                    printf("The owner shot you.\n");
                    sleep(2);
                    printf("You are dead.\n\n");
                    sleep(2);
                    printf("FAILED!\n");
                    printf("\nWhat do you want to do -> retry or leave\n\n");
                    scanf("%s",&choice);
                    if(strcmp(choice,"retry")==0)
                    continue;
                    else if(strcmp(choice,"leave")==0)
                        break;
                    goto checkpoint3;
                }
                else if(strcmp(choice,"b")==0)
                {
                    printf("You go upstairs and hide in a closet.\n");
                    sleep(2);
                    printf("The owner follows you and enters the room.\n");
                    sleep(2);
                    if(bleeding==1)
                    {
                        printf("He sees your blood trail.\n");
                        sleep(2);
                        printf("He opens the closet and shoots you.\n");
                        sleep(2);
                        printf("You are dead.\n");
                        sleep(2);
                        printf("FAILED!.\n");
                        printf("\nWhat do you want to do -> retry or leave\n\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"retry")==0)
                        continue;
                        else if(strcmp(choice,"leave")==0)
                            break;
                        goto checkpoint3;
                    }
                    checkpoint7:
                    printf("While he is checking under the bed what do you do -> a) attack him with your knife or b) stay silent\n\n");
                    scanf("%s",&choice);
                    if(strcmp(choice,"b")==0)
                    {
                        printf("You choose to stay silent.\n");
                        sleep(2);
                        printf("Owner opens the closet and shoots you.\n");
                        sleep(2);
                        printf("You are dead.\n\n");
                        sleep(2);
                        printf("FAILED!.\n");
                        printf("\nWhat do you want to do -> retry or leave\n\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"retry")==0)
                        continue;
                        else if(strcmp(choice,"leave")==0)
                            break;
                        goto checkpoint3;
                    }
                    else if(strcmp(choice,"a")==0 && knife==0)
                    {
                        printf("You don't have a knife.\n");
                        sleep(2);
                        printf("Owner opens the closet and shoots you.\n");
                        sleep(2);
                        printf("You are dead.\n\n");
                        sleep(2);
                        printf("FAILED!.\n");
                        printf("\nWhat do you want to do -> retry or leave\n\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"retry")==0)
                        continue;
                        else if(strcmp(choice,"leave")==0)
                            break;
                        goto checkpoint3;
                    }
                    else if(strcmp(choice,"a")==0 && knife==1)
                    {
                        printf("You attack the owner with your knife.\n");
                        sleep(2);
                        printf("You kill the owner.\n");
                        knife=0;
                        sleep(2);
                        checkpoint8:
                        printf("what do you do next -> a) loot the house or b) leave the house.\n\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"b")==0)
                        {
                            printf("You leave the house.\n");
                            sleep(2);
                            if(dog!=0)
                            {
                                printf("The dog attacks you.\n");
                                sleep(2);
                                printf("You are dead.\n\n");
                                sleep(2);
                                printf("FAILED!\n");
                                printf("\nWhat do you want to do -> retry or leave\n\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"retry")==0)
                                continue;
                                else if(strcmp(choice,"leave")==0)
                                    break;
                                goto checkpoint3;
                            }

                            printf("You left the house without 10.000$.\n");
                            sleep(2);
                            printf("FAILED!.\n");
                            printf("\nWhat do you want to do -> retry or leave\n\n");
                            scanf("%s",&choice);
                            if(strcmp(choice,"retry")==0)
                            continue;
                            else if(strcmp(choice,"leave")==0)
                                break;
                            goto checkpoint3;
                        }
                        else if(strcmp(choice,"a")==0)
                        {
                            printf("You start looting the house.\n");
                            sleep(2);
                            printf("You find car keys and 10.000$.\n\n");
                            sleep(2);
                            printf("You leave the house\n\n");
                            sleep(2);
                            if(dog==-1)
                            {
                                printf("The dog attacks you.\n");
                                sleep(2);
                                printf("You are dead.\n");
                                sleep(2);
                                printf("FAILED!\n");
                                printf("\nWhat do you want to do -> retry or leave\n\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"retry")==0)
                                continue;
                                else if(strcmp(choice,"leave")==0)
                                    break;
                                goto checkpoint3;
                            }
                            else if(dog==1)
                            {
                                printf("The dog is sleeping.\n");
                                sleep(2);
                                checkpoint9:
                                printf("What do you do -> a) kill it or b) leave it sleeping\n\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"a")==0)
                                {
                                    printf("As you approach the dog you step on a branch.\n");
                                    sleep(2);
                                    printf("The dog wakes up and attacks you.\n");
                                    sleep(2);
                                    printf("You are dead.\n");
                                    sleep(2);
                                    printf("FAILED!\n");
                                    printf("\nWhat do you want to do -> retry or leave\n\n");
                                    scanf("%s",&choice);
                                    if(strcmp(choice,"retry")==0)
                                    continue;
                                    else if(strcmp(choice,"leave")==0)
                                        break;
                                    goto checkpoint3;
                                }
                                else if(strcmp(choice,"b")==0)
                                {
                                    printf("You let the dog live.\n");
                                    sleep(2);
                                    printf("You get in the car and leave with 10.000$.\n");
                                    sleep(2);
                                    printf("SUCCESS!\n");
                                    printf("\nWhat do you want to do -> retry or leave\n\n");
                                    scanf("%s",&choice);
                                    if(strcmp(choice,"retry")==0)
                                    continue;
                                    else if(strcmp(choice,"leave")==0)
                                        break;
                                    goto checkpoint3;
                                }
                                goto checkpoint9;
                            }
                        }
                        goto checkpoint8;
                    }
                    goto checkpoint7;
                }
                else if(strcmp(choice,"c")==0)
                {
                    printf("You run outside.\n");
                    sleep(2);

                    if(dog==-1)
                    {
                        printf("The dog attacks you.\n");
                        sleep(2);
                        printf("You are dead.\n");
                        sleep(2);
                        printf("FAILED!\n");
                        printf("\nWhat do you want to do -> retry or leave\n\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"retry")==0)
                        continue;
                        else if(strcmp(choice,"leave")==0)
                            break;
                        goto checkpoint3;
                    }
                    printf("You see a car.\n");
                    sleep(2);
                    checkpoint10:
                    printf("What do you do -> a) try to get into the car or b) hide in barn\n\n");
                    scanf("%s",&choice);
                    if(strcmp(choice,"a")==0)
                    {
                        printf("You don't have the keys.\n");
                        sleep(2);
                        printf("The owner shoots you on the leg.\n");
                        injury++;
                        printf("Owner comes close to you.\n");
                        sleep(2);
                        printf("You kill him with your knife.\n");
                        knife=0;
                        sleep(2);
                        printf("You enter the house and find car keys.\n");
                        sleep(2);
                        checkpoint11:
                        printf("what do you do -> a) leave the farm or b) keep looting\n\n");
                        scanf("%s",&choice);

                        if(strcmp(choice,"a")==0)
                        {
                            printf("You take the car and leave without 10.000$.\n");
                            sleep(2);
                            printf("Your leg is in very bad shape.\n");
                            sleep(2);
                            printf("You can't afford treatment.\n");
                            sleep(2);
                            printf("You can't walk again.\n");
                            sleep(2);
                            printf("FAILED!.\n");
                            printf("\nWhat do you want to do -> retry or leave\n\n");
                            scanf("%s",&choice);
                            if(strcmp(choice,"retry")==0)
                                continue;
                            else if(strcmp(choice,"leave")==0)
                                break;
                            goto checkpoint3;
                        }
                        else if(strcmp(choice,"b")==0)
                        {
                            printf("You found 10.000$.\n");
                            injury++;
                            sleep(2);
                            printf("Your injuries has gotten worse.\n");
                            sleep(2);
                            checkpoint12:
                            printf("Where do you go -> hospital or home\n\n");
                            scanf("%s",&choice);
                            if(strcmp(choice,"home")==0)
                            {
                                printf("You go home with 10.000$.\n");
                                sleep(2);
                                printf("Your injuries are very bad.\n");
                                sleep(2);
                                printf("You die.\n");
                                sleep(2);
                                printf("FAILED!.\n");
                                printf("\nWhat do you want to do -> retry or leave\n\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"retry")==0)
                                    continue;
                                else if(strcmp(choice,"leave")==0)
                                    break;
                                goto checkpoint3;
                            }
                            else if(strcmp(choice,"hospital")==0)
                            {
                                printf("You go to hospital.\n");
                                sleep(2);
                                printf("Pay 10.000$ for your treatment.\n");
                                sleep(2);
                                printf("You are healthy but you don't have money.\n");
                                sleep(2);
                                printf("FAILED!.\n");
                                printf("\nWhat do you want to do -> retry or leave\n\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"retry")==0)
                                    continue;
                                else if(strcmp(choice,"leave")==0)
                                    break;
                                goto checkpoint3;
                            }
                            goto checkpoint12;
                        }
                        goto checkpoint11;
                    }
                    else if(strcmp(choice,"b")==0)
                    {
                        printf("You hide in barn.\n");
                        sleep(2);
                        checkpoint13:
                        printf("How long will you stay hidden -> a) 10 minutes or b) 1 hour.\n");
                        scanf("%s",&choice);
                        if(strcmp(choice,"a")==0)
                        {
                            printf("You go outside after ten minutes.\n");
                            sleep(2);
                            printf("The owner sees you.\n");
                            sleep(2);
                            printf("The owner shot you.\n");
                            sleep(2);
                            printf("You are dead.\n");
                            sleep(2);
                            printf("FAILED!.\n");
                            printf("\nWhat do you want to do -> retry or leave\n\n");
                            scanf("%s",&choice);
                            if(strcmp(choice,"retry")==0)
                                continue;
                            else if(strcmp(choice,"leave")==0)
                                break;
                            goto checkpoint3;
                        }
                        else if(strcmp(choice,"b")==0)
                        {
                            printf("You go outside after one hour.\n");
                            sleep(2);
                            printf("The owner has called the cops.\n");
                            sleep(2);
                            printf("He is waiting for them at the entrance of the farm.\n");
                            sleep(2);
                            checkpoint14:
                            printf("What do you do -> a) loot house or b) attack him\n");
                            scanf("%s",&choice);
                            if(strcmp(choice,"a")==0)
                            {
                                printf("You enter the house.\n");
                                sleep(2);
                                printf("You find 10.000$ and a car key.\n");
                                sleep(2);
                                car_key=1;
                                money=1;
                                checkpoint15:
                                printf("What do you do -> a)leave the farm quietly or b) attack the owner and take the car\n");
                                scanf("%s",&choice);
                                if(strcmp(choice,"b")==0)
                                {
                                    printf("You sneak up to the owner.\n");
                                    sleep(2);
                                    if(knife==1)
                                    {
                                        printf("You attack him with your knife.\n");
                                        sleep(2);
                                        printf("The owner is dead.\n");
                                        sleep(2);
                                        printf("You hear sirens.\n");
                                        sleep(2);
                                        checkpoint17:
                                        printf("What do you do -> a) leave the farm or b) hide \n\n");
                                        scanf("%s",&choice);
                                        if(strcmp(choice,"a")==0)
                                        {
                                            printf("You leave the farm before cops arrive.\n");
                                            sleep(2);
                                            printf("You have 10.000$.\n");
                                            sleep(2);
                                            printf("SUCCESS!\n");
                                            printf("\nWhat do you want to do -> retry or leave\n\n");
                                            scanf("%s",&choice);
                                            if(strcmp(choice,"retry")==0)
                                                continue;
                                            else if(strcmp(choice,"leave")==0)
                                                break;
                                            goto checkpoint3;
                                        }
                                        else if(strcmp(choice,"b")==0)
                                        {
                                            hide:
                                            printf("You hide in barn.\n");
                                            sleep(2);
                                            if(dog==0)
                                            {
                                                printf("you hide for 1 day.\n");
                                                sleep(2);
                                                printf("The cops leave and you can escape.\n");
                                                sleep(2);
                                                printf("You have 10.000$ and you take the car.\n");
                                                sleep(2);
                                                printf("SUCCESS!\n");
                                                printf("\nWhat do you want to do -> retry or leave\n\n");
                                                scanf("%s",&choice);
                                                if(strcmp(choice,"retry")==0)
                                                    continue;
                                                else if(strcmp(choice,"leave")==0)
                                                    break;
                                                goto checkpoint3;
                                            }
                                            printf("The dog finds you and kills you.\n");
                                            sleep(2);
                                            printf("FAILED!\n");
                                            printf("\nWhat do you want to do -> retry or leave\n\n");
                                            scanf("%s",&choice);
                                            if(strcmp(choice,"retry")==0)
                                                continue;
                                            else if(strcmp(choice,"leave")==0)
                                                break;
                                            goto checkpoint3;
                                        }
                                        goto checkpoint17;
                                    }
                                    else
                                    {
                                        no_knife:
                                        printf("You don't have a knife.\n");
                                        sleep(2);
                                        printf("You attack the owner but he defends himself.\n");
                                        sleep(2);
                                        printf("You manage to take his gun.\n");
                                        sleep(2);
                                        printf("You hear sirens!.\n");
                                        sleep(2);
                                        checkpoint16:
                                        printf("What do you do -> a) shoot the owner or b) run with the car\n\n");
                                        scanf("%s",&choice);
                                        if(strcmp(choice,"b")==0)
                                        {
                                            printf("You let the owner live.\n");
                                            sleep(2);
                                            printf("You take the car and run before cops show up.\n");
                                            sleep(2);
                                            printf("You have 10.000$.\n");
                                            sleep(2);
                                            printf("SUCCESS!.\n");
                                            printf("\nWhat do you want to do -> retry or leave\n\n");
                                            scanf("%s",&choice);
                                            if(strcmp(choice,"retry")==0)
                                                continue;
                                            else if(strcmp(choice,"leave")==0)
                                                break;
                                            goto checkpoint3;
                                        }
                                        else if(strcmp(choice,"a")==0)
                                        {
                                            printf("You shoot the owner.\n");
                                            sleep(2);
                                            printf("The owner is dead.\n");
                                            sleep(2);
                                            printf("The cops arrive before you could leave.\n");
                                            sleep(2);
                                            printf("They shoot you.\n");
                                            sleep(2);
                                            printf("You are dead.\n");
                                            sleep(2);
                                            printf("FAILED!.\n");
                                            printf("\nWhat do you want to do -> retry or leave\n\n");
                                            scanf("%s",&choice);
                                            if(strcmp(choice,"retry")==0)
                                                continue;
                                            else if(strcmp(choice,"leave")==0)
                                                break;
                                            goto checkpoint3;
                                        }
                                        goto checkpoint16;
                                    }
                                }
                                else if(strcmp(choice,"a")==0)
                                {
                                    printf("You decide to leave the farm quietly.\n");
                                    sleep(2);
                                    printf("You have 10.000$ but you don't take the car.\n");
                                    sleep(2);
                                    printf("SUCCESS!.\n");
                                    printf("\nWhat do you want to do -> retry or leave\n\n");
                                    scanf("%s",&choice);
                                    if(strcmp(choice,"retry")==0)
                                        continue;
                                    else if(strcmp(choice,"leave")==0)
                                        break;
                                    goto checkpoint3;
                                }
                                goto checkpoint15;
                            }
                            else if(strcmp(choice,"b")==0)
                            {
                                printf("You sneak up to the owner.\n");
                                sleep(2);
                                if(knife==1)
                                {
                                    printf("You attack him with your knife.\n");
                                    sleep(2);
                                    printf("The owner is dead.\n");
                                    sleep(2);
                                    printf("You hear sirens!.\n");
                                    sleep(2);
                                    checkpoint18:
                                    printf("What do you do -> a) run on foot or b) hide\n\n");
                                    scanf("%s",&choice);
                                    if(strcmp(choice,"a")==0)
                                    {
                                        printf("You try running.\n");
                                        sleep(2);
                                        printf("Cops catch you.\n");
                                        sleep(2);
                                        printf("You go to prison.\n");
                                        sleep(2);
                                        printf("FAILED!.\n");
                                        printf("\nWhat do you want to do -> retry or leave\n\n");
                                        scanf("%s",&choice);
                                        if(strcmp(choice,"retry")==0)
                                            continue;
                                        else if(strcmp(choice,"leave")==0)
                                            break;
                                        goto checkpoint3;
                                    }
                                    else if(strcmp(choice,"b")==0)
                                    {
                                        goto hide;
                                    }
                                    goto checkpoint18;
                                }
                                else
                                {
                                    goto no_knife;
                                }
                            }
                            goto checkpoint14;
                        }
                        goto checkpoint13;
                    }
                    goto checkpoint10;
                }
                goto checkpoint5;
            }
            goto checkpoint6;
        }
        goto checkpoint1;
    }
    return (0);
}
