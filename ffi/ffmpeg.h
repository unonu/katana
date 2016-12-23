// 1 "ffmpeg_inter.h"
// 1 "<built-in>"
// 1 "<command-line>"
// 1 "/usr/include/stdc-predef.h" 1 3 4
// 1 "<command-line>" 2
// 1 "ffmpeg_inter.h"
// 1 "../../libav-12/config.h" 1
// 2 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavutil/avstring.h" 1
// 24 "../../libav-12/libavutil/avstring.h"
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4

// 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
// 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
// 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t;
// 426 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
// 25 "../../libav-12/libavutil/avstring.h" 2
// 1 "../../libav-12/libavutil/attributes.h" 1
// 26 "../../libav-12/libavutil/avstring.h" 2
// 41 "../../libav-12/libavutil/avstring.h"

// 41 "../../libav-12/libavutil/avstring.h"
int av_strstart(const char *str, const char *pfx, const char **ptr);
// 53 "../../libav-12/libavutil/avstring.h"
int av_stristart(const char *str, const char *pfx, const char **ptr);
// 67 "../../libav-12/libavutil/avstring.h"
char *av_stristr(const char *haystack, const char *needle);
// 82 "../../libav-12/libavutil/avstring.h"
char *av_strnstr(const char *haystack, const char *needle, size_t hay_length);
// 99 "../../libav-12/libavutil/avstring.h"
size_t av_strlcpy(char *dst, const char *src, size_t size);
// 117 "../../libav-12/libavutil/avstring.h"
size_t av_strlcat(char *dst, const char *src, size_t size);
// 131 "../../libav-12/libavutil/avstring.h"
size_t av_strlcatf(char *dst, size_t size, const char *fmt, ...) __attribute__((__format__(__printf__, 3, 4)));




char *av_d2str(double d);
// 152 "../../libav-12/libavutil/avstring.h"
char *av_get_token(const char **buf, const char *term);




static inline __attribute__((const)) int av_isdigit(int c)
{
    return c >= '0' && c <= '9';
}




static inline __attribute__((const)) int av_isgraph(int c)
{
    return c > 32 && c < 127;
}




static inline __attribute__((const)) int av_isspace(int c)
{
    return c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' ||
           c == '\v';
}




static inline __attribute__((const)) int av_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c ^= 0x20;
    return c;
}




static inline __attribute__((const)) int av_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c ^= 0x20;
    return c;
}




static inline __attribute__((const)) int av_isxdigit(int c)
{
    c = av_tolower(c);
    return av_isdigit(c) || (c >= 'a' && c <= 'f');
}





int av_strcasecmp(const char *a, const char *b);





int av_strncasecmp(const char *a, const char *b, size_t n);







const char *av_basename(const char *path);







const char *av_dirname(char *path);
// 243 "../../libav-12/libavutil/avstring.h"
int av_match_name(const char *name, const char *names);
// 3 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavutil/pixdesc.h" 1
// 25 "../../libav-12/libavutil/pixdesc.h"
// 1 "/usr/include/inttypes.h" 1 3 4
// 25 "/usr/include/inttypes.h" 3 4
// 1 "/usr/include/features.h" 1 3 4
// 367 "/usr/include/features.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
// 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
// 368 "/usr/include/features.h" 2 3 4
// 391 "/usr/include/features.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
// 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
// 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
// 392 "/usr/include/features.h" 2 3 4
// 26 "/usr/include/inttypes.h" 2 3 4

// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 1 3 4
// 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 3 4
// 1 "/usr/include/stdint.h" 1 3 4
// 26 "/usr/include/stdint.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
// 27 "/usr/include/stdint.h" 2 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 28 "/usr/include/stdint.h" 2 3 4
// 36 "/usr/include/stdint.h" 3 4

// 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
// 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
// 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
// 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
// 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
// 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
// 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 2 3 4
// 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
// 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
// 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
// 432 "/usr/include/inttypes.h" 3 4

// 26 "../../libav-12/libavutil/pixdesc.h" 2


// 1 "../../libav-12/libavutil/pixfmt.h" 1
// 29 "../../libav-12/libavutil/pixfmt.h"
// 1 "../../libav-12/libavutil/avconfig.h" 1
// 30 "../../libav-12/libavutil/pixfmt.h" 2
// 1 "../../libav-12/libavutil/version.h" 1
// 22 "../../libav-12/libavutil/version.h"
// 1 "../../libav-12/libavutil/macros.h" 1
// 23 "../../libav-12/libavutil/version.h" 2
// 31 "../../libav-12/libavutil/pixfmt.h" 2
// 57 "../../libav-12/libavutil/pixfmt.h"

// 57 "../../libav-12/libavutil/pixfmt.h"
enum AVPixelFormat {
    AV_PIX_FMT_NONE = -1,
    AV_PIX_FMT_YUV420P,
    AV_PIX_FMT_YUYV422,
    AV_PIX_FMT_RGB24,
    AV_PIX_FMT_BGR24,
    AV_PIX_FMT_YUV422P,
    AV_PIX_FMT_YUV444P,
    AV_PIX_FMT_YUV410P,
    AV_PIX_FMT_YUV411P,
    AV_PIX_FMT_GRAY8,
    AV_PIX_FMT_MONOWHITE,
    AV_PIX_FMT_MONOBLACK,
    AV_PIX_FMT_PAL8,
    AV_PIX_FMT_YUVJ420P,
    AV_PIX_FMT_YUVJ422P,
    AV_PIX_FMT_YUVJ444P,

    AV_PIX_FMT_XVMC_MPEG2_MC,
    AV_PIX_FMT_XVMC_MPEG2_IDCT,

    AV_PIX_FMT_UYVY422,
    AV_PIX_FMT_UYYVYY411,
    AV_PIX_FMT_BGR8,
    AV_PIX_FMT_BGR4,
    AV_PIX_FMT_BGR4_BYTE,
    AV_PIX_FMT_RGB8,
    AV_PIX_FMT_RGB4,
    AV_PIX_FMT_RGB4_BYTE,
    AV_PIX_FMT_NV12,
    AV_PIX_FMT_NV21,

    AV_PIX_FMT_ARGB,
    AV_PIX_FMT_RGBA,
    AV_PIX_FMT_ABGR,
    AV_PIX_FMT_BGRA,

    AV_PIX_FMT_GRAY16BE,
    AV_PIX_FMT_GRAY16LE,
    AV_PIX_FMT_YUV440P,
    AV_PIX_FMT_YUVJ440P,
    AV_PIX_FMT_YUVA420P,

    AV_PIX_FMT_VDPAU_H264,
    AV_PIX_FMT_VDPAU_MPEG1,
    AV_PIX_FMT_VDPAU_MPEG2,
    AV_PIX_FMT_VDPAU_WMV3,
    AV_PIX_FMT_VDPAU_VC1,

    AV_PIX_FMT_RGB48BE,
    AV_PIX_FMT_RGB48LE,

    AV_PIX_FMT_RGB565BE,
    AV_PIX_FMT_RGB565LE,
    AV_PIX_FMT_RGB555BE,
    AV_PIX_FMT_RGB555LE,

    AV_PIX_FMT_BGR565BE,
    AV_PIX_FMT_BGR565LE,
    AV_PIX_FMT_BGR555BE,
    AV_PIX_FMT_BGR555LE,


    AV_PIX_FMT_VAAPI_MOCO,
    AV_PIX_FMT_VAAPI_IDCT,
    AV_PIX_FMT_VAAPI_VLD,
    AV_PIX_FMT_VAAPI = AV_PIX_FMT_VAAPI_VLD,




    AV_PIX_FMT_YUV420P16LE,
    AV_PIX_FMT_YUV420P16BE,
    AV_PIX_FMT_YUV422P16LE,
    AV_PIX_FMT_YUV422P16BE,
    AV_PIX_FMT_YUV444P16LE,
    AV_PIX_FMT_YUV444P16BE,

    AV_PIX_FMT_VDPAU_MPEG4,

    AV_PIX_FMT_DXVA2_VLD,

    AV_PIX_FMT_RGB444LE,
    AV_PIX_FMT_RGB444BE,
    AV_PIX_FMT_BGR444LE,
    AV_PIX_FMT_BGR444BE,
    AV_PIX_FMT_YA8,

    AV_PIX_FMT_Y400A = AV_PIX_FMT_YA8,

    AV_PIX_FMT_BGR48BE,
    AV_PIX_FMT_BGR48LE,
    AV_PIX_FMT_YUV420P9BE,
    AV_PIX_FMT_YUV420P9LE,
    AV_PIX_FMT_YUV420P10BE,
    AV_PIX_FMT_YUV420P10LE,
    AV_PIX_FMT_YUV422P10BE,
    AV_PIX_FMT_YUV422P10LE,
    AV_PIX_FMT_YUV444P9BE,
    AV_PIX_FMT_YUV444P9LE,
    AV_PIX_FMT_YUV444P10BE,
    AV_PIX_FMT_YUV444P10LE,
    AV_PIX_FMT_YUV422P9BE,
    AV_PIX_FMT_YUV422P9LE,
    AV_PIX_FMT_VDA_VLD,
    AV_PIX_FMT_GBRP,
    AV_PIX_FMT_GBRP9BE,
    AV_PIX_FMT_GBRP9LE,
    AV_PIX_FMT_GBRP10BE,
    AV_PIX_FMT_GBRP10LE,
    AV_PIX_FMT_GBRP16BE,
    AV_PIX_FMT_GBRP16LE,
    AV_PIX_FMT_YUVA422P,
    AV_PIX_FMT_YUVA444P,
    AV_PIX_FMT_YUVA420P9BE,
    AV_PIX_FMT_YUVA420P9LE,
    AV_PIX_FMT_YUVA422P9BE,
    AV_PIX_FMT_YUVA422P9LE,
    AV_PIX_FMT_YUVA444P9BE,
    AV_PIX_FMT_YUVA444P9LE,
    AV_PIX_FMT_YUVA420P10BE,
    AV_PIX_FMT_YUVA420P10LE,
    AV_PIX_FMT_YUVA422P10BE,
    AV_PIX_FMT_YUVA422P10LE,
    AV_PIX_FMT_YUVA444P10BE,
    AV_PIX_FMT_YUVA444P10LE,
    AV_PIX_FMT_YUVA420P16BE,
    AV_PIX_FMT_YUVA420P16LE,
    AV_PIX_FMT_YUVA422P16BE,
    AV_PIX_FMT_YUVA422P16LE,
    AV_PIX_FMT_YUVA444P16BE,
    AV_PIX_FMT_YUVA444P16LE,
    AV_PIX_FMT_VDPAU,
    AV_PIX_FMT_XYZ12LE,
    AV_PIX_FMT_XYZ12BE,
    AV_PIX_FMT_NV16,
    AV_PIX_FMT_NV20LE,
    AV_PIX_FMT_NV20BE,

    AV_PIX_FMT_RGBA64BE,
    AV_PIX_FMT_RGBA64LE,
    AV_PIX_FMT_BGRA64BE,
    AV_PIX_FMT_BGRA64LE,

    AV_PIX_FMT_YVYU422,

    AV_PIX_FMT_VDA,

    AV_PIX_FMT_YA16BE,
    AV_PIX_FMT_YA16LE,

    AV_PIX_FMT_GBRAP,
    AV_PIX_FMT_GBRAP16BE,
    AV_PIX_FMT_GBRAP16LE,




    AV_PIX_FMT_QSV,




    AV_PIX_FMT_MMAL,

    AV_PIX_FMT_D3D11VA_VLD,





    AV_PIX_FMT_CUDA,

    AV_PIX_FMT_P010LE,
    AV_PIX_FMT_P010BE,

    AV_PIX_FMT_NB,
};
// 293 "../../libav-12/libavutil/pixfmt.h"
enum AVColorPrimaries {
    AVCOL_PRI_RESERVED0 = 0,
    AVCOL_PRI_BT709 = 1,
    AVCOL_PRI_UNSPECIFIED = 2,
    AVCOL_PRI_RESERVED = 3,
    AVCOL_PRI_BT470M = 4,

    AVCOL_PRI_BT470BG = 5,
    AVCOL_PRI_SMPTE170M = 6,
    AVCOL_PRI_SMPTE240M = 7,
    AVCOL_PRI_FILM = 8,
    AVCOL_PRI_BT2020 = 9,
    AVCOL_PRI_SMPTE428 = 10,
    AVCOL_PRI_SMPTEST428_1 = AVCOL_PRI_SMPTE428,
    AVCOL_PRI_SMPTE431 = 11,
    AVCOL_PRI_SMPTE432 = 12,
    AVCOL_PRI_NB,
};




enum AVColorTransferCharacteristic {
    AVCOL_TRC_RESERVED0 = 0,
    AVCOL_TRC_BT709 = 1,
    AVCOL_TRC_UNSPECIFIED = 2,
    AVCOL_TRC_RESERVED = 3,
    AVCOL_TRC_GAMMA22 = 4,
    AVCOL_TRC_GAMMA28 = 5,
    AVCOL_TRC_SMPTE170M = 6,
    AVCOL_TRC_SMPTE240M = 7,
    AVCOL_TRC_LINEAR = 8,
    AVCOL_TRC_LOG = 9,
    AVCOL_TRC_LOG_SQRT = 10,
    AVCOL_TRC_IEC61966_2_4 = 11,
    AVCOL_TRC_BT1361_ECG = 12,
    AVCOL_TRC_IEC61966_2_1 = 13,
    AVCOL_TRC_BT2020_10 = 14,
    AVCOL_TRC_BT2020_12 = 15,
    AVCOL_TRC_SMPTE2084 = 16,
    AVCOL_TRC_SMPTEST2084 = AVCOL_TRC_SMPTE2084,
    AVCOL_TRC_SMPTE428 = 17,
    AVCOL_TRC_SMPTEST428_1 = AVCOL_TRC_SMPTE428,
    AVCOL_TRC_ARIB_STD_B67 = 18,
    AVCOL_TRC_NB,
};




enum AVColorSpace {
    AVCOL_SPC_RGB = 0,
    AVCOL_SPC_BT709 = 1,
    AVCOL_SPC_UNSPECIFIED = 2,
    AVCOL_SPC_RESERVED = 3,
    AVCOL_SPC_FCC = 4,
    AVCOL_SPC_BT470BG = 5,
    AVCOL_SPC_SMPTE170M = 6,
    AVCOL_SPC_SMPTE240M = 7,
    AVCOL_SPC_YCOCG = 8,
    AVCOL_SPC_BT2020_NCL = 9,
    AVCOL_SPC_BT2020_CL = 10,
    AVCOL_SPC_SMPTE2085 = 11,
    AVCOL_SPC_NB,
};




enum AVColorRange {
    AVCOL_RANGE_UNSPECIFIED = 0,
    AVCOL_RANGE_MPEG = 1,
    AVCOL_RANGE_JPEG = 2,
    AVCOL_RANGE_NB,
};
// 376 "../../libav-12/libavutil/pixfmt.h"
enum AVChromaLocation {
    AVCHROMA_LOC_UNSPECIFIED = 0,
    AVCHROMA_LOC_LEFT = 1,
    AVCHROMA_LOC_CENTER = 2,
    AVCHROMA_LOC_TOPLEFT = 3,
    AVCHROMA_LOC_TOP = 4,
    AVCHROMA_LOC_BOTTOMLEFT = 5,
    AVCHROMA_LOC_BOTTOM = 6,
    AVCHROMA_LOC_NB,
};
// 29 "../../libav-12/libavutil/pixdesc.h" 2

typedef struct AVComponentDescriptor {



    int plane;





    int step;





    int offset;





    int shift;




    int depth;



    __attribute__((deprecated)) int step_minus1;


    __attribute__((deprecated)) int depth_minus1;


    __attribute__((deprecated)) int offset_plus1;

} AVComponentDescriptor;
// 80 "../../libav-12/libavutil/pixdesc.h"
typedef struct AVPixFmtDescriptor {
    const char *name;
    uint8_t nb_components;
// 91 "../../libav-12/libavutil/pixdesc.h"
    uint8_t log2_chroma_w;
// 100 "../../libav-12/libavutil/pixdesc.h"
    uint8_t log2_chroma_h;




    uint64_t flags;
// 119 "../../libav-12/libavutil/pixdesc.h"
    AVComponentDescriptor comp[4];




    const char *alias;
} AVPixFmtDescriptor;
// 178 "../../libav-12/libavutil/pixdesc.h"
void av_read_image_line(uint16_t *dst, const uint8_t *data[4],
                        const int linesize[4], const AVPixFmtDescriptor *desc,
                        int x, int y, int c, int w, int read_pal_component);
// 196 "../../libav-12/libavutil/pixdesc.h"
void av_write_image_line(const uint16_t *src, uint8_t *data[4],
                         const int linesize[4], const AVPixFmtDescriptor *desc,
                         int x, int y, int c, int w);
// 211 "../../libav-12/libavutil/pixdesc.h"
enum AVPixelFormat av_get_pix_fmt(const char *name);







const char *av_get_pix_fmt_name(enum AVPixelFormat pix_fmt);
// 231 "../../libav-12/libavutil/pixdesc.h"
char *av_get_pix_fmt_string(char *buf, int buf_size,
                            enum AVPixelFormat pix_fmt);
// 243 "../../libav-12/libavutil/pixdesc.h"
int av_get_bits_per_pixel(const AVPixFmtDescriptor *pixdesc);





const AVPixFmtDescriptor *av_pix_fmt_desc_get(enum AVPixelFormat pix_fmt);
// 258 "../../libav-12/libavutil/pixdesc.h"
const AVPixFmtDescriptor *av_pix_fmt_desc_next(const AVPixFmtDescriptor *prev);





enum AVPixelFormat av_pix_fmt_desc_get_id(const AVPixFmtDescriptor *desc);
// 276 "../../libav-12/libavutil/pixdesc.h"
int av_pix_fmt_get_chroma_sub_sample(enum AVPixelFormat pix_fmt,
                                     int *h_shift, int *v_shift);





int av_pix_fmt_count_planes(enum AVPixelFormat pix_fmt);
// 293 "../../libav-12/libavutil/pixdesc.h"
enum AVPixelFormat av_pix_fmt_swap_endianness(enum AVPixelFormat pix_fmt);




const char *av_color_range_name(enum AVColorRange range);




const char *av_color_primaries_name(enum AVColorPrimaries primaries);




const char *av_color_transfer_name(enum AVColorTransferCharacteristic transfer);




const char *av_color_space_name(enum AVColorSpace space);




const char *av_chroma_location_name(enum AVChromaLocation location);
// 4 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavformat/avformat.h" 1
// 256 "../../libav-12/libavformat/avformat.h"
// 1 "/usr/include/time.h" 1 3 4
// 29 "/usr/include/time.h" 3 4








// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 38 "/usr/include/time.h" 2 3 4



// 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
// 42 "/usr/include/time.h" 2 3 4
// 55 "/usr/include/time.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
// 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



// 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
// 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
// 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
// 56 "/usr/include/time.h" 2 3 4



typedef __clock_t clock_t;



// 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



// 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
// 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
// 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };








struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;
// 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

// 221 "/usr/include/time.h" 3 4
// 1 "/usr/include/xlocale.h" 1 3 4
// 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
// 222 "/usr/include/time.h" 2 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
// 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
// 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
// 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
// 430 "/usr/include/time.h" 3 4

// 257 "../../libav-12/libavformat/avformat.h" 2
// 1 "/usr/include/stdio.h" 1 3 4
// 29 "/usr/include/stdio.h" 3 4




// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 34 "/usr/include/stdio.h" 2 3 4
// 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





// 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
// 74 "/usr/include/stdio.h" 3 4
// 1 "/usr/include/libio.h" 1 3 4
// 31 "/usr/include/libio.h" 3 4
// 1 "/usr/include/_G_config.h" 1 3 4
// 15 "/usr/include/_G_config.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 16 "/usr/include/_G_config.h" 2 3 4




// 1 "/usr/include/wchar.h" 1 3 4
// 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
// 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
// 32 "/usr/include/libio.h" 2 3 4
// 49 "/usr/include/libio.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
// 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
// 50 "/usr/include/libio.h" 2 3 4
// 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
// 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
// 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
// 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
// 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
// 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
// 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
// 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
// 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
// 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
// 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




// 164 "/usr/include/stdio.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
// 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
// 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
// 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

// 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
// 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
// 295 "/usr/include/stdio.h" 3 4

// 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
// 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

// 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
// 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
// 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
// 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
// 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

// 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
// 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

// 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
// 640 "/usr/include/stdio.h" 3 4

// 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

// 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

// 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
// 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
// 815 "/usr/include/stdio.h" 3 4

// 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






// 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
// 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
// 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
// 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
// 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
// 942 "/usr/include/stdio.h" 3 4

// 258 "../../libav-12/libavformat/avformat.h" 2
// 1 "../../libav-12/libavcodec/avcodec.h" 1
// 30 "../../libav-12/libavcodec/avcodec.h"
// 1 "/usr/include/errno.h" 1 3 4
// 31 "/usr/include/errno.h" 3 4




// 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
// 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
// 1 "/usr/include/linux/errno.h" 1 3 4
// 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
// 1 "/usr/include/asm-generic/errno.h" 1 3 4



// 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
// 5 "/usr/include/asm-generic/errno.h" 2 3 4
// 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
// 1 "/usr/include/linux/errno.h" 2 3 4
// 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
// 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
// 36 "/usr/include/errno.h" 2 3 4
// 58 "/usr/include/errno.h" 3 4

// 31 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/samplefmt.h" 1
// 24 "../../libav-12/libavutil/samplefmt.h"
// 1 "../../libav-12/libavutil/avutil.h" 1
// 164 "../../libav-12/libavutil/avutil.h"

// 164 "../../libav-12/libavutil/avutil.h"
unsigned avutil_version(void);






const char *av_version_info(void);




const char *avutil_configuration(void);




const char *avutil_license(void);
// 192 "../../libav-12/libavutil/avutil.h"
enum AVMediaType {
    AVMEDIA_TYPE_UNKNOWN = -1,
    AVMEDIA_TYPE_VIDEO,
    AVMEDIA_TYPE_AUDIO,
    AVMEDIA_TYPE_DATA,
    AVMEDIA_TYPE_SUBTITLE,
    AVMEDIA_TYPE_ATTACHMENT,
    AVMEDIA_TYPE_NB
};
// 259 "../../libav-12/libavutil/avutil.h"
enum AVPictureType {
    AV_PICTURE_TYPE_I = 1,
    AV_PICTURE_TYPE_P,
    AV_PICTURE_TYPE_B,
    AV_PICTURE_TYPE_S,
    AV_PICTURE_TYPE_SI,
    AV_PICTURE_TYPE_SP,
    AV_PICTURE_TYPE_BI,
};
// 276 "../../libav-12/libavutil/avutil.h"
char av_get_picture_type_char(enum AVPictureType pict_type);





// 1 "../../libav-12/libavutil/error.h" 1
// 27 "../../libav-12/libavutil/error.h"
// 1 "/usr/include/errno.h" 1 3 4
// 28 "../../libav-12/libavutil/error.h" 2
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 29 "../../libav-12/libavutil/error.h" 2
// 78 "../../libav-12/libavutil/error.h"
int av_strerror(int errnum, char *errbuf, size_t errbuf_size);
// 283 "../../libav-12/libavutil/avutil.h" 2
// 1 "../../libav-12/libavutil/rational.h" 1
// 32 "../../libav-12/libavutil/rational.h"
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
// 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 1 3 4






// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
// 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
// 1 "/usr/include/limits.h" 1 3 4
// 143 "/usr/include/limits.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
// 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
// 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
// 1 "/usr/include/linux/limits.h" 1 3 4
// 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
// 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
// 144 "/usr/include/limits.h" 2 3 4



// 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
// 148 "/usr/include/limits.h" 2 3 4
// 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
// 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 2 3 4
// 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
// 33 "../../libav-12/libavutil/rational.h" 2
// 43 "../../libav-12/libavutil/rational.h"
typedef struct AVRational{
    int num;
    int den;
} AVRational;
// 55 "../../libav-12/libavutil/rational.h"
static inline int av_cmp_q(AVRational a, AVRational b){
    const int64_t tmp= a.num * (int64_t)b.den - b.num * (int64_t)a.den;

    if(tmp) return ((tmp ^ a.den ^ b.den)>>63)|1;
    else if(b.den && a.den) return 0;
    else if(a.num && b.num) return (a.num>>31) - (b.num>>31);
    else return 
// 61 "../../libav-12/libavutil/rational.h" 3 4
                                  (-0x7fffffff - 1)
// 61 "../../libav-12/libavutil/rational.h"
                                         ;
}






static inline double av_q2d(AVRational a){
    return a.num / (double) a.den;
}
// 83 "../../libav-12/libavutil/rational.h"
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);







AVRational av_mul_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_div_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_add_q(AVRational b, AVRational c) __attribute__((const));







AVRational av_sub_q(AVRational b, AVRational c) __attribute__((const));






static __attribute__((always_inline)) inline AVRational av_inv_q(AVRational q)
{
    AVRational r = { q.den, q.num };
    return r;
}
// 136 "../../libav-12/libavutil/rational.h"
AVRational av_d2q(double d, int max) __attribute__((const));





int av_nearer_q(AVRational q, AVRational q1, AVRational q2);






int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
// 284 "../../libav-12/libavutil/avutil.h" 2






AVRational av_get_time_base_q(void);
// 25 "../../libav-12/libavutil/samplefmt.h" 2
// 60 "../../libav-12/libavutil/samplefmt.h"
enum AVSampleFormat {
    AV_SAMPLE_FMT_NONE = -1,
    AV_SAMPLE_FMT_U8,
    AV_SAMPLE_FMT_S16,
    AV_SAMPLE_FMT_S32,
    AV_SAMPLE_FMT_FLT,
    AV_SAMPLE_FMT_DBL,

    AV_SAMPLE_FMT_U8P,
    AV_SAMPLE_FMT_S16P,
    AV_SAMPLE_FMT_S32P,
    AV_SAMPLE_FMT_FLTP,
    AV_SAMPLE_FMT_DBLP,

    AV_SAMPLE_FMT_NB
};





const char *av_get_sample_fmt_name(enum AVSampleFormat sample_fmt);





enum AVSampleFormat av_get_sample_fmt(const char *name);
// 98 "../../libav-12/libavutil/samplefmt.h"
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
// 109 "../../libav-12/libavutil/samplefmt.h"
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
// 123 "../../libav-12/libavutil/samplefmt.h"
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);
// 132 "../../libav-12/libavutil/samplefmt.h"
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);







int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
// 152 "../../libav-12/libavutil/samplefmt.h"
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
                               enum AVSampleFormat sample_fmt, int align);
// 188 "../../libav-12/libavutil/samplefmt.h"
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
                           const uint8_t *buf,
                           int nb_channels, int nb_samples,
                           enum AVSampleFormat sample_fmt, int align);
// 210 "../../libav-12/libavutil/samplefmt.h"
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
                     int nb_samples, enum AVSampleFormat sample_fmt, int align);
// 224 "../../libav-12/libavutil/samplefmt.h"
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
                    int src_offset, int nb_samples, int nb_channels,
                    enum AVSampleFormat sample_fmt);
// 237 "../../libav-12/libavutil/samplefmt.h"
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
                           int nb_channels, enum AVSampleFormat sample_fmt);
// 32 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/attributes.h" 1
// 33 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/avutil.h" 1
// 34 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/buffer.h" 1
// 73 "../../libav-12/libavutil/buffer.h"
typedef struct AVBuffer AVBuffer;







typedef struct AVBufferRef {
    AVBuffer *buffer;






    uint8_t *data;



    int size;
} AVBufferRef;






AVBufferRef *av_buffer_alloc(int size);





AVBufferRef *av_buffer_allocz(int size);
// 130 "../../libav-12/libavutil/buffer.h"
AVBufferRef *av_buffer_create(uint8_t *data, int size,
                              void (*free)(void *opaque, uint8_t *data),
                              void *opaque, int flags);






void av_buffer_default_free(void *opaque, uint8_t *data);







AVBufferRef *av_buffer_ref(AVBufferRef *buf);







void av_buffer_unref(AVBufferRef **buf);







int av_buffer_is_writable(const AVBufferRef *buf);
// 174 "../../libav-12/libavutil/buffer.h"
int av_buffer_make_writable(AVBufferRef **buf);
// 191 "../../libav-12/libavutil/buffer.h"
int av_buffer_realloc(AVBufferRef **buf, int size);
// 231 "../../libav-12/libavutil/buffer.h"
typedef struct AVBufferPool AVBufferPool;
// 242 "../../libav-12/libavutil/buffer.h"
AVBufferPool *av_buffer_pool_init(int size, AVBufferRef* (*alloc)(int size));
// 258 "../../libav-12/libavutil/buffer.h"
AVBufferPool *av_buffer_pool_init2(int size, void *opaque,
                                   AVBufferRef* (*alloc)(void *opaque, int size),
                                   void (*pool_free)(void *opaque));
// 270 "../../libav-12/libavutil/buffer.h"
void av_buffer_pool_uninit(AVBufferPool **pool);







AVBufferRef *av_buffer_pool_get(AVBufferPool *pool);
// 35 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/cpu.h" 1
// 71 "../../libav-12/libavutil/cpu.h"
int av_get_cpu_flags(void);







void av_set_cpu_flags_mask(int mask);






int av_parse_cpu_flags(const char *s);




int av_cpu_count(void);
// 36 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/dict.h" 1
// 69 "../../libav-12/libavutil/dict.h"
typedef struct AVDictionaryEntry {
    char *key;
    char *value;
} AVDictionaryEntry;

typedef struct AVDictionary AVDictionary;
// 84 "../../libav-12/libavutil/dict.h"
AVDictionaryEntry *av_dict_get(const AVDictionary *m, const char *key,
                               const AVDictionaryEntry *prev, int flags);







int av_dict_count(const AVDictionary *m);
// 105 "../../libav-12/libavutil/dict.h"
int av_dict_set(AVDictionary **pm, const char *key, const char *value, int flags);
// 120 "../../libav-12/libavutil/dict.h"
int av_dict_parse_string(AVDictionary **pm, const char *str,
                         const char *key_val_sep, const char *pairs_sep,
                         int flags);
// 134 "../../libav-12/libavutil/dict.h"
int av_dict_copy(AVDictionary **dst, const AVDictionary *src, int flags);





void av_dict_free(AVDictionary **m);
// 37 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/frame.h" 1
// 31 "../../libav-12/libavutil/frame.h"
// 1 "../../libav-12/libavutil/buffer.h" 1
// 32 "../../libav-12/libavutil/frame.h" 2
// 1 "../../libav-12/libavutil/dict.h" 1
// 33 "../../libav-12/libavutil/frame.h" 2

// 1 "../../libav-12/libavutil/samplefmt.h" 1
// 35 "../../libav-12/libavutil/frame.h" 2
// 47 "../../libav-12/libavutil/frame.h"
enum AVFrameSideDataType {



    AV_FRAME_DATA_PANSCAN,





    AV_FRAME_DATA_A53_CC,




    AV_FRAME_DATA_STEREO3D,



    AV_FRAME_DATA_MATRIXENCODING,




    AV_FRAME_DATA_DOWNMIX_INFO,



    AV_FRAME_DATA_REPLAYGAIN,







    AV_FRAME_DATA_DISPLAYMATRIX,




    AV_FRAME_DATA_AFD,





    AV_FRAME_DATA_AUDIO_SERVICE_TYPE,
};

enum AVActiveFormatDescription {
    AV_AFD_SAME = 8,
    AV_AFD_4_3 = 9,
    AV_AFD_16_9 = 10,
    AV_AFD_14_9 = 11,
    AV_AFD_4_3_SP_14_9 = 13,
    AV_AFD_16_9_SP_14_9 = 14,
    AV_AFD_SP_4_3 = 15,
};

typedef struct AVFrameSideData {
    enum AVFrameSideDataType type;
    uint8_t *data;
    int size;
    AVDictionary *metadata;
} AVFrameSideData;
// 140 "../../libav-12/libavutil/frame.h"
typedef struct AVFrame {





    uint8_t *data[8];
// 158 "../../libav-12/libavutil/frame.h"
    int linesize[8];
// 174 "../../libav-12/libavutil/frame.h"
    uint8_t **extended_data;




    int width, height;




    int nb_samples;






    int format;




    int key_frame;




    enum AVPictureType pict_type;




    AVRational sample_aspect_ratio;




    int64_t pts;






    __attribute__((deprecated))
    int64_t pkt_pts;





    int64_t pkt_dts;




    int coded_picture_number;



    int display_picture_number;




    int quality;




    void *opaque;





    __attribute__((deprecated))
    uint64_t error[8];






    int repeat_pict;




    int interlaced_frame;




    int top_field_first;




    int palette_has_changed;
// 284 "../../libav-12/libavutil/frame.h"
    int64_t reordered_opaque;




    int sample_rate;




    uint64_t channel_layout;
// 308 "../../libav-12/libavutil/frame.h"
    AVBufferRef *buf[8];
// 322 "../../libav-12/libavutil/frame.h"
    AVBufferRef **extended_buf;



    int nb_extended_buf;

    AVFrameSideData **side_data;
    int nb_side_data;
// 349 "../../libav-12/libavutil/frame.h"
    int flags;

    enum AVColorRange color_range;

    enum AVColorPrimaries color_primaries;

    enum AVColorTransferCharacteristic color_trc;

    enum AVColorSpace colorspace;

    enum AVChromaLocation chroma_location;





    AVBufferRef *hw_frames_ctx;
} AVFrame;
// 378 "../../libav-12/libavutil/frame.h"
AVFrame *av_frame_alloc(void);
// 387 "../../libav-12/libavutil/frame.h"
void av_frame_free(AVFrame **frame);
// 404 "../../libav-12/libavutil/frame.h"
int av_frame_ref(AVFrame *dst, const AVFrame *src);
// 413 "../../libav-12/libavutil/frame.h"
AVFrame *av_frame_clone(const AVFrame *src);




void av_frame_unref(AVFrame *frame);
// 427 "../../libav-12/libavutil/frame.h"
void av_frame_move_ref(AVFrame *dst, AVFrame *src);
// 450 "../../libav-12/libavutil/frame.h"
int av_frame_get_buffer(AVFrame *frame, int align);
// 464 "../../libav-12/libavutil/frame.h"
int av_frame_is_writable(AVFrame *frame);
// 477 "../../libav-12/libavutil/frame.h"
int av_frame_make_writable(AVFrame *frame);
// 490 "../../libav-12/libavutil/frame.h"
int av_frame_copy(AVFrame *dst, const AVFrame *src);
// 500 "../../libav-12/libavutil/frame.h"
int av_frame_copy_props(AVFrame *dst, const AVFrame *src);
// 510 "../../libav-12/libavutil/frame.h"
AVBufferRef *av_frame_get_plane_buffer(AVFrame *frame, int plane);
// 521 "../../libav-12/libavutil/frame.h"
AVFrameSideData *av_frame_new_side_data(AVFrame *frame,
                                        enum AVFrameSideDataType type,
                                        int size);





AVFrameSideData *av_frame_get_side_data(const AVFrame *frame,
                                        enum AVFrameSideDataType type);





void av_frame_remove_side_data(AVFrame *frame, enum AVFrameSideDataType type);
// 38 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/log.h" 1
// 24 "../../libav-12/libavutil/log.h"
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
// 25 "../../libav-12/libavutil/log.h" 2
// 34 "../../libav-12/libavutil/log.h"
typedef struct AVClass {




    const char* class_name;





    const char* (*item_name)(void* ctx);






    const struct AVOption *option;







    int version;





    int log_level_offset_offset;
// 75 "../../libav-12/libavutil/log.h"
    int parent_log_context_offset;




    void* (*child_next)(void *obj, void *prev);
// 90 "../../libav-12/libavutil/log.h"
    const struct AVClass* (*child_class_next)(const struct AVClass *prev);
} AVClass;
// 180 "../../libav-12/libavutil/log.h"
void av_log(void *avcl, int level, const char *fmt, ...) __attribute__((__format__(__printf__, 3, 4)));
// 198 "../../libav-12/libavutil/log.h"
void av_vlog(void *avcl, int level, const char *fmt, va_list vl);
// 207 "../../libav-12/libavutil/log.h"
int av_log_get_level(void);
// 216 "../../libav-12/libavutil/log.h"
void av_log_set_level(int level);
// 225 "../../libav-12/libavutil/log.h"
void av_log_set_callback(void (*callback)(void*, int, const char*, va_list));
// 240 "../../libav-12/libavutil/log.h"
void av_log_default_callback(void *avcl, int level, const char *fmt,
                             va_list vl);
// 250 "../../libav-12/libavutil/log.h"
const char* av_default_item_name(void* ctx);
// 275 "../../libav-12/libavutil/log.h"
void av_log_set_flags(int arg);
// 39 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/pixfmt.h" 1
// 40 "../../libav-12/libavcodec/avcodec.h" 2
// 1 "../../libav-12/libavutil/rational.h" 1
// 41 "../../libav-12/libavcodec/avcodec.h" 2

// 1 "../../libav-12/libavcodec/version.h" 1
// 28 "../../libav-12/libavcodec/version.h"
// 1 "../../libav-12/libavutil/version.h" 1
// 29 "../../libav-12/libavcodec/version.h" 2
// 43 "../../libav-12/libavcodec/avcodec.h" 2



// 1 "../../libav-12/libavutil/mem.h" 1
// 29 "../../libav-12/libavutil/mem.h"
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
// 30 "../../libav-12/libavutil/mem.h" 2
// 82 "../../libav-12/libavutil/mem.h"
void *av_malloc(size_t size) __attribute__((__malloc__)) __attribute__((alloc_size(1)));
// 92 "../../libav-12/libavutil/mem.h"
__attribute__((alloc_size(1, 2))) static inline void *av_malloc_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 0x7fffffff / size)
        return 
// 95 "../../libav-12/libavutil/mem.h" 3 4
              ((void *)0)
// 95 "../../libav-12/libavutil/mem.h"
                  ;
    return av_malloc(nmemb * size);
}
// 117 "../../libav-12/libavutil/mem.h"
void *av_realloc(void *ptr, size_t size) __attribute__((alloc_size(2)));
// 136 "../../libav-12/libavutil/mem.h"
int av_reallocp(void *ptr, size_t size);
// 155 "../../libav-12/libavutil/mem.h"
__attribute__((alloc_size(2, 3))) void *av_realloc_array(void *ptr, size_t nmemb, size_t size);
// 174 "../../libav-12/libavutil/mem.h"
__attribute__((alloc_size(2, 3))) int av_reallocp_array(void *ptr, size_t nmemb, size_t size);
// 184 "../../libav-12/libavutil/mem.h"
void av_free(void *ptr);
// 194 "../../libav-12/libavutil/mem.h"
void *av_mallocz(size_t size) __attribute__((__malloc__)) __attribute__((alloc_size(1)));
// 205 "../../libav-12/libavutil/mem.h"
__attribute__((alloc_size(1, 2))) static inline void *av_mallocz_array(size_t nmemb, size_t size)
{
    if (!size || nmemb >= 0x7fffffff / size)
        return 
// 208 "../../libav-12/libavutil/mem.h" 3 4
              ((void *)0)
// 208 "../../libav-12/libavutil/mem.h"
                  ;
    return av_mallocz(nmemb * size);
}







char *av_strdup(const char *s) __attribute__((__malloc__));
// 228 "../../libav-12/libavutil/mem.h"
char *av_strndup(const char *s, size_t len) __attribute__((__malloc__));
// 237 "../../libav-12/libavutil/mem.h"
void av_freep(void *ptr);
// 248 "../../libav-12/libavutil/mem.h"
void av_memcpy_backptr(uint8_t *dst, int back, int cnt);






void *av_fast_realloc(void *ptr, unsigned int *size, size_t min_size);
// 269 "../../libav-12/libavutil/mem.h"
void av_fast_malloc(void *ptr, unsigned int *size, size_t min_size);
// 47 "../../libav-12/libavcodec/avcodec.h" 2
// 193 "../../libav-12/libavcodec/avcodec.h"
enum AVCodecID {
    AV_CODEC_ID_NONE,


    AV_CODEC_ID_MPEG1VIDEO,
    AV_CODEC_ID_MPEG2VIDEO,

    AV_CODEC_ID_MPEG2VIDEO_XVMC,

    AV_CODEC_ID_H261,
    AV_CODEC_ID_H263,
    AV_CODEC_ID_RV10,
    AV_CODEC_ID_RV20,
    AV_CODEC_ID_MJPEG,
    AV_CODEC_ID_MJPEGB,
    AV_CODEC_ID_LJPEG,
    AV_CODEC_ID_SP5X,
    AV_CODEC_ID_JPEGLS,
    AV_CODEC_ID_MPEG4,
    AV_CODEC_ID_RAWVIDEO,
    AV_CODEC_ID_MSMPEG4V1,
    AV_CODEC_ID_MSMPEG4V2,
    AV_CODEC_ID_MSMPEG4V3,
    AV_CODEC_ID_WMV1,
    AV_CODEC_ID_WMV2,
    AV_CODEC_ID_H263P,
    AV_CODEC_ID_H263I,
    AV_CODEC_ID_FLV1,
    AV_CODEC_ID_SVQ1,
    AV_CODEC_ID_SVQ3,
    AV_CODEC_ID_DVVIDEO,
    AV_CODEC_ID_HUFFYUV,
    AV_CODEC_ID_CYUV,
    AV_CODEC_ID_H264,
    AV_CODEC_ID_INDEO3,
    AV_CODEC_ID_VP3,
    AV_CODEC_ID_THEORA,
    AV_CODEC_ID_ASV1,
    AV_CODEC_ID_ASV2,
    AV_CODEC_ID_FFV1,
    AV_CODEC_ID_4XM,
    AV_CODEC_ID_VCR1,
    AV_CODEC_ID_CLJR,
    AV_CODEC_ID_MDEC,
    AV_CODEC_ID_ROQ,
    AV_CODEC_ID_INTERPLAY_VIDEO,
    AV_CODEC_ID_XAN_WC3,
    AV_CODEC_ID_XAN_WC4,
    AV_CODEC_ID_RPZA,
    AV_CODEC_ID_CINEPAK,
    AV_CODEC_ID_WS_VQA,
    AV_CODEC_ID_MSRLE,
    AV_CODEC_ID_MSVIDEO1,
    AV_CODEC_ID_IDCIN,
    AV_CODEC_ID_8BPS,
    AV_CODEC_ID_SMC,
    AV_CODEC_ID_FLIC,
    AV_CODEC_ID_TRUEMOTION1,
    AV_CODEC_ID_VMDVIDEO,
    AV_CODEC_ID_MSZH,
    AV_CODEC_ID_ZLIB,
    AV_CODEC_ID_QTRLE,
    AV_CODEC_ID_TSCC,
    AV_CODEC_ID_ULTI,
    AV_CODEC_ID_QDRAW,
    AV_CODEC_ID_VIXL,
    AV_CODEC_ID_QPEG,
    AV_CODEC_ID_PNG,
    AV_CODEC_ID_PPM,
    AV_CODEC_ID_PBM,
    AV_CODEC_ID_PGM,
    AV_CODEC_ID_PGMYUV,
    AV_CODEC_ID_PAM,
    AV_CODEC_ID_FFVHUFF,
    AV_CODEC_ID_RV30,
    AV_CODEC_ID_RV40,
    AV_CODEC_ID_VC1,
    AV_CODEC_ID_WMV3,
    AV_CODEC_ID_LOCO,
    AV_CODEC_ID_WNV1,
    AV_CODEC_ID_AASC,
    AV_CODEC_ID_INDEO2,
    AV_CODEC_ID_FRAPS,
    AV_CODEC_ID_TRUEMOTION2,
    AV_CODEC_ID_BMP,
    AV_CODEC_ID_CSCD,
    AV_CODEC_ID_MMVIDEO,
    AV_CODEC_ID_ZMBV,
    AV_CODEC_ID_AVS,
    AV_CODEC_ID_SMACKVIDEO,
    AV_CODEC_ID_NUV,
    AV_CODEC_ID_KMVC,
    AV_CODEC_ID_FLASHSV,
    AV_CODEC_ID_CAVS,
    AV_CODEC_ID_JPEG2000,
    AV_CODEC_ID_VMNC,
    AV_CODEC_ID_VP5,
    AV_CODEC_ID_VP6,
    AV_CODEC_ID_VP6F,
    AV_CODEC_ID_TARGA,
    AV_CODEC_ID_DSICINVIDEO,
    AV_CODEC_ID_TIERTEXSEQVIDEO,
    AV_CODEC_ID_TIFF,
    AV_CODEC_ID_GIF,
    AV_CODEC_ID_DXA,
    AV_CODEC_ID_DNXHD,
    AV_CODEC_ID_THP,
    AV_CODEC_ID_SGI,
    AV_CODEC_ID_C93,
    AV_CODEC_ID_BETHSOFTVID,
    AV_CODEC_ID_PTX,
    AV_CODEC_ID_TXD,
    AV_CODEC_ID_VP6A,
    AV_CODEC_ID_AMV,
    AV_CODEC_ID_VB,
    AV_CODEC_ID_PCX,
    AV_CODEC_ID_SUNRAST,
    AV_CODEC_ID_INDEO4,
    AV_CODEC_ID_INDEO5,
    AV_CODEC_ID_MIMIC,
    AV_CODEC_ID_RL2,
    AV_CODEC_ID_ESCAPE124,
    AV_CODEC_ID_DIRAC,
    AV_CODEC_ID_BFI,
    AV_CODEC_ID_CMV,
    AV_CODEC_ID_MOTIONPIXELS,
    AV_CODEC_ID_TGV,
    AV_CODEC_ID_TGQ,
    AV_CODEC_ID_TQI,
    AV_CODEC_ID_AURA,
    AV_CODEC_ID_AURA2,
    AV_CODEC_ID_V210X,
    AV_CODEC_ID_TMV,
    AV_CODEC_ID_V210,
    AV_CODEC_ID_DPX,
    AV_CODEC_ID_MAD,
    AV_CODEC_ID_FRWU,
    AV_CODEC_ID_FLASHSV2,
    AV_CODEC_ID_CDGRAPHICS,
    AV_CODEC_ID_R210,
    AV_CODEC_ID_ANM,
    AV_CODEC_ID_BINKVIDEO,
    AV_CODEC_ID_IFF_ILBM,
    AV_CODEC_ID_IFF_BYTERUN1,
    AV_CODEC_ID_KGV1,
    AV_CODEC_ID_YOP,
    AV_CODEC_ID_VP8,
    AV_CODEC_ID_PICTOR,
    AV_CODEC_ID_ANSI,
    AV_CODEC_ID_A64_MULTI,
    AV_CODEC_ID_A64_MULTI5,
    AV_CODEC_ID_R10K,
    AV_CODEC_ID_MXPEG,
    AV_CODEC_ID_LAGARITH,
    AV_CODEC_ID_PRORES,
    AV_CODEC_ID_JV,
    AV_CODEC_ID_DFA,
    AV_CODEC_ID_WMV3IMAGE,
    AV_CODEC_ID_VC1IMAGE,
    AV_CODEC_ID_UTVIDEO,
    AV_CODEC_ID_BMV_VIDEO,
    AV_CODEC_ID_VBLE,
    AV_CODEC_ID_DXTORY,
    AV_CODEC_ID_V410,
    AV_CODEC_ID_XWD,
    AV_CODEC_ID_CDXL,
    AV_CODEC_ID_XBM,
    AV_CODEC_ID_ZEROCODEC,
    AV_CODEC_ID_MSS1,
    AV_CODEC_ID_MSA1,
    AV_CODEC_ID_TSCC2,
    AV_CODEC_ID_MTS2,
    AV_CODEC_ID_CLLC,
    AV_CODEC_ID_MSS2,
    AV_CODEC_ID_VP9,
    AV_CODEC_ID_AIC,
    AV_CODEC_ID_ESCAPE130,
    AV_CODEC_ID_G2M,
    AV_CODEC_ID_WEBP,
    AV_CODEC_ID_HNM4_VIDEO,
    AV_CODEC_ID_HEVC,
    AV_CODEC_ID_FIC,
    AV_CODEC_ID_ALIAS_PIX,
    AV_CODEC_ID_BRENDER_PIX,
    AV_CODEC_ID_PAF_VIDEO,
    AV_CODEC_ID_EXR,
    AV_CODEC_ID_VP7,
    AV_CODEC_ID_SANM,
    AV_CODEC_ID_SGIRLE,
    AV_CODEC_ID_MVC1,
    AV_CODEC_ID_MVC2,
    AV_CODEC_ID_HQX,
    AV_CODEC_ID_TDSC,
    AV_CODEC_ID_HQ_HQA,
    AV_CODEC_ID_HAP,
    AV_CODEC_ID_DDS,
    AV_CODEC_ID_DXV,
    AV_CODEC_ID_SCREENPRESSO,
    AV_CODEC_ID_RSCC,
    AV_CODEC_ID_MAGICYUV,
    AV_CODEC_ID_TRUEMOTION2RT,
    AV_CODEC_ID_AV1,


    AV_CODEC_ID_FIRST_AUDIO = 0x10000,
    AV_CODEC_ID_PCM_S16LE = 0x10000,
    AV_CODEC_ID_PCM_S16BE,
    AV_CODEC_ID_PCM_U16LE,
    AV_CODEC_ID_PCM_U16BE,
    AV_CODEC_ID_PCM_S8,
    AV_CODEC_ID_PCM_U8,
    AV_CODEC_ID_PCM_MULAW,
    AV_CODEC_ID_PCM_ALAW,
    AV_CODEC_ID_PCM_S32LE,
    AV_CODEC_ID_PCM_S32BE,
    AV_CODEC_ID_PCM_U32LE,
    AV_CODEC_ID_PCM_U32BE,
    AV_CODEC_ID_PCM_S24LE,
    AV_CODEC_ID_PCM_S24BE,
    AV_CODEC_ID_PCM_U24LE,
    AV_CODEC_ID_PCM_U24BE,
    AV_CODEC_ID_PCM_S24DAUD,
    AV_CODEC_ID_PCM_ZORK,
    AV_CODEC_ID_PCM_S16LE_PLANAR,
    AV_CODEC_ID_PCM_DVD,
    AV_CODEC_ID_PCM_F32BE,
    AV_CODEC_ID_PCM_F32LE,
    AV_CODEC_ID_PCM_F64BE,
    AV_CODEC_ID_PCM_F64LE,
    AV_CODEC_ID_PCM_BLURAY,
    AV_CODEC_ID_PCM_LXF,
    AV_CODEC_ID_S302M,
    AV_CODEC_ID_PCM_S8_PLANAR,
    AV_CODEC_ID_PCM_S24LE_PLANAR,
    AV_CODEC_ID_PCM_S32LE_PLANAR,
    AV_CODEC_ID_PCM_S16BE_PLANAR,


    AV_CODEC_ID_ADPCM_IMA_QT = 0x11000,
    AV_CODEC_ID_ADPCM_IMA_WAV,
    AV_CODEC_ID_ADPCM_IMA_DK3,
    AV_CODEC_ID_ADPCM_IMA_DK4,
    AV_CODEC_ID_ADPCM_IMA_WS,
    AV_CODEC_ID_ADPCM_IMA_SMJPEG,
    AV_CODEC_ID_ADPCM_MS,
    AV_CODEC_ID_ADPCM_4XM,
    AV_CODEC_ID_ADPCM_XA,
    AV_CODEC_ID_ADPCM_ADX,
    AV_CODEC_ID_ADPCM_EA,
    AV_CODEC_ID_ADPCM_G726,
    AV_CODEC_ID_ADPCM_CT,
    AV_CODEC_ID_ADPCM_SWF,
    AV_CODEC_ID_ADPCM_YAMAHA,
    AV_CODEC_ID_ADPCM_SBPRO_4,
    AV_CODEC_ID_ADPCM_SBPRO_3,
    AV_CODEC_ID_ADPCM_SBPRO_2,
    AV_CODEC_ID_ADPCM_THP,
    AV_CODEC_ID_ADPCM_IMA_AMV,
    AV_CODEC_ID_ADPCM_EA_R1,
    AV_CODEC_ID_ADPCM_EA_R3,
    AV_CODEC_ID_ADPCM_EA_R2,
    AV_CODEC_ID_ADPCM_IMA_EA_SEAD,
    AV_CODEC_ID_ADPCM_IMA_EA_EACS,
    AV_CODEC_ID_ADPCM_EA_XAS,
    AV_CODEC_ID_ADPCM_EA_MAXIS_XA,
    AV_CODEC_ID_ADPCM_IMA_ISS,
    AV_CODEC_ID_ADPCM_G722,
    AV_CODEC_ID_ADPCM_IMA_APC,
    AV_CODEC_ID_ADPCM_VIMA,


    AV_CODEC_ID_AMR_NB = 0x12000,
    AV_CODEC_ID_AMR_WB,


    AV_CODEC_ID_RA_144 = 0x13000,
    AV_CODEC_ID_RA_288,


    AV_CODEC_ID_ROQ_DPCM = 0x14000,
    AV_CODEC_ID_INTERPLAY_DPCM,
    AV_CODEC_ID_XAN_DPCM,
    AV_CODEC_ID_SOL_DPCM,


    AV_CODEC_ID_MP2 = 0x15000,
    AV_CODEC_ID_MP3,
    AV_CODEC_ID_AAC,
    AV_CODEC_ID_AC3,
    AV_CODEC_ID_DTS,
    AV_CODEC_ID_VORBIS,
    AV_CODEC_ID_DVAUDIO,
    AV_CODEC_ID_WMAV1,
    AV_CODEC_ID_WMAV2,
    AV_CODEC_ID_MACE3,
    AV_CODEC_ID_MACE6,
    AV_CODEC_ID_VMDAUDIO,
    AV_CODEC_ID_FLAC,
    AV_CODEC_ID_MP3ADU,
    AV_CODEC_ID_MP3ON4,
    AV_CODEC_ID_SHORTEN,
    AV_CODEC_ID_ALAC,
    AV_CODEC_ID_WESTWOOD_SND1,
    AV_CODEC_ID_GSM,
    AV_CODEC_ID_QDM2,
    AV_CODEC_ID_COOK,
    AV_CODEC_ID_TRUESPEECH,
    AV_CODEC_ID_TTA,
    AV_CODEC_ID_SMACKAUDIO,
    AV_CODEC_ID_QCELP,
    AV_CODEC_ID_WAVPACK,
    AV_CODEC_ID_DSICINAUDIO,
    AV_CODEC_ID_IMC,
    AV_CODEC_ID_MUSEPACK7,
    AV_CODEC_ID_MLP,
    AV_CODEC_ID_GSM_MS,
    AV_CODEC_ID_ATRAC3,

    AV_CODEC_ID_VOXWARE,

    AV_CODEC_ID_APE,
    AV_CODEC_ID_NELLYMOSER,
    AV_CODEC_ID_MUSEPACK8,
    AV_CODEC_ID_SPEEX,
    AV_CODEC_ID_WMAVOICE,
    AV_CODEC_ID_WMAPRO,
    AV_CODEC_ID_WMALOSSLESS,
    AV_CODEC_ID_ATRAC3P,
    AV_CODEC_ID_EAC3,
    AV_CODEC_ID_SIPR,
    AV_CODEC_ID_MP1,
    AV_CODEC_ID_TWINVQ,
    AV_CODEC_ID_TRUEHD,
    AV_CODEC_ID_MP4ALS,
    AV_CODEC_ID_ATRAC1,
    AV_CODEC_ID_BINKAUDIO_RDFT,
    AV_CODEC_ID_BINKAUDIO_DCT,
    AV_CODEC_ID_AAC_LATM,
    AV_CODEC_ID_QDMC,
    AV_CODEC_ID_CELT,
    AV_CODEC_ID_G723_1,
    AV_CODEC_ID_G729,
    AV_CODEC_ID_8SVX_EXP,
    AV_CODEC_ID_8SVX_FIB,
    AV_CODEC_ID_BMV_AUDIO,
    AV_CODEC_ID_RALF,
    AV_CODEC_ID_IAC,
    AV_CODEC_ID_ILBC,
    AV_CODEC_ID_OPUS,
    AV_CODEC_ID_COMFORT_NOISE,
    AV_CODEC_ID_TAK,
    AV_CODEC_ID_METASOUND,
    AV_CODEC_ID_PAF_AUDIO,
    AV_CODEC_ID_ON2AVC,
    AV_CODEC_ID_DSS_SP,


    AV_CODEC_ID_FIRST_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVD_SUBTITLE = 0x17000,
    AV_CODEC_ID_DVB_SUBTITLE,
    AV_CODEC_ID_TEXT,
    AV_CODEC_ID_XSUB,
    AV_CODEC_ID_SSA,
    AV_CODEC_ID_MOV_TEXT,
    AV_CODEC_ID_HDMV_PGS_SUBTITLE,
    AV_CODEC_ID_DVB_TELETEXT,
    AV_CODEC_ID_SRT,


    AV_CODEC_ID_FIRST_UNKNOWN = 0x18000,
    AV_CODEC_ID_TTF = 0x18000,

    AV_CODEC_ID_PROBE = 0x19000,

    AV_CODEC_ID_MPEG2TS = 0x20000,

    AV_CODEC_ID_MPEG4SYSTEMS = 0x20001,

    AV_CODEC_ID_FFMETADATA = 0x21000,
    AV_CODEC_ID_WRAPPED_AVFRAME = 0x21001,
};






typedef struct AVCodecDescriptor {
    enum AVCodecID id;
    enum AVMediaType type;





    const char *name;



    const char *long_name;



    int props;




    const struct AVProfile *profiles;
} AVCodecDescriptor;
// 665 "../../libav-12/libavcodec/avcodec.h"
enum Motion_Est_ID {
    ME_ZERO = 1,
    ME_FULL,
    ME_LOG,
    ME_PHODS,
    ME_EPZS,
    ME_X1,
    ME_HEX,
    ME_UMH,
    ME_TESA,
};





enum AVDiscard{


    AVDISCARD_NONE =-16,
    AVDISCARD_DEFAULT = 0,
    AVDISCARD_NONREF = 8,
    AVDISCARD_BIDIR = 16,
    AVDISCARD_NONKEY = 32,
    AVDISCARD_ALL = 48,
};

enum AVAudioServiceType {
    AV_AUDIO_SERVICE_TYPE_MAIN = 0,
    AV_AUDIO_SERVICE_TYPE_EFFECTS = 1,
    AV_AUDIO_SERVICE_TYPE_VISUALLY_IMPAIRED = 2,
    AV_AUDIO_SERVICE_TYPE_HEARING_IMPAIRED = 3,
    AV_AUDIO_SERVICE_TYPE_DIALOGUE = 4,
    AV_AUDIO_SERVICE_TYPE_COMMENTARY = 5,
    AV_AUDIO_SERVICE_TYPE_EMERGENCY = 6,
    AV_AUDIO_SERVICE_TYPE_VOICE_OVER = 7,
    AV_AUDIO_SERVICE_TYPE_KARAOKE = 8,
    AV_AUDIO_SERVICE_TYPE_NB ,
};




typedef struct RcOverride{
    int start_frame;
    int end_frame;
    int qscale;
    float quality_factor;
} RcOverride;
// 1111 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVPanScan{





    int id;






    int width;
    int height;






    int16_t position[3][2];
}AVPanScan;






typedef struct AVCPBProperties {




    int max_bitrate;




    int min_bitrate;




    int avg_bitrate;





    int buffer_size;
// 1170 "../../libav-12/libavcodec/avcodec.h"
    uint64_t vbv_delay;
} AVCPBProperties;
// 1191 "../../libav-12/libavcodec/avcodec.h"
enum AVPacketSideDataType {
    AV_PKT_DATA_PALETTE,
// 1201 "../../libav-12/libavcodec/avcodec.h"
    AV_PKT_DATA_NEW_EXTRADATA,
// 1218 "../../libav-12/libavcodec/avcodec.h"
    AV_PKT_DATA_PARAM_CHANGE,
// 1239 "../../libav-12/libavcodec/avcodec.h"
    AV_PKT_DATA_H263_MB_INFO,





    AV_PKT_DATA_REPLAYGAIN,
// 1254 "../../libav-12/libavcodec/avcodec.h"
    AV_PKT_DATA_DISPLAYMATRIX,





    AV_PKT_DATA_STEREO3D,





    AV_PKT_DATA_AUDIO_SERVICE_TYPE,






    AV_PKT_DATA_QUALITY_FACTOR,







    AV_PKT_DATA_FALLBACK_TRACK,




    AV_PKT_DATA_CPB_PROPERTIES,
};

typedef struct AVPacketSideData {
    uint8_t *data;
    int size;
    enum AVPacketSideDataType type;
} AVPacketSideData;
// 1323 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVPacket {





    AVBufferRef *buf;
// 1339 "../../libav-12/libavcodec/avcodec.h"
    int64_t pts;





    int64_t dts;
    uint8_t *data;
    int size;
    int stream_index;



    int flags;




    AVPacketSideData *side_data;
    int side_data_elems;





    int64_t duration;

    int64_t pos;







    __attribute__((deprecated))
    int64_t convergence_duration;

} AVPacket;



enum AVSideDataParamChangeFlags {
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_COUNT = 0x0001,
    AV_SIDE_DATA_PARAM_CHANGE_CHANNEL_LAYOUT = 0x0002,
    AV_SIDE_DATA_PARAM_CHANGE_SAMPLE_RATE = 0x0004,
    AV_SIDE_DATA_PARAM_CHANGE_DIMENSIONS = 0x0008,
};




struct AVCodecInternal;

enum AVFieldOrder {
    AV_FIELD_UNKNOWN,
    AV_FIELD_PROGRESSIVE,
    AV_FIELD_TT,
    AV_FIELD_BB,
    AV_FIELD_TB,
    AV_FIELD_BT,
};
// 1409 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVCodecContext {




    const AVClass *av_class;
    int log_level_offset;

    enum AVMediaType codec_type;
    const struct AVCodec *codec;




    __attribute__((deprecated))
    char codec_name[32];

    enum AVCodecID codec_id;
// 1441 "../../libav-12/libavcodec/avcodec.h"
    unsigned int codec_tag;





    __attribute__((deprecated))
    unsigned int stream_codec_tag;


    void *priv_data;







    struct AVCodecInternal *internal;






    void *opaque;






    int bit_rate;







    int bit_rate_tolerance;







    int global_quality;





    int compression_level;







    int flags;






    int flags2;
// 1523 "../../libav-12/libavcodec/avcodec.h"
    uint8_t *extradata;
    int extradata_size;
// 1535 "../../libav-12/libavcodec/avcodec.h"
    AVRational time_base;
// 1544 "../../libav-12/libavcodec/avcodec.h"
    int ticks_per_frame;
// 1563 "../../libav-12/libavcodec/avcodec.h"
    int delay;
// 1580 "../../libav-12/libavcodec/avcodec.h"
    int width, height;
// 1595 "../../libav-12/libavcodec/avcodec.h"
    int coded_width, coded_height;
// 1606 "../../libav-12/libavcodec/avcodec.h"
    int gop_size;
// 1621 "../../libav-12/libavcodec/avcodec.h"
    enum AVPixelFormat pix_fmt;






    __attribute__((deprecated)) int me_method;
// 1654 "../../libav-12/libavcodec/avcodec.h"
    void (*draw_horiz_band)(struct AVCodecContext *s,
                            const AVFrame *src, int offset[8],
                            int y, int type, int height);
// 1671 "../../libav-12/libavcodec/avcodec.h"
    enum AVPixelFormat (*get_format)(struct AVCodecContext *s, const enum AVPixelFormat * fmt);







    int max_b_frames;
// 1688 "../../libav-12/libavcodec/avcodec.h"
    float b_quant_factor;



    __attribute__((deprecated)) int rc_strategy;





    __attribute__((deprecated))
    int b_frame_strategy;







    float b_quant_offset;







    int has_b_frames;



    __attribute__((deprecated))
    int mpeg_quant;
// 1730 "../../libav-12/libavcodec/avcodec.h"
    float i_quant_factor;






    float i_quant_offset;






    float lumi_masking;






    float temporal_cplx_masking;






    float spatial_cplx_masking;






    float p_masking;






    float dark_masking;






    int slice_count;



    __attribute__((deprecated))
     int prediction_method;
// 1795 "../../libav-12/libavcodec/avcodec.h"
    int *slice_offset;
// 1804 "../../libav-12/libavcodec/avcodec.h"
    AVRational sample_aspect_ratio;






    int me_cmp;





    int me_sub_cmp;





    int mb_cmp;





    int ildct_cmp;
// 1850 "../../libav-12/libavcodec/avcodec.h"
    int dia_size;






    int last_predictor_count;



    __attribute__((deprecated))
    int pre_me;







    int me_pre_cmp;






    int pre_dia_size;






    int me_subpel_quality;
// 1896 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated)) int dtg_active_format;
// 1913 "../../libav-12/libavcodec/avcodec.h"
    int me_range;





    __attribute__((deprecated)) int intra_quant_bias;





    __attribute__((deprecated)) int inter_quant_bias;







    int slice_flags;
// 1945 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated)) int xvmc_acceleration;







    int mb_decision;
// 1963 "../../libav-12/libavcodec/avcodec.h"
    uint16_t *intra_matrix;






    uint16_t *inter_matrix;



    __attribute__((deprecated))
    int scenechange_threshold;


    __attribute__((deprecated))
    int noise_reduction;






    __attribute__((deprecated))
    int me_threshold;




    __attribute__((deprecated))
    int mb_threshold;







    int intra_dc_precision;






    int skip_top;






    int skip_bottom;





    __attribute__((deprecated))
    float border_masking;







    int mb_lmin;






    int mb_lmax;





    __attribute__((deprecated))
    int me_penalty_compensation;






    int bidir_refine;



    __attribute__((deprecated))
    int brd_scale;







    int keyint_min;






    int refs;



    __attribute__((deprecated))
    int chromaoffset;
// 2085 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated)) int scenechange_factor;







    int mv0_threshold;



    __attribute__((deprecated))
    int b_sensitivity;







    enum AVColorPrimaries color_primaries;






    enum AVColorTransferCharacteristic color_trc;






    enum AVColorSpace colorspace;






    enum AVColorRange color_range;






    enum AVChromaLocation chroma_sample_location;
// 2143 "../../libav-12/libavcodec/avcodec.h"
    int slices;





    enum AVFieldOrder field_order;


    int sample_rate;
    int channels;






    enum AVSampleFormat sample_fmt;
// 2172 "../../libav-12/libavcodec/avcodec.h"
    int frame_size;
// 2183 "../../libav-12/libavcodec/avcodec.h"
    int frame_number;





    int block_align;






    int cutoff;






    uint64_t channel_layout;






    uint64_t request_channel_layout;






    enum AVAudioServiceType audio_service_type;






    enum AVSampleFormat request_sample_fmt;
// 2304 "../../libav-12/libavcodec/avcodec.h"
    int (*get_buffer2)(struct AVCodecContext *s, AVFrame *frame, int flags);
// 2319 "../../libav-12/libavcodec/avcodec.h"
    int refcounted_frames;


    float qcompress;
    float qblur;






    int qmin;






    int qmax;






    int max_qdiff;





    __attribute__((deprecated))
    float rc_qsquish;

    __attribute__((deprecated))
    float rc_qmod_amp;
    __attribute__((deprecated))
    int rc_qmod_freq;







    int rc_buffer_size;






    int rc_override_count;
    RcOverride *rc_override;





    __attribute__((deprecated))
    const char *rc_eq;







    int rc_max_rate;






    int rc_min_rate;





    __attribute__((deprecated))
    float rc_buffer_aggressivity;

    __attribute__((deprecated))
    float rc_initial_cplx;







    float rc_max_available_vbv_use;






    float rc_min_vbv_overflow_use;






    int rc_initial_buffer_occupancy;
// 2439 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    int coder_type;




    __attribute__((deprecated))
    int context_model;






    __attribute__((deprecated))
    int lmin;




    __attribute__((deprecated))
    int lmax;




    __attribute__((deprecated))
    int frame_skip_threshold;


    __attribute__((deprecated))
    int frame_skip_factor;


    __attribute__((deprecated))
    int frame_skip_exp;


    __attribute__((deprecated))
    int frame_skip_cmp;







    int trellis;



    __attribute__((deprecated))
    int min_prediction_order;


    __attribute__((deprecated))
    int max_prediction_order;


    __attribute__((deprecated))
    int64_t timecode_frame_start;
// 2512 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    void (*rtp_callback)(struct AVCodecContext *avctx, void *data, int size, int mb_nb);




    __attribute__((deprecated))
    int rtp_payload_size;
// 2529 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    int mv_bits;
    __attribute__((deprecated))
    int header_bits;
    __attribute__((deprecated))
    int i_tex_bits;
    __attribute__((deprecated))
    int p_tex_bits;
    __attribute__((deprecated))
    int i_count;
    __attribute__((deprecated))
    int p_count;
    __attribute__((deprecated))
    int skip_count;
    __attribute__((deprecated))
    int misc_bits;


    __attribute__((deprecated))
    int frame_bits;







    char *stats_out;







    char *stats_in;






    int workaround_bugs;
// 2605 "../../libav-12/libavcodec/avcodec.h"
    int strict_std_compliance;
// 2617 "../../libav-12/libavcodec/avcodec.h"
    int error_concealment;
// 2626 "../../libav-12/libavcodec/avcodec.h"
    int debug;
// 2658 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    int debug_mv;
// 2670 "../../libav-12/libavcodec/avcodec.h"
    int err_recognition;
// 2689 "../../libav-12/libavcodec/avcodec.h"
    int64_t reordered_opaque;






    struct AVHWAccel *hwaccel;
// 2708 "../../libav-12/libavcodec/avcodec.h"
    void *hwaccel_context;






    uint64_t error[8];






    int dct_algo;
// 2735 "../../libav-12/libavcodec/avcodec.h"
    int idct_algo;
// 2769 "../../libav-12/libavcodec/avcodec.h"
     int bits_per_coded_sample;






    int bits_per_raw_sample;
// 2786 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated)) int lowres;
// 2797 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated)) AVFrame *coded_frame;
// 2806 "../../libav-12/libavcodec/avcodec.h"
    int thread_count;
// 2816 "../../libav-12/libavcodec/avcodec.h"
    int thread_type;
// 2825 "../../libav-12/libavcodec/avcodec.h"
    int active_thread_type;
// 2835 "../../libav-12/libavcodec/avcodec.h"
    int thread_safe_callbacks;
// 2846 "../../libav-12/libavcodec/avcodec.h"
    int (*execute)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg), void *arg2, int *ret, int count, int size);
// 2866 "../../libav-12/libavcodec/avcodec.h"
    int (*execute2)(struct AVCodecContext *c, int (*func)(struct AVCodecContext *c2, void *arg, int jobnr, int threadnr), void *arg2, int *ret, int count);






     int nsse_weight;






     int profile;
// 2970 "../../libav-12/libavcodec/avcodec.h"
     int level;






    enum AVDiscard skip_loop_filter;





    enum AVDiscard skip_idct;





    enum AVDiscard skip_frame;
// 2999 "../../libav-12/libavcodec/avcodec.h"
    uint8_t *subtitle_header;
    int subtitle_header_size;






    __attribute__((deprecated))
    int error_rate;
// 3020 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    uint64_t vbv_delay;
// 3035 "../../libav-12/libavcodec/avcodec.h"
    __attribute__((deprecated))
    int side_data_only_packets;
// 3054 "../../libav-12/libavcodec/avcodec.h"
    int initial_padding;
// 3063 "../../libav-12/libavcodec/avcodec.h"
    AVRational framerate;






    enum AVPixelFormat sw_pix_fmt;







    AVPacketSideData *coded_side_data;
    int nb_coded_side_data;
// 3102 "../../libav-12/libavcodec/avcodec.h"
    AVBufferRef *hw_frames_ctx;
} AVCodecContext;




typedef struct AVProfile {
    int profile;
    const char *name;
} AVProfile;

typedef struct AVCodecDefault AVCodecDefault;

struct AVSubtitle;




typedef struct AVCodec {






    const char *name;




    const char *long_name;
    enum AVMediaType type;
    enum AVCodecID id;




    int capabilities;
    const AVRational *supported_framerates;
    const enum AVPixelFormat *pix_fmts;
    const int *supported_samplerates;
    const enum AVSampleFormat *sample_fmts;
    const uint64_t *channel_layouts;

    __attribute__((deprecated)) uint8_t max_lowres;

    const AVClass *priv_class;
    const AVProfile *profiles;
// 3158 "../../libav-12/libavcodec/avcodec.h"
    int priv_data_size;
    struct AVCodec *next;
// 3169 "../../libav-12/libavcodec/avcodec.h"
    int (*init_thread_copy)(AVCodecContext *);







    int (*update_thread_context)(AVCodecContext *dst, const AVCodecContext *src);





    const AVCodecDefault *defaults;




    void (*init_static_data)(struct AVCodec *codec);

    int (*init)(AVCodecContext *);
    int (*encode_sub)(AVCodecContext *, uint8_t *buf, int buf_size,
                      const struct AVSubtitle *sub);
// 3203 "../../libav-12/libavcodec/avcodec.h"
    int (*encode2)(AVCodecContext *avctx, AVPacket *avpkt, const AVFrame *frame,
                   int *got_packet_ptr);
    int (*decode)(AVCodecContext *, void *outdata, int *outdata_size, AVPacket *avpkt);
    int (*close)(AVCodecContext *);
// 3218 "../../libav-12/libavcodec/avcodec.h"
    int (*send_frame)(AVCodecContext *avctx, const AVFrame *frame);
    int (*send_packet)(AVCodecContext *avctx, const AVPacket *avpkt);
    int (*receive_frame)(AVCodecContext *avctx, AVFrame *frame);
    int (*receive_packet)(AVCodecContext *avctx, AVPacket *avpkt);




    void (*flush)(AVCodecContext *);




    int caps_internal;
} AVCodec;





typedef struct AVHWAccel {





    const char *name;






    enum AVMediaType type;






    enum AVCodecID id;






    enum AVPixelFormat pix_fmt;





    int capabilities;
// 3280 "../../libav-12/libavcodec/avcodec.h"
    struct AVHWAccel *next;




    int (*alloc_frame)(AVCodecContext *avctx, AVFrame *frame);
// 3301 "../../libav-12/libavcodec/avcodec.h"
    int (*start_frame)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
// 3314 "../../libav-12/libavcodec/avcodec.h"
    int (*decode_slice)(AVCodecContext *avctx, const uint8_t *buf, uint32_t buf_size);
// 3325 "../../libav-12/libavcodec/avcodec.h"
    int (*end_frame)(AVCodecContext *avctx);
// 3334 "../../libav-12/libavcodec/avcodec.h"
    int frame_priv_data_size;
// 3343 "../../libav-12/libavcodec/avcodec.h"
    int (*init)(AVCodecContext *avctx);







    int (*uninit)(AVCodecContext *avctx);





    int priv_data_size;
} AVHWAccel;
// 3390 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVPicture {
    __attribute__((deprecated))
    uint8_t *data[8];
    __attribute__((deprecated))
    int linesize[8];
} AVPicture;
// 3405 "../../libav-12/libavcodec/avcodec.h"
enum AVSubtitleType {
    SUBTITLE_NONE,

    SUBTITLE_BITMAP,





    SUBTITLE_TEXT,





    SUBTITLE_ASS,
};



typedef struct AVSubtitleRect {
    int x;
    int y;
    int w;
    int h;
    int nb_colors;





    __attribute__((deprecated))
    AVPicture pict;





    uint8_t *data[4];
    int linesize[4];

    enum AVSubtitleType type;

    char *text;






    char *ass;
    int flags;
} AVSubtitleRect;

typedef struct AVSubtitle {
    uint16_t format;
    uint32_t start_display_time;
    uint32_t end_display_time;
    unsigned num_rects;
    AVSubtitleRect **rects;
    int64_t pts;
} AVSubtitle;
// 3475 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVCodecParameters {



    enum AVMediaType codec_type;



    enum AVCodecID codec_id;



    uint32_t codec_tag;
// 3497 "../../libav-12/libavcodec/avcodec.h"
    uint8_t *extradata;



    int extradata_size;





    int format;




    int bit_rate;

    int bits_per_coded_sample;




    int profile;
    int level;




    int width;
    int height;
// 3535 "../../libav-12/libavcodec/avcodec.h"
    AVRational sample_aspect_ratio;




    enum AVFieldOrder field_order;




    enum AVColorRange color_range;
    enum AVColorPrimaries color_primaries;
    enum AVColorTransferCharacteristic color_trc;
    enum AVColorSpace color_space;
    enum AVChromaLocation chroma_location;






    uint64_t channel_layout;



    int channels;



    int sample_rate;






    int block_align;







    int initial_padding;






    int trailing_padding;
} AVCodecParameters;






AVCodec *av_codec_next(const AVCodec *c);




unsigned avcodec_version(void);




const char *avcodec_configuration(void);




const char *avcodec_license(void);
// 3619 "../../libav-12/libavcodec/avcodec.h"
void avcodec_register(AVCodec *codec);
// 3631 "../../libav-12/libavcodec/avcodec.h"
void avcodec_register_all(void);
// 3646 "../../libav-12/libavcodec/avcodec.h"
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);





void avcodec_free_context(AVCodecContext **avctx);







int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);
// 3669 "../../libav-12/libavcodec/avcodec.h"
const AVClass *avcodec_get_class(void);
// 3689 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);







AVCodecParameters *avcodec_parameters_alloc(void);





void avcodec_parameters_free(AVCodecParameters **par);







int avcodec_parameters_copy(AVCodecParameters *dst, const AVCodecParameters *src);
// 3721 "../../libav-12/libavcodec/avcodec.h"
int avcodec_parameters_from_context(AVCodecParameters *par,
                                    const AVCodecContext *codec);
// 3732 "../../libav-12/libavcodec/avcodec.h"
int avcodec_parameters_to_context(AVCodecContext *codec,
                                  const AVCodecParameters *par);
// 3773 "../../libav-12/libavcodec/avcodec.h"
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
// 3788 "../../libav-12/libavcodec/avcodec.h"
int avcodec_close(AVCodecContext *avctx);






void avsubtitle_free(AVSubtitle *sub);
// 3817 "../../libav-12/libavcodec/avcodec.h"
AVPacket *av_packet_alloc(void);
// 3829 "../../libav-12/libavcodec/avcodec.h"
AVPacket *av_packet_clone(AVPacket *src);
// 3838 "../../libav-12/libavcodec/avcodec.h"
void av_packet_free(AVPacket **pkt);
// 3848 "../../libav-12/libavcodec/avcodec.h"
void av_init_packet(AVPacket *pkt);
// 3858 "../../libav-12/libavcodec/avcodec.h"
int av_new_packet(AVPacket *pkt, int size);







void av_shrink_packet(AVPacket *pkt, int size);







int av_grow_packet(AVPacket *pkt, int grow_by);
// 3889 "../../libav-12/libavcodec/avcodec.h"
int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size);
// 3898 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int av_dup_packet(AVPacket *pkt);







__attribute__((deprecated))
void av_free_packet(AVPacket *pkt);
// 3918 "../../libav-12/libavcodec/avcodec.h"
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int size);
// 3934 "../../libav-12/libavcodec/avcodec.h"
int av_packet_add_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                            uint8_t *data, size_t size);
// 3945 "../../libav-12/libavcodec/avcodec.h"
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                               int size);
// 3956 "../../libav-12/libavcodec/avcodec.h"
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
                                 int *size);







void av_packet_free_side_data(AVPacket *pkt);
// 3983 "../../libav-12/libavcodec/avcodec.h"
int av_packet_ref(AVPacket *dst, AVPacket *src);
// 3993 "../../libav-12/libavcodec/avcodec.h"
void av_packet_unref(AVPacket *pkt);
// 4003 "../../libav-12/libavcodec/avcodec.h"
void av_packet_move_ref(AVPacket *dst, AVPacket *src);
// 4016 "../../libav-12/libavcodec/avcodec.h"
int av_packet_copy_props(AVPacket *dst, const AVPacket *src);
// 4029 "../../libav-12/libavcodec/avcodec.h"
void av_packet_rescale_ts(AVPacket *pkt, AVRational tb_src, AVRational tb_dst);
// 4046 "../../libav-12/libavcodec/avcodec.h"
AVCodec *avcodec_find_decoder(enum AVCodecID id);







AVCodec *avcodec_find_decoder_by_name(const char *name);






int avcodec_default_get_buffer2(AVCodecContext *s, AVFrame *frame, int flags);
// 4074 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
unsigned avcodec_get_edge_width(void);
// 4085 "../../libav-12/libavcodec/avcodec.h"
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
// 4094 "../../libav-12/libavcodec/avcodec.h"
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
                               int linesize_align[8]);
// 4150 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
                          int *got_frame_ptr, AVPacket *avpkt);
// 4199 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
                         int *got_picture_ptr,
                         AVPacket *avpkt);
// 4223 "../../libav-12/libavcodec/avcodec.h"
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
                            int *got_sub_ptr,
                            AVPacket *avpkt);
// 4275 "../../libav-12/libavcodec/avcodec.h"
int avcodec_send_packet(AVCodecContext *avctx, const AVPacket *avpkt);
// 4295 "../../libav-12/libavcodec/avcodec.h"
int avcodec_receive_frame(AVCodecContext *avctx, AVFrame *frame);
// 4330 "../../libav-12/libavcodec/avcodec.h"
int avcodec_send_frame(AVCodecContext *avctx, const AVFrame *frame);
// 4347 "../../libav-12/libavcodec/avcodec.h"
int avcodec_receive_packet(AVCodecContext *avctx, AVPacket *avpkt);







enum AVPictureStructure {
    AV_PICTURE_STRUCTURE_UNKNOWN,
    AV_PICTURE_STRUCTURE_TOP_FIELD,
    AV_PICTURE_STRUCTURE_BOTTOM_FIELD,
    AV_PICTURE_STRUCTURE_FRAME,
};

typedef struct AVCodecParserContext {
    void *priv_data;
    struct AVCodecParser *parser;
    int64_t frame_offset;
    int64_t cur_offset;

    int64_t next_frame_offset;

    int pict_type;
// 4380 "../../libav-12/libavcodec/avcodec.h"
    int repeat_pict;
    int64_t pts;
    int64_t dts;


    int64_t last_pts;
    int64_t last_dts;
    int fetch_timestamp;


    int cur_frame_start_index;
    int64_t cur_frame_offset[4];
    int64_t cur_frame_pts[4];
    int64_t cur_frame_dts[4];

    int flags;





    int64_t offset;
    int64_t cur_frame_end[4];







    int key_frame;





    __attribute__((deprecated))
    int64_t convergence_duration;
// 4430 "../../libav-12/libavcodec/avcodec.h"
    int dts_sync_point;
// 4445 "../../libav-12/libavcodec/avcodec.h"
    int dts_ref_dts_delta;
// 4459 "../../libav-12/libavcodec/avcodec.h"
    int pts_dts_delta;






    int64_t cur_frame_pos[4];




    int64_t pos;




    int64_t last_pos;






    int duration;

    enum AVFieldOrder field_order;
// 4495 "../../libav-12/libavcodec/avcodec.h"
    enum AVPictureStructure picture_structure;







    int output_picture_number;




    int width;
    int height;




    int coded_width;
    int coded_height;
// 4525 "../../libav-12/libavcodec/avcodec.h"
    int format;
} AVCodecParserContext;

typedef struct AVCodecParser {
    int codec_ids[5];
    int priv_data_size;
    int (*parser_init)(AVCodecParserContext *s);


    int (*parser_parse)(AVCodecParserContext *s,
                        AVCodecContext *avctx,
                        const uint8_t **poutbuf, int *poutbuf_size,
                        const uint8_t *buf, int buf_size);
    void (*parser_close)(AVCodecParserContext *s);
    int (*split)(AVCodecContext *avctx, const uint8_t *buf, int buf_size);
    struct AVCodecParser *next;
} AVCodecParser;

AVCodecParser *av_parser_next(const AVCodecParser *c);

void av_register_codec_parser(AVCodecParser *parser);
AVCodecParserContext *av_parser_init(int codec_id);
// 4576 "../../libav-12/libavcodec/avcodec.h"
int av_parser_parse2(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size,
                     int64_t pts, int64_t dts,
                     int64_t pos);





int av_parser_change(AVCodecParserContext *s,
                     AVCodecContext *avctx,
                     uint8_t **poutbuf, int *poutbuf_size,
                     const uint8_t *buf, int buf_size, int keyframe);
void av_parser_close(AVCodecParserContext *s);
// 4609 "../../libav-12/libavcodec/avcodec.h"
AVCodec *avcodec_find_encoder(enum AVCodecID id);







AVCodec *avcodec_find_encoder_by_name(const char *name);
// 4658 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);
// 4697 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
                          const AVFrame *frame, int *got_packet_ptr);

int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
                            const AVSubtitle *sub);
// 4718 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);




__attribute__((deprecated))
void avpicture_free(AVPicture *picture);




__attribute__((deprecated))
int avpicture_fill(AVPicture *picture, uint8_t *ptr,
                   enum AVPixelFormat pix_fmt, int width, int height);




__attribute__((deprecated))
int avpicture_layout(const AVPicture* src, enum AVPixelFormat pix_fmt,
                     int width, int height,
                     unsigned char *dest, int dest_size);




__attribute__((deprecated))
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);




__attribute__((deprecated))
void av_picture_copy(AVPicture *dst, const AVPicture *src,
                     enum AVPixelFormat pix_fmt, int width, int height);




__attribute__((deprecated))
int av_picture_crop(AVPicture *dst, const AVPicture *src,
                    enum AVPixelFormat pix_fmt, int top_band, int left_band);




__attribute__((deprecated))
int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
            int padtop, int padbottom, int padleft, int padright, int *color);
// 4794 "../../libav-12/libavcodec/avcodec.h"
void __attribute__((deprecated)) avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);






unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);
// 4827 "../../libav-12/libavcodec/avcodec.h"
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
                             int has_alpha);
// 4847 "../../libav-12/libavcodec/avcodec.h"
enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat *pix_fmt_list,
                                              enum AVPixelFormat src_pix_fmt,
                                              int has_alpha, int *loss_ptr);

enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);
// 4861 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
// 4874 "../../libav-12/libavcodec/avcodec.h"
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);

void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
// 4885 "../../libav-12/libavcodec/avcodec.h"
const char *av_get_profile_name(const AVCodec *codec, int profile);
// 4898 "../../libav-12/libavcodec/avcodec.h"
const char *avcodec_profile_name(enum AVCodecID codec_id, int profile);

int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
// 4920 "../../libav-12/libavcodec/avcodec.h"
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
                             enum AVSampleFormat sample_fmt, const uint8_t *buf,
                             int buf_size, int align);
// 4933 "../../libav-12/libavcodec/avcodec.h"
void avcodec_flush_buffers(AVCodecContext *avctx);







int av_get_bits_per_sample(enum AVCodecID codec_id);
// 4951 "../../libav-12/libavcodec/avcodec.h"
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
// 4961 "../../libav-12/libavcodec/avcodec.h"
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes);





int av_get_audio_frame_duration2(AVCodecParameters *par, int frame_bytes);


typedef struct AVBitStreamFilterContext {
    void *priv_data;
    struct AVBitStreamFilter *filter;
    AVCodecParserContext *parser;
    struct AVBitStreamFilterContext *next;
} AVBitStreamFilterContext;


typedef struct AVBSFInternal AVBSFInternal;
// 4990 "../../libav-12/libavcodec/avcodec.h"
typedef struct AVBSFContext {



    const AVClass *av_class;




    const struct AVBitStreamFilter *filter;





    AVBSFInternal *internal;





    void *priv_data;




    AVCodecParameters *par_in;




    AVCodecParameters *par_out;





    AVRational time_base_in;





    AVRational time_base_out;
} AVBSFContext;

typedef struct AVBitStreamFilter {
    const char *name;






    const enum AVCodecID *codec_ids;
// 5055 "../../libav-12/libavcodec/avcodec.h"
    const AVClass *priv_class;
// 5065 "../../libav-12/libavcodec/avcodec.h"
    int priv_data_size;
    int (*init)(AVBSFContext *ctx);
    int (*filter)(AVBSFContext *ctx, AVPacket *pkt);
    void (*close)(AVBSFContext *ctx);
} AVBitStreamFilter;






__attribute__((deprecated))
void av_register_bitstream_filter(AVBitStreamFilter *bsf);
__attribute__((deprecated))
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name);
__attribute__((deprecated))
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
                               AVCodecContext *avctx, const char *args,
                               uint8_t **poutbuf, int *poutbuf_size,
                               const uint8_t *buf, int buf_size, int keyframe);
__attribute__((deprecated))
void av_bitstream_filter_close(AVBitStreamFilterContext *bsf);
__attribute__((deprecated))
AVBitStreamFilter *av_bitstream_filter_next(const AVBitStreamFilter *f);






const AVBitStreamFilter *av_bsf_get_by_name(const char *name);
// 5106 "../../libav-12/libavcodec/avcodec.h"
const AVBitStreamFilter *av_bsf_next(void **opaque);
// 5120 "../../libav-12/libavcodec/avcodec.h"
int av_bsf_alloc(const AVBitStreamFilter *filter, AVBSFContext **ctx);





int av_bsf_init(AVBSFContext *ctx);
// 5143 "../../libav-12/libavcodec/avcodec.h"
int av_bsf_send_packet(AVBSFContext *ctx, AVPacket *pkt);
// 5169 "../../libav-12/libavcodec/avcodec.h"
int av_bsf_receive_packet(AVBSFContext *ctx, AVPacket *pkt);





void av_bsf_free(AVBSFContext **ctx);







const AVClass *av_bsf_get_class(void);
// 5193 "../../libav-12/libavcodec/avcodec.h"
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);
// 5202 "../../libav-12/libavcodec/avcodec.h"
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
// 5218 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
// 5230 "../../libav-12/libavcodec/avcodec.h"
__attribute__((deprecated))
void av_log_ask_for_sample(void *avc, const char *msg, ...) __attribute__((__format__(__printf__, 2, 3)));





void av_register_hwaccel(AVHWAccel *hwaccel);






AVHWAccel *av_hwaccel_next(const AVHWAccel *hwaccel);





enum AVLockOp {
  AV_LOCK_CREATE,
  AV_LOCK_OBTAIN,
  AV_LOCK_RELEASE,
  AV_LOCK_DESTROY,
};
// 5280 "../../libav-12/libavcodec/avcodec.h"
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));




enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);





int avcodec_is_open(AVCodecContext *s);




int av_codec_is_encoder(const AVCodec *codec);




int av_codec_is_decoder(const AVCodec *codec);




const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
// 5315 "../../libav-12/libavcodec/avcodec.h"
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);





const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
// 5332 "../../libav-12/libavcodec/avcodec.h"
AVCPBProperties *av_cpb_properties_alloc(size_t *size);
// 259 "../../libav-12/libavformat/avformat.h" 2



// 1 "../../libav-12/libavformat/avio.h" 1
// 31 "../../libav-12/libavformat/avio.h"
// 1 "../../libav-12/libavutil/common.h" 1
// 29 "../../libav-12/libavutil/common.h"
// 1 "/usr/include/errno.h" 1 3 4
// 30 "../../libav-12/libavutil/common.h" 2

// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
// 32 "../../libav-12/libavutil/common.h" 2
// 1 "/usr/include/math.h" 1 3 4
// 28 "/usr/include/math.h" 3 4



// 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
// 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
// 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
// 32 "/usr/include/math.h" 2 3 4



// 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
// 36 "/usr/include/math.h" 2 3 4

// 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
// 38 "/usr/include/math.h" 2 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
// 39 "/usr/include/math.h" 2 3 4


// 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
// 42 "/usr/include/math.h" 2 3 4


// 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
// 45 "/usr/include/math.h" 2 3 4



// 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
// 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

// 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
// 49 "/usr/include/math.h" 2 3 4
// 83 "/usr/include/math.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
// 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

// 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

// 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




// 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
// 84 "/usr/include/math.h" 2 3 4
// 104 "/usr/include/math.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
// 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

// 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

// 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




// 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
// 105 "/usr/include/math.h" 2 3 4
// 151 "/usr/include/math.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
// 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

// 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

// 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




// 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
// 152 "/usr/include/math.h" 2 3 4
// 168 "/usr/include/math.h" 3 4
extern int signgam;
// 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
// 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
// 372 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
// 534 "/usr/include/math.h" 3 4

// 33 "../../libav-12/libavutil/common.h" 2


// 1 "/usr/include/stdlib.h" 1 3 4
// 32 "/usr/include/stdlib.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 33 "/usr/include/stdlib.h" 2 3 4








// 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
// 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
// 42 "/usr/include/stdlib.h" 2 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
// 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
// 1 "/usr/include/endian.h" 1 3 4
// 36 "/usr/include/endian.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
// 37 "/usr/include/endian.h" 2 3 4
// 60 "/usr/include/endian.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
// 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






// 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
// 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
// 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
// 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
// 61 "/usr/include/endian.h" 2 3 4
// 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
// 43 "/usr/include/stdlib.h" 2 3 4
// 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
// 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


// 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

// 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




// 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
// 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
// 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
// 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
// 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
// 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
// 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
// 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
// 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
// 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
// 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


// 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
// 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
// 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







// 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
// 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
// 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
// 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
// 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

// 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
// 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
// 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

// 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


// 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
// 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
// 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

// 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
// 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
// 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
// 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
// 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
// 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
// 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
// 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
// 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
// 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



// 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



// 1 "/usr/include/alloca.h" 1 3 4
// 24 "/usr/include/alloca.h" 3 4
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






// 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

// 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
// 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
// 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
// 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
// 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
// 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

// 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
// 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
// 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

// 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
// 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
// 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


// 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
// 955 "/usr/include/stdlib.h" 2 3 4
// 967 "/usr/include/stdlib.h" 3 4

// 36 "../../libav-12/libavutil/common.h" 2
// 1 "/usr/include/string.h" 1 3 4
// 27 "/usr/include/string.h" 3 4





// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


// 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

// 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
// 206 "/usr/include/string.h" 3 4

// 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
// 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


// 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
// 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

// 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
// 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
// 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
// 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
// 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
// 658 "/usr/include/string.h" 3 4

// 37 "../../libav-12/libavutil/common.h" 2
// 80 "../../libav-12/libavutil/common.h"
// 1 "../../libav-12/libavutil/common.h" 1
// 81 "../../libav-12/libavutil/common.h" 2



// 83 "../../libav-12/libavutil/common.h"
__attribute__((const)) int av_log2(unsigned v);



__attribute__((const)) int av_log2_16bit(unsigned v);
// 97 "../../libav-12/libavutil/common.h"
static __attribute__((always_inline)) inline __attribute__((const)) int av_clip_c(int a, int amin, int amax)
{
    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) uint8_t av_clip_uint8_c(int a)
{
    if (a&(~0xFF)) return (-a)>>31;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int8_t av_clip_int8_c(int a)
{
    if ((a+0x80) & ~0xFF) return (a>>31) ^ 0x7F;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) uint16_t av_clip_uint16_c(int a)
{
    if (a&(~0xFFFF)) return (-a)>>31;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int16_t av_clip_int16_c(int a)
{
    if ((a+0x8000) & ~0xFFFF) return (a>>31) ^ 0x7FFF;
    else return a;
}






static __attribute__((always_inline)) inline __attribute__((const)) int32_t av_clipl_int32_c(int64_t a)
{
    if ((a+0x80000000u) & ~0xFFFFFFFFUL) return (a>>63) ^ 0x7FFFFFFF;
    else return a;
}







static __attribute__((always_inline)) inline __attribute__((const)) int av_clip_intp2_c(int a, int p)
{
    if ((a + (1 << p)) & ~((1 << (p + 1)) - 1))
        return (a >> 31) ^ ((1 << p) - 1);
    else
        return a;
}







static __attribute__((always_inline)) inline __attribute__((const)) unsigned av_clip_uintp2_c(int a, int p)
{
    if (a & ~((1<<p) - 1)) return -a >> 31 & ((1<<p) - 1);
    else return a;
}
// 192 "../../libav-12/libavutil/common.h"
static __attribute__((always_inline)) inline int av_sat_add32_c(int a, int b)
{
    return av_clipl_int32_c((int64_t)a + b);
}
// 204 "../../libav-12/libavutil/common.h"
static __attribute__((always_inline)) inline int av_sat_dadd32_c(int a, int b)
{
    return av_sat_add32_c(a, av_sat_add32_c(b, b));
}
// 216 "../../libav-12/libavutil/common.h"
static __attribute__((always_inline)) inline __attribute__((const)) float av_clipf_c(float a, float amin, float amax)
{
    if (a < amin) return amin;
    else if (a > amax) return amax;
    else return a;
}





static __attribute__((always_inline)) inline __attribute__((const)) int av_ceil_log2_c(int x)
{
    return av_log2((x - 1) << 1);
}






static __attribute__((always_inline)) inline __attribute__((const)) int av_popcount_c(uint32_t x)
{
    x -= (x >> 1) & 0x55555555;
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = (x + (x >> 4)) & 0x0F0F0F0F;
    x += x >> 8;
    return (x + (x >> 16)) & 0x3F;
}






static __attribute__((always_inline)) inline __attribute__((const)) int av_popcount64_c(uint64_t x)
{
    return av_popcount_c(x) + av_popcount_c(x >> 32);
}
// 373 "../../libav-12/libavutil/common.h"
// 1 "../../libav-12/libavutil/mem.h" 1
// 374 "../../libav-12/libavutil/common.h" 2
// 32 "../../libav-12/libavformat/avio.h" 2



// 1 "../../libav-12/libavformat/version.h" 1
// 36 "../../libav-12/libavformat/avio.h" 2
// 51 "../../libav-12/libavformat/avio.h"
typedef struct AVIOInterruptCB {
    int (*callback)(void*);
    void *opaque;
} AVIOInterruptCB;





enum AVIODataMarkerType {



    AVIO_DATA_MARKER_HEADER,






    AVIO_DATA_MARKER_SYNC_POINT,





    AVIO_DATA_MARKER_BOUNDARY_POINT,






    AVIO_DATA_MARKER_UNKNOWN,




    AVIO_DATA_MARKER_TRAILER
};
// 104 "../../libav-12/libavformat/avio.h"
typedef struct AVIOContext {
// 117 "../../libav-12/libavformat/avio.h"
    const AVClass *av_class;
    unsigned char *buffer;
    int buffer_size;
    unsigned char *buf_ptr;
    unsigned char *buf_end;



    void *opaque;

    int (*read_packet)(void *opaque, uint8_t *buf, int buf_size);
    int (*write_packet)(void *opaque, uint8_t *buf, int buf_size);
    int64_t (*seek)(void *opaque, int64_t offset, int whence);
    int64_t pos;
    int must_flush;
    int eof_reached;
    int write_flag;
    int max_packet_size;
    unsigned long checksum;
    unsigned char *checksum_ptr;
    unsigned long (*update_checksum)(unsigned long checksum, const uint8_t *buf, unsigned int size);
    int error;



    int (*read_pause)(void *opaque, int pause);





    int64_t (*read_seek)(void *opaque, int stream_index,
                         int64_t timestamp, int flags);



    int seekable;




    int (*write_data_type)(void *opaque, uint8_t *buf, int buf_size,
                           enum AVIODataMarkerType type, int64_t time);





    int ignore_boundary_point;




    enum AVIODataMarkerType current_type;
    int64_t last_time;
} AVIOContext;
// 186 "../../libav-12/libavformat/avio.h"
int avio_check(const char *url, int flags);
// 205 "../../libav-12/libavformat/avio.h"
AVIOContext *avio_alloc_context(
                  unsigned char *buffer,
                  int buffer_size,
                  int write_flag,
                  void *opaque,
                  int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                  int64_t (*seek)(void *opaque, int64_t offset, int whence));

void avio_w8(AVIOContext *s, int b);
void avio_write(AVIOContext *s, const unsigned char *buf, int size);
void avio_wl64(AVIOContext *s, uint64_t val);
void avio_wb64(AVIOContext *s, uint64_t val);
void avio_wl32(AVIOContext *s, unsigned int val);
void avio_wb32(AVIOContext *s, unsigned int val);
void avio_wl24(AVIOContext *s, unsigned int val);
void avio_wb24(AVIOContext *s, unsigned int val);
void avio_wl16(AVIOContext *s, unsigned int val);
void avio_wb16(AVIOContext *s, unsigned int val);





int avio_put_str(AVIOContext *s, const char *str);
// 238 "../../libav-12/libavformat/avio.h"
int avio_put_str16le(AVIOContext *s, const char *str);
// 247 "../../libav-12/libavformat/avio.h"
int avio_put_str16be(AVIOContext *s, const char *str);
// 259 "../../libav-12/libavformat/avio.h"
void avio_write_marker(AVIOContext *s, int64_t time, enum AVIODataMarkerType type);
// 280 "../../libav-12/libavformat/avio.h"
int64_t avio_seek(AVIOContext *s, int64_t offset, int whence);





static __attribute__((always_inline)) inline int64_t avio_skip(AVIOContext *s, int64_t offset)
{
    return avio_seek(s, offset, 
// 288 "../../libav-12/libavformat/avio.h" 3 4
                               1
// 288 "../../libav-12/libavformat/avio.h"
                                       );
}





static __attribute__((always_inline)) inline int64_t avio_tell(AVIOContext *s)
{
    return avio_seek(s, 0, 
// 297 "../../libav-12/libavformat/avio.h" 3 4
                          1
// 297 "../../libav-12/libavformat/avio.h"
                                  );
}





int64_t avio_size(AVIOContext *s);


int avio_printf(AVIOContext *s, const char *fmt, ...) __attribute__((__format__(__printf__, 2, 3)));

void avio_flush(AVIOContext *s);






int avio_read(AVIOContext *s, unsigned char *buf, int size);
// 325 "../../libav-12/libavformat/avio.h"
int avio_r8 (AVIOContext *s);
unsigned int avio_rl16(AVIOContext *s);
unsigned int avio_rl24(AVIOContext *s);
unsigned int avio_rl32(AVIOContext *s);
uint64_t avio_rl64(AVIOContext *s);
unsigned int avio_rb16(AVIOContext *s);
unsigned int avio_rb24(AVIOContext *s);
unsigned int avio_rb32(AVIOContext *s);
uint64_t avio_rb64(AVIOContext *s);
// 350 "../../libav-12/libavformat/avio.h"
int avio_get_str(AVIOContext *pb, int maxlen, char *buf, int buflen);







int avio_get_str16le(AVIOContext *pb, int maxlen, char *buf, int buflen);
int avio_get_str16be(AVIOContext *pb, int maxlen, char *buf, int buflen);
// 403 "../../libav-12/libavformat/avio.h"
int avio_open(AVIOContext **s, const char *url, int flags);
// 423 "../../libav-12/libavformat/avio.h"
int avio_open2(AVIOContext **s, const char *url, int flags,
               const AVIOInterruptCB *int_cb, AVDictionary **options);
// 436 "../../libav-12/libavformat/avio.h"
int avio_close(AVIOContext *s);
// 449 "../../libav-12/libavformat/avio.h"
int avio_closep(AVIOContext **s);
// 458 "../../libav-12/libavformat/avio.h"
int avio_open_dyn_buf(AVIOContext **s);
// 469 "../../libav-12/libavformat/avio.h"
int avio_close_dyn_buf(AVIOContext *s, uint8_t **pbuffer);
// 482 "../../libav-12/libavformat/avio.h"
const char *avio_enum_protocols(void **opaque, int output);
// 491 "../../libav-12/libavformat/avio.h"
int avio_pause(AVIOContext *h, int pause);
// 512 "../../libav-12/libavformat/avio.h"
int64_t avio_seek_time(AVIOContext *h, int stream_index,
                       int64_t timestamp, int flags);
// 263 "../../libav-12/libavformat/avformat.h" 2


struct AVFormatContext;
// 358 "../../libav-12/libavformat/avformat.h"
int av_get_packet(AVIOContext *s, AVPacket *pkt, int size);
// 375 "../../libav-12/libavformat/avformat.h"
int av_append_packet(AVIOContext *s, AVPacket *pkt, int size);
// 385 "../../libav-12/libavformat/avformat.h"
typedef struct AVFrac {
    int64_t val, num, den;
} AVFrac;





struct AVCodecTag;




typedef struct AVProbeData {
    const char *filename;
    unsigned char *buf;
    int buf_size;
    const char *mime_type;
} AVProbeData;
// 443 "../../libav-12/libavformat/avformat.h"
typedef struct AVOutputFormat {
    const char *name;





    const char *long_name;
    const char *mime_type;
    const char *extensions;

    enum AVCodecID audio_codec;
    enum AVCodecID video_codec;
    enum AVCodecID subtitle_codec;






    int flags;





    const struct AVCodecTag * const *codec_tag;


    const AVClass *priv_class;
// 481 "../../libav-12/libavformat/avformat.h"
    struct AVOutputFormat *next;



    int priv_data_size;

    int (*write_header)(struct AVFormatContext *);







    int (*write_packet)(struct AVFormatContext *, AVPacket *pkt);
    int (*write_trailer)(struct AVFormatContext *);



    int (*interleave_packet)(struct AVFormatContext *, AVPacket *out,
                             AVPacket *in, int flush);






    int (*query_codec)(enum AVCodecID id, int std_compliance);
} AVOutputFormat;
// 518 "../../libav-12/libavformat/avformat.h"
typedef struct AVInputFormat {




    const char *name;






    const char *long_name;






    int flags;






    const char *extensions;

    const struct AVCodecTag * const *codec_tag;

    const AVClass *priv_class;






    const char *mime_type;
// 564 "../../libav-12/libavformat/avformat.h"
    struct AVInputFormat *next;




    int raw_codec_id;




    int priv_data_size;






    int (*read_probe)(AVProbeData *);






    int (*read_header)(struct AVFormatContext *);
// 599 "../../libav-12/libavformat/avformat.h"
    int (*read_packet)(struct AVFormatContext *, AVPacket *pkt);





    int (*read_close)(struct AVFormatContext *);
// 615 "../../libav-12/libavformat/avformat.h"
    int (*read_seek)(struct AVFormatContext *,
                     int stream_index, int64_t timestamp, int flags);





    int64_t (*read_timestamp)(struct AVFormatContext *s, int stream_index,
                              int64_t *pos, int64_t pos_limit);





    int (*read_play)(struct AVFormatContext *);





    int (*read_pause)(struct AVFormatContext *);







    int (*read_seek2)(struct AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
} AVInputFormat;




enum AVStreamParseType {
    AVSTREAM_PARSE_NONE,
    AVSTREAM_PARSE_FULL,
    AVSTREAM_PARSE_HEADERS,
    AVSTREAM_PARSE_TIMESTAMPS,
    AVSTREAM_PARSE_FULL_ONCE,
};

typedef struct AVIndexEntry {
    int64_t pos;
    int64_t timestamp;

    int flags:2;
    int size:30;
    int min_distance;
} AVIndexEntry;
// 690 "../../libav-12/libavformat/avformat.h"
typedef struct AVStreamInternal AVStreamInternal;
// 699 "../../libav-12/libavformat/avformat.h"
typedef struct AVStream {
    int index;





    int id;




    __attribute__((deprecated))
    AVCodecContext *codec;

    void *priv_data;





    __attribute__((deprecated))
    struct AVFrac pts;
// 736 "../../libav-12/libavformat/avformat.h"
    AVRational time_base;







    int64_t start_time;






    int64_t duration;

    int64_t nb_frames;

    int disposition;

    enum AVDiscard discard;






    AVRational sample_aspect_ratio;

    AVDictionary *metadata;
// 775 "../../libav-12/libavformat/avformat.h"
    AVRational avg_frame_rate;
// 784 "../../libav-12/libavformat/avformat.h"
    AVPacket attached_pic;
// 802 "../../libav-12/libavformat/avformat.h"
    AVPacketSideData *side_data;



    int nb_side_data;






    int event_flags;
// 825 "../../libav-12/libavformat/avformat.h"
    AVCodecParameters *codecpar;
// 839 "../../libav-12/libavformat/avformat.h"
    struct {
        int nb_decoded_frames;
        int found_decoder;




        int64_t fps_first_dts;
        int fps_first_dts_idx;
        int64_t fps_last_dts;
        int fps_last_dts_idx;

    } *info;

    int pts_wrap_bits;


    int64_t first_dts;
    int64_t cur_dts;
    int64_t last_IP_pts;
    int last_IP_duration;





    int probe_packets;




    int codec_info_nb_frames;


    enum AVStreamParseType need_parsing;
    struct AVCodecParserContext *parser;




    struct AVPacketList *last_in_packet_buffer;
    AVProbeData probe_data;

    int64_t pts_buffer[16 +1];

    AVIndexEntry *index_entries;

    int nb_index_entries;
    unsigned int index_entries_allocated_size;





    AVStreamInternal *internal;
} AVStream;
// 904 "../../libav-12/libavformat/avformat.h"
typedef struct AVProgram {
    int id;
    int flags;
    enum AVDiscard discard;
    unsigned int *stream_index;
    unsigned int nb_stream_indexes;
    AVDictionary *metadata;
} AVProgram;




typedef struct AVChapter {
    int id;
    AVRational time_base;
    int64_t start, end;
    AVDictionary *metadata;
} AVChapter;

typedef struct AVFormatInternal AVFormatInternal;
// 933 "../../libav-12/libavformat/avformat.h"
typedef struct AVFormatContext {




    const AVClass *av_class;






    struct AVInputFormat *iformat;






    struct AVOutputFormat *oformat;
// 961 "../../libav-12/libavformat/avformat.h"
    void *priv_data;
// 975 "../../libav-12/libavformat/avformat.h"
    AVIOContext *pb;






    int ctx_flags;






    unsigned int nb_streams;
// 1001 "../../libav-12/libavformat/avformat.h"
    AVStream **streams;







    char filename[1024];
// 1018 "../../libav-12/libavformat/avformat.h"
    int64_t start_time;
// 1028 "../../libav-12/libavformat/avformat.h"
    int64_t duration;






    int bit_rate;

    unsigned int packet_size;
    int max_delay;





    int flags;
// 1068 "../../libav-12/libavformat/avformat.h"
    unsigned int probesize;






    int max_analyze_duration;

    const uint8_t *key;
    int keylen;

    unsigned int nb_programs;
    AVProgram **programs;





    enum AVCodecID video_codec_id;





    enum AVCodecID audio_codec_id;





    enum AVCodecID subtitle_codec_id;
// 1111 "../../libav-12/libavformat/avformat.h"
    unsigned int max_index_size;





    unsigned int max_picture_buffer;
// 1130 "../../libav-12/libavformat/avformat.h"
    unsigned int nb_chapters;
    AVChapter **chapters;
// 1141 "../../libav-12/libavformat/avformat.h"
    AVDictionary *metadata;







    int64_t start_time_realtime;






    int fps_probe_size;






    int error_recognition;
// 1174 "../../libav-12/libavformat/avformat.h"
    AVIOInterruptCB interrupt_callback;




    int debug;
// 1198 "../../libav-12/libavformat/avformat.h"
    int64_t max_interleave_delta;





    int strict_std_compliance;






    int event_flags;






    int max_ts_probe;
// 1227 "../../libav-12/libavformat/avformat.h"
    int avoid_negative_ts;
// 1236 "../../libav-12/libavformat/avformat.h"
    AVFormatInternal *internal;




    void *opaque;
// 1263 "../../libav-12/libavformat/avformat.h"
    int (*io_open)(struct AVFormatContext *s, AVIOContext **pb, const char *url,
                   int flags, AVDictionary **options);




    void (*io_close)(struct AVFormatContext *s, AVIOContext *pb);
// 1278 "../../libav-12/libavformat/avformat.h"
    char *protocol_blacklist;
// 1287 "../../libav-12/libavformat/avformat.h"
    char *protocol_whitelist;
} AVFormatContext;

typedef struct AVPacketList {
    AVPacket pkt;
    struct AVPacketList *next;
} AVPacketList;
// 1308 "../../libav-12/libavformat/avformat.h"
unsigned avformat_version(void);




const char *avformat_configuration(void);




const char *avformat_license(void);
// 1329 "../../libav-12/libavformat/avformat.h"
void av_register_all(void);

void av_register_input_format(AVInputFormat *format);
void av_register_output_format(AVOutputFormat *format);
// 1342 "../../libav-12/libavformat/avformat.h"
int avformat_network_init(void);




int avformat_network_deinit(void);






AVInputFormat *av_iformat_next(const AVInputFormat *f);






AVOutputFormat *av_oformat_next(const AVOutputFormat *f);






AVFormatContext *avformat_alloc_context(void);





void avformat_free_context(AVFormatContext *s);







const AVClass *avformat_get_class(void);
// 1400 "../../libav-12/libavformat/avformat.h"
AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c);
// 1410 "../../libav-12/libavformat/avformat.h"
uint8_t *av_stream_new_side_data(AVStream *stream,
                                 enum AVPacketSideDataType type, int size);
// 1420 "../../libav-12/libavformat/avformat.h"
uint8_t *av_stream_get_side_data(AVStream *stream,
                                 enum AVPacketSideDataType type, int *size);

AVProgram *av_new_program(AVFormatContext *s, int id);
// 1438 "../../libav-12/libavformat/avformat.h"
AVInputFormat *av_find_input_format(const char *short_name);
// 1447 "../../libav-12/libavformat/avformat.h"
AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened);
// 1461 "../../libav-12/libavformat/avformat.h"
AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max);
// 1478 "../../libav-12/libavformat/avformat.h"
int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
                          const char *filename, void *logctx,
                          unsigned int offset, unsigned int max_probe_size);
// 1501 "../../libav-12/libavformat/avformat.h"
int avformat_open_input(AVFormatContext **ps, const char *filename, AVInputFormat *fmt, AVDictionary **options);
// 1524 "../../libav-12/libavformat/avformat.h"
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options);
// 1550 "../../libav-12/libavformat/avformat.h"
int av_find_best_stream(AVFormatContext *ic,
                        enum AVMediaType type,
                        int wanted_stream_nb,
                        int related_stream,
                        AVCodec **decoder_ret,
                        int flags);
// 1581 "../../libav-12/libavformat/avformat.h"
int av_read_frame(AVFormatContext *s, AVPacket *pkt);
// 1596 "../../libav-12/libavformat/avformat.h"
int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp,
                  int flags);
// 1626 "../../libav-12/libavformat/avformat.h"
int avformat_seek_file(AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);





int av_read_play(AVFormatContext *s);






int av_read_pause(AVFormatContext *s);





void avformat_close_input(AVFormatContext **s);
// 1674 "../../libav-12/libavformat/avformat.h"
int avformat_write_header(AVFormatContext *s, AVDictionary **options);
// 1713 "../../libav-12/libavformat/avformat.h"
int av_write_frame(AVFormatContext *s, AVPacket *pkt);
// 1758 "../../libav-12/libavformat/avformat.h"
int av_interleaved_write_frame(AVFormatContext *s, AVPacket *pkt);
// 1769 "../../libav-12/libavformat/avformat.h"
int av_write_trailer(AVFormatContext *s);
// 1783 "../../libav-12/libavformat/avformat.h"
AVOutputFormat *av_guess_format(const char *short_name,
                                const char *filename,
                                const char *mime_type);




enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
                            const char *filename, const char *mime_type,
                            enum AVMediaType type);
// 1817 "../../libav-12/libavformat/avformat.h"
void av_hex_dump(FILE *f, const uint8_t *buf, int size);
// 1831 "../../libav-12/libavformat/avformat.h"
void av_hex_dump_log(void *avcl, int level, const uint8_t *buf, int size);
// 1841 "../../libav-12/libavformat/avformat.h"
void av_pkt_dump2(FILE *f, AVPacket *pkt, int dump_payload, AVStream *st);
// 1855 "../../libav-12/libavformat/avformat.h"
void av_pkt_dump_log2(void *avcl, int level, AVPacket *pkt, int dump_payload,
                      AVStream *st);
// 1866 "../../libav-12/libavformat/avformat.h"
enum AVCodecID av_codec_get_id(const struct AVCodecTag * const *tags, unsigned int tag);
// 1876 "../../libav-12/libavformat/avformat.h"
unsigned int av_codec_get_tag(const struct AVCodecTag * const *tags, enum AVCodecID id);

int av_find_default_stream_index(AVFormatContext *s);
// 1891 "../../libav-12/libavformat/avformat.h"
int av_index_search_timestamp(AVStream *st, int64_t timestamp, int flags);







int av_add_index_entry(AVStream *st, int64_t pos, int64_t timestamp,
                       int size, int distance, int flags);
// 1922 "../../libav-12/libavformat/avformat.h"
void av_url_split(char *proto, int proto_size,
                  char *authorization, int authorization_size,
                  char *hostname, int hostname_size,
                  int *port_ptr,
                  char *path, int path_size,
                  const char *url);
// 1940 "../../libav-12/libavformat/avformat.h"
void av_dump_format(AVFormatContext *ic,
                    int index,
                    const char *url,
                    int is_output);
// 1957 "../../libav-12/libavformat/avformat.h"
int av_get_frame_filename(char *buf, int buf_size,
                          const char *path, int number);







int av_filename_number_test(const char *filename);
// 1985 "../../libav-12/libavformat/avformat.h"
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size);
// 1994 "../../libav-12/libavformat/avformat.h"
int av_match_ext(const char *filename, const char *extensions);
// 2006 "../../libav-12/libavformat/avformat.h"
int avformat_query_codec(const AVOutputFormat *ofmt, enum AVCodecID codec_id,
                         int std_compliance);
// 2024 "../../libav-12/libavformat/avformat.h"
const struct AVCodecTag *avformat_get_riff_video_tags(void);



const struct AVCodecTag *avformat_get_riff_audio_tags(void);
// 5 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavdevice/avdevice.h" 1
// 22 "../../libav-12/libavdevice/avdevice.h"
// 1 "../../libav-12/libavdevice/version.h" 1
// 23 "../../libav-12/libavdevice/avdevice.h" 2
// 49 "../../libav-12/libavdevice/avdevice.h"
unsigned avdevice_version(void);




const char *avdevice_configuration(void);




const char *avdevice_license(void);





void avdevice_register_all(void);
// 6 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libswscale/swscale.h" 1
// 36 "../../libav-12/libswscale/swscale.h"
// 1 "../../libav-12/libswscale/version.h" 1
// 37 "../../libav-12/libswscale/swscale.h" 2







unsigned swscale_version(void);




const char *swscale_configuration(void);




const char *swscale_license(void);
// 102 "../../libav-12/libswscale/swscale.h"
const int *sws_getCoefficients(int colorspace);



typedef struct SwsVector {
    double *coeff;
    int length;
} SwsVector;


typedef struct SwsFilter {
    SwsVector *lumH;
    SwsVector *lumV;
    SwsVector *chrH;
    SwsVector *chrV;
} SwsFilter;

struct SwsContext;





int sws_isSupportedInput(enum AVPixelFormat pix_fmt);





int sws_isSupportedOutput(enum AVPixelFormat pix_fmt);






int sws_isSupportedEndiannessConversion(enum AVPixelFormat pix_fmt);






struct SwsContext *sws_alloc_context(void);







int sws_init_context(struct SwsContext *sws_context, SwsFilter *srcFilter, SwsFilter *dstFilter);





void sws_freeContext(struct SwsContext *swsContext);
// 176 "../../libav-12/libswscale/swscale.h"
struct SwsContext *sws_getContext(int srcW, int srcH, enum AVPixelFormat srcFormat,
                                  int dstW, int dstH, enum AVPixelFormat dstFormat,
                                  int flags, SwsFilter *srcFilter,
                                  SwsFilter *dstFilter, const double *param);
// 207 "../../libav-12/libswscale/swscale.h"
int sws_scale(struct SwsContext *c, const uint8_t *const srcSlice[],
              const int srcStride[], int srcSliceY, int srcSliceH,
              uint8_t *const dst[], const int dstStride[]);





int sws_setColorspaceDetails(struct SwsContext *c, const int inv_table[4],
                             int srcRange, const int table[4], int dstRange,
                             int brightness, int contrast, int saturation);




int sws_getColorspaceDetails(struct SwsContext *c, int **inv_table,
                             int *srcRange, int **table, int *dstRange,
                             int *brightness, int *contrast, int *saturation);




SwsVector *sws_allocVec(int length);





SwsVector *sws_getGaussianVec(double variance, double quality);





SwsVector *sws_getConstVec(double c, int length);





SwsVector *sws_getIdentityVec(void);




void sws_scaleVec(SwsVector *a, double scalar);




void sws_normalizeVec(SwsVector *a, double height);
void sws_convVec(SwsVector *a, SwsVector *b);
void sws_addVec(SwsVector *a, SwsVector *b);
void sws_subVec(SwsVector *a, SwsVector *b);
void sws_shiftVec(SwsVector *a, int shift);





SwsVector *sws_cloneVec(SwsVector *a);





void sws_printVec2(SwsVector *a, AVClass *log_ctx, int log_level);

void sws_freeVec(SwsVector *a);

SwsFilter *sws_getDefaultFilter(float lumaGBlur, float chromaGBlur,
                                float lumaSharpen, float chromaSharpen,
                                float chromaHShift, float chromaVShift,
                                int verbose);
void sws_freeFilter(SwsFilter *filter);
// 295 "../../libav-12/libswscale/swscale.h"
struct SwsContext *sws_getCachedContext(struct SwsContext *context,
                                        int srcW, int srcH, enum AVPixelFormat srcFormat,
                                        int dstW, int dstH, enum AVPixelFormat dstFormat,
                                        int flags, SwsFilter *srcFilter,
                                        SwsFilter *dstFilter, const double *param);
// 311 "../../libav-12/libswscale/swscale.h"
void sws_convertPalette8ToPacked32(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);
// 323 "../../libav-12/libswscale/swscale.h"
void sws_convertPalette8ToPacked24(const uint8_t *src, uint8_t *dst, int num_pixels, const uint8_t *palette);







const AVClass *sws_get_class(void);
// 7 "ffmpeg_inter.h" 2
// 1 "/usr/include/x86_64-linux-gnu/libavutil/audioconvert.h" 1 3 4

// 1 "/usr/include/x86_64-linux-gnu/libavutil/version.h" 1 3 4
// 3 "/usr/include/x86_64-linux-gnu/libavutil/audioconvert.h" 2 3 4
// 8 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavutil/colorspace.h" 1
// 90 "../../libav-12/libavutil/colorspace.h"
static inline int C_JPEG_TO_CCIR(int y) {
    y = (((y - 128) * ((int) ((112.0/127.0) * (1<<10) + 0.5)) + ((1 << (10 - 1)) + (128 << 10))) >> 10);
    if (y < 16)
        y = 16;
    return y;
}
// 9 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavutil/opt.h" 1
// 33 "../../libav-12/libavutil/opt.h"
// 1 "../../libav-12/libavutil/log.h" 1
// 34 "../../libav-12/libavutil/opt.h" 2
// 218 "../../libav-12/libavutil/opt.h"
enum AVOptionType{
    AV_OPT_TYPE_FLAGS,
    AV_OPT_TYPE_INT,
    AV_OPT_TYPE_INT64,
    AV_OPT_TYPE_DOUBLE,
    AV_OPT_TYPE_FLOAT,
    AV_OPT_TYPE_STRING,
    AV_OPT_TYPE_RATIONAL,
    AV_OPT_TYPE_BINARY,
    AV_OPT_TYPE_DICT,
    AV_OPT_TYPE_CONST = 128,
};




typedef struct AVOption {
    const char *name;





    const char *help;





    int offset;
    enum AVOptionType type;




    union {
        int64_t i64;
        double dbl;
        const char *str;

        AVRational q;
    } default_val;
    double min;
    double max;

    int flags;
// 288 "../../libav-12/libavutil/opt.h"
    const char *unit;
} AVOption;
// 300 "../../libav-12/libavutil/opt.h"
int av_opt_show2(void *obj, void *av_log_obj, int req_flags, int rej_flags);






void av_opt_set_defaults(void *s);
// 325 "../../libav-12/libavutil/opt.h"
int av_set_options_string(void *ctx, const char *opts,
                          const char *key_val_sep, const char *pairs_sep);




void av_opt_free(void *obj);
// 341 "../../libav-12/libavutil/opt.h"
int av_opt_flag_is_set(void *obj, const char *field_name, const char *flag_name);
// 357 "../../libav-12/libavutil/opt.h"
int av_opt_set_dict(void *obj, struct AVDictionary **options);
// 373 "../../libav-12/libavutil/opt.h"
int av_opt_eval_flags (void *obj, const AVOption *o, const char *val, int *flags_out);
int av_opt_eval_int (void *obj, const AVOption *o, const char *val, int *int_out);
int av_opt_eval_int64 (void *obj, const AVOption *o, const char *val, int64_t *int64_out);
int av_opt_eval_float (void *obj, const AVOption *o, const char *val, float *float_out);
int av_opt_eval_double(void *obj, const AVOption *o, const char *val, double *double_out);
int av_opt_eval_q (void *obj, const AVOption *o, const char *val, AVRational *q_out);
// 415 "../../libav-12/libavutil/opt.h"
const AVOption *av_opt_find(void *obj, const char *name, const char *unit,
                            int opt_flags, int search_flags);
// 439 "../../libav-12/libavutil/opt.h"
const AVOption *av_opt_find2(void *obj, const char *name, const char *unit,
                             int opt_flags, int search_flags, void **target_obj);
// 451 "../../libav-12/libavutil/opt.h"
const AVOption *av_opt_next(const void *obj, const AVOption *prev);







void *av_opt_child_next(void *obj, void *prev);







const AVClass *av_opt_child_class_next(const AVClass *parent, const AVClass *prev);
// 495 "../../libav-12/libavutil/opt.h"
int av_opt_set (void *obj, const char *name, const char *val, int search_flags);
int av_opt_set_int (void *obj, const char *name, int64_t val, int search_flags);
int av_opt_set_double (void *obj, const char *name, double val, int search_flags);
int av_opt_set_q (void *obj, const char *name, AVRational val, int search_flags);
int av_opt_set_bin (void *obj, const char *name, const uint8_t *val, int size, int search_flags);




int av_opt_set_dict_val(void *obj, const char *name, const AVDictionary *val, int search_flags);
// 524 "../../libav-12/libavutil/opt.h"
int av_opt_get (void *obj, const char *name, int search_flags, uint8_t **out_val);
int av_opt_get_int (void *obj, const char *name, int search_flags, int64_t *out_val);
int av_opt_get_double (void *obj, const char *name, int search_flags, double *out_val);
int av_opt_get_q (void *obj, const char *name, int search_flags, AVRational *out_val);




int av_opt_get_dict_val(void *obj, const char *name, int search_flags, AVDictionary **out_val);
// 544 "../../libav-12/libavutil/opt.h"
int av_opt_copy(void *dest, const void *src);
// 10 "ffmpeg_inter.h" 2

// 1 "../../libav-12/libavcodec/avfft.h" 1
// 35 "../../libav-12/libavcodec/avfft.h"
typedef float FFTSample;

typedef struct FFTComplex {
    FFTSample re, im;
} FFTComplex;

typedef struct FFTContext FFTContext;






FFTContext *av_fft_init(int nbits, int inverse);




void av_fft_permute(FFTContext *s, FFTComplex *z);





void av_fft_calc(FFTContext *s, FFTComplex *z);

void av_fft_end(FFTContext *s);

FFTContext *av_mdct_init(int nbits, int inverse, double scale);
void av_imdct_calc(FFTContext *s, FFTSample *output, const FFTSample *input);
void av_imdct_half(FFTContext *s, FFTSample *output, const FFTSample *input);
void av_mdct_calc(FFTContext *s, FFTSample *output, const FFTSample *input);
void av_mdct_end(FFTContext *s);



enum RDFTransformType {
    DFT_R2C,
    IDFT_C2R,
    IDFT_R2C,
    DFT_C2R,
};

typedef struct RDFTContext RDFTContext;






RDFTContext *av_rdft_init(int nbits, enum RDFTransformType trans);
void av_rdft_calc(RDFTContext *s, FFTSample *data);
void av_rdft_end(RDFTContext *s);



typedef struct DCTContext DCTContext;

enum DCTTransformType {
    DCT_II = 0,
    DCT_III,
    DCT_I,
    DST_I,
};
// 110 "../../libav-12/libavcodec/avfft.h"
DCTContext *av_dct_init(int nbits, enum DCTTransformType type);
void av_dct_calc(DCTContext *s, FFTSample *data);
void av_dct_end (DCTContext *s);
// 12 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavfilter/avfilter.h" 1
// 45 "../../libav-12/libavfilter/avfilter.h"
// 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
// 46 "../../libav-12/libavfilter/avfilter.h" 2

// 1 "../../libav-12/libavfilter/version.h" 1
// 48 "../../libav-12/libavfilter/avfilter.h" 2




unsigned avfilter_version(void);




const char *avfilter_configuration(void);




const char *avfilter_license(void);


typedef struct AVFilterContext AVFilterContext;
typedef struct AVFilterLink AVFilterLink;
typedef struct AVFilterPad AVFilterPad;
typedef struct AVFilterFormats AVFilterFormats;





int avfilter_pad_count(const AVFilterPad *pads);
// 85 "../../libav-12/libavfilter/avfilter.h"
const char *avfilter_pad_get_name(const AVFilterPad *pads, int pad_idx);
// 96 "../../libav-12/libavfilter/avfilter.h"
enum AVMediaType avfilter_pad_get_type(const AVFilterPad *pads, int pad_idx);
// 120 "../../libav-12/libavfilter/avfilter.h"
typedef struct AVFilter {



    const char *name;






    const char *description;
// 140 "../../libav-12/libavfilter/avfilter.h"
    const AVFilterPad *inputs;







    const AVFilterPad *outputs;
// 158 "../../libav-12/libavfilter/avfilter.h"
    const AVClass *priv_class;




    int flags;
// 194 "../../libav-12/libavfilter/avfilter.h"
    int (*init)(AVFilterContext *ctx);
// 207 "../../libav-12/libavfilter/avfilter.h"
    int (*init_dict)(AVFilterContext *ctx, AVDictionary **options);
// 219 "../../libav-12/libavfilter/avfilter.h"
    void (*uninit)(AVFilterContext *ctx);
// 243 "../../libav-12/libavfilter/avfilter.h"
    int (*query_formats)(AVFilterContext *);

    int priv_size;





    struct AVFilter *next;
} AVFilter;






typedef struct AVFilterInternal AVFilterInternal;


struct AVFilterContext {
    const AVClass *av_class;

    const AVFilter *filter;

    char *name;

    AVFilterPad *input_pads;
    AVFilterLink **inputs;
    unsigned nb_inputs;

    AVFilterPad *output_pads;
    AVFilterLink **outputs;
    unsigned nb_outputs;

    void *priv;

    struct AVFilterGraph *graph;
// 297 "../../libav-12/libavfilter/avfilter.h"
    int thread_type;




    AVFilterInternal *internal;
// 311 "../../libav-12/libavfilter/avfilter.h"
    AVBufferRef *hw_device_ctx;
};
// 321 "../../libav-12/libavfilter/avfilter.h"
struct AVFilterLink {
    AVFilterContext *src;
    AVFilterPad *srcpad;

    AVFilterContext *dst;
    AVFilterPad *dstpad;

    enum AVMediaType type;


    int w;
    int h;
    AVRational sample_aspect_ratio;

    uint64_t channel_layout;
    int sample_rate;

    int format;
// 347 "../../libav-12/libavfilter/avfilter.h"
    AVRational time_base;
// 361 "../../libav-12/libavfilter/avfilter.h"
    AVFilterFormats *in_formats;
    AVFilterFormats *out_formats;





    AVFilterFormats *in_samplerates;
    AVFilterFormats *out_samplerates;
    struct AVFilterChannelLayouts *in_channel_layouts;
    struct AVFilterChannelLayouts *out_channel_layouts;
// 380 "../../libav-12/libavfilter/avfilter.h"
    int request_samples;


    enum {
        AVLINK_UNINIT = 0,
        AVLINK_STARTINIT,
        AVLINK_INIT
    } init_state;
// 399 "../../libav-12/libavfilter/avfilter.h"
    AVRational frame_rate;





    AVBufferRef *hw_frames_ctx;
};
// 417 "../../libav-12/libavfilter/avfilter.h"
int avfilter_link(AVFilterContext *src, unsigned srcpad,
                  AVFilterContext *dst, unsigned dstpad);







int avfilter_config_links(AVFilterContext *filter);


void avfilter_register_all(void);



__attribute__((deprecated))
void avfilter_uninit(void);
// 447 "../../libav-12/libavfilter/avfilter.h"
int avfilter_register(AVFilter *filter);
// 459 "../../libav-12/libavfilter/avfilter.h"
AVFilter *avfilter_get_by_name(const char *name);






const AVFilter *avfilter_next(const AVFilter *prev);
// 476 "../../libav-12/libavfilter/avfilter.h"
__attribute__((deprecated))
AVFilter **av_filter_next(AVFilter **filter);
// 491 "../../libav-12/libavfilter/avfilter.h"
__attribute__((deprecated))
int avfilter_open(AVFilterContext **filter_ctx, AVFilter *filter, const char *inst_name);
// 507 "../../libav-12/libavfilter/avfilter.h"
__attribute__((deprecated))
int avfilter_init_filter(AVFilterContext *filter, const char *args, void *opaque);
// 521 "../../libav-12/libavfilter/avfilter.h"
int avfilter_init_str(AVFilterContext *ctx, const char *args);
// 543 "../../libav-12/libavfilter/avfilter.h"
int avfilter_init_dict(AVFilterContext *ctx, AVDictionary **options);







void avfilter_free(AVFilterContext *filter);
// 562 "../../libav-12/libavfilter/avfilter.h"
int avfilter_insert_filter(AVFilterLink *link, AVFilterContext *filt,
                           unsigned filt_srcpad_idx, unsigned filt_dstpad_idx);






const AVClass *avfilter_get_class(void);

typedef struct AVFilterGraphInternal AVFilterGraphInternal;
// 586 "../../libav-12/libavfilter/avfilter.h"
typedef int (avfilter_action_func)(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs);
// 600 "../../libav-12/libavfilter/avfilter.h"
typedef int (avfilter_execute_func)(AVFilterContext *ctx, avfilter_action_func *func,
                                    void *arg, int *ret, int nb_jobs);

typedef struct AVFilterGraph {
    const AVClass *av_class;
    AVFilterContext **filters;
    unsigned nb_filters;

    char *scale_sws_opts;
    char *resample_lavr_opts;
// 623 "../../libav-12/libavfilter/avfilter.h"
    int thread_type;






    int nb_threads;




    AVFilterGraphInternal *internal;






    void *opaque;
// 656 "../../libav-12/libavfilter/avfilter.h"
    avfilter_execute_func *execute;
} AVFilterGraph;






AVFilterGraph *avfilter_graph_alloc(void);
// 680 "../../libav-12/libavfilter/avfilter.h"
AVFilterContext *avfilter_graph_alloc_filter(AVFilterGraph *graph,
                                             const AVFilter *filter,
                                             const char *name);







AVFilterContext *avfilter_graph_get_filter(AVFilterGraph *graph, char *name);
// 702 "../../libav-12/libavfilter/avfilter.h"
__attribute__((deprecated))
int avfilter_graph_add_filter(AVFilterGraph *graphctx, AVFilterContext *filter);
// 719 "../../libav-12/libavfilter/avfilter.h"
int avfilter_graph_create_filter(AVFilterContext **filt_ctx, const AVFilter *filt,
                                 const char *name, const char *args, void *opaque,
                                 AVFilterGraph *graph_ctx);
// 730 "../../libav-12/libavfilter/avfilter.h"
int avfilter_graph_config(AVFilterGraph *graphctx, void *log_ctx);





void avfilter_graph_free(AVFilterGraph **graph);
// 747 "../../libav-12/libavfilter/avfilter.h"
typedef struct AVFilterInOut {

    char *name;


    AVFilterContext *filter_ctx;


    int pad_idx;


    struct AVFilterInOut *next;
} AVFilterInOut;






AVFilterInOut *avfilter_inout_alloc(void);





void avfilter_inout_free(AVFilterInOut **inout);
// 783 "../../libav-12/libavfilter/avfilter.h"
int avfilter_graph_parse(AVFilterGraph *graph, const char *filters,
                         AVFilterInOut *inputs, AVFilterInOut *outputs,
                         void *log_ctx);
// 817 "../../libav-12/libavfilter/avfilter.h"
int avfilter_graph_parse2(AVFilterGraph *graph, const char *filters,
                          AVFilterInOut **inputs,
                          AVFilterInOut **outputs);
// 13 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavfilter/avfiltergraph.h" 1
// 25 "../../libav-12/libavfilter/avfiltergraph.h"
// 1 "../../libav-12/libavfilter/avfilter.h" 1
// 26 "../../libav-12/libavfilter/avfiltergraph.h" 2
// 14 "ffmpeg_inter.h" 2
// 1 "../../libav-12/libavfilter/graphparser.c" 1
// 37 "../../libav-12/libavfilter/graphparser.c"
static int link_filter(AVFilterContext *src, int srcpad,
                       AVFilterContext *dst, int dstpad,
                       void *log_ctx)
{
    int ret;
    if ((ret = avfilter_link(src, srcpad, dst, dstpad))) {
        av_log(log_ctx, 16,
               "Cannot create the link %s:%d -> %s:%d\n",
               src->filter->name, srcpad, dst->filter->name, dstpad);
        return ret;
    }

    return 0;
}







static char *parse_link_name(const char **buf, void *log_ctx)
{
    const char *start = *buf;
    char *name;
    (*buf)++;

    name = av_get_token(buf, "]");
    if (!name)
        goto fail;

    if (!name[0]) {
        av_log(log_ctx, 16,
               "Bad (empty?) label found in the following: \"%s\".\n", start);
        goto fail;
    }

    if (*(*buf)++ != ']') {
        av_log(log_ctx, 16,
               "Mismatched '[' found in the following: \"%s\".\n", start);
    fail:
        av_freep(&name);
    }

    return name;
}



static void append_sws_flags(const char **args, const char *sws_opts, char *tmp)
{
    int nb_opts = 0;
    const char *separator = ":";
    const char *opt = *args;

    if (strstr(*args, "flags"))
        return;

    if (strstr(*args, "="))
        separator = ":flags=";

    while ((opt = strstr(opt, ":")) && *opt) {
        av_log(
// 99 "../../libav-12/libavfilter/graphparser.c" 3 4
              ((void *)0)
// 99 "../../libav-12/libavfilter/graphparser.c"
                  , 32, "opts '%s' \n", opt);
        if (nb_opts > 2) {
            return;
        }
        nb_opts++;
        opt++;
    }

    opt = strstr(sws_opts, "flags=");
    if (opt && strlen(opt) > 6)
        opt += 6;
    else
        opt = sws_opts;

    snprintf(tmp, 256, "%s%s%s",
             *args, separator, opt);

    *args = tmp;
}
// 131 "../../libav-12/libavfilter/graphparser.c"
static int create_filter(AVFilterContext **filt_ctx, AVFilterGraph *ctx, int index,
                         const char *filt_name, const char *args, void *log_ctx)
{
    AVFilter *filt;
    char inst_name[30];
    char tmp_args[256];
    int ret;

    snprintf(inst_name, sizeof(inst_name), "Parsed filter %d %s", index, filt_name);

    filt = avfilter_get_by_name(filt_name);

    if (!filt) {
        av_log(log_ctx, 16,
               "No such filter: '%s'\n", filt_name);
        return (-(
// 146 "../../libav-12/libavfilter/graphparser.c" 3 4
              22
// 146 "../../libav-12/libavfilter/graphparser.c"
              ));
    }

    *filt_ctx = avfilter_graph_alloc_filter(ctx, filt, inst_name);
    if (!*filt_ctx) {
        av_log(log_ctx, 16,
               "Error creating filter '%s'\n", filt_name);
        return (-(
// 153 "../../libav-12/libavfilter/graphparser.c" 3 4
              12
// 153 "../../libav-12/libavfilter/graphparser.c"
              ));
    }

    if (!strcmp(filt_name, "scale") && args &&
        ctx->scale_sws_opts) {
        append_sws_flags(&args, ctx->scale_sws_opts, tmp_args);
    }

    ret = avfilter_init_str(*filt_ctx, args);
    if (ret < 0) {
        av_log(log_ctx, 16,
               "Error initializing filter '%s'", filt_name);
        if (args)
            av_log(log_ctx, 16, " with args '%s'", args);
        av_log(log_ctx, 16, "\n");
        avfilter_free(*filt_ctx);
        return ret;
    }

    return 0;
}
// 191 "../../libav-12/libavfilter/graphparser.c"
static int parse_filter(AVFilterContext **filt_ctx, const char **buf, AVFilterGraph *graph,
                        int index, void *log_ctx)
{
    char *opts = 
// 194 "../../libav-12/libavfilter/graphparser.c" 3 4
                ((void *)0)
// 194 "../../libav-12/libavfilter/graphparser.c"
                    ;
    char *name = av_get_token(buf, "=,;[\n");
    int ret;

    if (**buf == '=') {
        (*buf)++;
        opts = av_get_token(buf, "[],;\n");
    }

    ret = create_filter(filt_ctx, graph, index, name, opts, log_ctx);
    av_free(name);
    av_free(opts);
    return ret;
}

AVFilterInOut *avfilter_inout_alloc(void)
{
    return av_mallocz(sizeof(AVFilterInOut));
}

void avfilter_inout_free(AVFilterInOut **inout)
{
    while (*inout) {
        AVFilterInOut *next = (*inout)->next;
        av_freep(&(*inout)->name);
        av_freep(inout);
        *inout = next;
    }
}

static AVFilterInOut *extract_inout(const char *label, AVFilterInOut **links)
{
    AVFilterInOut *ret;

    while (*links && (!(*links)->name || strcmp((*links)->name, label)))
        links = &((*links)->next);

    ret = *links;

    if (ret) {
        *links = ret->next;
        ret->next = 
// 235 "../../libav-12/libavfilter/graphparser.c" 3 4
                   ((void *)0)
// 235 "../../libav-12/libavfilter/graphparser.c"
                       ;
    }

    return ret;
}

static void insert_inout(AVFilterInOut **inouts, AVFilterInOut *element)
{
    element->next = *inouts;
    *inouts = element;
}

static void append_inout(AVFilterInOut **inouts, AVFilterInOut **element)
{
    while (*inouts && (*inouts)->next)
        inouts = &((*inouts)->next);

    if (!*inouts)
        *inouts = *element;
    else
        (*inouts)->next = *element;
    *element = 
// 256 "../../libav-12/libavfilter/graphparser.c" 3 4
              ((void *)0)
// 256 "../../libav-12/libavfilter/graphparser.c"
                  ;
}

static int link_filter_inouts(AVFilterContext *filt_ctx,
                              AVFilterInOut **curr_inputs,
                              AVFilterInOut **open_inputs, void *log_ctx)
{
    int pad, ret;

    for (pad = 0; pad < filt_ctx->nb_inputs; pad++) {
        AVFilterInOut *p = *curr_inputs;

        if (p) {
            *curr_inputs = (*curr_inputs)->next;
            p->next = 
// 270 "../../libav-12/libavfilter/graphparser.c" 3 4
                     ((void *)0)
// 270 "../../libav-12/libavfilter/graphparser.c"
                         ;
        } else if (!(p = av_mallocz(sizeof(*p))))
            return (-(
// 272 "../../libav-12/libavfilter/graphparser.c" 3 4
                  12
// 272 "../../libav-12/libavfilter/graphparser.c"
                  ));

        if (p->filter_ctx) {
            ret = link_filter(p->filter_ctx, p->pad_idx, filt_ctx, pad, log_ctx);
            av_free(p->name);
            av_free(p);
            if (ret < 0)
                return ret;
        } else {
            p->filter_ctx = filt_ctx;
            p->pad_idx = pad;
            append_inout(open_inputs, &p);
        }
    }

    if (*curr_inputs) {
        av_log(log_ctx, 16,
               "Too many inputs specified for the \"%s\" filter.\n",
               filt_ctx->filter->name);
        return (-(
// 291 "../../libav-12/libavfilter/graphparser.c" 3 4
              22
// 291 "../../libav-12/libavfilter/graphparser.c"
              ));
    }

    pad = filt_ctx->nb_outputs;
    while (pad--) {
        AVFilterInOut *currlinkn = av_mallocz(sizeof(AVFilterInOut));
        if (!currlinkn)
            return (-(
// 298 "../../libav-12/libavfilter/graphparser.c" 3 4
                  12
// 298 "../../libav-12/libavfilter/graphparser.c"
                  ));
        currlinkn->filter_ctx = filt_ctx;
        currlinkn->pad_idx = pad;
        insert_inout(curr_inputs, currlinkn);
    }

    return 0;
}

static int parse_inputs(const char **buf, AVFilterInOut **curr_inputs,
                        AVFilterInOut **open_outputs, void *log_ctx)
{
    AVFilterInOut *parsed_inputs = 
// 310 "../../libav-12/libavfilter/graphparser.c" 3 4
                                  ((void *)0)
// 310 "../../libav-12/libavfilter/graphparser.c"
                                      ;
    int pad = 0;

    while (**buf == '[') {
        char *name = parse_link_name(buf, log_ctx);
        AVFilterInOut *match;

        if (!name)
            return (-(
// 318 "../../libav-12/libavfilter/graphparser.c" 3 4
                  22
// 318 "../../libav-12/libavfilter/graphparser.c"
                  ));


        match = extract_inout(name, open_outputs);

        if (match) {
            av_free(name);
        } else {

            if (!(match = av_mallocz(sizeof(AVFilterInOut)))) {
                av_free(name);
                return (-(
// 329 "../../libav-12/libavfilter/graphparser.c" 3 4
                      12
// 329 "../../libav-12/libavfilter/graphparser.c"
                      ));
            }
            match->name = name;
            match->pad_idx = pad;
        }

        append_inout(&parsed_inputs, &match);

        *buf += strspn(*buf, " \n\t");
        pad++;
    }

    append_inout(&parsed_inputs, curr_inputs);
    *curr_inputs = parsed_inputs;

    return pad;
}

static int parse_outputs(const char **buf, AVFilterInOut **curr_inputs,
                         AVFilterInOut **open_inputs,
                         AVFilterInOut **open_outputs, void *log_ctx)
{
    int ret, pad = 0;

    while (**buf == '[') {
        char *name = parse_link_name(buf, log_ctx);
        AVFilterInOut *match;

        AVFilterInOut *input = *curr_inputs;

        if (!name)
            return (-(
// 360 "../../libav-12/libavfilter/graphparser.c" 3 4
                  22
// 360 "../../libav-12/libavfilter/graphparser.c"
                  ));

        if (!input) {
            av_log(log_ctx, 16,
                   "No output pad can be associated to link label '%s'.\n", name);
            av_free(name);
            return (-(
// 366 "../../libav-12/libavfilter/graphparser.c" 3 4
                  22
// 366 "../../libav-12/libavfilter/graphparser.c"
                  ));
        }
        *curr_inputs = (*curr_inputs)->next;


        match = extract_inout(name, open_inputs);

        if (match) {
            if ((ret = link_filter(input->filter_ctx, input->pad_idx,
                                   match->filter_ctx, match->pad_idx, log_ctx)) < 0) {
                av_free(name);
                return ret;
            }
            av_free(match->name);
            av_free(name);
            av_free(match);
            av_free(input);
        } else {

            input->name = name;
            insert_inout(open_outputs, input);
        }
        *buf += strspn(*buf, " \n\t");
        pad++;
    }

    return pad;
}

static int parse_sws_flags(const char **buf, AVFilterGraph *graph)
{
    char *p = strchr(*buf, ';');

    if (strncmp(*buf, "sws_flags=", 10))
        return 0;

    if (!p) {
        av_log(graph, 16, "sws_flags not terminated with ';'.\n");
        return (-(
// 404 "../../libav-12/libavfilter/graphparser.c" 3 4
              22
// 404 "../../libav-12/libavfilter/graphparser.c"
              ));
    }

    *buf += 4;

    av_freep(&graph->scale_sws_opts);
    if (!(graph->scale_sws_opts = av_mallocz(p - *buf + 1)))
        return (-(
// 411 "../../libav-12/libavfilter/graphparser.c" 3 4
              12
// 411 "../../libav-12/libavfilter/graphparser.c"
              ));
    av_strlcpy(graph->scale_sws_opts, *buf, p - *buf + 1);

    *buf = p + 1;
    return 0;
}

int avfilter_graph_parse2(AVFilterGraph *graph, const char *filters,
                          AVFilterInOut **inputs,
                          AVFilterInOut **outputs)
{
    int index = 0, ret;
    char chr = 0;

    AVFilterInOut *curr_inputs = 
// 425 "../../libav-12/libavfilter/graphparser.c" 3 4
                                ((void *)0)
// 425 "../../libav-12/libavfilter/graphparser.c"
                                    , *open_inputs = 
// 425 "../../libav-12/libavfilter/graphparser.c" 3 4
                                                     ((void *)0)
// 425 "../../libav-12/libavfilter/graphparser.c"
                                                         , *open_outputs = 
// 425 "../../libav-12/libavfilter/graphparser.c" 3 4
                                                                           ((void *)0)
// 425 "../../libav-12/libavfilter/graphparser.c"
                                                                               ;

    filters += strspn(filters, " \n\t");

    if ((ret = parse_sws_flags(&filters, graph)) < 0)
        goto fail;

    do {
        AVFilterContext *filter;
        filters += strspn(filters, " \n\t");

        if ((ret = parse_inputs(&filters, &curr_inputs, &open_outputs, graph)) < 0)
            goto fail;

        if ((ret = parse_filter(&filter, &filters, graph, index, graph)) < 0)
            goto fail;


        if ((ret = link_filter_inouts(filter, &curr_inputs, &open_inputs, graph)) < 0)
            goto fail;

        if ((ret = parse_outputs(&filters, &curr_inputs, &open_inputs, &open_outputs,
                                 graph)) < 0)
            goto fail;

        filters += strspn(filters, " \n\t");
        chr = *filters++;

        if (chr == ';' && curr_inputs)
            append_inout(&open_outputs, &curr_inputs);
        index++;
    } while (chr == ',' || chr == ';');

    if (chr) {
        av_log(graph, 16,
               "Unable to parse graph description substring: \"%s\"\n",
               filters - 1);
        ret = (-(
// 462 "../../libav-12/libavfilter/graphparser.c" 3 4
             22
// 462 "../../libav-12/libavfilter/graphparser.c"
             ));
        goto fail;
    }

    append_inout(&open_outputs, &curr_inputs);

    *inputs = open_inputs;
    *outputs = open_outputs;
    return 0;

 fail:
    while (graph->nb_filters)
        avfilter_free(graph->filters[0]);
    av_freep(&graph->filters);
    avfilter_inout_free(&open_inputs);
    avfilter_inout_free(&open_outputs);
    avfilter_inout_free(&curr_inputs);

    *inputs = 
// 480 "../../libav-12/libavfilter/graphparser.c" 3 4
              ((void *)0)
// 480 "../../libav-12/libavfilter/graphparser.c"
                  ;
    *outputs = 
// 481 "../../libav-12/libavfilter/graphparser.c" 3 4
              ((void *)0)
// 481 "../../libav-12/libavfilter/graphparser.c"
                  ;

    return ret;
}

int avfilter_graph_parse(AVFilterGraph *graph, const char *filters,
                         AVFilterInOut *open_inputs,
                         AVFilterInOut *open_outputs, void *log_ctx)
{
    int ret;
    AVFilterInOut *cur, *match, *inputs = 
// 491 "../../libav-12/libavfilter/graphparser.c" 3 4
                                         ((void *)0)
// 491 "../../libav-12/libavfilter/graphparser.c"
                                             , *outputs = 
// 491 "../../libav-12/libavfilter/graphparser.c" 3 4
                                                          ((void *)0)
// 491 "../../libav-12/libavfilter/graphparser.c"
                                                              ;

    if ((ret = avfilter_graph_parse2(graph, filters, &inputs, &outputs)) < 0)
        goto fail;


    if (inputs && !inputs->name)
        inputs->name = av_strdup("in");
    for (cur = inputs; cur; cur = cur->next) {
        if (!cur->name) {
              av_log(log_ctx, 16,
                     "Not enough inputs specified for the \"%s\" filter.\n",
                     cur->filter_ctx->filter->name);
              ret = (-(
// 504 "../../libav-12/libavfilter/graphparser.c" 3 4
                   22
// 504 "../../libav-12/libavfilter/graphparser.c"
                   ));
              goto fail;
        }
        if (!(match = extract_inout(cur->name, &open_outputs)))
            continue;
        ret = avfilter_link(match->filter_ctx, match->pad_idx,
                            cur->filter_ctx, cur->pad_idx);
        avfilter_inout_free(&match);
        if (ret < 0)
            goto fail;
    }


    if (outputs && !outputs->name)
        outputs->name = av_strdup("out");
    for (cur = outputs; cur; cur = cur->next) {
        if (!cur->name) {
            av_log(log_ctx, 16,
                   "Invalid filterchain containing an unlabelled output pad: \"%s\"\n",
                   filters);
            ret = (-(
// 524 "../../libav-12/libavfilter/graphparser.c" 3 4
                 22
// 524 "../../libav-12/libavfilter/graphparser.c"
                 ));
            goto fail;
        }
        if (!(match = extract_inout(cur->name, &open_inputs)))
            continue;
        ret = avfilter_link(cur->filter_ctx, cur->pad_idx,
                            match->filter_ctx, match->pad_idx);
        avfilter_inout_free(&match);
        if (ret < 0)
            goto fail;
    }

 fail:
    if (ret < 0) {
        while (graph->nb_filters)
            avfilter_free(graph->filters[0]);
        av_freep(&graph->filters);
    }
    avfilter_inout_free(&inputs);
    avfilter_inout_free(&outputs);
    avfilter_inout_free(&open_inputs);
    avfilter_inout_free(&open_outputs);
    return ret;
}
// 14 "ffmpeg_inter.h" 2
