#ifndef HELPER_MATH_H
#define HELPER_MATH_H

#include "cuda_runtime.h"

typedef unsigned int uint;
typedef unsigned short ushort;

#ifndef __CUDACC__
#include <math.h>

inline __host__ __device__ int4 make_int4(int s){
    return make_int4(s,s,s,s);
}

inline __host__ __device__ int4 make_int4(int3 a){
    return make_int4(a.x, a.y, a.z, 0);
}

inline __host__ __device__ int4 make_int4(int3 a, int w){
    return make_int4(a.x, a.y, a.z, w);
}

inline __host__ __device__ int4 make_int4(uint4 a){
    return make_int4(int(a.x), int(a.y), int(a.z), int(a.w));
}

inline __host__ __device__ int4 make_int4(float4 a){
    return make_int4(int(a.x), int(a.y), int(a.z), int(a.w));
}

#endif // HELPER_MATH_H
#endif
