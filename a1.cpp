//courseID:CIS165-001
//name: Caitlin Mooney
//Prof. Wang
//Assignment#1
//Due by 1/26/2019
/*
9. Hotel Occupancy
calculate occupancy rate for a hotel
ask user how many floors the hotel has
a loop should iterate once for each floor
in each iteration, the loop should ask the user for the
	number of rooms on each floor, and how many of them are occupied
after all the iterations, the program should display how many rooms the hotel has, how many of them are occupied, how many of them are unoccupied,
	and the percentage of rooms that are occupied
the percentage may be calculated by dividing the number of rooms by the occupied number of rooms
***MOST HOTELS DO NOT HAVE A 13TH FLOOR
	***THE LOOP IN THIS PROGRAM SHOULD SKIP THE ENTIRE 13TH ITERATION
Inupt Validation:
do not accept a value less than 1 for number of floors
do not accept a value less than 10 for number of rooms per floor
*/
/*
steps
1.Input:
  a. numFloors
  b. numRooms_floor
  c. numRooms_floorOccupied
  
2.Processing: 
  a. tot_numRooms=-->  loop
  b. tot_numRoomsUnoccupied=tot_numRooms-tot_numRoomsOccupied
  c. percent_occupiedRooms=tot_numRoomsOccupied/tot_numRooms
    
3.Output:
  a. tot_numRooms
  b. tot_numRoomsOccupied
  c. tot_numRoomsUnoccupied
  d. percent_occupiedRooms
*/

#include <iostream>
using namespace std;

int main()
{
	//define a list of vars & input
	int	numFloors,
    	numRooms,
    	numRooms_occupied,
        tot_rooms=0,
        tot_roomsOccupied=0,
		tot_roomsUnoccupied;
        
    double percent_occupiedRooms;
    
   
   	cout<<"How many floors does the hotel have? "<<endl;
   	cin>>numFloors;

	
	for(int i=1;i<=numFloors;i++)
	{
		if(i==13)
		continue;
		
		cout<<"How many rooms are on floor "<<i<<"?"<<endl;
		cin>>numRooms;
		
		while(numRooms<10)
		{
			cout<<"The number of rooms on each floor should be 10 or more."<<endl;
			cout<<"How many rooms are on floor "<<i<<"?"<<endl;
			cin>>numRooms;
		}
		tot_rooms+=numRooms;
		
		cout<<"How many rooms are occupied on floor "<<i<<"?"<<endl;
		cin>>numRooms_occupied;
		
		while(numRooms_occupied>numRooms)
		{
			cout<<"The number of occupied rooms should be less than or equal to the number of rooms."<<endl;
			cout<<"How many rooms are occupied on this floor?"<<endl;
			cin>>numRooms_occupied;
		}
		
		
		tot_roomsOccupied+=numRooms_occupied;
		
		
	}
	
	tot_roomsUnoccupied=tot_rooms-tot_roomsOccupied;
	percent_occupiedRooms=((double)tot_roomsOccupied/(double)tot_rooms)*100;
	
	cout<<"The total number of rooms in this hotel is "<<tot_rooms<<"."<<endl;
	cout<<"The total number of occupied rooms in this hotel is "<<tot_roomsOccupied<<"."<<endl;
	cout<<"The total number of unoccupied rooms in this hotel is "<<tot_roomsUnoccupied<<"."<<endl;
	cout<<"The percentage of occupied rooms in this hotel is "<<percent_occupiedRooms<<"%."<<endl;
	
	


 
 system("pause");
 return 0;   

}

