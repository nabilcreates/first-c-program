// This program simulates a server-uptime log, it will reset (or refresh) every 5ms and everytime it resets, the reset count will increase. But if it reaches the maximum amount of times it can reset, the server will stop.

#include <stdio.h>
#include <stdlib.h>

// Creates a structure
struct serverstatus
{
    long uptime;
    long reset_count;
};

// Function to print values (attempt to declutter code below)
void printValues(long uptime, long reset_count)
{
    // Printf is formatted printing (like in python)
    // %li prints long ints and \n is an line escape
    printf("Server Uptime: %li \n", uptime);
    printf("Server Reset Count: %li \n\n", reset_count);
}

int main()
{
    // Define structure as server_one
    struct serverstatus server_one;

    // Variables in the use
    long uptime = 0;
    long resetcount = 0;
    int max_reset_count = 20;
    
    // If the reset count is below the max reset count, then loop
    do
    {
        // If the uptime if less than 5, then loop
        do
        {
            // Increments the uptime
            server_one.uptime = uptime++;

            // If the uptime is above or equal to 5
            if(server_one.uptime >= 5)
            {
                // Increment the reset count
                server_one.reset_count = resetcount ++;

                // Uptime will be resetted to 0
                uptime = 0;
            }

            // Run the printValues function
            printValues(server_one.uptime, server_one.reset_count);
            
        } while(server_one.uptime < 5);

    } while(server_one.reset_count < max_reset_count);
}