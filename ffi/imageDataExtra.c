// 24 bit colour
typedef struct {int red, green, blue;} Color;

// Flush an image data with 'fill'
void flush(char* dst, Color fill, int w, int h)
{
	int i;
	for (i = 0; i < w*h; i++) {
		dst[i*4] 	 = fill.red;
		dst[i*4 + 1] = fill.green;
		dst[i*4 + 2] = fill.blue;
		dst[i*4 + 3] = 255;
	}
}

// Copy image data from src to dst (24 -> 32)
void setData_24(char* dst, char* src, int w, int h)
{
	int i;
	for (i = 0; i < w*h; i++) {
		dst[i*4] = src[i*3];
		dst[i*4 + 1] = src[i*3+1];
		dst[i*4 + 2] = src[i*3+2];
		dst[i*4 + 3] = 255;
	}
}

// I have no clue why I made this one... always comment immediately from now on
void setData_32(char* dst, char* src, int w, int h)
{
	int i;
	for (i = 0; i < w*h*4; i++)
		dst[i] = src[i];

}

void avUnwrapFrame(char* dst, char* src, int wrap, int w, int h)
{
	int y, x, i, j;
	for (y=0; y < h; y++) {
		for (x=0; x < w; x++) {
			i = ((y*wrap) + x);
			j = y*h + x;
			dst[j*4] = src[i];
			dst[j*4 + 1] = 0;
			dst[j*4 + 2] = 0;
			dst[j*4 + 3] = 255;
		}
	}
}