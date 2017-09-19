#ifndef HISTOGRAM_H
#define HISTOGRAM_H

class Histogram {
private:
    int *m_counts;

    public:
    Histogram(int numBuckets);
    ~Histogram();

    void increaseCount(int bucket);
    int getCount(int bucket);
};

#endif
