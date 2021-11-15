# This project is for practicing .

## Menu Options
The following sections describe each of the menu options.

1 - Insert a new event
When this menu option is selected, the user enters an event like this:

Please select an option: 1
What is the event: CSE 251
Event date: 4/14/2011
Start time: 3:00pm
End time: 4:50pm
The event description is up to 50 characters and many include spaces. The date is in the form indicated: month/day/year. The user must use a full year (2011) as opposed to a 2 character year (11). Also, only dates after 1970 are valid in the time system we will use. The start time and end time are in 12 hour format with hours and minutes only. See the section on Dates and Times for details on how to input and utilize this information in the program.

When a new event is inserted it should be tested against all other events and an overlap indicated if one occurs. Two events A and B do not overlap if A ends before B starts or A starts after B ends. Here is an example of the output should an overlap occur:

Please select an option: 1
What is the event: Afternoon Tea
Event date: 4/14/2011
Start time: 4:00pm
End time: 4:15pm
Warning, this event overlaps: 
 4/14/2011  3:00PM  4:50PM CSE 251
Overlapping events are not rejected, they are entered into the system. The warning message should include all events that overlap the newly entered event. The warning message must only appear if an overlap exists.

2 - Display all events
When this menu options is selected, all events are displays in start time order. Example output is:

Schedule:
 4/14/2011  3:00PM  4:50PM CSE 251
 4/14/2011  4:00PM  4:15PM Afternoon Tea
3 - Now?
When the Now menu option is selected, any events that are currently active should be displayed. An event is currently active if the current time is greater than or equal to the start time and less than or equal to the end time. As an example:

Please select an option: 3
Currently active events: 
 4/14/2011  2:00PM  3:00PM Prepare for CSE 251
4 - Delete expired
If this menu option is selected, any events that have expired, meaning they ended before the current time, are deleted from the scheduler. The deleted events should be displayed:

Please select an option: 4
Deleting:
 4/14/2011 12:00PM  1:00PM Lunch
If there is nothing to delete, the program should indicate that there are no expired events:

Please select an option: 4
No expired events