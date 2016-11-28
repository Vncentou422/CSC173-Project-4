# CSC173-Project-4
Timothy Chu, Vincent Ou, Griffin van de Venne

BE SURE TO CITE THE LINKED LIST FROM PROJECT 1
**** explain why we used linked list of linked list

Part 1)
We chose to use the Linked List data structure (code taken from Project 1) in our design of the database structure. The linked list was basically the rows of our database structure, with the value of the nodes being the values in each column of the table. 

Our insert function basically takes a string input and tokenizes the values and puts them into a linked list and then we take that linked list and put it into the list belonging to the database structure.

Our delete function parses through the linked lists and finds values that are equal to the value that we want to delete and we remove that row from the database.

Our lookup function parses through the linked lists and finds values tha match the respective values and returns tuples that match it.

Part 2)

The query determines which of the 2 possible input strings depending on the first word. From there it skips to the name and begins adding every character in that to a string until it hits the keyword telling it to skip to the next variable to parse. It saves each variable as a char array to be used to lookup the values in the database.

Part 3)

Selection looks through the database for the selected value and returns a database structure with the values

Projection looks throught the database for the values we want to project and returns the corresponding database structure with these values

Join looks at two databases and merges them together, taking out duplicates.
