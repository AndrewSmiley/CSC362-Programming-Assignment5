//
//  main.c
//  CSC362-Programming-Assignment5
//
//  Created by Andrew Smiley on 4/2/16.
//  Copyright © 2016 Andrew Smiley. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int i,n, temp, location;
    int a[]={100, 99, 97, 95, 90, 87, 86, 83, 81, 77, 74, 69, 63, 50, 44, 43, 39, 31, 29, 12};
    n = 20;
    
    __asm{
        mov	ebx, 0		// ebx is the offset into the array, initialize to 0
        mov	ecx, location		// move lgth into loop counter (ecx)
        mov	eax, 0		// eax will be sum, initialize to 0
    top:	add	eax, a[ebx]		// eax = eax + a[offset]
        add	ebx, 4		// add 4 to offset to point at next int value
        loop	top		// ecx--, if > 0, branch to top
        mov	sum, eax		// store result in sum
    }
    
//    for(i=1;i<n;i++)
//    {
//        temp=a[i];
//        location=i-1;
//        while(location>=0&&a[location]>temp) {
//            a[location+1]=a[location];
//            location--;
//        }
//        a[location+1]=temp;
//    }
//    for(i=0; i < n; i++){
//        printf("%d ", a[i]);
//    }
//    __asm{
//        mov i, 1
//        mov ecx, i  //set i=1 and move it to the counter register
//        mov ebx, 0
//    mainloop:   cmp ecx, n
//        mov eax, arry[ebx]
//        
//        
//        
//    xout:
//        
//        
//    }
//    
    
    return 0;
}
