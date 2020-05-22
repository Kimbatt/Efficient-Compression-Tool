//
//  support.h
//  Efficient Compression Tool
//
//  Created by Felix Hanau on 09.04.15.
//  Copyright (c) 2015 Felix Hanau.
//

#ifndef __Efficient_Compression_Tool__support__
#define __Efficient_Compression_Tool__support__

#ifdef _WIN32
#include <io.h>

// required values from unistd.h
#define	R_OK    4       /* Test for read permission.  */
#define	W_OK    2       /* Test for write permission.  */
#define	X_OK    1       /* Test for execute permission.  */
#define	F_OK    0       /* Test for existence.  */
#else
#include <unistd.h>
#endif
#include <time.h>

// Returns Filesize of Infile
long long filesize (const char * Infile);

bool exists(const char * Infile);

bool writepermission (const char * Infile);

bool isDirectory(const char *path);

time_t get_file_time(const char* Infile);

void set_file_time(const char* Infile, time_t otime);

#endif /* defined(__Efficient_Compression_Tool__support__) */
