Praxis3D material combiner
===================  

Praxis3D-material-combiner is a small GUI utility application that combines multiple material maps into one, a format used by the Praxis3D game engine. It loads Roughness, Metallic, Height, Ambient occlusion maps and exports a single RMHAO map (different property material color in each RGBA channel). It can also invert separate channel colors, and calculate the average of an RGB input map (if it is RGB).  

![praxis3d-material-combiner-window](https://i.imgur.com/CloBVPd.png)

## Building

Project is self-contained - all dependencies are included and all settings within the Visual Studio project files are configured for an out of the box compilation in **Visual Studio 2022**. Windows OS and Visual Studio IDE only.

## Usage

- Select input material maps (needs at least one);   
- Select an output material map;  
- Click **Combine**.  
  
All input materials must be of the same size. Ouput material size is the same as input materials.

Output material image format is determined by the filename extension. Supported format are: **TIFF, TGA (TARGA), PNG, BMP, JPG**.

Supported file extensions are: **.tif, .tiff, .tga, .targa, .png, .bmp, .jpg, .jpeg**. Extension text must be in either all lowercase or all uppercase.



![praxis3d-material-combiner-window-2](https://i.imgur.com/NGta2Aq.png)

## Dependencies
Libraries used in this project:  

- [FreeImage](https://freeimage.sourceforge.io/)  
    
Their individual licenses can be found in **license.txt** file.


## License

**The software is licensed under the [MIT](https://choosealicense.com/licenses/mit/) License:**

Copyright © 2020 Paulius Akulavicius

Permission is hereby granted, free of charge, 
to any person obtaining a copy of this software 
and associated documentation files (the “Software”), 
to deal in the Software without restriction, 
including without limitation the rights to use, 
copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit 
persons to whom the Software is furnished to do so, 
subject to the following conditions:

The above copyright notice and this permission notice 
shall be included in all copies or substantial portions 
of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, 
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
DEALINGS IN THE SOFTWARE.
