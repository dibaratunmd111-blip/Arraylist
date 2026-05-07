#pragma once
class ArrayList
{
private:
    const int size = 10;
    int arr[10] = { 1, 2, 3, 4, 5 };
    int numberOfItem = 5;

public:
    void display();
    void addFirst(int value);
    void addLast(int value);
    void insertAt(int index, int value);
    int valueAt(int index);
    int getSize();
    int getCurrentNumberOfItem();
    void removeAt(int value);
    void searchDuplicate(int value);
    void search(int value);
    bool isFull();
    bool isEmpty();
};


