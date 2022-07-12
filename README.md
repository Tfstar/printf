<img src="https://www.bing.com/images/search?view=detailV2&ccid=gLVJ2rr8&id=92318B35E209FD73A6D342EF0A0743AC536F61C9&thid=OIP.gLVJ2rr8Me2-4gfhaOsMSwAAAA&mediaurl=https%3a%2f%2fmedia-exp1.licdn.com%2fdms%2fimage%2fC4D0BAQHOnx_77siGUw%2fcompany-logo_200_200%2f0%2f1624457278047%3fe%3d2159024400%26v%3dbeta%26t%3dv42FMvMMI7mw8sYdyxUsse24VNwfKlXv573NroUVD3A&cdnurl=https%3a%2f%2fth.bing.com%2fth%2fid%2fR.80b549dabafc31edbee207e168eb0c4b%3frik%3dyWFvU6xDBwrvQg%26pid%3dImgRaw%26r%3d0&exph=200&expw=200&q=alx+logo+africa&simid=608043270718686484&FORM=IRPRST&ck=2142FFA24409DD045B85615F59D9D3B5&selectedIndex=0&idpp=overlayview&ajaxhist=0&ajaxserp=0" height="150px" width="800px">
​
# Our printf () function
​
### Authors
1. Miguel Grillo
2. Miguel Barrera
​
## Description
​
The format string is a character string, is composed
of zero or more directives
​
### Usage
like the according main.h library version:
```C
int _printf(const char *format, ...);
```
​
## Format Specifiers
​
A format specifier follows this prototype: `%type`
The following format specifiers are supported:
​
### Supported Types
​
| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| u      | Unsigned decimal integer	|
| b      | Unsigned binary |
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |
| c      | Single character |
| s      | String of characters |
| p      | Pointer address |
| %      | A % followed by another % character will write a single % |
​
### Value Return 
Upon successful return, all functions return the number of characters written, _excluding_ the terminating null character used to end the string. If any error is encountered, `-1` is returned.
​
## Examples
```c
#include "main.h"
​
int main()
{
	_printf("Hello world, I'm a %s", "Holbie");
	return (0);
}
```
`Hello world, I'm a Holbie`
​
```c
#include "main.h"
​
int main()
{
	_printf("%S\n", "Best\nSchool!");
	return (0);
}
```
`Best\x0ASchool!`
​
```c
int _printf(const char *restrict format, ...);
```
