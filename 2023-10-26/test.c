// #include <stdio.h>
// int main()
// {
//     int arr[] = {1,2,(3,4),5};
//     printf("%d\n", sizeof(arr));
//     printf("%d\n",arr[4]);
//     return 0;
// }


 // #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str[] = "hello bit";
//     printf("%d %d\n", sizeof(str), strlen(str));
// 	  return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a [10] = {0};
//     int i = 0;
//     int sum = 0;
//     double average = 0.0;
//     printf("请输入十个数:\n");
//     for( i = 0;i<10;i++ )
//     {
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     } 
//     average = sum/10.0;
//     printf("平均数为:%.2f\n",average);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main ()
// {
//     char acX[] = "abcdefg";
//     char acY[] = {'a','b','c','d','e','f','g'};
//     printf("%d %d\n",sizeof(acX),sizeof(acY));
//     printf("%d %d\n",strlen(acX),strlen(acY));
//     return 0;
// }   


// #include<stdio.h>
// int main()
// {
//     int a[] = {1,2,3,4,5};
//     int b[] = {7,8,9,10,11};
//     int c[] = {0};
//     int sz = sizeof(a)/sizeof(a[0])-1;
//     int i = 0;
//     for(i = 0 ; i < sz+1 ; i++)
//     {
//         c[i] = a[i];
//         a[i] = b[i];
//         b[i] = c[i];
//     }
//     for(i = 0 ; i < sz+1 ; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("\n");
//      for(i = 0 ; i < sz+1 ; i++)
//     {
//         printf("%d ",b[i]);
//     }
//     return 0;
// }

