# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <omp.h>



int main (int argc, char *argv[]){
double cpu_time ( );
void timestamp ( );

#pragma omp parallel
{
double cpu_time ( );
void timestamp ( );
{
# define M 500
# define N 500

  double ctime;
  double ctime1;
  double ctime2;
  double diff;
  double epsilon;
  FILE *fp;
  int i;
  int iterations;
  int iterations_print;
  int j;
  double mean;
  char output_file[80];
  int success;
  double u[M][N];
  double w[M][N];

  timestamp ( );
  printf ( "\n" );
  printf ( "HEATED_PLATE\n" );
  printf ( "  C version\n" );
  printf ( "  A program to solve for the steady state temperature distribution\n" );
  printf ( "  over a rectangular plate.\n" );
  printf ( "\n" );
  printf ( "  Spatial grid of %d by %d points.\n", M, N );

  if ( argc < 2 ) 
  {
    printf ( "\n" );
    printf ( "  Enter EPSILON, the error tolerance:\n" );
    success = scanf ( "%lf", &epsilon );
  }
  else
  {
    success = sscanf ( argv[1], "%lf", &epsilon );
  }

  if ( success != 1 )
  {
    printf ( "\n" );
    printf ( "HEATED_PLATE\n" );
    printf ( "  Error reading in the value of EPSILON.\n");
    return 1;
  }

  printf ( "\n" );
  printf ( "  The iteration will be repeated until the change is <= %f\n", epsilon );
  diff = epsilon;

  if ( argc < 3 ) 
  {
    printf ( "\n" );
    printf ( "  Enter OUTPUT_FILE, the name of the output file:\n" );
    success = scanf ( "%s", output_file );
  }
  else
  {
    success = sscanf ( argv[2], "%s", output_file );
  }

  if ( success != 1 )
  {
    printf ( "\n" );
    printf ( "HEATED_PLATE\n" );
    printf ( "  Error reading in the value of OUTPUT_FILE.\n");
    return 1;
  }

  printf ( "\n" );
  printf ( "  The steady state solution will be written to '%s'.\n", output_file );

#pragma omp parallel sections num_threads(16)
{
  //section1
  #pragma omp section
  {
  for ( i = 1; i < M - 1; i++ )
  {
    w[i][0] = 100.0;
  }
  }
  //section2
  #pragma omp section
  {
  for ( i = 1; i < M - 1; i++ )
  {
    w[i][N-1] = 100.0;
  }
  }
  //section3
  #pragma omp section
  {
  for ( j = 0; j < N; j++ )
  {
    w[M-1][j] = 100.0;
  }
  }
  //section4
  #pragma omp section
  {
  for ( j = 0; j < N; j++ )
  {
    w[0][j] = 0.0;
  }
  }
  mean = 0.0;
  //section5
  #pragma omp section
  {
  for ( i = 1; i < M - 1; i++ )
  {
    mean = mean + w[i][0];
  }
  }
  //section6
  #pragma omp section
  {
  for ( i = 1; i < M - 1; i++ )
  {
    mean = mean + w[i][N-1];
  }
  }
  //section7
  #pragma omp section
  {
  for ( j = 0; j < N; j++ )
  {
    mean = mean + w[M-1][j];
  }
  }
  //section8
  #pragma omp section
  {
  for ( j = 0; j < N; j++ )
  {
    mean = mean + w[0][j];
  }
  }
  mean = mean / ( double ) ( 2 * M + 2 * N - 4 );
/* 
  Initialize the interior solution to the mean value.
*/

//section9
#pragma omp section
{
  for ( i = 1; i < M - 1; i++ )
  {
    for ( j = 1; j < N - 1; j++ )
    {
      w[i][j] = mean;
    }
  }
}
/* 
  iterate until the  new solution W differs from the old solution U
  by no more than EPSILON.
*/
  iterations = 0;
  iterations_print = 1;
  printf ( "\n" );
  printf ( " Iteration  Change\n" );
  printf ( "\n" );
  ctime1 = cpu_time ( );

  while ( epsilon <= diff )
  {

    for ( i = 0; i < M; i++ ) 
    {
      for ( j = 0; j < N; j++ )
      {
        u[i][j] = w[i][j];
      }
    }
    diff = 0.0;
    for ( i = 1; i < M - 1; i++ )
    {
      for ( j = 1; j < N - 1; j++ )
      {
        w[i][j] = ( u[i-1][j] + u[i+1][j] + u[i][j-1] + u[i][j+1] ) / 4.0;

        if ( diff < fabs ( w[i][j] - u[i][j] ) )
        {
          diff = fabs ( w[i][j] - u[i][j] );
        }
      }
    }
    iterations++;
    if ( iterations == iterations_print )
    {
      printf ( "  %8d  %f\n", iterations, diff );
      iterations_print = 2 * iterations_print;
    }
  } 
  ctime2 = cpu_time ( );
  ctime = ctime2 - ctime1;

  printf ( "\n" );
  printf ( "  %8d  %f\n", iterations, diff );
  printf ( "\n" );
  printf ( "  Error tolerance achieved.\n" );
  printf ( "  CPU time = %f\n", ctime );

  fp = fopen ( output_file, "w" );

  fprintf ( fp, "%d\n", M );
  fprintf ( fp, "%d\n", N );

  for ( i = 0; i < M; i++ )
  {
    for ( j = 0; j < N; j++)
    {
      fprintf ( fp, "%6.2f ", w[i][j] );
    }
    fputc ( '\n', fp);
  }
  fclose ( fp );

  printf ( "\n" );
  printf ("  Solution written to the output file '%s'\n", output_file );
/* 
  Terminate. 
*/
  printf ( "\n" );
  printf ( "HEATED_PLATE:\n" );
  printf ( "  Normal end of execution.\n" );
  printf ( "\n" );
  timestamp ( );
}
  return 0;

# undef M
# undef N
}
}
}


double cpu_time ( )
{
  #pragma omp parallel
  {
  double value;

  value = ( double ) clock ( ) / ( double ) CLOCKS_PER_SEC;

  return value;
  }
}


void timestamp ( )
{
#pragma omp parallel
{
# define TIME_SIZE 40
  static char time_buffer[TIME_SIZE];
  const struct tm *tm;
  time_t now;

  now = time ( NULL );
  tm = localtime ( &now );

  strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm );

  printf ( "%s\n", time_buffer );

  return;
# undef TIME_SIZE
}
}