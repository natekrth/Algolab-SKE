#include <iostream>

using namespace std;


const int BUCKET_SIZE = 1000;
const int NUM_BUCKETS = 5;    

int main()
{
    int n;
    cin >> n;
    int buckets[NUM_BUCKETS] = {0};
    int water_tank = 0;

    for (int i = 0; i < n; i++)
    {
        int jar_water;
        cin >> jar_water;

        int min_bucket_index = 0;
        for (int j = 1; j < 5; j++)
        {
            if (buckets[j] < buckets[min_bucket_index])
            {
                min_bucket_index = j;
            }
        }
        buckets[min_bucket_index] += jar_water;
        if (buckets[min_bucket_index] >= 1000)
        {
            water_tank += 1000;
            buckets[min_bucket_index] = 0;
        }
    }
    cout << water_tank << endl;

    return 0;
}
