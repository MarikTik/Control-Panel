// #ifndef BITMAP_H_
// #define BITMAP_H_
// #include <cstdint>

// using byte = std::uint8_t;
// using word = std::uint16_t;

// template<typename UnitType>
// struct BitmapInfo{
//     UnitType* pixel_array;
//     word width;
//     word height;

//     ~BitmapInfo();
// };

// template<std::uint8_t r=5, std::uint8_t g=6, std::uint8_t b=5>
// class Bitmap
// {
    
//     public:
//         Bitmap(const char* path);
//         BitmapInfo<std::uint16_t>* load();  
//     private:
//         const char* _path;
// };

// #include "Bitmap.cpp"


// #endif