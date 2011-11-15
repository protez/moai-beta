// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef ZIPFS_REPLACE_STDIO_H
#define ZIPFS_REPLACE_STDIO_H

#include <zipfs/zipfs.h>

#ifdef  __cplusplus
	extern "C" {
#endif

//================================================================//
// stdio
//================================================================//

//----------------------------------------------------------------//
#undef FILE
#define FILE ZIPFSFILE

//----------------------------------------------------------------//
#undef stderr
#define stderr zipfs_stderr

#undef stdin
#define stdin zipfs_stdin

#undef stdout
#define stdout zipfs_stdout

//----------------------------------------------------------------//
#undef clearerr
#define clearerr zipfs_clearerr

#undef fclose
#define fclose zipfs_fclose

#undef feof
#define feof zipfs_feof

#undef ferror
#define ferror zipfs_ferror

#undef fflush
#define fflush zipfs_fflush

#undef fgetc
#define fgetc zipfs_fgetc

#undef fgetpos
#define fgetpos zipfs_fgetpos

#undef fgets
#define fgets zipfs_fgets

#undef fopen
#define fopen zipfs_fopen

#undef fopen_s
#define fopen_s zipfs_fopen_s

#undef fprintf
#define fprintf zipfs_fprintf

#undef fputc
#define fputc zipfs_fputc

#undef fputs
#define fputs zipfs_fputs

#undef fread
#define fread zipfs_fread

#undef freopen
#define freopen zipfs_freopen

#undef fscanf
#define fscanf zipfs_fscanf

#undef fseek
#define fseek zipfs_fseek

#undef _fseeki64
#define _fseeki64 zipfs_fseeki64

#undef fsetpos
#define fsetpos zipfs_fsetpos

#undef ftell
#define ftell zipfs_ftell

#undef fwrite
#define fwrite zipfs_fwrite

#undef getc
#define getc zipfs_getc

#undef getwc
#define getwc zipfs_getwc

#undef remove
#define remove zipfs_remove

#undef rename
#define rename zipfs_rename

#undef rewind
#define rewind zipfs_rewind

#undef setbuf
#define setbuf zipfs_setbuf

#undef setvbuf
#define setvbuf zipfs_setvbuf

#undef tmpfile
#define tmpfile zipfs_tmpfile

#undef ungetc
#define ungetc zipfs_ungetc

#undef vfprintf
#define vfprintf zipfs_vfprintf

#undef vfscanf
#define vfscanf zipfs_vfscanf

#ifdef  __cplusplus
	}
#endif

#endif