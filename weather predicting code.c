#include <stdio.h>
    
 main() 
 {
    int Temperatures[7] ; // Past week's temperatures
    int i;
    int n=7;
    printf(" Enter the temperature value fpr last seven days =");
    for (i=0;i<7;i++)
    {
    	scanf("%d",&Temperatures[i]);
	}
    int daysInPastWeek = 7;
    int averageTempChangePerDay = 2; // Average daily temperature change

    int todayTemp = Temperatures[daysInPastWeek - 1]; // Today's temperature

    // Predict tomorrow's temperature
    int tomorrowTemp = todayTemp + averageTempChangePerDay;

    printf("Today's Temperature: %d°C\n", todayTemp);
    printf("Predicted Tomorrow's Temperature: %d°C\n", tomorrowTemp);

    
}
