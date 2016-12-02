#ifndef ALGORITHM_KNN_H_
#define ALGORITHM_KNN_H_

#include "NNAlgorithm.h"

struct KNN : public NNAlgorithm {

	KNN(const size_t K)
	    : K(K)
	{}

	virtual void train(const DataType &train_data, const LabelType &train_labels) override;
	virtual void classify(const DataType &test_data, LabelType &result) override;

	virtual ~KNN() = default;

private:
	int get_mode_from_k_neighbours(DistanceType &distances);

	const size_t K;

	DataType train_data;
	LabelType train_labels;
};



#endif /* ALGORITHM_KNN_H_ */
