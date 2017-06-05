# hashtablecxx

[![Build Status](https://travis-ci.org/abdullahselek/hashtablecxx.svg?branch=master)](https://travis-ci.org/abdullahselek/hashtablecxx)
[![Build status](https://ci.appveyor.com/api/projects/status/x31uas0xbaef2fnd?svg=true)](https://ci.appveyor.com/project/abdullahselek/hashtablecxx)

Hashtable implementation with C++.

## Building Repository

To build the repository you need CMake. You can download from [here](https://cmake.org/download/).
You can create a shortcut ```cmake``` command for macOS as below

```
sudo mkdir -p /usr/local/bin
sudo /Applications/CMake.app/Contents/bin/cmake-gui --install=/usr/local/bin
```

After cloning repository to your own local machine go to project root folder and run

```
cmake .
```

and then

```
cmake --build .
```

to run unit tests for UNIX machines

```
cd test
./tests
```

and for Windows machines

```
cd test/Debug/
tests.exe
```

## Sample Usage

Instantiate hashtable as below with your custom size and custom value

```
HashTable<int, std::string, 4> hashTable;
```

Put a new value with key and value

```
hashtable.put(0, "zero");
```

Searching for a value with key

```
Node<int, std::string> *node = hashtable.search(0);
```

Removing a node with key

```
Node<int, std::string> *removedNode = hashTable.remove(0);
```
