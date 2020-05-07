#!/bin/sh
./server.o --port 20001 --tnum 1 &
./client.o --k 5 --mod 19 --servers servers.txt &