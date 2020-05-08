#!/bin/sh
./server.o --port 20001 --tnum 2 
./server.o --port 10050 --tnum 3 
./client.o --k 10 --mod 11 --servers servers.txt 