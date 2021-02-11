#define ALPHA_meteor_bmp 0x00ff00U
int maxColors_meteor_bmp=256;
int width_meteor_bmp=48;
int height_meteor_bmp=48;
static constexpr byte palette_meteor_bmp[] = {0,255,0,40,39,47,28,27,35,31,25,34,44,37,42,34,27,31,41,39,42,34,34,41,40,36,49,39,33,42,47,47,54,56,49,56,74,52,51,45,32,38,47,34,41,37,36,44,41,35,45,48,34,36,65,44,48,37,24,30,72,51,55,55,30,37,60,28,32,65,52,64,60,54,64,62,55,60,80,72,77,70,50,59,57,31,33,63,30,29,52,27,29,47,38,38,79,25,20,93,44,39,51,31,36,55,55,63,76,49,55,112,56,52,92,45,44,22,15,20,49,36,44,69,59,59,84,70,77,81,51,48,116,46,34,116,39,26,80,32,18,67,33,27,33,13,17,88,71,74,95,67,73,87,45,47,103,41,31,112,49,44,87,46,42,85,63,68,49,31,39,65,38,39,68,54,61,101,68,58,125,48,20,150,45,16,188,108,74,92,22,10,71,2,0,90,68,72,111,61,55,124,47,38,192,104,80,196,105,75,142,47,29,81,47,51,51,7,12,70,25,25,107,96,97,188,107,79,206,110,68,118,46,24,119,55,44,73,27,23,134,56,29,127,42,19,70,31,28,67,23,28,82,26,16,29,27,31,90,72,70,83,48,47,77,31,21,182,109,86,101,51,35,94,55,40,104,50,19,181,119,83,109,39,28,128,50,41,119,49,42,129,51,36,85,49,43,84,29,13,127,55,37,119,60,41,82,52,44,246,171,135,109,66,51,102,65,64,93,69,68,97,42,40,114,37,25,112,19,0,93,57,55,66,52,59,96,47,36,98,25,5,202,106,73,75,51,46,128,56,32,92,49,41,97,66,63,112,94,97,94,65,66,76,24,23,180,113,85,78,44,46,113,56,48,185,106,83,210,106,65,198,109,72,97,62,65,98,56,57,71,31,24,127,62,34,113,49,39,101,45,33,123,58,42,88,27,20,128,82,77,75,53,58,77,49,51,103,60,61,132,47,36,78,41,21,178,112,90,113,43,26,105,64,59,100,50,45,88,68,77,74,47,48,238,186,135,243,185,126,200,116,70,145,51,26,110,46,26,68,52,55,98,43,36,128,61,28,187,122,65,124,56,1,124,48,7,114,57,43,97,70,59,91,70,58,93,69,63,17,17,25,150,55,16,105,64,53,103,47,28,95,53,49,102,58,21,139,99,57,118,69,34,103,42,37,128,42,5,43,23,25,128,61,39,115,90,92,186,117,84,174,124,91,229,187,142,236,193,132,173,121,81,119,64,48,59,32,29,124,45,26,114,95,92,103,75,54,90,53,42,101,29,1,78,36,24,113,61,50,103,63,41,120,54,21,176,116,87,97,54,26,22,16,26,86,62,62,116,53,47,255,185,111,107,44,29,134,49,32,125,68,19,142,66,5,97,63,39,172,108,91,119,93,87,100,31,9,64,38,44,86,19,16,28,13,15,185,118,77,125,48,33,66,27,30,27,13,21,142,54,30,56,31,23,92,39,8,125,87,85,44,10,12,92,56,34,97,62,13,133,54,33,90,28,9,152,62,11,208,116,60,95,37,21,170,113,94,62,8,3,184,110,79,83,44,0,138,59,25,96,52,39,141,63,19,255,179,124,38,13,14,99,54,36,127,90,71,127,71,32,249,186,139,52,39,45,154,48,8,214,102,57,255,185,134,115,72,28,121,93,79,118,67,41,200,99,74,67,34,33,109,24,0,117,54,35,207,122,69,121,36,22};
static constexpr byte image_meteor_bmp[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,6,7,8,9,7,10,10,11,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,13,14,13,15,9,16,16,4,15,9,13,17,18,19,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,21,22,21,23,24,1,1,25,24,26,27,28,22,29,30,14,7,2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,10,11,11,31,22,32,33,34,9,9,35,25,23,25,36,33,37,38,22,13,6,7,39,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,9,40,25,41,42,43,44,45,46,47,48,18,42,49,50,51,52,44,53,54,55,13,56,48,30,57,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,16,24,23,58,49,49,59,60,61,62,63,64,54,12,65,66,67,68,69,70,63,71,18,72,73,28,14,13,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,9,24,26,42,74,65,54,75,76,76,62,77,78,79,38,53,44,80,81,70,67,82,83,84,53,22,17,9,4,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,85,15,16,26,26,49,86,87,88,89,77,90,91,92,93,62,89,78,66,54,33,94,95,96,67,81,97,71,24,9,8,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,4,42,86,12,98,99,100,101,33,50,102,92,103,80,60,104,105,106,36,107,96,63,108,109,89,110,111,23,16,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,13,25,42,106,112,113,61,114,99,115,49,98,116,116,117,110,118,119,86,120,107,121,38,66,80,122,43,24,25,16,15,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,34,123,87,117,124,125,126,127,88,65,119,43,95,97,128,23,49,86,119,120,129,51,21,130,131,122,110,42,23,24,16,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,17,30,79,132,63,97,124,133,94,134,135,136,137,43,134,134,138,24,23,25,42,65,139,51,22,79,109,75,98,49,42,24,8,6,6,0,0,0,0,0,0,0,0,0,0,0,0,25,13,29,64,140,140,96,107,139,105,38,132,99,141,141,142,143,54,36,58,23,58,27,36,71,65,144,97,140,145,65,146,111,9,10,0,0,0,0,0,0,0,0,0,0,0,0,25,15,24,147,52,78,79,138,137,146,27,123,132,122,148,149,150,151,152,145,138,23,25,111,153,65,65,106,33,132,124,51,27,24,9,2,0,0,0,0,0,0,0,0,0,0,0,1,15,24,42,98,113,89,43,49,42,58,25,20,154,155,156,157,158,75,89,159,117,59,160,161,161,160,162,105,38,154,100,143,98,27,14,85,0,0,0,0,0,0,0,0,0,0,7,163,15,111,18,99,164,76,165,17,4,25,42,12,144,166,155,131,104,167,112,124,89,60,168,168,169,170,166,171,52,108,127,172,166,47,173,5,0,0,0,0,0,0,0,0,0,0,2,9,16,56,79,174,126,114,101,29,28,49,119,120,38,37,37,66,175,12,71,112,100,176,177,178,179,180,181,37,124,95,127,127,75,135,182,13,31,0,0,0,0,0,0,0,0,6,9,16,11,28,63,89,183,134,125,134,154,118,184,162,133,159,87,138,23,153,36,118,87,98,162,185,170,178,186,120,138,54,187,69,151,116,87,56,173,0,0,0,0,0,0,0,0,2,7,41,28,188,77,116,79,33,44,97,124,189,59,190,191,192,102,153,43,71,57,65,58,24,58,115,193,177,91,138,20,36,145,174,69,70,33,28,22,138,0,0,0,0,0,0,6,194,16,195,99,100,142,46,28,20,105,145,196,101,177,148,197,156,141,120,198,78,120,42,49,58,58,12,59,181,192,90,162,12,12,66,199,151,67,84,110,28,31,0,0,0,0,0,19,48,22,88,81,75,46,182,153,23,24,20,144,181,170,200,197,201,202,105,174,203,43,153,49,42,42,55,33,159,203,181,204,49,111,139,45,70,67,107,82,34,14,2,6,0,0,0,57,79,53,97,75,205,98,111,26,111,111,49,118,162,204,193,150,172,84,29,73,139,137,31,86,86,120,51,154,196,124,117,86,74,58,120,143,89,130,21,18,11,6,8,7,1,0,0,206,73,207,113,62,205,43,111,42,16,25,42,49,119,42,98,176,80,117,50,137,153,86,119,119,106,105,107,108,140,145,123,87,118,118,112,152,203,82,208,194,8,24,15,16,13,6,0,18,79,207,113,62,187,98,111,42,40,23,26,49,119,42,98,209,80,33,120,138,55,86,184,74,86,118,171,108,210,107,87,87,118,105,145,152,203,211,208,212,9,24,15,8,7,6,0,19,56,28,112,213,75,112,147,27,23,58,23,42,49,58,214,215,180,186,27,49,86,74,49,25,137,216,78,61,61,165,87,112,143,100,89,97,196,130,217,212,16,35,16,7,7,2,0,5,85,40,162,174,125,134,145,98,36,65,137,153,12,43,218,219,178,202,102,49,49,74,12,58,71,145,131,126,126,101,54,159,203,220,143,52,121,83,211,29,57,14,16,16,6,85,0,1,9,15,20,118,90,125,60,221,99,54,87,165,181,77,93,179,179,209,174,98,49,49,153,71,54,101,125,222,223,172,100,88,82,87,22,147,71,30,82,53,135,182,153,4,9,2,0,0,85,8,25,42,120,224,116,192,225,189,226,99,142,227,191,228,219,229,227,90,117,66,230,66,230,166,131,231,232,231,125,83,56,25,24,24,23,27,98,67,199,135,54,34,5,6,0,0,1,85,15,24,111,233,87,71,130,224,116,68,80,112,102,162,59,234,174,62,76,222,164,209,168,104,235,236,237,142,189,162,49,58,24,23,42,238,120,94,199,68,210,121,57,0,0,0,0,1,163,9,194,163,25,23,120,198,75,220,94,120,25,111,20,139,198,69,239,240,76,241,242,243,160,244,177,234,98,106,146,20,56,27,111,55,162,44,125,70,113,121,217,0,0,0,0,0,6,163,194,9,1,25,43,220,125,226,138,58,111,26,65,87,145,100,80,143,131,237,170,185,160,101,101,59,120,36,22,123,51,29,30,17,29,210,199,32,71,21,3,0,0,0,0,0,0,6,2,9,9,40,87,44,221,28,111,24,26,49,175,144,37,53,37,165,104,180,236,104,66,143,97,105,119,42,71,211,129,110,28,153,29,95,94,123,24,23,163,6,0,0,0,0,0,0,0,1,39,56,217,189,32,34,24,58,146,26,50,107,37,129,120,106,104,220,62,116,60,61,70,167,42,23,23,27,27,36,21,14,182,142,152,20,146,24,40,3,0,0,0,0,0,0,0,0,4,17,22,29,123,14,8,24,23,23,138,52,124,138,42,119,59,94,116,122,75,239,245,145,137,58,40,58,42,49,12,147,47,225,166,20,23,35,8,7,6,0,0,0,0,0,0,0,0,13,39,13,25,8,8,8,35,25,12,133,225,43,58,42,49,138,87,246,84,247,229,133,98,27,24,58,42,175,120,112,181,225,188,17,9,9,6,15,2,0,0,0,0,0,0,0,0,0,3,14,11,24,16,40,16,14,130,205,192,246,25,58,58,111,111,21,38,113,69,215,190,165,128,71,71,144,189,248,225,188,182,4,9,7,6,7,2,0,0,0,0,0,0,0,0,0,2,15,8,24,24,35,17,43,90,229,125,246,23,111,25,23,146,43,159,127,249,148,178,177,142,97,250,220,125,125,134,29,153,23,8,9,9,7,2,0,0,0,0,0,0,0,0,0,2,9,14,40,56,56,29,145,142,127,229,186,26,42,26,111,27,82,99,227,60,219,219,92,198,97,199,70,247,221,117,55,25,25,16,15,9,39,1,0,0,0,0,0,0,0,0,0,6,7,14,71,73,145,124,225,100,109,125,139,146,42,42,24,115,90,225,230,186,161,161,12,138,138,121,44,63,54,20,111,24,15,7,9,7,1,0,0,0,0,0,0,0,0,0,0,0,1,14,211,145,226,84,99,84,224,189,246,27,58,111,23,120,166,225,43,49,74,41,58,58,23,138,121,107,28,13,13,6,6,11,2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,14,22,83,30,34,208,173,28,20,27,58,23,24,24,20,154,124,115,49,42,49,26,24,24,58,28,22,21,173,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,173,19,9,163,163,13,1,24,24,23,40,14,56,88,145,12,26,26,49,42,42,24,23,40,48,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,11,7,15,9,8,14,14,14,194,48,73,73,36,23,58,24,23,24,24,16,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,163,163,15,163,9,19,212,233,73,129,21,8,24,24,23,24,16,9,163,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,85,2,194,9,13,29,51,37,88,34,4,40,16,163,194,9,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,85,2,39,29,82,226,79,173,15,35,16,194,163,8,85,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,39,173,182,57,39,9,4,7,15,9,85,6,0,0,0,0,0,0,0,0,0,0,0,0};
