#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(unsigned char array[], unsigned int length); //print statistics result of array


void print_array(unsigned char array[], unsigned int length); // print array


//methods for find specifict things
unsigned char find_median(unsigned char array[], unsigned int length);


unsigned char find_min(unsigned char array[], unsigned int length);


unsigned char find_max(unsigned char array[], unsigned int length);


unsigned char find_mean(unsigned char array[], unsigned int length);


void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */

