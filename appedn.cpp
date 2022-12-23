#include <iostream>

using namespace std;

struct Dog
{
    int age;
    double weight;
    double speed;
};

Dog dogs[1000];
int dog_count = 0;

typedef Dog ElementT;

bool operator==(Dog &d1, Dog &d2)
{
    return (d1.age == d2.age) && (d1.weight == d2.weight) && (d1.speed == d2.speed);
}

Dog read_dog()
{
    Dog d;
    cin >> d.age >> d.weight >> d.speed;
    return d;
}

void append_list(ElementT *items, int *count, ElementT new_item)
{
    //add new item to list
    items[*count] = new_item;
    // count items
    *count = *count + 1;
}

int find(ElementT *items, int count, ElementT target)
{
    for(int i = 0; i < count; i++)
    {
        if(target == items[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Dog new_dog = read_dog();
        append_list(dogs, &dog_count, new_dog);
    }
    Dog target_dog = read_dog();
    cout << find(dogs, dog_count, target_dog) << endl;
}
