#!/bin/sh
./server.o --port 20001 --tnum 4 &
./client.o --k 1000 --mod 5 --servers servers.txt &