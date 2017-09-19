#include <iostream>
#include "Histogram.h"

Histogram::Histogram(int numBuckets)
{
    // TODO: create an array of int elements,
    // assign a pointer to it to the int* field (i.e. m_counts)
    m_counts = new int[numBuckets];
    for(int i=0; i<numBuckets; i++) {
        m_counts[i] = 0;
    }

    // TODO: store numBuckets in the int field (i.e., m_numBuckets)
    m_numBuckets = numBuckets;
}

Histogram::Histogram(const Histogram &other)
{
    // TODO: allocate new int array, copy contents from other's int array
    m_counts = new int[other.m_numBuckets];
    m_numBuckets = other.m_numBuckets;

    for(int i=0; i<other.m_numBuckets; i++){
        m_counts[i] = other.m_counts[i];
    }


    // TODO: copy other's bucket count
}

Histogram::~Histogram()
{
    delete[] m_counts;
}

Histogram& Histogram::operator=(const Histogram &rhs)
{
    // TODO: delete old array
    delete[] m_counts;

    // TODO: create new array, copy contents from rhs
    m_counts = new int[rhs.m_numBuckets];
    m_numBuckets = rhs.m_numBuckets;

    for(int i=0; i<rhs.m_numBuckets; i++) {
        m_counts[i] = rhs.m_counts[i];
    }

    return *this;
}

void Histogram::increaseCount(int bucket)
{
    m_counts[bucket]++;
}

int Histogram::getCount(int bucket) const
{
    return m_counts[bucket];
}
