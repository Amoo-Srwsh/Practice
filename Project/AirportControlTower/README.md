UFO7 has launched an airport in line with the development of its products. We want you to write a program that can carry out some of the commands of the watchtower.
-----------------------------
This airport has a K runway for (take-off) or (landing) planes. These K bands are numbered from 1 to K.
![D-1](https://user-images.githubusercontent.com/85651275/181639485-cb2fc923-8ca5-4b73-8be3-2a4b1c329d4c.png)

Each plane has a string of 10 and one digits called <ID>, which uniquely identifies that plane.
    
    
    
At any given moment, each aircraft is in one of the following four states:
--------------------------------------------------------------------------
1. It is at UFO7 airport and does not occupy any runway.
2. It is at UFO7 airport, but it is occupying one of the runways and is taking off.
3. It is at UFO7 airport, but it has occupied one of the runways and is landing.
4. Not at UFO7 Airport. (That is, this plane has not been seen before or has taken off from this airport.)
--------------------------------------------------------------------------
    
    
    
We know that initially n planes are in the UFO7 airport (state 1) and we have the <ID> of all these n planes.
There are several orders for the watchtower of this airport that we want you to take care of. Each command is in one of the following formats.
    


(TAKE-OFF) command
---------------------
This command means that the plane with ID <ID> intends to take off from the airport.
If this plane is in status 4, print the message YOU ARE NOT HERE.
If this plane is in status 3, print the message YOU ARE LANDING NOW.
If this plane is in status 2, print the message YOU ARE TAKING OFF.
If this plane is in status 1, but we have no free bound, print the message NO FREE BOUND.
If none of the above happens, first change the status of the plane to 2 and then move the plane to the first (lowest number) empty runway to take off.


(LANDING) command
---------------------
This command means that the plane with ID <ID> intends to land at the airport.
If this plane is in status 1, print the message YOU ARE HERE.
If this plane is in status 2, print the message YOU ARE TAKING OFF.
If this plane is in status 3, print the message YOU ARE LANDING NOW.
If this plane is in status 4, but we have no free bound, print the message NO FREE BOUND.
If none of the above happens, first change the status of the plane to 3 and then move the plane to the last (biggest number) empty runway to land.
    
    
(PLANE-STATUS) command
---------------------
This command requests the status of the aircraft with ID <ID> at this moment and you should print the status number of this aircraft.

    
(BAND-STATUS) command
----------------------
This command requests the status of the band <LINE> at this moment and you should print the ID of the aircraft that is in this line and if this band is free and there is no aircraft in it, print the word FREE.

