/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedfontconfigTYPES32_H_
#define __wrappedfontconfigTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef uint32_t (*uFpu_t)(void*, uint32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void* (*pFpV_t)(void*, ...);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef int32_t (*iFppiUi_t)(void*, void*, int32_t, uint64_t, int32_t);
typedef void* (*pFppibp_p_t)(void*, void*, int32_t, struct_p_t*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FcFontSetDestroy, vFp_t) \
	GO(FcCacheCopySet, pFp_t) \
	GO(FcFreeTypeCharIndex, uFpu_t) \
	GO(FcObjectSetBuild, pFpV_t) \
	GO(FcPatternBuild, pFpV_t) \
	GO(FcFontList, pFppp_t) \
	GO(FcPatternAdd, iFppiUi_t) \
	GO(FcFontSort, pFppibp_p_t)

#endif // __wrappedfontconfigTYPES32_H_
