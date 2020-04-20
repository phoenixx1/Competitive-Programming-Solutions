// Testing
// author @Nishant

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> arr{};
        return arr;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> arr{45,12,11,56,75,2};
        return arr;
    }

    static int get_expected_result() {
        return 5;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> arr{12,45,6,56,23,3,76,3,12,21};
        return arr;
    }

    static int get_expected_result() {
        return 5;
    }
};