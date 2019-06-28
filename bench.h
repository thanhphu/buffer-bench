//
// Created by Thanh Phu on 6/27/2019.
//

#ifndef FLATBUFFERS_BENCH_BENCH_H
#define FLATBUFFERS_BENCH_BENCH_H

#include <cstdint>
#include <cstdio>

struct Bench {
    int64_t sum;

    virtual ~Bench() {}

    void Add(int64_t x) {
        sum += x;
        //printf("%I64d ", x);
    }

    virtual void Encode(void *buf, size_t &len) = 0;
    virtual void *Decode(void *buf, size_t len) = 0;
    virtual int64_t Use(void *decoded) = 0;
    virtual void Dealloc(void *decoded) = 0;

    virtual void Init() {}
    virtual void ShutDown() {}
};


#endif //FLATBUFFERS_BENCH_BENCH_H
