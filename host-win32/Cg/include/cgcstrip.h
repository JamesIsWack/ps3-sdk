/*   SCE CONFIDENTIAL                                       */
/*   PlayStation(R)3 Programmer Tool Runtime Library 475.001 */
/*   Copyright (C) 2010 Sony Computer Entertainment Inc.    */
/*   All Rights Reserved.                                   */

#ifndef SCE_CGC_STRIP_H
#define SCE_CGC_STRIP_H

#if defined(_WINDLL)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

DLLEXPORT char* sceCgcStripBinary(char* target, size_t size,int argc,char* argv[],char* stripped,size_t* totalsize);
DLLEXPORT size_t sceCgcStripBinaryGetSize(size_t size);

#ifdef __cplusplus
}
#endif

#endif // SCE_CGC_STRIP_H
