# CPP STL notes #
The C++ Standard Template Library (STL) is a powerful set of template classes and functions that provide reusable algorithms and data structures. It is a part of the C++ Standard Library and is defined by the C++ Standard.

The STL provides various components that can be categorized into three main areas:

1. Containers: Containers are data structures that store objects or values. They provide different interfaces for accessing and manipulating the data. Examples of containers in the STL include vectors, lists, sets, maps, queues, and stacks.

Sequential containers are vectors, stack,queue, pair(not container)

Ordered containers are maps, multimaps, ordered maps

Unordered containers are unordered map and unordered set

Nested containers example are
1) vector<vector<int>>
2) map<int,vect or <int>>
3) set<pair<int,string>>
4) vector<map<int,set<int>>>


2. Algorithms: Algorithms are reusable procedures or functions that operate on containers. They perform common operations such as sorting, searching, merging, and transforming data. Algorithms in the STL are designed to work with different container types, providing a consistent interface for performing operations.
upper bound
lower bound
sort (comparator)
max_element
min_element
accumulate
reverse
count
find
next permutation
prev permutation

3. Iterators: Iterators are used to access and traverse the elements of a container. They provide a way to iterate over the elements of a container without exposing its underlying structure. Iterators can be used in conjunction with algorithms to perform operations on container elements.

points to memory address of container
cycle through containers
begin(), end()
vector<int>::iterator it;
continuity for containers

4. Functors: Classes which can act like a function

The C++ STL promotes code reuse and follows the principles of generic programming. It provides efficient and robust implementations of common data structures and algorithms, making it easier for developers to write efficient and reliable code.

To use the STL in your C++ programs, you need to include the appropriate headers and use the classes, functions, and iterators provided by the library. For example, you can include the `<vector>` header to use the vector container and the `<algorithm>` header to use various algorithms like `std::sort` or `std::find`.

Overall, the STL is a fundamental part of C++ programming and offers a wide range of functionality to simplify and enhance the development process.

