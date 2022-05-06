#!/bin/bash

rm -rf *.img
rm -f *.txt
rm -f *.log
rm -rf stats-dump
rm -f *.json

setsid ./test.sh  < /dev/null &> test.log &

sudo ../criu/criu dump -t $(pgrep test.sh) -vvv -o dump.log > log.txt && echo OK

