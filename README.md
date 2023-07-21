# BucketStack (Linked List Approach)


## Purpose

The BucketStack is a data structure that combines a linked list approach with an array-based approach to efficiently manage a stack of elements. It allows for flexible bucket sizes, providing a balance between memory efficiency and dynamic size handling. This data structure is designed to be unbounded, allowing it to grow dynamically to accommodate an arbitrary number of elements.


## Implementation

The implementation of the BucketStack data structure is provided in the following files:

- bucketstack.h: This header file contains function prototypes for the BucketStack data structure implemented in bucketstack.c.

- bucketstack.c: This source file contains the definitions of all the functions declared in bucketstack.h. It is the main implementation file for the BucketStack data structure.

- bucketstack_client.c: This source file contains the main function, which is used to execute the BucketStack data structure. It includes necessary header files such as <stdio.h>, <assert.h>, <stdlib.h>, and "bucketstack.h".


## Execution

- Compile the code using the provided Makefile by executing the following command in the terminal:
`make`

- Once the compilation is successful, you can execute the bucketstack program by running the following command:
`./bucketstack`


## Notes

- The BucketStack data structure has been implemented with careful consideration of memory efficiency and flexibility.

- Be sure to review and validate the implementation using tools like Valgrind to ensure memory safety and avoid potential issues like uninitialized values.


## References and Resources 

- CS50 Stack Exchange: How to Fix the Conditional Jump or Move Depends on Uninitialized Value (Valgrind): https://cs50.stackexchange.com/questions9260how-to-fix-the-conditional-jump-or-move-depends-on-uninitialized-value-valgrin


## Contact 

If you have any questions or feedback regarding the BucketStack data structure implementation, feel free to reach out. You can find me on GitHub: `github.com/ayokunle`

