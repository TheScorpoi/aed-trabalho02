#
# Tomás Oliveira e Silva, AED, October 2020
#
# makefile to compile the A.02 assignment
#

clean:
	rm -fv a.out
	rm -fv sorting_methods

MAIN=sorting_methods.c
AUX=bubble_sort.c shaker_sort.c insertion_sort.c Shell_sort.c quick_sort.c merge_sort.c heap_sort.c rank_sort.c selection_sort.c

sorting_methods:	$(MAIN) $(AUX) sorting_methods.h
	cc -Wall -O2 $(MAIN) $(AUX) -o sorting_methods -lm
