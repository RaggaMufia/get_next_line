# get_next_line
Creating a function that returns a line read from a file descriptor of arbitrary size.
The size of the BUFF (the block of memory that is allocated for the storage of the bytes from the file descriptor), can never be any greater than 10000000 as this would mean the disk drive handling that file would crash.

What happens with the 9999999 is that it is used to represent whatever data the running system is fed, and, the 1 byte is used by the system's cpu to make sense of all the data it has been fed.

The main outcome of this project, along with making the function to be able to read from multiple file descriptors that seem to be recursively opened by other file descriptors, is to be able to handle input of a very large size and organise it upon printing line by line. This is meant to give the audience a real time feel of what the system is currently doing and how output is generated character by character, only the speed makes that unbelievable.

Upon completion, the average joe would dispute that the function does not really do anything, and that using the "cat" command to view the file would achieve the same result.. and that's a good thing.
The whole point is to create functions that are system implementation ready.

cat would not work alone though.
