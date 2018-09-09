class TestDataEmptyArray {
public:
    static vector<int> get_array() 
    {
       vector<int> A;
        return A;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() 
    {
        vector<int> v={37,78,34,45};
        return v;
    }

    static int get_expected_result() 
    {
        return 2;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() 
    {
        vector<int> v={4,78,56,4,98};
        return v;
    }

    static int get_expected_result() 
    {
       return 0;
    }

};
