class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
        void setDetails(int L, int W, int H);
        int getLength();
        int getWidth();
        int getHeight();
        int calcVolume();
};
