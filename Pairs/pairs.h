class Pairs{
    private:
        int first;
        int second;
    public:
        Pairs(int first, int second);
        Pairs();
        friend void compareFirst(Pairs& a, Pairs& b);
        friend bool isSumEven(Pairs& a, Pairs& b);
        friend void get_values(Pairs& a, Pairs& b);
};
