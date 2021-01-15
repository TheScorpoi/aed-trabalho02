#!/bin/bash

grep "^[^#]" ../output.txt | awk '{print $1 " " $4}' > n_and_average_time.txt