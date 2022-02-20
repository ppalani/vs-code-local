from PIL import Image
import pytesseract
import numpy as np

import os
print ('hi')
filename = "C:\\Users\\Praveen Palani\\VS CODE REPOS\\vs-code-local\\Python-demos\\books management\\1644406241179.jpg";

img = np.array(Image.open(filename))





text = pytesseract.image_to_string(img)

print(text)
