/*
$  gcc mandelbrot_serial.c lodepng.c -O3 -std=gnu99 -lm -o mandelbrot_serial
$ ./mandelbrot_serial
*/


//header files
#include "lodepng.h"
#include "lodepng.c"
#include "timer.h"

//libraries
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<pthread.h>

//define
#define WIDTH 10000
#define HEIGHT 8000
#define MAX_ITER 100
#define X_MIN -2.5
#define X_MAX 1.5
#define PI 3.1415927
#define OUTPUT "output.png"


unsigned char *image;

void* process1(void* id){
double rx, ry, zx, zy, zx2, zy2;
int x, y, i, j;
int N=HEIGHT*WIDTH;
	const double
		as = -(HEIGHT/(double)WIDTH) *(X_MAX - X_MIN) /2,
		y_min = -as,
		y_max = as,
		pw = (X_MAX - X_MIN) / WIDTH,
		ph = (y_max - y_min) / HEIGHT;
	//θα το σπάσω σε δύο νήματα για λόγους ευκολίας λόγω μαθηματικών...
for(j = 0; j < N/2; j++) {
		x = j % WIDTH; //ESTW N =100 KAI T=4 TOTE 100/4 TO KATHE NHMA
		y = j / WIDTH;
		ry = y_min + y * ph;
		rx = X_MIN + x * pw;
		zx = 0.0;
		zy = 0.0;
		zx2 = 0.0;
		zy2 = 0.0;
		for(i = 0; i < MAX_ITER && ((zx2 + zy2) < 4); i++) {
			zy = 2 * zx * zy + ry;
			zx = zx2 - zy2 + rx;
			zx2 = zx * zx; zy2 = zy * zy;
		}
		image[j*4] = 		255 - (cos(i * PI /(double)MAX_ITER) + 1)/2 * 255;
		image[j*4 + 1] = 	255 - (sin(i * PI /(double)MAX_ITER) + 1)/3 * 255;
		image[j*4 + 2] = 	255 - (i/(double)MAX_ITER) * 255;
		image[j*4 + 3] = 	255;
	}
	return NULL;
}
void* process2(void* id){
double rx, ry, zx, zy, zx2, zy2;
int x, y, i, j;
int N=HEIGHT*WIDTH;
	const double
		as = -(HEIGHT/(double)WIDTH) *(X_MAX - X_MIN) /2,
		y_min = -as,
		y_max = as,
		pw = (X_MAX - X_MIN) / WIDTH,
		ph = (y_max - y_min) / HEIGHT;
		int start=N/2;
	//θα το σπάσω σε δύο νήματα για λόγους ευκολίας λόγω μαθηματικών...
for(j = start; j < N; j++) {
		x = j % WIDTH; //ESTW N =100 KAI T=4 TOTE 100/4 TO KATHE NHMA
		y = j / WIDTH;
		ry = y_min + y * ph;
		rx = X_MIN + x * pw;
		zx = 0.0;
		zy = 0.0;
		zx2 = 0.0;
		zy2 = 0.0;
		for(i = 0; i < MAX_ITER && ((zx2 + zy2) < 4); i++) {
			zy = 2 * zx * zy + ry;
			zx = zx2 - zy2 + rx;
			zx2 = zx * zx; zy2 = zy * zy;
		}
		image[j*4] = 		255 - (cos(i * PI /(double)MAX_ITER) + 1)/2 * 255;
		image[j*4 + 1] = 	255 - (sin(i * PI /(double)MAX_ITER) + 1)/3 * 255;
		image[j*4 + 2] = 	255 - (i/(double)MAX_ITER) * 255;
		image[j*4 + 3] = 	255;
	}
	return NULL;
}
int main() {
	image = (unsigned char*) malloc(sizeof(unsigned char) * WIDTH * HEIGHT * 4);
	// ΦΤΙΑΧΝΟΝΤΑΣ ΧΡΟΝΟ ΠΡΟΣΠΈΛΑΣΗΣ
	double start_t, finish_t, elapsed;
	GET_TIME(start_t);
	//ΔΗΜΙΟΥΡΓΩΝΤΑΣ ΤΑ THREADS
	pthread_t t1;
	pthread_t t2;
	pthread_create(&t1,NULL, process1, (void *)"A");

	pthread_create(&t2,NULL, process2, (void *)"B");
    pthread_join(t2, NULL);
	GET_TIME(finish_t);
	elapsed= finish_t -start_t;

	printf("Calculation took %1f seconds.\n",elapsed);
	lodepng_encode32_file(OUTPUT, image, WIDTH, HEIGHT);
	free(image);
	return 0;
}