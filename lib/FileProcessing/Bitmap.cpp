// #include "Bitmap.h"
// #include "log.h"
// #include <LittleFS.h>


// struct bitmap_file_header {
//   std::uint16_t signature;
//   std::uint32_t file_size;
//   std::uint16_t reserved[2];
//   std::uint32_t image_offset;
// };

// struct bitmap_image_header {
//   std::uint32_t header_size;
//   std::uint32_t image_width;
//   std::uint32_t image_height;
//   std::uint16_t color_planes;
//   std::uint16_t bits_per_pixel;
//   std::uint32_t compression_method;
//   std::uint32_t image_size;
//   std::uint32_t horizontal_resolution;
//   std::uint32_t vertical_resolution;
//   std::uint32_t colors_in_palette;
//   std::uint32_t important_colors;
// };

// template<std
// Bitmap::Bitmap(const char* path) : _path(path)
// {
// }

// BitmapInfo<std::uint16_t>* Bitmap::load(){
//     auto image_info = new BitmapInfo<std::uint16_t>;
//     auto image_file = LittleFS.open(_path, "r");

//     bitmap_file_header file_header;
//     bitmap_image_header image_header;
   
//     image_file.read((std::uint8_t*)&file_header, sizeof(bitmap_file_header));
//     image_file.read((std::uint8_t*)&image_header, sizeof(bitmap_image_header));
    
//     image_file.close();
//     return image_info;
// } 