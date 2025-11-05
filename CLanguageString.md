# วิธีการใช้ String ในภาษา C
## เบื้องต้นการใช้ String ในภาษา C
ในการที่จะใช้ String ในภาษา C ได้นั้นสิ่งแรกที่เราต้องทำคือต้อง `#include <string.h>` เข้าไปในตัวโปรแกรมภาษา C ก่อนดังตัวอย่าง
```C
#include <string.h>
```
### การสร้างตัวแปร String
ในการใช้ String นั้นจำเป็นที่จะต้องสร้างตัวแปลก่อนดังเช่นตัวอย่างต่อไปนี้
```c
char txt[20] = "Hello World";
```
### การหาจำนวนตัวอักษรใน String
เรานั้นสามารถหาจำนวนตัวอักษรที่อยู่ใน String ได้ด้วยการใช้คำสั่ง `strlen()` เช่น
```c
#include <stdio.h>
#include <string.h>

int main() {
    char txt[20] = "Hello World";
    printf("%s has %d letter(s)\n", txt, strlen(txt));
    return 0;
}
```
### การคัดลอก String
เรานั้นจะสามารถคัดลอกข้อมูลใน String ได้ด้วยการใช้ `strcpy()` ดังเช่นตัวอย่างต่อไปนี้
```c
#include <stdio.h>
#include <string.h>

int main() {
    char txt[20] = "Hello World";
    char txtCopy[20];
    strcpy(txtCopy, txt);
    printf("%s is a copy from %s\n", txtCopy, txt);
    return 0;
}
```
### การต่อ String
เรานั้นสามารถเพิ่มข้อมูลเพิ่มเข้าไปในตัวแปร String ได้ด้วยการใช้ฟังค์ชั่น `strcat()` ดังตัวอย่างต่อไปนี้
```c
#include <stdio.h>
#include <string.h>

int main() {
    char txt[20] = "Hello";
    strcat(txt, " World");
    printf("%s\n", txt);
    return 0;
}
```
### การเทียบ String
เรานั้นสามารถเปรียบเทียบ String ได้ด้วยฟังค์ชั่น `strcmp()` ดังตัวอย่างต่อไปนี้
```c
#include <stdio.h>
#include <string.h>

int main() {
    char txt1[20] = "Hello";
    char txt2[20] = "World";
    if(strcmp(txt1, txt2) == 0) {
        printf("Text #1 is the same as Text #2");
    } else {
        printf("Text #1 is different from Text #2");
    }
    return 0;
}
```