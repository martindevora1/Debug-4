#include <iostream>
#include <string>
#include <array>

using namespace std;

// The goal of this code is to add the contents of two arrays and then average their results.
// Each array is summed. And then the resulting sums are averaged together.
// This is not too different from calculating a final grade in a class where
// there are two equal categories (like classwork and projects, say).

// The code doesn't work. Fix it. REMEMBER TO COMMENT ON WHAT YOU ARE CHANING AND WHY.

// It should be returning a value of 12.5

int main() {
    // Leave the arrays alone. If you have to change the data to get the
    // result that you need then you probably are on the wrong track.
    int classwork[5] = {1,2,3,4,5};
    int projects[4] = {4,3,2,1};
    
    //added two seperate temp sums because there's two different categories
    float temp_sumA = 0;
    float temp_sumB = 0;
    for (unsigned i = 0 ; i < 5 ; i++){
        temp_sumA = temp_sumA + classwork[i];
    }
    for (unsigned j = 0 ; j < 4 ; j++){
        temp_sumB = temp_sumB + projects[j];
    }
    //changed int to float
    float avg = (temp_sumA + temp_sumB)/2;
    cout << avg;
    
	return avg;
}