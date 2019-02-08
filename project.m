clear all
close all
clc

img=imread('DLD1','PNG');
subplot(3,3,1),imshow(img);
title('Original Image');

h=ones(5,5)/25;
B=imfilter(img,h);
subplot(3,3,2);
imshow(B);
title('average');

D=fspecial('laplacian');
im=imfilter(img,D);
L=img-im;
subplot(3,3,3);
imshow(L);
title('laplacian');

g=rgb2gray(img);
sobelhz=edge(g,'sobel','horizontal');
subplot(3,3,4);
imshow(sobelhz,[]);
title('Sobel-Horizontal Edges');

sobelvrt=edge(g,'sobel','vertical');
subplot(3,3,5);
imshow(sobelvrt,[]);
title('Sobel- Vertical Edges');

sobelboth=edge(g,'sobel','both');
subplot(3,3,6);
imshow(sobelboth,[]);
title('Sobel- All Edges');

C=medfilt2(g,'zeros');
subplot(3,3,7);
imshow(C);
title('median');

i=double(img);
s=0.6*log(1+i);
m=mat2gray(s);
subplot(3,3,8);
imshow(m);
title('log transformation');

img_A=img(:,:,1);

img_B=img(:,:,2);

img_C=img(:,:,3);

I_gray=.21*img_A+.75*img_B+.07*img_C;
subplot(3,3,9),imshow(I_gray);
title('Gray');
