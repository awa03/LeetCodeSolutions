class DynamicArray {
public:

    DynamicArray(int capacity) {
        size = 0;
        c = capacity;
        arr = new int[c];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        if(i >= c)
            resize(c * 2);
        arr[i] = n;
        if (i >= size)
            size = i + 1;
    }

    void pushback(int n) {
        if (size >= c)
            resize(c * 2);
        arr[size] = n;
        size++;
    }

    int popback() {
        if (size > 0) {
            size--;
            return arr[size];
        }
        return -1; 
    }

    void resize() {
        resize(c * 2);
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return c;
    }
    
private:
    void resize(int newSize) {
        int * tmp = new int[newSize];
        c = newSize;

        for(int i = 0; i < c; i++){
            if (i < size)
                tmp[i] = arr[i];
            else
                tmp[i] = 0; 
        }
        delete[] arr; 
        arr = tmp;
    }

    int* arr;
    int c;
    int size;
};
