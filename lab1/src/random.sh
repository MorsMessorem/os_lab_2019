#!/bin/bash
"" > numbers.txt
for i in {1..150}
do
hexdump -n 1 -e '"%d "' /dev/random >> numbers.txt
done