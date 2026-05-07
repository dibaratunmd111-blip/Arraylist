#include "ArrayList.h"
#include <iostream>

void ArrayList::addFirst(int data) {
    if (!isFull()) {
        if (valueAt(0) == 0) {
            arr[0] = data;
        }
        else {
            int curr = arr[0];
            int temp = 0;

            for (int x = 0; x < size; x++) {
                if (x < 9) {
                    temp = arr[x + 1];
                    arr[x + 1] = curr;
                    curr = temp;
                }
                arr[0] = data;
            }
            numberOfItem++;
        }
    }
    else {
        std::cout << "full! ";
    }
}
void ArrayList::addLast(int value) {
    if (!isFull()) {
        if (valueAt(size - 1) == 0) {
            arr[size - 1] = value;
            numberOfItem++;
        }
        else {
            int curr = arr[size - 1];
            int temp;

            for (int x = size - 1; x >= 0; x--) {
                if (arr[x - 1] == 0) {
                    temp = arr[x - 1];
                    arr[x - 1] = curr;
                    curr = temp;
                }
                arr[size - 1] = value;
            }
            
            numberOfItem++;
        }
    }
    else {
        std::cout << "full!" << std::endl;
    }
}
void ArrayList::removeAt(int value) {
    if (!isEmpty()) {
        bool found = false;
        for (int x = 0; x < size; x++) {
            if (arr[x] == value) {
                numberOfItem--;
                found = true;
                for (int y = x; y < size - 1; y++) {
                    arr[y] = arr[y + 1];
                }
                std::cout << "Removed " << value << std::endl;
                arr[size - 1] = 0;
            }
        }
        if (!found) {
            std::cout << "You don't have to remove the value " << value << " because it does not exist in the Array List" << std::endl;
        }
    }
    else {
        std::cout << "Array List is empty" << std::endl;
    }
}
void ArrayList::insertAt(int index, int value) {
    if (index >= size || index < 0) {
        std::cout << "The index you want to insert into the Array list is index out of bounds\n";
        //return;
    }
    else if (!isFull()) {
        if (arr[index] == 0) {
            arr[index] = value;
            numberOfItem++;
            std::cout << "The value " << value << " inserted successfully at index: " << index << " into the Array List" << std::endl;
        }
        else /*if (index >= 0)*/ {
            bool avail = false;
            for (int x = index; x < size; x++) {
                if (arr[x] == 0) {
                    avail = true;
                }
                else {
                    avail = false;
                }
            }
            if (avail) {
                int curr = arr[index];
                int temp = 0;
                for (int x = index; x < size; x++) {
                    if (x < size - 1) {
                        temp = arr[x + 1];
                        arr[x + 1] = curr;
                        curr = temp;
                        arr[index] = value;     
                    }
                    
                }
                numberOfItem++;
                std::cout << "Inserted Successfully! Value " << value << " inserted at index: " << index << " into the Array List" << std::endl;
            }
            else {
                std::cout << "You can't insert " << value << " at index: " << index << " into the Array List" << std::endl;
            }
        }
    }
    else {
        std::cout << "Array List is full! You can't insert " << value << std::endl;
    }
}


int ArrayList::getSize() {
    return size;
}

bool ArrayList::isFull() {
    if (numberOfItem == size) {
        return true;
    }
    return false;
}

bool ArrayList::isEmpty() {
    if (numberOfItem == 0) {
        return true;
    }
    return false;
}

int ArrayList::valueAt(int index) {
    return arr[index];
}

int ArrayList::getCurrentNumberOfItem() {
    return numberOfItem;
}

void ArrayList::display() {
    for (int i = 0; i < size; i++) {
        std::cout << "value: " << arr[i] << " index: " << i << std::endl;
    }
    std::cout << "\n";
}
void ArrayList::searchDuplicate(int value) {
    int num = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            tmp = arr[i];
            num++;
        }
    }
    std::cout << "\nvalue: " << tmp << "number: " << num << std::endl;
}


