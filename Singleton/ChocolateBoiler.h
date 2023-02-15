#pragma once
class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;
    static ChocolateBoiler* uniquelnstance;
    ChocolateBoiler();
public:
    static ChocolateBoiler* getlnstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
};