
/**
 * Computes the sum of array values
 *      sum = (values[0] + ... + values[values.length-1]);
 *      
 * @param values, an array of values
 * @return the sum of the values in the array
 */
int array_sum(int* values, int off, int len) {
    values += off;

    int index = 0;
    int cpt = 0;
    while (index != len){
        cpt += values[index];
        index++;
    }

    return cpt;
}

/**
 * Computes the sum of array values
 *      sum = (values[0] + ... + values[values.length-1]);
 *      
 * @param values,
 *          an array of values
 * @return the sum of the values in the array
 */
float array_sumf(float* values, int off, int len) {
    values += off;

    int index = 0;
    float cpt = 0;
    while (index != len){
        cpt += values[index];
        index++;
    }

    return cpt;
}

/**
 * Computes the average of array values
 *      avg = (values[0] + ... + values[values.length-1])/values.length;
 *      
 * @param values,
 *          an array of values
 * @return the average of the values in the array
 */
int array_average(int* values, int off, int len) {
    return array_sum(values, off, len)/len;
}

/**
 * Computes the average of array values
 *      avg = (values[0] + ... + values[values.length-1])/values.length;
 *      
 * @param values,
 *          an array of values
 * @return the average of the values in the array
 */
float array_averagef(float* values, int off, int len) {
    return array_sumf(values, off, len)/len;
}

/**
 * Copies values from the source array into the destination array
 * 
 * @param dst,
 *          the destination array
 * @param dstOffset,
 *          the offset where to start copying to, in the destination array
 * @param src,
 *          the source array
 * @param offset,
 *          the offset where to start copying from, in the source array
 * @param length,
 *          the number of values copied
 */
void array_copy(int* dst, int dstOffset, int* src, int offset, int length) {
    dst += dstOffset;
    src += offset;

    int index = 0;
    while (index != length){
        dst[index] = src[index];
        index++;
    }
}

/**
 * Copies values from the source array into the destination array
 * 
 * @param dst,
 *          the destination array
 * @param dstOffset,
 *          the offset where to start copying to, in the destination array
 * @param src,
 *          the source array
 * @param offset,
 *          the offset where to start copying from, in the source array
 * @param length,
 *          the number of values copied
 */
void array_copyf(float* dst, int dstOffset, float* src, int offset, int length) {
    dst += dstOffset;
    src += offset;

    int index = 0;
    while (index != length){
        dst[index] = src[index];
        index++;
    }
}

/**
 * Sorts the values in the given array
 * 
 * @param array
 *          of values to sort
 */
void array_sortf(float* array, int length) {
    for (int i=1 ; i <= length-1; i++) {
        int j = i;

        while (j > 0 && array[j-1] > array[j]) {
            float tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;

            j--;
        }
    }
}

/**
 * Sorts the values in the given array
 * 
 * @param array
 *          of values to sort
 */
void array_sort(int* array, int length) {
    for (int i=1 ; i <= length-1; i++) {
        int j = i;

        while (j > 0 && array[j-1] > array[j]) {
            int tmp = array[j];
            array[j] = array[j-1];
            array[j-1] = tmp;

            j--;
        }
    }
}



