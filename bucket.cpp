#include <iostream>

using namespace std;

const int BUCKET_SIZE = 1000; // Each bucket can hold up to 1000 units of water
const int NUM_BUCKETS = 5;    // There are 5 buckets

int main()
{
    // Read the number of jars
    int n;
    cin >> n;

    // Initialize the buckets to 0
    int buckets[NUM_BUCKETS] = {0};

    // Keep track of the total amount of water in the water tank
    int water_tank = 0;

    // Process each jar of water
    for (int i = 0; i < n; i++)
    {
        // Read the amount of water in the jar
        int jar_water;
        cin >> jar_water;

        // Find the bucket with the smallest amount of water
        int min_bucket_index = 0;
        for (int j = 1; j < NUM_BUCKETS; j++)
        {
            if (buckets[j] < buckets[min_bucket_index])
            {
                min_bucket_index = j;
            }
        }

        // Pour the water from the jar into the bucket)
        buckets[min_bucket_index] += jar_water;
        if (buckets[min_bucket_index] >= 1000)
        {
            buckets[min_bucket_index] = 0;
            water_tank += 1000;
        }

        // If the bucket is full, empty it into the water tank
        if (buckets[min_bucket_index] > BUCKET_SIZE)
        {
            // water_tank += BUCKET_SIZE;
            buckets[min_bucket_index] -= BUCKET_SIZE;
        }
    }

    // Add the remaining water in the buckets to the water tank
    for (int i = 0; i < NUM_BUCKETS; i++)
    {
        water_tank += buckets[i];
    }

    // Print the total amount of water in the water tank
    cout << water_tank << endl;

    return 0;
}
