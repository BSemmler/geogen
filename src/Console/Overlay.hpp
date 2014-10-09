static char overlay[512][3] = 
{
	{ 0, 18, 38 },
	{ 1, 18, 39 },
	{ 1, 18, 39 },
	{ 1, 18, 39 },
	{ 1, 19, 39 },
	{ 1, 20, 40 },
	{ 1, 19, 40 },
	{ 1, 20, 41 },
	{ 2, 21, 42 },
	{ 2, 21, 42 },
	{ 2, 21, 43 },
	{ 3, 22, 43 },
	{ 2, 23, 43 },
	{ 3, 23, 44 },
	{ 3, 23, 45 },
	{ 4, 24, 46 },
	{ 4, 24, 46 },
	{ 4, 24, 46 },
	{ 4, 26, 47 },
	{ 5, 26, 48 },
	{ 5, 26, 48 },
	{ 5, 26, 49 },
	{ 6, 27, 49 },
	{ 6, 28, 50 },
	{ 6, 28, 50 },
	{ 7, 29, 51 },
	{ 7, 30, 52 },
	{ 8, 31, 53 },
	{ 8, 31, 53 },
	{ 8, 31, 54 },
	{ 9, 32, 55 },
	{ 9, 33, 56 },
	{ 9, 34, 56 },
	{ 9, 34, 57 },
	{ 9, 34, 58 },
	{ 10, 35, 59 },
	{ 11, 36, 59 },
	{ 10, 36, 60 },
	{ 11, 37, 61 },
	{ 12, 38, 61 },
	{ 12, 38, 62 },
	{ 12, 39, 63 },
	{ 13, 39, 63 },
	{ 14, 40, 64 },
	{ 14, 41, 65 },
	{ 14, 42, 66 },
	{ 15, 43, 67 },
	{ 15, 43, 68 },
	{ 15, 43, 68 },
	{ 15, 45, 70 },
	{ 15, 45, 70 },
	{ 17, 46, 71 },
	{ 17, 47, 72 },
	{ 17, 47, 73 },
	{ 17, 48, 73 },
	{ 18, 48, 74 },
	{ 19, 49, 75 },
	{ 19, 50, 76 },
	{ 19, 51, 76 },
	{ 19, 52, 78 },
	{ 20, 53, 79 },
	{ 20, 53, 80 },
	{ 21, 54, 80 },
	{ 21, 54, 81 },
	{ 22, 56, 82 },
	{ 22, 56, 83 },
	{ 23, 57, 84 },
	{ 23, 58, 85 },
	{ 23, 58, 85 },
	{ 24, 59, 86 },
	{ 24, 61, 88 },
	{ 25, 61, 88 },
	{ 25, 62, 90 },
	{ 26, 63, 90 },
	{ 27, 63, 91 },
	{ 27, 64, 92 },
	{ 27, 65, 93 },
	{ 28, 66, 95 },
	{ 29, 67, 95 },
	{ 29, 68, 97 },
	{ 29, 68, 97 },
	{ 30, 69, 99 },
	{ 30, 70, 100 },
	{ 31, 71, 100 },
	{ 31, 72, 101 },
	{ 32, 73, 102 },
	{ 32, 73, 103 },
	{ 32, 74, 104 },
	{ 33, 75, 105 },
	{ 34, 76, 106 },
	{ 34, 77, 107 },
	{ 35, 78, 108 },
	{ 35, 79, 109 },
	{ 36, 80, 110 },
	{ 37, 80, 111 },
	{ 37, 81, 112 },
	{ 37, 82, 113 },
	{ 38, 83, 114 },
	{ 38, 84, 115 },
	{ 39, 85, 116 },
	{ 39, 86, 117 },
	{ 40, 87, 118 },
	{ 40, 88, 120 },
	{ 41, 89, 120 },
	{ 41, 89, 121 },
	{ 42, 90, 123 },
	{ 43, 91, 124 },
	{ 43, 92, 125 },
	{ 43, 93, 126 },
	{ 44, 94, 127 },
	{ 44, 95, 128 },
	{ 45, 95, 129 },
	{ 45, 97, 130 },
	{ 46, 98, 130 },
	{ 46, 98, 132 },
	{ 47, 99, 133 },
	{ 48, 100, 134 },
	{ 48, 101, 135 },
	{ 49, 102, 136 },
	{ 49, 103, 137 },
	{ 50, 103, 138 },
	{ 50, 105, 139 },
	{ 51, 105, 140 },
	{ 52, 107, 141 },
	{ 52, 107, 143 },
	{ 52, 108, 143 },
	{ 53, 109, 144 },
	{ 54, 110, 145 },
	{ 54, 111, 147 },
	{ 54, 112, 148 },
	{ 55, 113, 148 },
	{ 56, 114, 150 },
	{ 56, 115, 151 },
	{ 56, 116, 152 },
	{ 57, 116, 153 },
	{ 58, 118, 154 },
	{ 58, 118, 155 },
	{ 59, 119, 156 },
	{ 59, 121, 157 },
	{ 59, 121, 158 },
	{ 61, 122, 160 },
	{ 61, 123, 160 },
	{ 61, 124, 162 },
	{ 62, 125, 162 },
	{ 62, 126, 163 },
	{ 63, 127, 164 },
	{ 64, 127, 165 },
	{ 64, 129, 166 },
	{ 64, 130, 168 },
	{ 65, 130, 169 },
	{ 66, 131, 170 },
	{ 66, 132, 171 },
	{ 67, 133, 172 },
	{ 67, 134, 173 },
	{ 67, 134, 174 },
	{ 68, 135, 175 },
	{ 68, 137, 176 },
	{ 69, 137, 177 },
	{ 69, 139, 177 },
	{ 70, 139, 179 },
	{ 71, 140, 180 },
	{ 71, 141, 181 },
	{ 72, 142, 182 },
	{ 73, 143, 183 },
	{ 72, 143, 184 },
	{ 73, 145, 185 },
	{ 73, 145, 186 },
	{ 75, 146, 187 },
	{ 75, 147, 188 },
	{ 75, 148, 189 },
	{ 76, 148, 190 },
	{ 76, 149, 191 },
	{ 77, 150, 192 },
	{ 77, 151, 193 },
	{ 77, 152, 194 },
	{ 79, 153, 195 },
	{ 78, 154, 196 },
	{ 79, 155, 197 },
	{ 79, 155, 197 },
	{ 80, 156, 199 },
	{ 81, 157, 200 },
	{ 81, 158, 201 },
	{ 81, 159, 202 },
	{ 82, 160, 202 },
	{ 82, 161, 204 },
	{ 83, 162, 204 },
	{ 83, 163, 205 },
	{ 84, 163, 207 },
	{ 84, 164, 208 },
	{ 85, 164, 208 },
	{ 86, 165, 209 },
	{ 85, 166, 210 },
	{ 86, 167, 211 },
	{ 86, 168, 211 },
	{ 87, 168, 213 },
	{ 87, 169, 213 },
	{ 88, 170, 214 },
	{ 89, 171, 216 },
	{ 89, 172, 217 },
	{ 89, 172, 217 },
	{ 89, 173, 218 },
	{ 90, 173, 219 },
	{ 90, 175, 220 },
	{ 91, 175, 220 },
	{ 91, 176, 221 },
	{ 92, 177, 222 },
	{ 92, 177, 223 },
	{ 93, 178, 224 },
	{ 93, 179, 225 },
	{ 94, 180, 225 },
	{ 94, 180, 226 },
	{ 94, 181, 227 },
	{ 94, 181, 228 },
	{ 95, 182, 229 },
	{ 96, 183, 229 },
	{ 95, 183, 230 },
	{ 96, 184, 231 },
	{ 97, 185, 232 },
	{ 96, 185, 232 },
	{ 98, 186, 233 },
	{ 97, 187, 234 },
	{ 98, 187, 235 },
	{ 99, 188, 235 },
	{ 98, 188, 236 },
	{ 99, 189, 237 },
	{ 99, 190, 237 },
	{ 100, 190, 239 },
	{ 100, 191, 239 },
	{ 100, 191, 239 },
	{ 101, 192, 240 },
	{ 101, 193, 241 },
	{ 101, 194, 241 },
	{ 102, 194, 242 },
	{ 102, 195, 242 },
	{ 102, 195, 244 },
	{ 103, 195, 244 },
	{ 103, 196, 244 },
	{ 103, 197, 245 },
	{ 103, 197, 246 },
	{ 104, 198, 247 },
	{ 104, 198, 247 },
	{ 105, 198, 248 },
	{ 105, 199, 248 },
	{ 105, 199, 249 },
	{ 105, 200, 250 },
	{ 105, 200, 250 },
	{ 106, 200, 251 },
	{ 106, 202, 251 },
	{ 106, 202, 251 },
	{ 106, 202, 252 },
	{ 107, 203, 253 },
	{ 107, 203, 252 },
	{ 108, 204, 253 },
	{ 107, 204, 254 },
	{ 108, 205, 254 },
	{ 108, 205, 255 },
	{ 30, 151, 70 },
	{ 31, 152, 69 },
	{ 32, 152, 68 },
	{ 33, 153, 68 },
	{ 33, 155, 67 },
	{ 33, 155, 66 },
	{ 34, 156, 65 },
	{ 35, 157, 63 },
	{ 36, 159, 62 },
	{ 38, 160, 61 },
	{ 40, 160, 60 },
	{ 41, 162, 59 },
	{ 44, 164, 59 },
	{ 47, 166, 59 },
	{ 52, 168, 59 },
	{ 55, 170, 59 },
	{ 61, 173, 59 },
	{ 66, 174, 59 },
	{ 69, 176, 60 },
	{ 71, 177, 60 },
	{ 74, 178, 61 },
	{ 77, 179, 62 },
	{ 80, 180, 63 },
	{ 84, 181, 63 },
	{ 87, 183, 64 },
	{ 91, 185, 66 },
	{ 96, 186, 67 },
	{ 99, 187, 68 },
	{ 103, 189, 69 },
	{ 108, 191, 70 },
	{ 112, 192, 72 },
	{ 116, 194, 73 },
	{ 120, 196, 74 },
	{ 125, 197, 76 },
	{ 130, 199, 77 },
	{ 134, 201, 78 },
	{ 139, 202, 80 },
	{ 144, 204, 81 },
	{ 148, 206, 83 },
	{ 153, 208, 85 },
	{ 158, 210, 86 },
	{ 163, 212, 88 },
	{ 168, 213, 89 },
	{ 172, 214, 91 },
	{ 176, 217, 92 },
	{ 181, 218, 94 },
	{ 186, 220, 94 },
	{ 190, 221, 96 },
	{ 195, 223, 97 },
	{ 199, 223, 98 },
	{ 202, 225, 99 },
	{ 207, 227, 100 },
	{ 211, 228, 102 },
	{ 214, 229, 103 },
	{ 218, 230, 104 },
	{ 221, 231, 104 },
	{ 225, 233, 106 },
	{ 228, 233, 106 },
	{ 231, 233, 107 },
	{ 234, 235, 107 },
	{ 236, 235, 108 },
	{ 238, 236, 108 },
	{ 241, 236, 108 },
	{ 243, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 109 },
	{ 244, 236, 108 },
	{ 244, 236, 107 },
	{ 244, 236, 107 },
	{ 244, 236, 107 },
	{ 244, 236, 106 },
	{ 244, 236, 105 },
	{ 244, 236, 105 },
	{ 244, 235, 105 },
	{ 244, 235, 104 },
	{ 244, 234, 104 },
	{ 244, 234, 103 },
	{ 244, 233, 103 },
	{ 244, 233, 102 },
	{ 244, 233, 101 },
	{ 244, 232, 101 },
	{ 244, 231, 100 },
	{ 244, 230, 99 },
	{ 244, 229, 98 },
	{ 244, 229, 97 },
	{ 244, 228, 97 },
	{ 244, 228, 96 },
	{ 244, 227, 95 },
	{ 244, 226, 94 },
	{ 244, 225, 94 },
	{ 244, 224, 93 },
	{ 244, 223, 92 },
	{ 244, 222, 92 },
	{ 244, 222, 90 },
	{ 244, 220, 90 },
	{ 244, 219, 89 },
	{ 244, 219, 88 },
	{ 244, 217, 88 },
	{ 244, 215, 86 },
	{ 244, 215, 86 },
	{ 244, 213, 85 },
	{ 244, 213, 85 },
	{ 244, 211, 84 },
	{ 244, 210, 83 },
	{ 244, 209, 83 },
	{ 244, 207, 82 },
	{ 244, 206, 82 },
	{ 244, 205, 81 },
	{ 244, 203, 80 },
	{ 244, 202, 79 },
	{ 243, 199, 79 },
	{ 243, 196, 78 },
	{ 242, 194, 77 },
	{ 242, 191, 76 },
	{ 241, 188, 75 },
	{ 241, 184, 74 },
	{ 241, 181, 73 },
	{ 239, 177, 72 },
	{ 238, 174, 71 },
	{ 238, 170, 70 },
	{ 238, 166, 68 },
	{ 236, 163, 67 },
	{ 236, 158, 65 },
	{ 235, 155, 65 },
	{ 234, 150, 64 },
	{ 233, 146, 63 },
	{ 232, 142, 61 },
	{ 231, 138, 60 },
	{ 230, 133, 58 },
	{ 230, 129, 58 },
	{ 229, 125, 57 },
	{ 228, 121, 56 },
	{ 227, 117, 55 },
	{ 226, 114, 54 },
	{ 225, 109, 53 },
	{ 224, 106, 53 },
	{ 223, 102, 53 },
	{ 221, 99, 53 },
	{ 221, 96, 53 },
	{ 220, 92, 53 },
	{ 219, 89, 53 },
	{ 218, 87, 53 },
	{ 217, 85, 53 },
	{ 216, 82, 53 },
	{ 214, 81, 53 },
	{ 214, 78, 53 },
	{ 213, 78, 53 },
	{ 211, 76, 53 },
	{ 210, 76, 54 },
	{ 208, 76, 55 },
	{ 207, 76, 56 },
	{ 206, 76, 59 },
	{ 204, 76, 60 },
	{ 202, 76, 62 },
	{ 200, 76, 64 },
	{ 198, 76, 67 },
	{ 196, 77, 69 },
	{ 194, 78, 72 },
	{ 192, 79, 75 },
	{ 190, 82, 78 },
	{ 187, 82, 81 },
	{ 186, 85, 84 },
	{ 183, 87, 87 },
	{ 181, 89, 91 },
	{ 179, 91, 94 },
	{ 177, 93, 97 },
	{ 175, 95, 100 },
	{ 173, 98, 104 },
	{ 172, 101, 107 },
	{ 170, 104, 110 },
	{ 169, 106, 114 },
	{ 167, 108, 118 },
	{ 166, 112, 121 },
	{ 164, 115, 125 },
	{ 163, 118, 129 },
	{ 162, 121, 132 },
	{ 162, 123, 134 },
	{ 162, 125, 138 },
	{ 162, 129, 141 },
	{ 162, 131, 144 },
	{ 162, 134, 147 },
	{ 162, 136, 150 },
	{ 163, 138, 153 },
	{ 164, 141, 155 },
	{ 164, 143, 157 },
	{ 165, 145, 159 },
	{ 167, 147, 162 },
	{ 168, 150, 164 },
	{ 169, 153, 167 },
	{ 171, 155, 169 },
	{ 173, 158, 172 },
	{ 175, 160, 175 },
	{ 177, 163, 177 },
	{ 179, 166, 180 },
	{ 181, 169, 183 },
	{ 182, 171, 185 },
	{ 185, 175, 187 },
	{ 188, 178, 190 },
	{ 189, 181, 193 },
	{ 192, 184, 196 },
	{ 194, 187, 198 },
	{ 198, 190, 201 },
	{ 199, 193, 204 },
	{ 202, 196, 206 },
	{ 204, 199, 209 },
	{ 207, 201, 211 },
	{ 210, 205, 214 },
	{ 213, 208, 216 },
	{ 215, 211, 218 },
	{ 217, 213, 220 },
	{ 220, 216, 223 },
	{ 222, 218, 225 },
	{ 224, 221, 227 },
	{ 227, 224, 230 },
	{ 229, 226, 232 },
	{ 231, 229, 234 },
	{ 233, 231, 235 },
	{ 235, 234, 237 },
	{ 237, 236, 239 },
	{ 239, 238, 240 },
	{ 241, 240, 242 },
	{ 242, 242, 244 },
	{ 244, 243, 246 },
	{ 245, 245, 247 },
	{ 246, 246, 248 },
	{ 248, 248, 250 },
	{ 249, 250, 252 },
	{ 251, 252, 253 },
	{ 252, 254, 254 },
	{ 253, 254, 255 },
	{ 253, 255, 255 },
	{ 255, 255, 255 },
	{ 254, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
	{ 255, 255, 255 },
};