# Testing Performance of push_back() and push_front STL Operations

## About
This is a simple program that displays the efficiency of dynamically adding to STL sequence containers (list, vector, deque). The performance between these three containers differ depending on the query size and where the element is being added relative to the container. For example, adding an element to the front of a vector will be a lot more inefficient than adding to the front of a list. This is because a vector will have to move every element already in the vector to a higher index while a list just needs to assign a pointer to the new element.

## push_back() Results for n = 150,000,000
```
list time: 31 seconds.

vector time: 7 seconds.

deque time: 24 seconds.

```

## push_front() Results for n = 300,000
```
list time:  0 seconds.

vector time:  3 seconds.

deque time:  0 seconds.
```

## List
Is a doubly linked list. Unlike a vector or deque, the list is never full (other than running out of memory). Therefore, there is no processing penalty of copying values, like with a vector. Although a list uses pointers, the processing penalty is significantly less than that of a deque.

## Vector
Uses a dynamically-allocated array. When the array is full and an item is pushed, a new larger array is created on the heap. The existing values are copied to the new array and the old array is deleted. When there are few values, the processing penalty of copying the values to a larger array is not significant. But when there are a large number of values, a vector may not perform as well as a list or deque.

## Deque
Uses a series of “chunks”, each chunk being a small array. The chunks are linked together by pointers. When a chunk is full and an item is pushed, a new chunk is created on the heap. The existing chunks are not deleted. The new chunk is linked to the existing
chunks. When there are few values in a deque, the processing penalty of using pointers to keep track of chunks can be significant, compared to vector or list. However, when there is a large number of values, a deque can process more quickly than a vector because there is no copying of values to a new array as there is with a vector.

## Conclusion
Lists, vectors, and deques all have different use cases. In terms of time efficiency when using the pop_back() operation, a vector is preferred. The vector took a significantly shorter time adding 150 million elements to the back of the vector than the list and deque, which had similar times. Pushing elements to the front of the container is typically much more inefficient than adding to the back. This is why the amount of elements added was significantly smaller than the testing size for push_back(). If pushing to the front is necessary then a list would be preferred since it does not require the previous elements to have to be reassigned. 


## Resources
Dennis Rainey, Course: CS1C, Saddleback College
